#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int factorial=1;

    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main(){
    int n,r;
    cout<<"Enter n:"<<endl;
    cin>>n;
    cout<<"Enter r:"<<endl;
    cin>>r;

    int ans=fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    
    return 0;
}