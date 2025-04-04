#include <iostream>
using namespace std;
int main()
{
   int a;
   cout << "enter the no.";
   cin >> a;
   if (a % 5 == 0 && a % 3 == 0)
   {
      cout << "divisible by 3 and 5 ";
   }
   else
   {
      cout << "not divisible by 3 and 5 ";
   }
}