#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter length of the array: "<<endl;
    cin>>n;

    cout<<"Enter elements in array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum subarray sum is: "<<endl;
    int currentSum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++){
        currentSum += arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum = max(maxSum,currentSum);
    }
    cout<<maxSum;
    return 0;
}