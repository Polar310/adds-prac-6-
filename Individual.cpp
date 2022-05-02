#include<iostream>
#include "Individual.h"
using namespace std;

Individual::Individual()
{
	binaryString = "10110";
	numbers =0;
	maximum=0;
	counts=0;
}

Individual::Individual(string t)
{
	binaryString= t;
}

Individual::Individual(int Lengths)
{
	binaryString = "";
	int i=0;
	while(i<Lengths)
	{
		binaryString =binaryString + "0";
		i++;
	}

}

string Individual:: set_string(string stringOne)
{
	return binaryString=stringOne;
}

string Individual::getString()
{
	return binaryString;
}

int Individual:: getLength()
{
	return binaryString.length();
}

int Individual::getBit(int pos)
{
	int length = 0;
	length = binaryString.length();
	string x = "";
	int value=0;
	if(pos <= length)
	{
		value=1;
	}
	else
	{
		return -1 ;
	}

	x = x + binaryString[pos- 1];
	int index = 0;
	index = stoi(x);
	return index;
}

void Individual::flipBit(int pos)
{
	int value=0;
	if(pos == 0)
	{
		value=0;
	}
	else
	{
		if(binaryString[pos - 1] == '1')
		{
			binaryString[pos - 1] = '0';
		} 
		else if(binaryString[pos - 1] == '0')
		{
			binaryString[pos - 1] = '1';
		}
	}
	
}

int Individual::getMaxOnes(){

	int length = binaryString.length();
	int i= 0;
	int value=0;
	while(i < length)
	{
		if(binaryString[i] == '1')
		{
			counts ++;
		}
		int val2 =length-1;
		if(binaryString[val2] == '1')
		{
			numbers = counts;
		}

		if(binaryString[i] == '0')
		{
			numbers = counts;
			counts = 0;
		}
		if(numbers <= maximum)
		{
			value = 1;
		}
		else
		{
			maximum = numbers; 
		}
		i++;

	}
	
	return maximum ;
}
