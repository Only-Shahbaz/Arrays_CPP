#include<iostream>
using namespace std;

void checksum(int arr[], int size, int s)
	{
		int start = 0;
		int flag = 0;
		int sum = 0;
		
		for (int i=0; i<size; i++)
		{
			sum = sum + arr[i];
			
			while (sum>s)
			{
				sum = sum - arr[start];
				start ++;
			}
			if (sum == s)
			{
				cout<<start<<"  "<<i;
				flag = 1;
			}	
			
		}
		if (flag == 0)
			{
				cout<<"No array found !"<<endl;
			}
	}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9};
	
	int size = sizeof(arr) / sizeof(int);
	
	int sum;
	cout<<"Enter sum :";
	cin>>sum;
	
	checksum(arr, size, sum);

 return 0;
}

