#include<iostream>
using namespace std;

int main()
{
	string word;
	cin>>word;

	int x = 0, y=0;
	for(int i=0; i<word.length(); i++){
		if(word[i] == 'z')
		{
			x++;
		}
		else
		{
			y++;
		}
	}

	if(2*x == y)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}