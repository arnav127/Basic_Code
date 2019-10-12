//factorial of a number
#include<iostream>

using namespace std;

int main()
{ int fac=1,num;
  
  cout<<"enter number whose factorial is to be printed";
  cin>>num;
  for(int i=num;i>0;i--)
  { fac=fac*i; }
  cout<<"factorial is "<<fac;
  return 0;
}