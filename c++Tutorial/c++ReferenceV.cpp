// C++ Reference Variables & Typecasting 
#include<iostream> 
using namespace std;

int c = 45; // c is globel variable

int main(){
    
    // *************Build in Data types****************
    // int a=4, b=5, c;
    
    // c = a + b;
    // cout<<"The global c is "<<::c<<endl;
    // cout<<"The sum is "<<c<<endl;

    // A program can have the same name for local and global variables then
    // we have to use scope resolution operator

    // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L; 
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<" bytes"<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<" bytes"<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<" bytes"<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<" bytes"<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<" bytes"<<endl;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

    // *************Reference Variables**************** 
    // float x = 455;
    // float & y = x; // y is Reference variable
    // cout<<x<<endl;
    // cout<<y<<endl;

    // *************Typecasting**************** 
    // int a = 45;   
    // float b = 34.46;
    // cout<<"The value of a is "<<(float)a<<endl;
    // cout<<"The value of a is "<<float(a)<<endl;

    // cout<<"The value of b is "<<(int)b<<endl;
    // cout<<"The value of b is "<<int(b)<<endl;

    // int c = int(b);
    // cout<<"The expression is "<<a + b<<endl;
    // cout<<"The expression is "<<a + c<<endl;
    // cout<<"The expression is "<<a + int(b)<<endl;
    // cout<<"The expression is "<<a + (int)b<<endl;

    return 0;
}
