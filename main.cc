/* Copyright The Deon Project 2010
 * Licensed under GPL v3
 * Authors: Sebastian Wiedek
 * Contents: 
 */

#include "deon_main.h"

int main(int argc, char* argv[])
{
	Deon::DeonMain Main;

	Main.Init("config.xml");

	return 0;
}
