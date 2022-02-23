/*
map is a container that stores elements in key-value pairs. It's similar to collections in Java, associative arrays in PHP, or objects in JavaScript.

Here are the main benefits of using map:

*  map only stores unique keys, and the keys themselves are in sorted order
*  Because the keys are already in order, searching for an element is very fast
*  There is only one value for every key
*/

// #include<iostream>
// #include<map>
// using namespace std;


// int main()
// {

// 	// {key, value}
// 	map<int, int> mpp;

// 	map<int, pair<int, int>> mpp;

// 	map< pair<int, int>, int> mpp;

// 	// key values can be anything

// 	mpp[1] = 2;
// 	mpp.emplace({3, 1}); // adding value

// 	mpp.insert({2, 4});

// 	mpp[{2,3}] = 10; 

// 	{
// 		{1, 2}
// 		{2, 4}
// 		{3, 1}
// 	}

// 	for(auto it : mpp) {
// 		cout << it.first << " " << it.second << endl; 
// 	}

// 	// same options for using iterators
// 	// as we did in vector for the insert function


// 	cout << mpp[1]; // prints 2
// 	cout << mpp[5]; // prints 0, since it does not exists


// 	auto it = mpp.find(3); // points to the position where 3 is found
// 	cout << *(it).second; 

// 	auto it = mpp.find(5); // points to the end of the map since 5 not there

// 	// lower_bound and upper_bound works exactly in the 
// 	// same way as explained in the other video 
    
//     // This is the syntax
// 	auto it = mpp.lower_bound(2); 

// 	auto it = mpp.upper_bound(3); 

// 	// erase, swap, size, empty, are same as above 

// }



// void explainMultimap() {
// 	// everything same as map, only it can store multiple keys
// 	// only mpp[key] cannot be used here 
	
// }



// void explainUnorderedMap() {
// 	// same as set and unordered_Set difference. 
// }


// CPP program to demonstrate use of map
// #include <bits/stdc++.h>

// int main()
// {
// 	// Ordered map
// 	std::map<int, int> order;

// 	// Mapping values to keys, it ordered on the basis of index
// 	order[5] = 10;
// 	order[3] = 5;
// 	order[20] = 100;
// 	order[1] = 10;
// 	order[2] = 1;

// 	// Iterating the map and
// 	// printing ordered values
// 	for (auto i = order.begin(); i != order.end(); i++) {

// 		std::cout << i->first << " : "<< i->second << '\n';
// 	}
// }


// CPP program to demonstrate use of unordered_map
// #include <bits/stdc++.h>

// int main()
// {
// 	// Unordered map
// 	std::unordered_map<int, int> order;

// 	// Mapping values to keys
// 	order[5] = 10;
// 	order[3] = 5;
// 	order[20] = 100;
// 	order[1] = 1;

// 	// Iterating the map and
// 	// printing unordered values
// 	for (auto i = order.begin(); i != order.end(); i++)
// 	{
// 		std::cout << i->first << " : " << i->second << '\n';
// 	}
// }

