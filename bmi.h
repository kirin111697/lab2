#include <iostream>
#include <string>
using namespace std;

class BMI{
public:
	void setH(int h);
	void setM(int m);
	int getH();
	int getM();
	float calculate(int h,int m);
	string determine(float bmi);

private:
	int height;
	int mass;
};
