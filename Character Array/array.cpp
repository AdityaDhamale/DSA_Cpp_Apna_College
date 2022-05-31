#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of the array: "<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int a;
    cout<<"\nEnter the position you want to search: "<<endl;
    cin>>a;
    int b = a-1;
    cout<<arr[b];
    return 0;
}