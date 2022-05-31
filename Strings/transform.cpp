#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    
    // Lower case to upper case

    string s = "uhybaiuhbiuwa";
    transform(s.begin(),s.end(),s.begin(),::toupper);

    cout<<"Upper case: "<<s<<endl;

    // Upper case to lower case

    transform(s.begin(),s.end(),s.begin(),::tolower);

    cout<<"Lower case: "<<s<<endl;

    
    return 0;
}