#include<iostream>
#include<set>
using namespace std;

/*
******** properties of set*********** 

*  All the elements are stored in a sorted manner.
*  Duplicate value is not allowed.
*  Elements can only be inserted and deleted but cannot be modified within the set.(Modification ia not allowed)
*/

int main() 
{
	set<int>st;
	st.insert(1); // {1}
	st.emplace(2); // {1, 2}
	st.insert(2); // {1, 2}
	st.insert(4); // {1, 2, 4}
	st.insert(3); // {1, 2, 3, 4}

	// for(set<int>::iterator it=st.begin(); it != st.end(); it++)
	// {
	// 	cout<<*it<<" ";
	// }

	// Functionality of insert in vector can be used also, that only increases efficiency

	// begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above

	// {1, 2, 3, 4, 5}
	// auto it = st.find(3);

	// {1, 2, 3, 4, 5}
	// auto it = st.find(6);

	// {1, 4, 5}
	// st.erase(5); // erases 5 // takes logarithmic time


	// int cnt = st.count(1); 


	// auto it = st.find(3);
	// st.erase(it); // it takes constant time

	// {1, 2, 3, 4, 5}
	// auto it1 = st.find(2);
	// auto it2 = st.find(4);
	// st.erase(it1, it2); // after erase {1, 4, 5} [first, last)

	// lower_bound() and upper_bound() function works in the same way
	// as in vector it does.

	// This is the syntax
	// auto it = st.lower_bound(2); 

	// auto it = st.upper_bound(3); 

	return 0;
}



/*
******** properties of multiset*********** 

*  All the elements are stored in a sorted manner.
*  Duplicate value allowed.
*  Elements can only be inserted and deleted but cannot be modified within the set.(Modification ia not allowed)
*/


// 	multiset<int>ms;
// 	ms.insert(1); // {1}
// 	ms.insert(1); // {1, 1}
// 	ms.insert(1); // {1, 1, 1}

// 	ms.erase(1); // all 1's erased

// 	int cnt = ms.count(1); 

// 	// only a single one erased
// 	ms.erase(ms.find(1));


// 	ms.erase(ms.find(1), ms.find(1)+2);

// 	// rest all function same as set
// }


/*
******** properties of unordered_set*********** 

*  Unordered_set can stores elements in any order, with no specified order for storing elements. It generally depends upon the machine that you are using.
*  Duplicate value is not allowed.
*  unordered_set uses the hash table for storing the element.

Note:- Don’t compare the order of output of produced by printing the unordered_set with anyone because it can be different for everyone depending upon their machine, etc
*/

// void explainUSet() {
// 	unordered_set<int> st;
// 	// lower_bound and upper_bound function
// 	// does not works, rest all functions are same
// 	// as above,  it does not stores in any
// 	// particular order it has a better complexity
// 	// than set in most cases, except some when collision happens
// }



/*
2. What is namespace in C++?
	If there are two or more functions with the same name defined in different libraries then how will the compiler know which one to refer to? Thus namespace came to picture. A namespace defines a scope and differentiates functions, classes, variables etc. with the same name available in different libraries.
*/