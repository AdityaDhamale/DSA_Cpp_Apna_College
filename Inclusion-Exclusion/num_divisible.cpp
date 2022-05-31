// How many numbers between 1 and 1000 are divisible by a or b

#include<iostream>
using namespace std;

int divisible(int n, int a, int b){

    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);

    return c1+c2-c3;
}
int main(){
    int n,a,b;
    cout<<"Enter upper limit: "<<endl;
    cin>>n;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;

    cout<<divisible(n,a,b)<<endl;
    return 0;
}