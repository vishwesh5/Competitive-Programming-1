#include <iostream>

using namespace std;

int getMissingNumber (int a[], int size)
{
	// xor of all elements in array
	int x1 = a[0];
	// xor of 1 to size+1
	int x2 = 1;
	
	for (int i=1; i < size; i++)
		x1 = x1 ^ a[i];
	for (int i = 2; i <= size+1; i++)
		x2 = x2 ^ i;
	return (x1 ^ x2);
}

int main()
{
	int a[] = {1,2,4,5,6};
	int missingNumber = getMissingNumber(a, sizeof(a)/sizeof(a[0]));
	cout << "Missing number = " << missingNumber << endl;
	return 0;
}
