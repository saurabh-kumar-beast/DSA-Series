
// 16. Given 2 fractions, find the sum of those 2 fractions.Take the numerator and
// denominator values of the fractions from the user.
#include <iostream>
using namespace std ;
int main (){
    double x1,x2,y1 ,y2,sum;
    cout << "Enter the (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the  (x2 y2): ";
    cin >> x2 >> y2;
    sum=(x2*y2)+(x1*y1)/y1*y2;
    cout<<sum;
}