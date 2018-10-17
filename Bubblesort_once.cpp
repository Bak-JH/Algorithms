std::vector<int> bubbleSortOnce(const std::vector<int> &input)
{
	std::vector<int> result(input);

	for (int i = 0; i < result.size() - 1; ++i)
		if (result[i] > result[i + 1])
			std::swap(result[i], result[i + 1]);

	return result;
}
