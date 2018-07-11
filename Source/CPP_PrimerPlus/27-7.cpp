#include <iostream>

void time(int h, int m){
	std::cout << "Time: " << h << ":" << m << std::endl;
}

int main(){
	int h, m;
	std::cout << "Enter the number of hours: ";
	std::cin >> h;
	std::cout << "Enter the number of minutes: ";
	std::cin >> m;
	time(h,m);
	return 0;
}
