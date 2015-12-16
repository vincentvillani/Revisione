/*
 * MenuState.h
 *
 *  Created on: 16 Dec 2015
 *      Author: vincentvillani
 */

#ifndef MENUSTATE_H_
#define MENUSTATE_H_

#include "State.h"

class MenuState: public State
{

public:
	MenuState();
	virtual ~MenuState();

	StateID update();
	StateID getStateID();
};

#endif /* MENUSTATE_H_ */
