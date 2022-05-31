#include<iostream>
using namespace std;

int clearBit(int n,int pos){
    int mask = ~(1<<pos);
    return (n & mask); // use and operation for clearbit 
}

// n = 0101
// clear at i = 2
// 1 << i = 0100
// ~ 0100 = 1011
// 0101 & 1011 = 0001

int main(){
    cout << clearBit(5,2);
    return 0;
}