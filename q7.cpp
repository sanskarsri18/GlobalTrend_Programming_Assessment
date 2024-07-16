// Write a function to compute the sum of the digits of a given number.The function should return the sum of the digits of the number.

#include <bits/stdc++.h>
using namespace std;

/* Function to get sum of digits */
class gfg {
public:
	int getSum(int n)
	{
		int sum;

		/* Single line that calculates sum */
		for (sum = 0; n > 0; sum += n % 10, n /= 10)
			;

		return sum;
	}
};

// Driver code
int main()
{
	gfg g;
	int n = 687;

	// Function call
	cout << g.getSum(n);
	return 0;
}


