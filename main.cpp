#include <iostream>
using namespace std;
#include "include/free.hpp"


int main()
{
	int num=0;
	float degree=90;
	float radian=3.1415/2.0;

	do{
		std::cout<< "Hello world"<<std::endl;
	std::cout<< "enter positive integer: "<< std::endl;
	cin>>num;
	}while(num<0);
	
	int factorial;
	for(int i=1;i<=num;i++)
	{
		factorial = factorial *i;
		}
		
	std::cout<< num << " != " << factorial << std::endl;

	std::cout<< "sum(2,3)= " << sum(2,3) << std::endl;

	return 0;
}
