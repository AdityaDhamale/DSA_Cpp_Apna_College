#include<iostream>
using namespace std;

// Given a '2 * a' board and tiles of size '2 * 1', count the number of ways to tile the given board using these tiles

int tilingWays(int n){

    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tilingWays(n-1) + tilingWays(n-2);
}
int main(){
    cout<<"The possible ways are: "<<tilingWays(4)<<endl;
    return 0;
}