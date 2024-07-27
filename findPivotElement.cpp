#include <iostream>
using namespace std;
int pivot(int arr[], int size)
{
  int s = 0;
  int e = size-1;
  int mid = s + (e-s)/2;
  while(s<e)
    {
      if(arr[mid]>arr[0])
      {
        s = mid + 1;
      }
      else
      {
        e = mid;
      }
      mid = s + (e-s)/2;
    }
  return arr[s];
}
int main() {
  int arr[7] = {4, 5, 6, 7, 0, 1, 2};
  cout<<pivot(arr, 7);
  
}
