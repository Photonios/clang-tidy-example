/*!
 * \file processor.h
 *
 * \author Swen Kooij
 * \date September 2016
 */

#include <string>

namespace cte {

/*!
 * \class processor
 *
 * \brief Processes the incoming number and spits out "true" or "false".
 */
class processor
{
public:
	/*!
	 * \brief Initializes a new instance of the \see processor class.
	 *
	 * \param number The number "1" or "2" as a string.
	 */
	explicit processor(char *number);

	/*!
	 * \brief Processes the number specified in the constructor
	 *		  and outputs "true" when the specified number was "1"
	 *		  and "false" when the specified number was "0".
	 *
	 *		  Any other number will cause failure.
	 *
	 * \returns True when the specified number was succesfully
	 *			processed and false when it failed.
	 */
	bool process() const;

private:
	/*!
	 * \brief The value specified in the constructor.
	 */
	std::string number_;
};

} // namespace cte
