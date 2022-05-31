#include<iostream>
using namespace std;

int main(){

    int rows;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;

    for(int i=1;i<=rows;++i){
        cout<<"* ";
        cout<<"* ";
        cout<<"* ";
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}