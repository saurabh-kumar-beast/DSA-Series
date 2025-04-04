// 13. Write a program to find the euclidean distance between two coordinates.Take both
// the coordinates from the user as input.

#include<iostream>
#include <cmath>
using namespace std;
int main (){
    double x1,x2,y1 ,y2;
    cout << "Enter the first coordinate (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the first coordinate (x2 y2): ";
    cin >> x2 >> y2;

    double dis=sqrt(pow(x2 -x1 ,2) + pow(y2-y1,2));
    cout << "Euclidean Distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is: " << dis << endl;

}
