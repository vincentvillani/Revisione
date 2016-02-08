/*
 * Chapter7State.h
 *
 *  Created on: 9 Feb 2016
 *      Author: vincentvillani
 */

#ifndef CHAPTER7STATE_H_
#define CHAPTER7STATE_H_

#include "VocabRevisionState.h"

class Chapter7State: public VocabRevisionState
{

public:
	Chapter7State();
	virtual ~Chapter7State();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* CHAPTER7STATE_H_ */
