#include <iostream>

using namespace std;

void subArraySum(int a[], int n, int sum)
{
	// running sum
	int curr_sum = a[0];
	int start = 0;
	int i;

	for (i=1; i<=n; i++)
	{
		while (curr_sum > sum && start < i-1)
		{
			curr_sum -= a[start];
			start++;
		}

		if (curr_sum == sum)
		{
			cout << "Sum found between " << start+1 << " and " << i << endl;
			return;
		}

		if (i < n)
			curr_sum+= a[i];
	}
	cout << "No subarray found" << endl;
	return;
}

int main()
{
	int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
	int n = sizeof(arr)/sizeof(arr[0]);
	int sum = 23;
	subArraySum(arr,n,sum);
	return 0;
}
