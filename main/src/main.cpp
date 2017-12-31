#include <iostream>
#include <Adder.h>
#include <Subs.h>


int main()
{
	std::cout << "hello world" << std::endl;
	Adder adder;
	std::cout << adder.add(1, 2) << std::endl;

	Subs subs;
	std::cout << subs.sub(1, 2) << std::endl;

	return 0;

}
