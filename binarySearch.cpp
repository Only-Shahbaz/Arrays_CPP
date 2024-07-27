#include<iostream>
using namespace std;

int binary(int arr[], int size, int key)
{
		int start =0;
		int end = size-1;
		int mid= (start + end)/2;
		
		while(start<=end)
	{
		
		if (key==arr[mid])
		{
			return mid;
		}
		if(key>arr[mid])
		{
			start = mid+1;
		}
		if(key<arr[mid])
		{
			end = mid-1;	
		}	
		mid = (start + end)/2;
	}
}
int main()
{
	int arr[10] = {2,3,4,5,6,10,45,98,101,122};
	int key = 45;
	int size = sizeof(arr)/sizeof(int);
	
	cout<<binary(arr, size, key);
	
 return 0;
}

