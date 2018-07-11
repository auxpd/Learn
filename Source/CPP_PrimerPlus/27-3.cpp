#include <iostream>

void test1(){
	std::cout << "Three blind mice" << std::endl;
}

void test2(){
	std::cout << "See how they run" << std::endl;
}

int main(){
	test1();
	test1();
	test2();
	test2();
	getchar();
	return 0;
}
