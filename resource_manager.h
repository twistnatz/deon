/* Copyright The Deon Project 2011
 * Licensed under GPL v3
 * Authors: Sebastian Wiedek
 * Contents: 
 */

#ifndef _DEON_RESOURCEMANAGER_H_
#define _DEON_RESOURCEMANAGER_H_

#include <string>

#include "datatypes.h"

namespace Deon
{

class ResourceManager
{
public:
	ResourceManager()
	{

	}
	//~ResourceManager();

	ErrorCode Init();

	template<typename ResType> ResType& GetResource(std::string filename);
	template<typename ResType> ResType GetResourceCopy(std::string filename);
private:

};

template<typename ResType> ResType& ResourceManager::GetResource(std::string filename)
{

}

template<typename ResType> ResType ResourceManager::GetResourceCopy(std::string filename)
{
	//TODO: use move mechanics
	ResType res;
	res.Load(filename);
	return res;
}

}  //Deon

#endif //_DEON_RESOURCEMANAGER_H_
