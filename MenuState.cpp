/*
 * MenuState.cpp
 *
 *  Created on: 16 Dec 2015
 *      Author: vincentvillani
 */

#include "MenuState.h"

#include <iostream>

MenuState::MenuState()
{
}

MenuState::~MenuState()
{
}

StateID MenuState::update()
{
	std::string userInput;
	std::cout << "Select menu item number. E.g. 1" << std::endl;
	std::cout << "1. Vocabulary Revision" << std::endl;
	std::cout << "2. Verb Revision" << std::endl;
	std::cout << "3. Grammar Revision" << std::endl;
	std::cout << "4. Chapter 3 Revision" << std::endl;
	std::cout << "5. Chapter 4 Revision" << std::endl;
	std::cout << "6. Chapter 5 Revision" << std::endl;
	std::cout << "7. Chapter 6 Revision" << std::endl;
	std::cout << "e. Exit" << std::endl;

	while(true)
	{
		std::cin >> userInput;

		if(userInput.compare("1") == 0)
		{
			return VOCAB_REVISION_STATE;
		}
		else if(userInput.compare("2") == 0)
		{
			return VERB_REVISION_STATE;
		}
		else if(userInput.compare("3") == 0)
		{
			return GRAMMAR_REVISION_STATE;
		}
		else if(userInput.compare("4") == 0)
		{
			return CHAPTER_3_REVISION_STATE;
		}
		else if(userInput.compare("5") == 0)
		{
			return CHAPTER_4_REVISION_STATE;
		}
		else if(userInput.compare("6") == 0)
		{
			return CHAPTER_5_REVISION_STATE;
		}
		else if(userInput.compare("7") == 0)
		{
			return CHAPTER_6_REVISION_STATE;
		}
		else if(userInput.compare("e") == 0 || userInput.compare("E") == 0)
		{
			std::cout << "Exiting..." << std::endl;
			exit(0);
		}
		else
		{
			std::cout << std::endl;
			std::cout << "Please enter a valid option" << std::endl;
		}
	}

	return NONE;
}


StateID MenuState::getStateID()
{
	return MENU_STATE;
}

