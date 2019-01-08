#include <iostream>
using namespace std;

int getMissingNumber(int a[], int size){
	// Running sum
	int sum1 = 0;
	// Ideal sum
	int sum2 = (size+1)*(size+2)/2;
	for (int i=0; i < size; i++){
		sum1 += a[i];
	}
	return sum2 - sum1;
}

int main()
{
	int array[] = {1,2,4,6,3,7,8};
	int missingNumber = getMissingNumber(array, sizeof(array)/sizeof(array[0]));
	cout << "Missing number = " << missingNumber << endl;
	return 0;
}
