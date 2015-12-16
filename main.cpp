/*
 * Main.cpp
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#include <iostream>

#include "StateManager.h"
#include <cstdio>

int main()
{

	std::cout << "HI!" << std::endl;
	StateManager stateManager;

	stateManager.update();

	std::cout << "BYE!" << std::endl;
	return 0;
}
