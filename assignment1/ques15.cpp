// 15. Write a program to find the sum of squares of first n natural numbers where n
// will be provided by the user.
#include<iostream>
using namespace std;
int main (){
    int n,sum;
    cout<<"enter the natual no.";
    cin>>n;
    sum=(n*(n-1)*(2*n+1))/6;
    cout<<sum;

}