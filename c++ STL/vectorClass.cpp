// standard algorithm this means you have to remember
// mearge sort, quick sort, insertion sort, heap sort, bubble sort, binary search, a star search, quaternary search, ternery search, 3/4 search, partition searching, counting sort


#include<iostream>
#include<vector>
#include<algorithm> // For sort func
using namespace std;

void display(vector<int> &v)
{
    for(auto item:v)
        cout<<item<<" ";
}


// Vectors are same as dynamic arrays
int main()
{
    
    // A empty vector
    // vector<int> v;  // {}

    // v.push_back(1); // {1}
    // v.emplace_back(2); // {1, 2}

    // display(v);

    // vector <int> vec = {12, 4, 23, 17, 1};

    // sort(vec.begin(), vec.end()); // ascending order
    // sort(vec.begin(), vec.end(), greater<int>());

    // display(vec);

    // vector of pair
    // vector< pair<int, int> > vec;

    // vec.push_back({10, 30});
    // vec.emplace_back(20, 40);

    // for(auto item:vec)
    // {
    //  cout<<item.first<<" "<<item.second<<"\n";
    // }

    // A vector of size 5 initialized with 0 might take garbage value, dependent on the vector
    // vector<int> v(5); // {0, 0, 0, 0, 0}

    // // Vector of size 5 with
    // // everyone as 100
    // vector<int> v(5, 100); // {100, 100, 100, 100, 100}


    // vector<int> v1(5, 20); // {20, 20, 20, 20, 20}
    // vector<int> v2(v1); // {20, 20, 20, 20, 20}



    // // // Take the vector to be {10, 20, 30, 40}
    // vector<int> v;

    // // Inserting in vector
    // for (int i = 1; i <= 5; i++)
    //        v.push_back(i);

    // vector<int>::iterator it = v.begin(); // iterator is a pointer
    // cout <<*(it);

    // it++;
    // cout << *(it) << " "; // prints 20


    // it = it + 2;
    // cout << *(it) << " "; // prints 40

    // vector<int>::iterator it = v.end();

    // for(auto i=v.rbegin(); i != v.rend(); ++i)
    // {
    //  cout<<*i<<" ";
    // }

    // cout << v[0] << " " << v.at(0); // 1 1

    // cout << v.back() << " "; // 5


    // // Ways to print the vector

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    //  cout << *(it) << " ";
    // }


    // for (auto it = v.begin(); it != v.end(); it++) {
    //  cout << *(it) << " ";
    // }

    // for (auto it : v) {
    //  cout << it << " ";
    // }

    // // {1, 2, 3, 4, 5}
    // v.erase(v.begin()+1); // {1, 3, 4, 5}

    // v.erase(v.begin() + 2, v.begin() + 4); // // {1, 3} [start, end)

    // for(auto item:v)
    // {
    //  cout<<item<<" ";

    return 0;
}

