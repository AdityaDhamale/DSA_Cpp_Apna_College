#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,count=0;
    cout<<"Enter number n: "<<endl;
    cin>>n;

    int sum=0;
    int original_num=n;
    while(n>0){
        int lastDigit=n%10;
        sum+=pow(lastDigit,3);
        n=n/10;
    }

    if (sum==original_num){
        cout<<"The number is armstrong";
    }
    else{
        cout<<"The number is not armstrong";
    }

    return 0;
}