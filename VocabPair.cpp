/*
 * VocabPair.cpp
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#include "VocabPair.h"

VocabPair::VocabPair(std::string* italian, std::string* english)
{
	_italian = italian;
	_english = english;
}

VocabPair::~VocabPair()
{
	delete _italian;
	delete _english;
}

