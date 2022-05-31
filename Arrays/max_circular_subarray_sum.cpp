#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n){

    int currentsum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentsum += arr[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxSum=max(maxSum,currentsum);
    }
    return maxSum;
}
int main(){
    int n;
    cout<<"Enter length of the array: "<<endl;
    cin>>n;

    cout<<"Enter elements in array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nonwrapsum;

    nonwrapsum=kadane(arr,n);
    int totalSum = 0;

    for(int i=0;i<n;i++){
        totalSum += arr[i];
        arr[i]=-arr[i];
    }
    wrapsum = totalSum + kadane(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}