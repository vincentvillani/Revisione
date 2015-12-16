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
	std::cout << "e. Exit" << std::endl;

	while(true)
	{
		std::cin >> userInput;

		if(userInput.compare("1") == 0)
		{
			return VOCAB_REVISION_STATE;
		}
		else if(userInput.compare("e") == 0 || userInput.compare("E") == 0)
		{
			std::cout << "Quiting..." << std::endl;
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

