/*
 * Chapter8State.h
 *
 *  Created on: 11 Feb 2016
 *      Author: vincentvillani
 */

#ifndef CHAPTER8STATE_H_
#define CHAPTER8STATE_H_

#include "VerbRevisionState.h"

class Chapter8State : public VerbRevisionState
{
public:
	Chapter8State();
	virtual ~Chapter8State();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* CHAPTER8STATE_H_ */
