#include <iostream>
using namespace std ;
int main(){
    int a=5,b=3,c;
    c=a++ + ++b;//a=5 post increment,b=4 bis pre increment
    cout<<a <<b <<" "<<c;
}