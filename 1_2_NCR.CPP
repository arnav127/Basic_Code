//combination of a number (ncr)
#include<iostream>

using namespace std;
int main()
{ int n,r,p=1,q=1,s=1,m,value,i;
  cout<<"enter n and r ";
  cin>>n>>r;
  for(i=n;i>0;i--)
  { p=p*i; } //p is n!
  for(i=r;i>0;i--)
  { q=q*i; } //q is r!
  m=n-r;
  for(i=m;i>0;i--)
  { s=s*i; } //s is (n-r)!
  value=p/(q*s);
  cout<<"value is "<<value;
  return 0;
}