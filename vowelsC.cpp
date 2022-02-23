// #include<bits/stdc++.h>
// using namespace std;

// int main(){
// 	int n=0;
// 	for(int i=1; i<=INT_MAX; i++)
// 	{
// 		n++;
// 		cout<<"you buddy"<<n<<endl;
// 	}

// 	return 0;
// }

#include<iostream>
using namespace std;

int main(){
	cout<<"Enter character: "<<" ";
	char check;
	cin>>check;

	if(check == 'a' or 'A' || check == 'e' or 'E' || check == 'i' or 'I' || check == 'o' or 'O' || check == 'u' or 'U'){
		cout<<check<<" is vowel"<<endl;
	}
	else{
		cout<<check<<" is consonent"<<endl;
	}

	return 0;
}