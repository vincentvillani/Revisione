/*
 * Chapter8State.cpp
 *
 *  Created on: 11 Feb 2016
 *      Author: vincentvillani
 */

#include "Chapter8State.h"

Chapter8State::Chapter8State()
{
}

Chapter8State::~Chapter8State()
{
}

StateID Chapter8State::update()
{
	if(_vocabPairs.size() == 0)
	{
		loadVocabFile("Chapter8.txt");
	}


	std::string userInput;
	std::cout << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl << std::endl;
	std::cout << "*** Chapter 8 REVISION ***" << std::endl;
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


StateID Chapter8State::getStateID()
{
	return CHAPTER_8_REVISION_STATE;
}


