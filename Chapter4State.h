/*
 * Chapter4State.h
 *
 *  Created on: 9 Jan 2016
 *      Author: vincentvillani
 */

#ifndef CHAPTER4STATE_H_
#define CHAPTER4STATE_H_

#include "VocabRevisionState.h"

class Chapter4State: public VocabRevisionState
{

public:
	Chapter4State();
	virtual ~Chapter4State();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* CHAPTER4STATE_H_ */
