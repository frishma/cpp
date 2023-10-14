#ifndef FAN_H
#define FAN_H

class Fan
{
	public:
		Fan();
		Fan(bool in,int number,double lon);
		void On();
		void level(int number);
		void value(double lon);
		double total();
		int getspeed();
		int getradius();
	protected:
		bool on;
		int speed;
		double radius;
};

#endif  
