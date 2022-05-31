#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n%2==0 && n%3==0){
        cout<<"Given number "<<n<<" divisible by both 2 and 3."<<endl;
    }
    else if(n%2==0 || n%3==0){
        cout<<"Given number "<<n<<" divisible by either 2 or 3."<<endl;
    }
    else{
        cout<<"Given number "<<n<<" not divisible by 2 and 3."<<endl;
    
    }
    return 0;
}