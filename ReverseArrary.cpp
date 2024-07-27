#include<iostream>
using namespace std;

void reverse(int arr[])
{

	int start = 0;
	int end = 5;
	while (start<=end)
	{
		int temp;
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

void print(int arr[])
{
	for (int i=0; i<6; i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<endl;
}

int main()
{
	int arr[6] = {1,2,3,4,5,6};
	
	print(arr);
	
	reverse(arr);
	
	print(arr);
	
 return 0;
}

