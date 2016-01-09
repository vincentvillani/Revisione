/*
 * GrammarState.h
 *
 *  Created on: 9 Jan 2016
 *      Author: vincentvillani
 */

#ifndef GRAMMARSTATE_H_
#define GRAMMARSTATE_H_

#include "VocabRevisionState.h"

class GrammarState: public VocabRevisionState
{
public:
	GrammarState();
	virtual ~GrammarState();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* GRAMMARSTATE_H_ */
