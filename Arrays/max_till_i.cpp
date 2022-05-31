#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int mx = -1999999999;
    int n;
    cout<<"Enter length of the array: "<<endl;
    cin>>n;

    cout<<"Enter elements of ths array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The maximum till is: "<<endl;
    
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}