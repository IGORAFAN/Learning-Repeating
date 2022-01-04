C++ 20

	- Concepts
	:
	// Without concepts
	template<typename T>
	requires Integral<T>
		T
		gcd(T a, T b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

// With concepst
template<typename T>
concept Integral = std::is_integral<T>::value;

Integral auto gcd(Integral auto a, Integral auto b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

- Modules:-Faster compile time - Reduse the need to define macros
	- Express the logical structure of the code - Make header file obsolete
	- Get rid of ugly macro workarounds

	// example export
	export module math;

export int add(int fir, int sec)
{
	return fir + sec;
}

// example import
import math;

int int main()
{
	add(10, 20);
}

- Ranges Library:-Can operate directly on containers;
you don`t need iterators to specify a range - Can be evaluated
	- Can be composed

// example
#include <iostream>
#include <vector>
#include <ranges>

	int
	main()
{
	std::vector<int> ints{ 0, 1, 2, 3, 4, 5 };
	auto even = [](int i) {
		return i % 2 == 0;
	};
	auto square = [](int i) {
		return i * i;
	};
	for (auto i : ints | std::views::filter(even) | std::views::transform(square))
	{
		std::cout << i << ' ';
	}
}

- Coroutines:
	// example
	Generator<int> getNext(int start = 0, int step = 1)
	{
		auto value = start;
		while (true)
		{
			co_yield value;
			value += step;
		}
	}

	int main()
	{
		std::cout << std::endl;
		std::cout << "getNext():";
		auto gen1 = getNext();
		for (int i = 0; i <= 10; ++i)
		{
			gen1.next();
			std::cout << " " << gen1.getValue();
		}

		std::cout << std::endl << std::endl;

		std::cout << "getNext(100, -10):";
		auto gen2 = getNext(100, -10);
		for (int i = 0; i <= 20; ++i)
		{
			gen2.next();
		std::cout << " " << gen2.getValue();
		}

		std::cout << std::endl;
	}

- Three-Way Comparison Operator:

- Designated initialization

- Consteval and constinit:

- Template inprovements:

- Lambda impovements:

- New atributes:

- std::span:

- container impovements:

- Arithemetic utilities:

- Calendar and time zone:

- Formating library:

- Atomics:

- Semaphores:

- Latches and barriers:

- Cooperative interruption:

- std::jthread: