// To find the entered number is prime or not

#include<iostream>

using namespace std;
int main()
{
  int n,flag=0,i=0;
  cout<<"Enter number";
  cin>>n;
	 if(n==1)                                   //number 1
	  cout<<"Neither prime nor composite";      
	 else if(n%2==0)                            //even number
	  cout<<"Not prime";
	 else
	{
	  for(i=3;i<n/2;i=i+2)                      
	 {
		if(n%i==0)
		{
		 flag=1;                                 //flag=1 : number is not prime
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
