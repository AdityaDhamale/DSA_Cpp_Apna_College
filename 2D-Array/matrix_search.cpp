#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter row numbers: "<<endl;
    cin>>n;
    cout<<"Enter column numbers: "<<endl;
    cin>>m;
    int target;
    cout<<"Enter target: "<<endl;
    cin>>target;

    cout<<"Enter elements in matrix: "<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Given matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Main code
    int r=0,c=m-1;
    bool found = false;
    while(r<n and c>=0){
        if(arr[r][c]==target){
            found = true;
        }
        if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }
    if(found){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element does not exist"<<endl;
    }
    return 0;
}