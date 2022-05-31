#include<iostream>
using namespace std;

int getBit(int n,int pos){
    return ((n & (1 << pos)) != 0); // use and operation for getbit
}

// n = 0101
// get bit at i = 2
// 1 << i = 0100
// 0101 & 0100 = 0100
// if n & (1<<i)!=0, then bit is 1

int main(){
    cout << getBit(5,2); // replace all positions by 1 except i = 2
    return 0;
}