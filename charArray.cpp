#include <iostream>
using namespace std;

int getlength(char name[])
	{
		int count= 0;
		int i=0;
		
		while(name[i]!='\0')
		{
			count++;
			i++;
		}
		return count;
	}

int main() 
{
  char name[20];
  
  cout<<"Enter your Name: ";
  cin>>name;
  
  cout<<"Your Name is "<<name<<endl;
  
  int len = getlength(name);
  
  cout<<"Length is "<<len;
  
  return 0;
}

