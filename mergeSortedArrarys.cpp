#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[])
	{
		int i, j, k =0;
		
		while(i<n && j<m)
		{
			if(arr1[i]<arr2[j])
			{
				arr3[k] = arr1[i];
				k++;
				i++;
			}
			else
			{
				arr3[k] = arr2[j];
				k++;
				j++;
			}
			
		}
		
		while (i<n)
			{
				arr3[k] = arr1[i];
				k++;
				i++;
			}
			
		while (j<m)
			{
				arr3[k] = arr2[j];
				k++;
				j++;
			}
	}
	
void print(int arr[], int size)
	{
		for (int i=0; i<size; i++)
		{
			cout<<arr[i]<<" ";
		}	
	}

	
int main()
{
	int arr1[4] = {2,5,7,9};
	int arr2[3] = {1,3,4};
	
	int size1 = sizeof(arr1) / sizeof(int);
	
	int size2 = sizeof(arr2) / sizeof(int);
	
	int size3 = size1 + size2;
	
	int arr3[7] = {0};
	
	merge(arr1, size1, arr2 , size2, arr3);
	
	print(arr3, size3);
	
	return 0;
}