#include<iostream>
#include<string>
using namespace std;

int main(){
    
    char name[100];
    cout<<"Enter your name: "<<endl;
    cin.getline(name,100);
    cout<<name;
    return 0;
}