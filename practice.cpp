// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int num;
// 	cin>>num;

// 	if(num%5 == 0 && num%11 == 0)
// 	{
// 		cout<<"BOTH";
// 		return 0;
// 	}

// 	if(num % 5 == 0 || num%11 == 0)
// 	{
// 		cout<<"ONE";
// 		return 0;
// 	}
	
// 	cout<<"NONE";

// 	return 0;
// }


// #include<iostream>
// using namespace std;

// void counter(int n)
// {
// 	int count=0;
// 	for(int i=1; i<=n; i++)
// 	{
// 		if(n%i == 0)
// 		{
// 			count++;
// 		}
// 	}
// 	cout<<count;
// }

// int main()
// {
// 	int n;
// 	cin>>n;

// 	counter(n);
// 	cout<<"\n";

// 	for(int i=1; i<=n; i++)
// 	{
// 		if(n%i == 0)
// 		{
// 			cout<<i<<" ";
// 		}
// 	}

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector <int> v;

// 	for(int i=1; i<=3; i++)
// 	{
// 		int n;
// 		cin>>n;
// 		v.push_back(n);
// 	}

// 	auto min = *min_element(v.begin(), v.end());
// 	auto max = *max_element(v.begin(), v.end());

// 	for(auto x:v)
// 	{
// 		if(x>min && x<max)
// 			cout<<x;
// 	}

// 	// Another way
// 	// sort(v.begin(), v.end(), greater<int>());
// 	// vector<int>::iterator it = v.begin();
// 	// ++it;
// 	// cout<<*it;



// 	return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n1, n2;
// 	cin>>n1>>n2;

// 	for(int i=n1; i<=n2; i++)
// 	{
// 		if(i%2 != 0)
// 			cout<<i<<" ";
// 	}

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int busNo;
// 	cin>>busNo;

// 	if(busNo%5 == 0 || busNo%6 == 0)
// 		cout<<"YES";
// 	else
// 		cout<<"NO";

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n;
// 	cin>>n;

// 	list<int> ls;
// 	for(int i=0; i<n; i++)
// 	{
// 		int element;
// 		cin>>element;
// 		ls.push_back(element);
// 	}

// 	ls.reverse();

// 	for(auto x:ls)
// 		cout<<x<<" ";

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	pair<int, int> p;
// 	pair<int, int> p2;

// 	int a, b;
// 	cin>>a>>b;

// 	p = make_pair(a, b);

// 	int x, y;
// 	cin>>x>>y;

// 	p2 = make_pair(x, y);

// 	auto penPrice = p.first * p2.first;
// 	auto pencilPrice = p.second * p2.second;

// 	cout<<penPrice+pencilPrice;

// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int n, k;
// 	cin>>n>>k;

// 	list<int> ls;
// 	for(int i=0; i<n; i++)
// 	{
// 		int element;
// 		cin>>element;
// 		ls.push_back(element);
// 	}

// 	list<int>::iterator it;
// 	it = find(ls.begin(), ls.end(), k);
	
// 	if(it != ls.end())
// 		cout<<"1";
// 	else
// 		cout<<"-1";

// 	return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int i, j;
	for(i=0; i<n; i++)
	{
		for(j=1; j<=n+1; j++)
			cout<<j<<" ";
		cout<<"\n";
	}

	return 0;
}