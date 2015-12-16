/*
 * StateManager.cpp
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#include "StateManager.h"

#include "VocabRevisionState.h"

StateManager::StateManager()
{
	_currentState = NULL;
	_stateList =  std::vector<State*>();

	//Setup the initial state
	_currentState = new VocabRevisionState();

	_stateList.push_back(_currentState);
}

StateManager::~StateManager()
{
	for(int i = 0; i < _stateList.size(); ++i)
	{
		delete _stateList[i];
	}
}


void StateManager::update()
{

}

