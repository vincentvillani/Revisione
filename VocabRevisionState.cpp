/*
 * VocabRevisionState.cpp
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#include "VocabRevisionState.h"

#include <fstream>
#include <iostream>

VocabRevisionState::VocabRevisionState()
{
	loadVocabFile();
}

VocabRevisionState::~VocabRevisionState()
{
}


void VocabRevisionState::update()
{

}


void VocabRevisionState::loadVocabFile()
{
	std::ifstream inputFile;

	inputFile.open("Vocab.txt", std::ifstream::in);

	std::string tempString;

	if(!inputFile.good())
	{
		std::cerr << "Unable to open the file Vocab.txt" << std::endl;
		exit(1);
	}

	while(std::getline(inputFile, tempString))
	{
		parseVocabLine(tempString);
	}

	inputFile.close();
}


void VocabRevisionState::parseVocabLine(std::string lineToParse)
{
	char* italianPart = NULL;
	char* englishPart = NULL;
	char* lineToParseCString = new char[lineToParse.length() + 1]; //+1 for null char

	//Copy the string over
	strcpy(lineToParseCString, lineToParse.c_str());

	//Get the italian and english words
	italianPart = strtok(lineToParseCString, "_");
	englishPart = strtok(NULL, "\0");

	std::cout << "I: " << italianPart << ", E: " << englishPart << std::endl;

	_vocabPairs.push_back(VocabPair(std::string(italianPart), std::string(englishPart)));

	//delete[] italianPart;
	//delete[] englishPart;
	delete[] lineToParseCString;
}

