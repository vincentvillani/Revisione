/*
 * Chapter6State.h
 *
 *  Created on: 31 Jan 2016
 *      Author: vincentvillani
 */

#ifndef CHAPTER6STATE_H_
#define CHAPTER6STATE_H_

#include "VocabRevisionState.h"

class Chapter6State : public VocabRevisionState
{
public:
	Chapter6State();
	virtual ~Chapter6State();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* CHAPTER6STATE_H_ */
