#include <iostream>
using namespace std;
int main(){
   char a;
   cout<<"enter the character : ";
   cin>>a;
   if(a>='A' && a<='Z' || a>='a' && a<='z'){
    cout<<"it is alfabete";
   }else{
    cout<<"it is not alfabete";
   }
}