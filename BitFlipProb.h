#include "Mutator.h"
#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

class BitFlipProb : public  Mutator
{
public:
  BitFlipProb();
  Individual *mutate(Individual* text, int k);

private:
 std::string stringOne;
 std:: string stringTwo;
 int sizeOne;
 double probability;
 double choose;
};

#endif