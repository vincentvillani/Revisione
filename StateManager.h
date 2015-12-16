/*
 * StateManager.h
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#ifndef STATEMANAGER_H_
#define STATEMANAGER_H_

#include <vector>

#include "State.h"

class StateManager
{

private:
	State* _currentState;
	std::vector<State*> _stateList;

public:
	StateManager();
	virtual ~StateManager();

	void update();
};

#endif /* STATEMANAGER_H_ */
