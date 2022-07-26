#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n;
    while(s<=e){
        int mid = (s+e)/2;

        if (arr[mid]==key){
            return mid;
        }

        else if(arr[mid]>key){
            e = mid - 1;
        }

        else{
            s = mid + 1;
        }
    }

    return -1;
}

int main(){
    
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;

    cout<<"Enter "<<n<<" elements in the array: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key value: "<<endl;
    cin>>key;

    cout<<"The given key is at index: "<<binarySearch(arr,n,key);

    return 0;
}