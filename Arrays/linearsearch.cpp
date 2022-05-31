#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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

    cout<<"The given key is at index: "<<linearSearch(arr,n,key);

    return 0;
}