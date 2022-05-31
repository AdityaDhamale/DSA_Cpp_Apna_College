#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"Enter n1,n2,n3 repectively: "<<endl;
    cin>>n1>>n2>>n3;
    
    cout<<"Enter elements of the matrix: "<<endl;
    int m1[n1][n2];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    int m2[n2][n3];
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    cout<<"Given matrix are: "<<endl;
    cout<<"matrix m1: "<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"matrix m2: "<<endl;
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    //Initalise the answer array
    int ans[n1][n3];
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            ans[i][j]=0;
        }
    }
    // Main code
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }
    cout<<"The multiplication is: "<<endl; 
    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}