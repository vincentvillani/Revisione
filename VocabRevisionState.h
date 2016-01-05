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
#include <fstream>
#include <iostream>
#include <cstring>
#include <stdint.h>
#include <random>
#include <chrono>
#include <stdio.h>

#include "VocabPair.h"

class VocabRevisionState: public State
{
protected:

	std::vector<VocabPair> _vocabPairs;
	void loadVocabFile(std::string filename);
	void parseVocabLine(std::string lineToParse);


public:
	VocabRevisionState();
	virtual ~VocabRevisionState();

	virtual StateID update();
	virtual StateID getStateID();
};

#endif /* VOCABREVISIONSTATE_H_ */
