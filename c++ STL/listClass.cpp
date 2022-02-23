// if you want insertion and deletion fast then use linked list
// if you want access fast then use array
#include<iostream>
#include<list>
using namespace std;


void displayList(list<int> &lst)
{
    for(list<int>::iterator i = lst.begin(); i != lst.end(); i++)
        cout<<*i<<" ";
}

// when we say a List, we talk about doubly linked list
int main()
{

     list<int> ls;

     ls.push_back(2); // {2}
     ls.emplace_back(4); // {2, 4}

     ls.push_front(5); // {5, 2, 4};
     ls.emplace_front(12); // {12, 5, 2, 4};

     // displayList(ls);
    
     // sorting the list
     // ls.sort();
     // ls.sort(greater<int>());
     // displayList(ls);

    // Removing an element from list
    // ls.pop_back();
    // ls.pop_front();
    // ls.remove(4);
    // displayList(ls);

    // Reversing the list
    // ls.reverse();
    // displayList(ls);

    // merging two list
    // list<int> ls2 = {1, 3, 2, 0};
    // ls.sort();
    // ls2.sort();
    // ls.merge(ls2);
    // cout<<"ls after merging: ";
    // displayList(ls);

    // rest functions same as vector
     // begin, end, rbegin, rend, clear, insert, size, swap
}