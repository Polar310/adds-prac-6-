#include "BitFlip.h"
using namespace std;
BitFlip::BitFlip()
{
    sizes=0;
    stringNew = "";
}
Individual* BitFlip::mutate(Individual* text, int k)
{

    sizes= text ->getLength();
    stringNew= text ->getString();

    
    if(k % sizes != 0)
    {

     k= k % sizes;
    }

    else
    {
        k=sizes;
    }
    text->flipBit(k);
    return text;
}