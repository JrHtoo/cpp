#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a,b);
	std::cout << "After swapping : a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a,b) : " << ::min(a,b) << std::endl;
	std::cout << "max(a.b) : " << ::max(a,b) << std::endl; 

}