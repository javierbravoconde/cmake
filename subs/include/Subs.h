/*
 * Subs.h
 *
 *  Created on: Dec 31, 2017
 *      Author: javier
 */

#ifndef SUBS_SUBS_H_
#define SUBS_SUBS_H_

class Subs {
public:
	Subs();
	virtual ~Subs();
	int sub(int i, int x){ return i - x; }
};

#endif /* SUBS_SUBS_H_ */
