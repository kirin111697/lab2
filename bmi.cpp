#include "bmi.h"

void BMI::setH(int h){
	height = h;
}
void BMI::setM(int m){
	mass = m;
}
int BMI::getH(){
	return height;
}
int BMI::getM(){
	return mass;
}
		
float BMI::calculate(int h,int m){
	return (float)m/((float)h/100.0)/((float)h/100.0);
}

string BMI::determine(float bmi){
	string str;
	if (bmi < 15.0){	
		str = "Very severely underweight";
	}
	else if (bmi >= 15.0 && bmi < 16.0){
		str = "Severely underweight";
	}
	else if (bmi >= 16.0 && bmi < 18.5){
		str = "Underweight";
	}
	else if (bmi >= 18.5 && bmi < 25.0){
		str = "Normal";
	}
	else if (bmi >= 25.0 && bmi < 30.0){
		str = "Overweight";
	}
	else if (bmi >= 30.0 && bmi < 35.0){
		str = "Obese Class I (Moderately obese)";
	}
	else if (bmi >= 35.0 && bmi < 40.0){
		str = "Obese Class II (Severely obese)";
	}
	else {
		str = "Obese Class III (Very severely obese)";
	}
	return str;
}