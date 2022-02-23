#include<iostream>
#include<deque>
using namespace std;

/* deque(double-ended queue) is an indexed sequence container that allows fast insertion and deletion at both its beginning and its end. They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
*/

int main() {

	deque<int> dq;

	dq.push_back(1); // {1}
	dq.emplace_back(2); // {1, 2}

	dq.push_front(4); // {4, 1, 2}
	dq.emplace_front(3); // {3, 4, 1, 2}

	// for(auto item:dq)
	// {
	// 	cout<<item<<" ";
	// }

	dq.pop_back(); // {3, 4, 1}
	dq.pop_front(); // {4, 1}
 
	cout<<dq.back()<<"\n";
	cout<<dq.front();

	// rest functions same as vector
	// begin, end, rbegin, rend, clear, insert, size, swap

	return 0;
}