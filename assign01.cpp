#include <iostream>
int zero(int a[], int low, int high)
{
	if (high >= low)
	{
		int mid = low+(high-low)/2;
		
		if (( mid == 0 || a[mid-1] == 1) && a[mid] == 0)
			return mid;

		if (a[mid] == 1) 
			return zero(a, (mid + 1), high);
		else 
			return zero(a, low, (mid -1));
	}
	return -1;
}
int count(int a[], int n)
{

	int first;
	first= zero(a, 0, n-1);


	if (first==-1)
		return 0;

	return (n-first);
}
int main()
{
	int a[] = {1, 1, 1, 0, 0, 0, 0, 0};
	int n = sizeof(a)/sizeof(a[0]);
	printf("Number of zeroes is %d", count(a, n));
	return 0;
}
