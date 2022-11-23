#include "../../headers.h"

int solve(vi & arr)
{
	int n = arr.size();
	int best = 0;

	for(int a=0; a<n; a++)
	{
		int sum = 0;
		for(int b = a; b<n; b++)
		{
			sum += arr[b];
			best = max(best, sum);
		}
	}
	return best;
}


int main()
{
	vi v = {1, 2, 3, 4, 5};
	int result = solve(v);
	cout << result;
	return 0;
}