#include<iostream>
using namespace std;

int main(){
    int num,div,N;
    cout<<"Enter a number: "<<endl;
    cin>>N;

    num = 2;
    while(num<=N){
        div = 2;
        while(div<num){
            if(num%div==0)
            num++;
            else
            div++;
        }
        cout<<num<<endl;
        num++;
    }
    return 0;
}
