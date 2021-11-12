#ifndef ITER_172_HPP
#define ITER_172_HPP

template <typename T1, typename T2>
void iter(T1 *array, const T2 &lenght, void func(T1 &))
{
	T2 start = 0;
	while (start < lenght)
	{
		func(*array);
		array++;
		start++;
	}
}

#endif
