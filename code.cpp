#include <iostream>

int main()
{
    std::cout << "Hello, World!";
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 10;
	}
}