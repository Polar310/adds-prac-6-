#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include "BitFlipProb.h"
#include "BitFlip.h"

#include <iostream>
#include <string>

using namespace std;

Individual* execute(Individual*indPtr, Mutator*mPtr,int k)
{
    mPtr-> mutate(indPtr,k);
    return indPtr;

}
int main()
{
    string stringBinaryOne, stringBinaryTwo;
    int k1 =0, k2 =0;

    cin>>stringBinaryOne;
    cin>>k1;
    cin>>stringBinaryTwo;
    cin>>k2;

      
    BitFlip* flip = new BitFlip;
    Rearrange* arrange= new Rearrange;
    Individual* text1= new Individual(stringBinaryOne);
    Individual*  text2= new Individual(stringBinaryTwo);

    Individual* result1 = execute(text1,flip,k1);
    cout<< result1 ->getString()<<" ";
    Individual* result2 = execute(text2,arrange,k2);

    cout<< result2->getString()<<" ";
    cout<<result2->getMaxOnes()<<endl;

}