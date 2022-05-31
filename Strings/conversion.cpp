#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string str = "hsjiajncnnn";

    // convert into upper case

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] -= 32;
        }
    }
    cout <<"Upper case: "<<str<<endl;

    // convert into lower case

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'A' && str[i]<='Z'){
            str[i] += 32;
        }
    }
    cout <<"Lower case: "<<str<<endl;
    return 0;
}