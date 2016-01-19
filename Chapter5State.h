/*
 * Chapter5State.h
 *
 *  Created on: 19 Jan 2016
 *      Author: vincentvillani
 */

#ifndef CHAPTER5STATE_H_
#define CHAPTER5STATE_H_

#include "VocabRevisionState.h"

class Chapter5State: public VocabRevisionState
{

public:
	Chapter5State();
	virtual ~Chapter5State();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* CHAPTER5STATE_H_ */
