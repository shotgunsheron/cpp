#include <iostream>
void binary(unsigned int num, int bits)
{
	//test case 1: num is 20, bits is 16 since we dont need lots of bits for this num.
	//max number relies directly on max amount of bits
	for(int i = bits; i > 0; i = i/2) {
		if(num & i) //if the # of bits is 16, then in 1st iteration, i is 16. The & operator is creating a new int with the combined bits
		//truth table below:
		//20: 10100
		//16: 10000
		//second truth table below:
		//20 10100
		//8:  01000
		//00000
		//third truth table below:
		//20 10100
		//4   00100
		//00100
		//fourth truth table below:
		//20 10100
		//2    00010
		//1 00001

		//10100
		//the if statement is checking if there is any corresponding bits that are both 1 and in the same position.
		//if there is, then the value in that specific position will be 1.
			std::cout << "1 "; 
		else
			std::cout << "0 ";
	}
	std::cout << std::endl;
}

int main() {
    binary(20, 32);
}
