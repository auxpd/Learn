#include <iostream>

double change(double num){
	num *= 63240;
	return num;
}

int main(){
	double num;
	std::cout << "Enter the number of light years:";
	std::cin >> num;
	std::cout << num  << " light years = "
		<< change(num) << " astronomical units." << std::endl;
}
