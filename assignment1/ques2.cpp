//  2.Given the radius of the circle predict whether numerically area of this circle is 
// larger than the circumference or not.
#include <iostream>
using namespace std ;
int main (){
    float rad;
    cout<<"enter thje radius of circle";
    cin>>rad;
    float area=3.14*rad*rad;
    float par=2*3.14*rad;
    if (area>par){
        cout<<"area is greater";

    }
    else{cout<<"area is not greater";}



}