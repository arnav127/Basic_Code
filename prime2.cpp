//To check if entered number is prime or not
#include<iostream>

using namespace std;
 int main()
{
	int n,flag=0;
	cout<<"Enter number";
	cin>>n;
	  if(n==1)
	   cout<<"Neither prime nor composite";
	  else
	  {
	   for(int i=2;i<n/2;i++)
	    {
		if(n%i==0)
		{
		  flag=1;                             //flag=1: not a prime number
		  break; 
		}
	    }
	   if(flag==0)
	     cout<<"Prime";
	   else
	     cout<<"Not prime";
          }
        return 0;
}
