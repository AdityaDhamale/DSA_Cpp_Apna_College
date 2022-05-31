#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;
    cout<<*p<<endl; // adress of a

    int **q = &p;

    cout<<*q<<endl; // value of p - adress of a
    cout<<**q<<endl; // value of a - 10

    
    return 0;
}