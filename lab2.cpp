#include <iostream>
#include <fstream>
#include <iomanip>
#include "bmi.h"
using namespace std;

int main(){
	
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out",ios::out);

	BMI bmi;
	float result;
	int h,m;
	while(1){
		inFile >> h >> m;
		bmi.setH(h);
		bmi.setM(m);
		if (bmi.getH() == 0 && bmi.getM() == 0){
			break;
		}
		else{
			result = bmi.calculate(bmi.getH(),bmi.getM());
			outFile << fixed 
					<< setprecision(2)
					<< result
					<< " "
					<< bmi.determine(result)
					<< endl;
		}
	}
	return 0;
}

