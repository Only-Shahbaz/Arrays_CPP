#include<iostream>
using namespace std;

int main()
{
	int arr[9] = {0,2,1,0,3,0,4,0,8};
	
	int size = sizeof(arr) / sizeof(int);
	
	int i=0, j=0;
	
	while (i<size)
	{
		if(arr[i] != 0)
		{
			swap(arr[i], arr[j]);
			j++;
		}
		else
		{
			i++;
		}
	
	}
	
		for (int i=0; i<size; i++)
		{
			cout<<arr[i]<<" ";
		}
	
 return 0;
}

