/*
 * VerbRevisionState.h
 *
 *  Created on: 27 Jan 2016
 *      Author: vincentvillani
 */

#ifndef VERBREVISIONSTATE_H_
#define VERBREVISIONSTATE_H_

#include "VocabRevisionState.h"

class VerbRevisionState : public VocabRevisionState
{
public:
	VerbRevisionState();
	virtual ~VerbRevisionState();

	StateID update();
	StateID getStateID();
};

#endif /* VERBREVISIONSTATE_H_ */
