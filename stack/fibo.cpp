#include <vector>
#include <iostream>


long long fib(long long n)
{
	std::vector<int> vec(n, 0);
	vec[0] = 0;
	vec[1] = 1;
	for (int i = 2; i <= n; i++)
		vec[i] = vec[i - 1] + vec[i - 2];
	for (int i = 0; i <= n; i++)	
		std::cout << vec[i] << " ";
	std::cout << std::endl;
	return vec[n];
}

int main()
{
	std::cout << fib(20) << '\n';
}
