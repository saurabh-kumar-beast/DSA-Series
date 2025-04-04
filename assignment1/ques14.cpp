// 14. Write a program that will tell the number of dogs and chicken are there when the
// user will provide the value of total heads and legs.
// For example:
// Input: heads -> 4 legs -> 12
// Output: dogs -> 2 chicken -> 2

#include<iostream>
using namespace std;
int main(){
    int head , leg,c,d;
    cout<<"enter the no. of leg";
    cin>>leg;
    cout<<"enter the no. of head";
    cin>>head;
    c=1/2*(2*head-0.5*leg);
    d=4-c;
    cout<<c<<d;

}