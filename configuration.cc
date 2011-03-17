/* Copyright The Deon Project 2010
 * Licensed under GPL v3
 * Authors: Sebastian Wiedek
 * Contents:
 */

#include "configuration.h"


namespace Deon
{

ErrorCode Configuration::Load(std::string config_file)
{
	this->filename_ = config_file;

	//TODO: exception handling
	boost::property_tree::xml_parser::read_xml(config_file, this->properties_);

	return EXEC_OK;
}

} //Deon
