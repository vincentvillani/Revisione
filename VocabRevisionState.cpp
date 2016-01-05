/*
 * VocabRevisionState.cpp
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#include "VocabRevisionState.h"




VocabRevisionState::VocabRevisionState()
{
}

VocabRevisionState::~VocabRevisionState()
{
}


StateID VocabRevisionState::update()
{

	//Load the vocab file if it has not yet been loaded
	if(_vocabPairs.size() == 0)
		loadVocabFile("Vocab.txt");

	std::string userInput;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "*** VOCABULARY REVISION ***" << std::endl;
	std::cout << "*** Press enter to expose answer ***" << std::endl;
	std::cout << "*** Press e + enter to go back to the menu ***" << std::endl;

	std::cin.ignore(); //Clear the stream

	//Setup random number generation
	std::default_random_engine generator;
	generator.seed(std::chrono::high_resolution_clock::now().time_since_epoch().count());
	std::uniform_int_distribution<int> distribution (0, _vocabPairs.size() - 1);

	bool showingEnglishPart = false;
	int currentIndex = distribution(generator);

	printf("%s", _vocabPairs[currentIndex].getItalian().c_str());

	while(true)
	{
		char userInput;
		std::cin.get(userInput);


		if(userInput == '\n' && !showingEnglishPart)
		{
			printf("%s\n", _vocabPairs[currentIndex].getEnglish().c_str());
			showingEnglishPart = true;
		}
		else if(userInput == '\n' && showingEnglishPart)
		{
			currentIndex = distribution(generator);

			printf("%s", _vocabPairs[currentIndex].getItalian().c_str());
			showingEnglishPart = false;
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


void VocabRevisionState::loadVocabFile(std::string filename)
{
	std::ifstream inputFile;

	inputFile.open(filename.c_str(), std::ifstream::in);

	std::string tempString;

	if(!inputFile.good())
	{
		std::cerr << "Unable to open the file " << filename << std::endl;
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

	//std::cout << "I: " << italianPart << ", E: " << englishPart << std::endl;

	_vocabPairs.push_back(VocabPair( std::string(italianPart), std::string(englishPart)));

	//delete[] italianPart;
	//delete[] englishPart;
	delete[] lineToParseCString;
}


StateID VocabRevisionState::getStateID()
{
	return VOCAB_REVISION_STATE;
}

