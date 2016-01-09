/*
 * Chapter3State.h
 *
 *  Created on: 5 Jan 2016
 *      Author: vincent
 */

#ifndef CHAPTER3STATE_H_
#define CHAPTER3STATE_H_

#include "VocabRevisionState.h"

class Chapter3State: public VocabRevisionState
{
private:


public:
	Chapter3State();
	virtual ~Chapter3State();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* CHAPTER3STATE_H_ */
