#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
	for(int i = 0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
}

void swapalternate(int arr[], int size)
{
	for (int i = 0; i<size; i+=2)
	{
		if(i+1<size)
		{
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp; 
		}
	}
}

int main()
{
	int arr[5] = {1,2,3,4,5};
	
	printArray(arr, 5);
	
	swapalternate(arr, 5);
	
	cout<<endl;
	
	printArray(arr, 5);
	
 return 0;
}

