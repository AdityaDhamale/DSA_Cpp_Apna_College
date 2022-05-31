#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n>10){
        cout<<"Given number "<<n<<" is more than 10."<<endl;
    }
    else if(n<10){
        cout<<"Given number "<<n<<" is less than 10."<<endl;
    }
    else{
        cout<<"Given number "<<n<<" is equal to 10."<<endl;
    }
    return 0;
}