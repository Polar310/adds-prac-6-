#include "Rearrange.h"
using namespace std;

Rearrange::Rearrange()
{
    stringNew = "";
    stringOne = "";
    size = 0;

}

Individual *Rearrange::mutate(Individual* text, int k)
{

    stringOne = text->getString();
    int i = k-1;

    while(i< stringOne.length())
    {
        stringNew = stringNew + stringOne[i];
        i++;
    }
    int j=0;
    while(j < k-1)
    {
       stringNew = stringNew + stringOne[j];
       j++;   
   }

   text->set_string(stringNew);

   return text;
}