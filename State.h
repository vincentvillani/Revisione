/*
 * State.h
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#ifndef STATE_H_
#define STATE_H_

enum StateID
{
	MENU_STATE,
	VOCAB_REVISION_STATE,
	NONE
};

class State
{



public:
	State();
	virtual ~State();

	virtual StateID update() = 0;

	virtual StateID getStateID() = 0;
};

#endif /* STATE_H_ */
