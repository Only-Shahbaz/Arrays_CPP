#include<iostream>
using namespace std;

int leftoccu(int arr[], int size, int key)
{
	int start = 0;
	int end = size-1;
	int ans = -1;
	int mid = (start+end)/2;
	
	while(start<=end)
	{
		if (arr[mid] == key)
		{
			ans = mid;
			end = mid-1;
		}
		
		else if(key>arr[mid])
		{
			start = mid+1;
		}
		else if(key<arr[mid])
		{
			end = mid-1;
		}
		
		mid = (start+end)/2;
	}
	
	return ans;
}

int rightoccu(int arr[], int size, int key)
{
	int start =0;
	int end =size-1;
	int ans = -1;
	int mid = (start+end)/2;
	
	while(start<=end)
	{
		if (arr[mid] == key)
		{
			ans = mid;
			start = mid+1;
		}
		
		else if(key>arr[mid])
		{
			start = mid+1;
		}
		else if(key<arr[mid])
		{
			end = mid-1;
		}
		
		mid = (start+end)/2;
	}
	
	return ans;
}

int main()
{
	int arr[10] = {1,2,3,4,4,4,9,9,10,10};
	int size = sizeof(arr) / sizeof(int);
	
	cout<<leftoccu(arr, size, 10);
	cout<<endl;
	cout<<rightoccu(arr, size, 10);

 return 0;
}

