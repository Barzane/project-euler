//	Project Euler. Problem 1.
//	Add all the natural numbers below one thousand that are multiples of 3 or 5.

#include <iostream>
#include <time.h>

long long addNumbers(int n)
{
	long long sum = 0;

	for (int i = 1; i < n; i += 1)
	{
		if (i % 3 == 0 or i % 5 == 0)
		{
			sum += i;
		}
	}

	return sum;
}

int main(int argc, char* argv[])
{
	int n; time_t seconds; long long secondsStart, secondsEnd;

	std::cout << std::endl;
	std::cout << "Sum natural numbers below n that are multiples of 3 or 5. Please enter n: ";
	std::cin >> n;
	std::cout << "Thinking... ";

	secondsStart = time(NULL);
	std::cout << "The sum is " << addNumbers(n) << ". ";
	secondsEnd = time(NULL);

	std::cout << "Time elapsed " << secondsEnd - secondsStart << " seconds." << std::endl;

	return 0;
}
