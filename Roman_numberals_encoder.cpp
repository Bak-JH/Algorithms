string solution(int number) {
	string result;
	int numbers[13] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	string romanNumbers[13] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };

	for (int numberIdx  = 0; numberIdx  < 13; ++numberIdx)
	{
		if (number / numbers[numberIdx] > 0)
		{
			for (int j  = 0; j  < number  / numbers[numberIdx]; ++j) {
				result  += romanNumbers[numberIdx];
			}

			number  %= numbers[numberIdx];
		}
	}

	return result;
}
