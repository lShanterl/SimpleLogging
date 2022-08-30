#include "SimpleLogging.hpp"


int main()
{
	sl::BeginBenchmark("forLoop");
	for (int i = 0; i < 100000; i++)
	{
		std::cout << i << std::endl;
		if (i == 99990)
			std::cout << sl::GetTime("forLoop") << '\n';
	}
	std::cout << "Benchmark took: " << sl::EndBenchmark("forLoop") << " seconds";
}