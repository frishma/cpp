#ifndef PRACTICE_H
#define PRACTICE_H

class Practice
{
	public:
		Practice();
	 ~Practice();
		Practice(double);
		double getArea();
		void setRadius(double);
		double getRadius(); 
		double add(double);
		static int getnumber();
	private:
		double radius;
		static int number;
	
};

#endif
