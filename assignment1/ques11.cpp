#include <iostream>
using namespace std ;
int main(){
    int a=5,b=3,c;
    c=a++ + ++b;//a=5 ,b=4
    cout<<a <<b <<" "<<c;
}