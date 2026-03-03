#include "iter.hpp"

int main(void)
{
	const int array[3] = {1, 2, 3};
	iter(array, 3, &printing<const int>);
	std::cout << std::endl;
	iter(array, 3, increment<const int>);
	std::cout << std::endl;
	return (1);
}