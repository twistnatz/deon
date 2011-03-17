/* Copyright The Deon Project 2011
 * Licensed under GPL v3
 * Authors: Sebastian Wiedek
 * Contents: 
 */

#ifndef _DEON_DEONMAIN_H_
#define _DEON_DEONMAIN_H_

#include <iostream>
#include <boost/algorithm/string.hpp>

#include <SDL/SDL.h>

#include "datatypes.h"
#include "configuration.h"
#include "resource_manager.h"

namespace Deon
{

//! Main Engine Module
class DeonMain //: public DeonModule
{
public:
	DeonMain(void)
	{

	}

	explicit DeonMain(std::string config_file)
	{
		Init(config_file);
	}

	~DeonMain(void)
	{
		SDL_Quit();
	}

	ErrorCode Init(std::string config_file);

private:

	Configuration config_;
//	Graphics graphics_system_;
//	Game game_system_;
//	Physics physics_system_;
	ResourceManager resources_;
};

} //Deon

#endif //_DEON_DEONMAIN_H_
