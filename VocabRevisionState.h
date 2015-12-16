/*
 * VocabRevisionState.h
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#ifndef VOCABREVISIONSTATE_H_
#define VOCABREVISIONSTATE_H_

#include "State.h"

#include <vector>
#include <string>

#include "VocabPair.h"

class VocabRevisionState: public State
{
private:

	std::vector<VocabPair*> _vocabPairs;

	void loadVocabFile();
	void parseVocabLine(std::string lineToParse);


public:
	VocabRevisionState();
	virtual ~VocabRevisionState();

	StateID update();
	StateID getStateID();
};

#endif /* VOCABREVISIONSTATE_H_ */
