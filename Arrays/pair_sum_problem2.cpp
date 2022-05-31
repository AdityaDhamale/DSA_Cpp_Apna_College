#include<iostream>
#include<climits>
using namespace std;

//Time Complexity - O(n)

bool pairsum(int arr[],int n, int k){

    int low = 0;
    int high = n-1;

    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main(){
    // int arr[] = {2,4,7,11,12,16,20,21};
    // int k = 31;
    int n;
    cout<<"Enter length of the array: "<<endl;
    cin>>n;

    int k;
    cout<<"Enter k: "<<endl;
    cin>>k;

    cout<<"Enter elements in array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<pairsum(arr,n,k)<<endl;
    return 0;
}