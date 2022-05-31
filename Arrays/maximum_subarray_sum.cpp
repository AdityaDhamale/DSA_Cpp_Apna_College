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
    cout<<"Maximum sum of the subarray is: "<<endl;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
                //cout<<arr[k]<<" ";
            }//cout<<endl;
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
    return 0;
}