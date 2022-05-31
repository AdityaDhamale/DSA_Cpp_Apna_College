#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of the array: "<<endl;
    cin>>n;

    cout<<"Enter elements of the array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int curr = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            curr += arr[j];
            cout<<curr<<endl;
        }
    }

    return 0;
}