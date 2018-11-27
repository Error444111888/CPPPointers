#include <iostream>

using namespace std;

int main()
{
	int BTC = 3500;
	
	cout << &BTC << endl; //This shows the memory location of BTC


	int *BTCPointer;
	BTCPointer = &BTC;
	cout << BTCPointer << endl; // So now BTCPointer has the value of that specific memory address
	cout << "End of this code \n" << endl;




	cin.get();
}