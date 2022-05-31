#include<iostream>
using namespace std;

int main(){
    // Largest word in a sentence
     int n;
    cout<<"Enter length of the character array: "<<endl;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cout<<"Enter sentence: ";
    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currLen = 0;
    int maxLen = 0;

    int st=0.
    while(1){
        if(arr[i] ==' ' || arr[i]='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen=0;
        }
        else
        currLen++;
        if (arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    return 0;
}