#include<iostream>
using namespace std;

int setBit(int n,int pos){
    return (n | (1 << pos)); // use or operation for setbit 
}

// n = 0101
// set at i = 1
// 1 << i = 0010
// 0101 | 0010 = 0111 = 7

int main(){
    cout << setBit(5,1);
    return 0;
}