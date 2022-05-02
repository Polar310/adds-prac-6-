#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
class BitFlip : public Mutator{

public:
	BitFlip();
	Individual* mutate(Individual* text,int k);
private:
	int sizes;
	std::string stringNew;
};

#endif//
