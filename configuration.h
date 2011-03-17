/* Copyright The Deon Project 2010
 * Licensed under GPL v3
 * Authors: Sebastian Wiedek
 * Contents:
 */
//TODO: implement Save and Set
#ifndef _DEON_CONFIGURATION_H_
#define _DEON_CONFIGURATION_H_

#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/xml_parser.hpp>

#include "datatypes.h"

namespace Deon
{

//! Reads a configuration file in XML format and stores it in a boost::property_tree
class Configuration
{
public:
	Configuration()
	{

	}

	explicit Configuration(std::string config_file)
	{
		Load(config_file);
	}
	//virtual ~Configuration();

	ErrorCode Load(std::string config_file); //!< Loads an XML file
	ErrorCode Save(std::string config_file); //!< If the supplied filename is empty the original file is used

	template<typename T> T Get(std::string config_value);
	template<typename T> ErrorCode Set(std::string config_value, T value);
private:
	std::string filename_;
	boost::property_tree::ptree properties_;
};


template<typename T> T Configuration::Get(std::string config_value)
{
	return this->properties_.get<T>(config_value);
}

}; //Deon
#endif // _DEON_CONFIGURATION_H_
