int findOdd(const std::vector<int>& numbers) {
	for (int it : numbers)
	{
		if ((std::count(numbers.begin(), numbers.end(), it) % 2) > 0)
			return it;
	}
}