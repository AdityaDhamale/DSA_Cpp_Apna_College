#include<iostream>
#include<cmath>
using namespace std;

int sum(int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        ans += i;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;

    cout<<sum(n);

    return 0;
}