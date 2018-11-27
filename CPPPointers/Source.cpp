#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


void passByValue(int x);
void passByReference(int &x);
void passByAddress(int *x);





int main()
{
	int BTC = 3500;
	
	cout << &BTC << endl; //This shows the memory location of BTC


	int *BTCPointer; //<<< This is a pointer means it recieves the memory address
	BTCPointer = &BTC;
	cout << BTCPointer << endl; // So now BTCPointer has the value of that specific memory address
	cout << "End of this code \n" << endl;

	//Passing by Reference, Value, Address
	int salley = 11;
	int betty = 12;
	int ella = 13;

	cout << "Salley is " << salley << endl;
	cout << "Betty is " << betty << endl;
	cout << "Ella is " << ella << endl;

	cout << endl;

	passByValue(salley);
	passByReference(betty);
	passByAddress(&ella);

	cout << "Salley is now " << salley << endl;
	cout << "Betty is now " << betty << endl;
	cout << "Ella is now " << ella << endl;

	cout << "End of this code \n" << endl;


	//Sizeof examples. This shows the amount of the space in memory being used
	cout << "Size of Salley is " << sizeof(salley) << endl;
	cout << "End of this code" << endl;
	cout << endl;

	double RandomNumbers [5] =  { 45.15,68.49,457.59,4572.12,57.12 };
	cout << sizeof(RandomNumbers) << endl; // So the total is 40 bytes
	cout << sizeof(RandomNumbers) / sizeof(RandomNumbers[2]) << endl; /*If you want to know how many elements  are in this array, you can just dvide the total into the single value*/

	cout << "End of this code \n" << endl;

	double HeightsInMs[5];
	double *MemoryAddress1 = &HeightsInMs[0];
	double *MemoryAddress2 = &HeightsInMs[1];
	double *MemoryAddress3 = &HeightsInMs[2];
	double *MemoryAddress4 = &HeightsInMs[3];
	double *MemoryAddress5 = &HeightsInMs[4];

	cout << "Value of MemoryAddress1 is " << MemoryAddress1 << endl;
	cout << "Value of MemoryAddress2 is " << MemoryAddress2 << endl;
	cout << "Value of MemoryAddress3 is " << MemoryAddress3 << endl;
	cout << "Value of MemoryAddress4 is " << MemoryAddress4 << endl;
	cout << "Value of MemoryAddress5 is " << MemoryAddress5 << endl;

	/* 
	But when you change the value of the pointer. It doesn't change the address. It replaces itself with another pointer value and grabs its address like you can see below
	*/

	MemoryAddress1 += 2;

	cout << "Now the MemoryAddress1 is" << MemoryAddress1 << endl; /* It became the same memory address of the 3rd value in the array. Because arrays start with 0*/
	cout << "End of this code \n" << endl;





	/*
	in a 32 or 64 bit system memory
	Size of a
	char = 1
	int = 4 byte
	double = 8 byte
	long double = 16 byte

	The reason a double like 1.1 is 8 bytes and 21243124124.123412342132134 is also only 8 bytes is because that memory space is not being used %100 but is being reserved for any double amount
	
	*/


	cin.get();

}





	


//Just needs a variable, nothing fancy
void passByValue(int x) {
	//Make a copy of whatever variable is passed in and modify that copy
	x = 99;
}

//Just needs a variable, nothing fancy
void passByReference(int &x) {
	//Take the address of whatever variable is passed in and modify the value of that address(AKA, modify the original variable)
	x = 69;
}

//Needs a pointer variable or an ampersand(&) before whatever variable you pass into it
void passByAddress(int *x) {
	//Take the pointer of whatever variable is passed in, look at the address the pointer is pointing to, and modify the value of that address(AKA, modify the pointed-to variable)
	*x = 99;
}