#include <iostream>

float tempChange(float temp){
	temp = 1.8 * temp + 32.0;
	return temp;
}

int main(){
	std::cout << "Please enter a Celsius value:";
	float temp;
	std::cin >> temp;
	std::cout << temp << " degrees is " 
		<< tempChange(temp) << " degrees Fahrenheit" << std::endl;
}
