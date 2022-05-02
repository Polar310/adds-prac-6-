#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include<string>

class Individual{

public:
	Individual();
	Individual(std::string text);
	Individual(int size);

	std::string getString();
	int getBit(int pos);
	void flipBit(int pos);
	int getMaxOnes();
	int getLength();
	std::string set_string(std::string stringOne);



private:
	std::string binaryString;
	int numbers;
	int maximum;
	int counts;

};
#endif //