#include "BitFlipProb.h"
using namespace std;
BitFlipProb::BitFlipProb()
{
    stringOne="";
    stringTwo="";
    sizeOne=0;
    probability =0.0;
    choose=0.0;

}
Individual* BitFlipProb::mutate(Individual *entry, int k)
{

    stringOne=entry->getString();
    probability= rand()%100;


    while(probability>1)
    {
        probability= probability/10;
    }
    int i=0;
    while(i<stringOne.length())
    {
        choose= rand()%100;
        while(choose>1)
        {
            choose = choose/10;
        }
        if(choose > probability)
        {
            sizeOne=0;
        }
        else
        {
            entry->flipBit(i);
        }

        i++;
    }
    return entry;
}