#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
	int num=0;

	do{
	std::cout<< "enter positive integer: "<< std::endl;
	cin>>num;
	}while(num<0);
	
	int factorial;
	for(int i=1;i<=num;i++)
	{
		factorial = factorial *i;
		}
		
	std::cout<< num << " != " << factorial << std::endl;
	return 0;
}