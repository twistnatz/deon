/* Copyright The Deon Project 2010
 * Licensed under GPL v3
 * Authors: Sebastian Wiedek
 * Contents: 
 */

#include <GL/glew.h>

#include "deon_main.h"

namespace Deon
{

ErrorCode DeonMain::Init(std::string cfgFile)
{
	this->config_ = this->resources_.GetResourceCopy<Configuration>(cfgFile);

	//init external libs
	//TODO: error handling
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		return EXEC_FAILURE;
	}

	if (glewInit() != GLEW_OK)
	{
		return EXEC_FAILURE;
	}
	return EXEC_OK;
}

} //Deon
