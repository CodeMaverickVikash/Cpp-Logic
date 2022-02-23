#include<iostream>
#include<queue>
using namespace std;


/* The priority queue allows you to skip the line and process an element you prioritize first – ignoring the first in, first out logic
*/

// Note that by default C++ creates a max-heap
// for priority queue
int main() {
	// Maximum Heap
	// priority_queue<int> pq;

	// pq.push(5); // {5}
	// pq.push(2); // {5, 2}
	// pq.push(8); // {8, 5, 2}
	// pq.emplace(10); // {10, 8, 5, 2}

	// while(!pq.empty())
	// {
	// 	cout<<pq.top()<<" ";
	// 	pq.pop();
	// }

	// cout << pq.top(); // prints 10

	// pq.pop(); // {8, 5, 2}

	// cout << pq.top(); // prints 8

	// cout<<pq.size();

	// size, swap, empty, function same as others

	// Minimum Heap
	// priority_queue<int, vector<int>, greater<int> > pq;
	// pq.push(5); // {5}
	// pq.push(2); // {2, 5}
	// pq.push(8); // {2, 5, 8}
	// pq.emplace(10); // {2, 5, 8, 10}

	// while(!pq.empty())
	// {
	// 	cout<<pq.top()<<" ";
	// 	pq.pop();
	// }

	// cout << pq.top(); // prints 2

	return 0;
}