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
	for(int i = 0; i < _vocabPairs.size(); ++i)
	{
		delete _vocabPairs[i];
	}
}


StateID VocabRevisionState::update()
{

	std::string userInput;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "Vocabulary Revision" << std::endl;
	std::cout << "Enter to expose answer" << std::endl;
	std::cout << "e to exit" << std::endl;

	while(true)
	{
		char userInput;
		std::cin.get(userInput);

		if(userInput == '\n')
		{
			std::cout << "enter pressed" << std::endl;
		}
		else if('e' ==  userInput || 'E' ==  userInput)
		{
			return MENU_STATE;
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Please enter a valid option" << std::endl;
		}
	}

	return NONE;
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

	while(inputFile.eof())
	{
		std::getline(inputFile, tempString);
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

	//std::cout << "I: " << italianPart << ", E: " << englishPart << std::endl;

	_vocabPairs.push_back(new VocabPair( new std::string(italianPart), new std::string(englishPart)));

	//delete[] italianPart;
	//delete[] englishPart;
	delete[] lineToParseCString;
}


StateID VocabRevisionState::getStateID()
{
	return VOCAB_REVISION_STATE;
}

