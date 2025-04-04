#include <iostream>
using namespace std;
class bankAcc
{
private:
    double balence;

public:
    bankAcc(double a)
    {
        balence = a;
    }
    long accountNo;
    void bank()
    {
        cout << "your bank balence is :  " << balence;
        cout << "your account no. is: " << accountNo;
    }
};
int main()
{
    bankAcc rajat;
    rajat bankAcci(532436267888766)
        rajat.accountNo = 486474458785;
    rajat.bank();
}
