/*
 * Adder.h
 *
 *  Created on: Dec 31, 2017
 *      Author: javier
 */

#ifndef ADDER_ADDER_H_
#define ADDER_ADDER_H_

class Adder {
public:
	Adder();
	virtual ~Adder();
	int add(int i, int x) {return i+x;}
};

#endif /* ADDER_ADDER_H_ */
