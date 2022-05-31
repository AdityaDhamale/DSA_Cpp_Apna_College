#include<iostream>
using namespace std;

bool ispowerof2(int n){
    return (n && !(n & n-1));
}
int main(){
    int n;
    cout<<"Enter any number: "<<endl;
    cin>>n;
    cout<<ispowerof2(n)<<endl;
    return 0;
}