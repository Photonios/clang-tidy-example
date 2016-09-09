/*!
 * \file main.cpp
 *
 * \author Swen Kooij
 * \date September 2016
 */

#include <cstdio>

#include <cte/processor.h>

int main(int argc, char **argv)
{
	if(argc < 2) {
		fprintf(stderr, "usage: clang-tidy-example [1/2]\n");
		return 1;
	}

	char *number = argv[1];

	cte::processor proc(number);

	/* MISTAKE #1 - clang tidy should do something here */
	if (!proc.process())
		fprintf(stderr, "error: you must specify 0 or 1\n");

	return 0;
}
