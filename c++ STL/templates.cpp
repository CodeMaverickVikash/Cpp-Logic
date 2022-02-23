// // C++ templates
// #include<iostream>
// using namespace std;

// // template provides generic class and method
// template <class T> // T is the custom datatype
// class vector{
//     public:
//     T *arr;
//     int size;
//     vector(int m){
//         size = m;
//         arr = new T[size];
//     }
//     T dotProduct(vector &v){
//         T d = 0;
//         for(int i=0; i<size; i++){
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

// int main(){
//     // vector v1(3);
//     // v1.arr[0] = 4;
//     // v1.arr[1] = 3;
//     // v1.arr[2] = 1;

//     // vector v2(3);
//     // v2.arr[0] = 1;
//     // v2.arr[1] = 0;
//     // v2.arr[2] = 1;
//     // int a = v1.dotProduct(v2);
//     // cout<<a<<endl;

//     // using templates
//     vector <float> v1(3);
//     v1.arr[0] = 1.4;
//     v1.arr[1] = 3.3;
//     v1.arr[2] = 0.11;

//     vector <float> v2(3);
//     v2.arr[0] = 0.1;
//     v2.arr[1] = 1.90;
//     v2.arr[2] = 4.1;
//     float a = v1.dotProduct(v2);
//     cout<<a<<endl;

//     return 0;
// }

// // template with multiple parameter in c++
// // class template with multiple parameter(one, two or more)
// #include<iostream>
// using namespace std;

// template <class T1, class T2>
// class myClass{
//     public:
//         T1 data1;
//         T2 data2;
//         myClass(T1 a, T2 b){
//             data1 = a;
//             data2 = b;
//         }
//         void display(){
//             cout<<this->data1<<endl<<this->data2;
//         }
// };

// int main(){
//     myClass <int, char> obj(1, 'c');
//     obj.display();

//     return 0;
// }

// // class template with default parameter
// #include<iostream>
// using namespace std;

// template <class T1=int, class T2=float>
// class Vikash{
//     public:
//     T1 a;
//     T2 b;
//     Vikash(T1 x, T2 y){
//         a = x;
//         b = y;
//     }
//     void display(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//     }
// };

// int main(){
//     Vikash <> h(4, 6.4);
//     h.display();
//     cout<<endl;
//     Vikash <float, char> g(8.4, 'c');
//     g.display();

//     return 0;
// }

// // function template and function template with parameter in c++
// #include<iostream>
// using namespace std;

// template <class T>
// void swapp(T &a, T &b){
//     T temp = a;
//     a = b;
//     b = temp;
// }
// template <class T1, class T2>
// float funcAverage(T1 a, T2 b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// int main(){
//     float a;
//     a = funcAverage(5, 4.2);
//     printf("The average of these number is %.3f\n", a);

//     float x = 5.3, y = 2.3;
//     swapp(x, y);
//     cout<<x<<endl<<y;

//     return 0;
// }

// // member function template & overloading template function in c++
// #include<iostream>
// using namespace std;

// template <class T>
// class Vikash{
//     public:
//         T data;
//         Vikash(T a){
//             data = a;
//         }
//         void display();
// };

// template <class T>
// void Vikash <T>:: display(){
//     cout<<data<<endl;
// }

// // overloading template function
// void func(int a){
//     cout<<"i am first func "<<a<<endl;
// }

// template <class T>
// void func(T a){
//     cout<<"i am templatised func "<<a<<endl;
// }

// int main(){
//     // Vikash <float> h(5.7);
//     // cout<<h.data<<endl;
//     // h.display();

//     func(4); // exact match takes the highest priority

//     return 0;
// }