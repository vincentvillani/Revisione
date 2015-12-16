/*
 * VocabPair.h
 *
 *  Created on: 15 Dec 2015
 *      Author: vincentvillani
 */

#ifndef VOCABPAIR_H_
#define VOCABPAIR_H_

#include <string>

class VocabPair
{
private:
	std::string* _italian;
	std::string* _english;

public:
	VocabPair(std::string* italian, std::string* english);
	virtual ~VocabPair();

	std::string getItalian();
	std::string getEnglish();
};

#endif /* VOCABPAIR_H_ */
