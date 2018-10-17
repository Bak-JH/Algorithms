#include <vector>
using namespace std;

int find_even_index(const vector <int> numbers) {
	int left = 0;
	int right = 0;

	for (int i = 0; i < numbers.size(); ++i)
	{
		for (int j = 0; j < i; ++j)
			left += numbers[j];

		for (int k = numbers.size()-1; k > i; --k)
			right += numbers[k];

		if (left == right)
			return i;
		else { left = 0; right = 0; }
	}
	
	return -1;
}
