#include "Mutator.h"
#ifndef REARRANGE_H
#define REARRANGE_H

class Rearrange: public Mutator
{
public:
  Rearrange();
  Individual *mutate(Individual* entry, int k);

private:
  std::string stringNew;
  std::string stringOne;
  int size;

};

#endif