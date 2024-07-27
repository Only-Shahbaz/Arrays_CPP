#include<iostream>
using namespace std;

bool isDuplicate(int arr[], int size, int index)
	{
		for (int i = 0; i<size; i++)
		{
			if(i!=index && arr[i]==arr[index])
			{
				return true;
			}	
		}
		
	}
	
int isUnique(int arr[], int size)
	{
		for (int i=0; i<size; i++)
		{
			if(!isDuplicate(arr, size, i))
			{
				return arr[i];
			}
		}
	}


int main()
{
	int arr[5] = {2,4,2,4,5};
	
	int size = sizeof(arr) / sizeof(int);
	
	int ans = isUnique(arr, size);
	cout<<ans;

 return 0;
}

