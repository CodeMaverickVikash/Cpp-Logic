#include<stdio.h>
using namespace std;

int main(){
    int a = 5, b = 6;
    b = a++ + a++;
    printf("b = %d", b);
    
}
