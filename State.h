/*
 * State.h
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#ifndef STATE_H_
#define STATE_H_

class State
{

public:
	State();
	virtual ~State();

	void virtual update() = 0;
};

#endif /* STATE_H_ */
