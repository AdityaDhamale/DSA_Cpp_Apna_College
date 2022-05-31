#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the length of the array: "<<endl;
    cin>>n;

    cout<<"Enter "<<n<<" elements of the array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<"The sorted array is: "<<endl<<arr[i]<<" ";
    }cout<<endl;

}