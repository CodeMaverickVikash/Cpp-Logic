#include<iostream>
using namespace std;

// static data member or variable
// it is initialize to zero when the first object of class is created
// only one copy created and it is avaiable till entire program
void counter(){
	static int count;
	cout<<count++<<" "; // post increment
}


// regular variable
// it is initialize to garbage value
// it is avaiable till end of block
// void counter(){
// 	// int count;
// 	int count=0;
// 	cout<<count++<<" ";
// }

int main(){
	for (int i = 0; i < 3; i++)
	{
		counter();
	}
	

	return 0;
}