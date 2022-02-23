#include<iostream>
#include<stack>
using namespace std;

void displayStack(stack<int> &st)
{
    while(!st.empty())
     {
      cout<<st.top()<<" ";
      st.pop();
     }
}

// Stacks are a type of container adaptors with LIFO(Last In First Out) type of working,
int main()
{
 stack<int> st;
 st.push(1); // {1}
 st.push(2); // {2, 1}
 st.push(3); // {3, 2, 1}
 st.push(4); // {4, 3, 2, 1}
 st.emplace(5); // {5, 4, 3, 2, 1}

 // st.pop();
 // cout<<st.top();

 // displayStack(st);

 // cout << st.size(); // 4

 // cout << st.empty();

 // stack<int> st2;
 // st2.push(12);
 // st.swap(st2);

 // displayStack(st);
}