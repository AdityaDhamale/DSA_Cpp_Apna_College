#include<iostream>
using namespace std;
main()
{
int num, i, j, space=1;
cout<<"Please enter the no]]number to print diamond shape : ";
cin>>num;
space=num-1;
for (i=1; i<=num; i++) { //outer loop
for(j=1; j<=space; j++) //ineer loop
{
cout<<" "; //printing space.
}
space--;
for(j=1; j<=(2*i-1); j++)
{
cout<<"*"; //print stars.
}
cout<<"\n"; //for new line
}
//printing in reverse order.
space=1;
for (i=1; i<=num; i++) {
for(j=1; j<=space; j++) {
cout<<" "; //printing space.
}
space++;
for(j=1; j<=(2*(num-i)-1); j++) {
cout<<"*"; //printing stars.
}
cout<<"\n"; //new line
}
}