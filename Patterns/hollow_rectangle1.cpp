#include<iostream>
using namespace std;

int main(){

    int rows,col;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    cout<<"Enter number of columns: "<<endl;
    cin>>col;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==rows||j==1||j==col){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}