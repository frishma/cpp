#include <iostream>
using namespace std;

class Fan {
private:
    int speed;
    bool on;
    double radius;
public:
    Fan() {
        speed = 1;
        on = false;
        radius = 5.0;
    }
    
    void setSpeed(int speed) 
	{
        this->speed = speed;
    }
	int getSpeed() const 
	{
        return speed;
    }
   
    void setOn(bool on) 
	{
        this->on = on;
    }
	 bool isOn() const 
	{
        return on;
    }
    void setRadius(double radius)
	{
        this->radius = radius;
    }
	double getRadius() const
	 {
        return radius;
    }
};

int main() {
    Fan fan1;
    fan1.setSpeed(3);
    fan1.setRadius(10.0);
    fan1.setOn(true);

    Fan fan2;
    fan2.setSpeed(2);
    fan2.setRadius(5.0);
    fan2.setOn(false);

    cout << "Fan 1:Speed: " << fan1.getSpeed() << "Radius: " << fan1.getRadius() << "On: " << (fan1.isOn() ? "Yes" : "No") << endl;

    cout << "Fan 2: Speed: " << fan2.getSpeed() << "Radius: " << fan2.getRadius() << "On: " << (fan2.isOn() ? "Yes" : "No") << endl;

    return 0;
}
