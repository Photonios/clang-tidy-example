/*!
 * \file processor.cpp
 *
 * \author Swen Kooij
 * \date September 2016
 */

#include <cstdio>

#include <cte/processor.h>

namespace cte {

processor::processor(char *number)
	: number_ (number)
{
}

bool processor::process() const
{
	/* MISTAKE #2 - clang-tidy should do something here */

	if(number_ == "0")
		printf("false\n");
	else if(number_ == "1")
		printf
			("true\n");
	else
		return false;

	return true;
}

} // namespace cte
