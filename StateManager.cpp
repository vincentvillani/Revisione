/*
 * StateManager.cpp
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#include "StateManager.h"

#include <iostream>

#include "VocabRevisionState.h"
#include "MenuState.h"
#include "Chapter3State.h"
#include "Chapter4State.h"
#include "Chapter5State.h"
#include "GrammarState.h"
#include "VerbRevisionState.h"

StateManager::StateManager()
{
	//Setup the initial state
	_stateList.push_back(new MenuState());
	_stateList.push_back(new VocabRevisionState());
	_stateList.push_back(new Chapter3State());
	_stateList.push_back(new Chapter4State());
	_stateList.push_back(new Chapter5State());
	_stateList.push_back(new GrammarState());
	_stateList.push_back(new VerbRevisionState());

	_currentState = _stateList[0];
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

	while(true)
	{
		StateID stateToChangeTo = _currentState->update();

		if(stateToChangeTo != NONE)
			changeState(stateToChangeTo);
	}


}


void StateManager::changeState(StateID newState)
{
	for(int i = 0; i < _stateList.size(); ++i)
	{
		if(newState == _stateList[i]->getStateID())
		{
			_currentState = _stateList[i];
			return;
		}
	}

	std::cerr << "Can't find state to switch too!" << std::endl;
	exit(1);
}

