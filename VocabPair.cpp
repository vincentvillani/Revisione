/*
 * VocabPair.cpp
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#include "VocabPair.h"
#include <iostream>

VocabPair::VocabPair(std::string italian, std::string english)
{
	_italian = italian;
	_english = english;

	//std::cout << "E: " << _english << ", " << "I: " << _italian << std::endl;

}

VocabPair::~VocabPair()
{
}


std::string VocabPair::getItalian()
{
	return _italian;
}


std::string VocabPair::getEnglish()
{
	return _english;
}

