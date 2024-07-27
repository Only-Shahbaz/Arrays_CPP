#include<iostream>
using namespace std;

int findPeak(int arr[], int size)
	{
		int start=0;
		int end = size-1;
		int mid = (start + end) / 2;
		
		while(start<end)
		{
			if (arr[mid] < arr[mid+1])
			{
				start = mid + 1;
			}
			else
			{
				end = mid;
			}
			mid = (start + end) / 2;
		} 
		return arr[start];
	}

int main()
{
	int arr[5] = {1,2,5,4,3};
	int size = sizeof(arr) / sizeof(int);
	
	cout<<findPeak(arr, size);
	
 return 0;
}

