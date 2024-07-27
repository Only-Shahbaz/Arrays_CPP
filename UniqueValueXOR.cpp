#include<iostream>
using namespace std;

int isUnique(int arr[], int size)
	{
		int ans=0;
		for (int i=0; i<size; i++)
		{
			ans = ans^arr[i];
		}
		return ans;
	}

int main()
{
	int arr[5]={1,2,2,4,4};
	
	int size = sizeof(arr) / sizeof(int);
	
	int ans = isUnique(arr, size);
	
	cout<<ans;
	
 return 0;
}

