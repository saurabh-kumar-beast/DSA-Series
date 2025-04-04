#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    string colour;
    int speed;

    void showcar()
    {
        cout << "car brand : " << brand << endl;
        cout << "car colour : " << colour << endl;
        cout << "car speed : " << speed << "km/h" << endl;
    }
};
int main()
{
    car car1, car2, car3;
    
    car1.brand = "toyota";
    car1.colour = "black";
    car1.speed = 800;
    
    car2.brand = "targen";
    car2.colour = "black";
    car2.speed = 800;
    
    car3.brand = "BMW";
    car3.colour = "black";
    car3.speed = 800;

    cout << "car1"<<endl;
    car1.showcar(); 
    cout << "car2"<<endl;
    car2.showcar();
    cout << "car3"<<endl;

    car3.showcar();

    return 0;
}