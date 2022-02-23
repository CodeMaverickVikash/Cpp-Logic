#include<iostream>
using namespace std;

int main()
{
	// Datatype
	char c = 'a';	// 1 byte - char

	// For integer - short int, int, long int, long long int 
	short int si = 6;	// 2 bytes - short int
	int i = 3;	// 4 bytes - int
	long int li = 5;	// 4 bytes - long long int
	long long int lli = 8;	// 8 bytes - long long int

	// Floating point type - float, double, long double
	float f = 23.4;	// 4 bytes - float
	double d = 34.234;	// 8 bytes - double
	long double ld = 5.33;	// 12 bytes - long double

	cout<<c<<" "<<si<<" "<<i<<" "<<li<<" "<<lli<<" "<<f<<" "<<d<<" "<<ld<<"\n\n";

	// string s = "hello vikash how are you"; // 24 bytes - string
	// cout<<sizeof(s);

	cout<<"S.No.\t"<<"Data type\t\t\t"<<"Size\n";

	cout<<"1\t\t short int\t\t\t"<<sizeof(short int)<<"\n";
	cout<<"2\t\t int\t\t\t\t"<<sizeof(int)<<"\n";
	cout<<"3\t\t long int\t\t\t"<<sizeof(long int)<<"\n";
	cout<<"4\t\t long long int\t\t"<<sizeof(long long int)<<"\n\n";

	cout<<"5\t\t float\t\t\t\t"<<sizeof(float)<<"\n";
	cout<<"6\t\t double\t\t\t\t"<<sizeof(double)<<"\n";
	cout<<"7\t\t long double\t\t"<<sizeof(long double)<<"\n\n";

	cout<<"8\t\t bool\t\t\t\t"<<sizeof(bool)<<"\n";
	cout<<"9\t\t char\t\t\t\t"<<sizeof(char)<<"\n";

	return 0;
}

