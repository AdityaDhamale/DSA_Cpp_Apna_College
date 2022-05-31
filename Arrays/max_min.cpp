#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Enter length of the array: "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" number of elements in array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for(int i=0;i<n;i++){
        maxNo = max(maxNo,arr[i]);
        minNo = min(minNo,arr[i]);
    }
    cout<<"Max number is: "<<maxNo<<endl<<"Min number is: "<<minNo;

    return 0;
}