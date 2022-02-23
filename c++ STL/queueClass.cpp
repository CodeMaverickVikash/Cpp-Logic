#include<iostream>
#include<queue>
using namespace std;

/* queues are a type of container adaptor, specifically designed to operate in a FIFO context (first-in first-out), where elements are inserted into one end of the container and extracted from the other.
*/

int main()
{
 queue<int> q;
 q.push(1); // {1}
 q.push(2); // {1, 2}
 q.emplace(4); // {1, 2, 4}

 // while(!q.empty())
 // {
 //     cout<<q.front()<<" ";
 //     q.pop();
 // }

 // q.back() += 5;
 // cout << q.back(); // prints 9

 // // Q is {1, 2, 9}
 // cout << q.front(); // prints 1

 // q.pop(); // {2, 9}

 // cout << q.front(); // prints 2

 // size, swap, empty same as stack
}
