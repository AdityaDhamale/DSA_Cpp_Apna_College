#include<iostream>
using namespace std;

int updateBit(int n,int pos,int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | ( value << pos )); // use and operation for updatebit 
}

// n = 0101
// update bit at position i = 0 to 1
// 1 << i = 0010
// ~ 0010 = 1101
// 0101 & 1101 = 0101

//again set bit
// 1 << i = 0010
// 0101 | 0010 = 0111 (7)

int main(){
    cout << updateBit(5,1,1);
    return 0;
} 