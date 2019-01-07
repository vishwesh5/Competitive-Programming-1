#include <iostream>
#include <climits>

using namespace std;

int maxSubArraySum(int a[], int size)
{
	// Initialize
	int max_so_far = INT_MIN;
	int max_ending_here = 0;

	// Loop for each element
	// of the array
	for (int i=0; i < size; i++)
	{
		max_ending_here += a[i];
		if (max_ending_here < 0)
		{
			max_ending_here = 0;
		}
		else if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
		}
	}
	return max_so_far;
}

// When all numbers in array are negative
int maxSubArraySumAllNeg(int a[], int n){
	int max_so_far = a[0];
	int max_ending_here = a[0];

	for (int i=1; i < n; i++)
	{
		max_ending_here = max(a[i], max_ending_here+a[i]);
		max_so_far = max(max_so_far,max_ending_here);
	}
	return max_so_far;
}

// Print start and end indices
int maxSubArrayPrint(int a[], int n){
	int max_so_far = a[0];
	int max_ending_here = a[0];
	int start = 0, end = 0, s = 0;

	for (int i=1; i < n; i++)
	{
		if (a[i] >= max_ending_here+a[i])
		{
			max_ending_here = a[i];
			s = i;
		}
		else
		{
			max_ending_here += a[i];
		}
		if (max_so_far < max_ending_here)
		{
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}
	}
	cout << "Maximum contiguous sum = " << max_so_far << endl;
	cout << "Starting index = " << start << endl;
	cout << "Ending index = " << end << endl;
	return max_so_far;
}

// Driver program
int main(){
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArrayPrint(a,n);
	return 0;
}
