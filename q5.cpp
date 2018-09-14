#include<iostream>
using namespace std;
int AddSum1(int a, int b)
 {
   int s;
   s=a+b;
   return s;
   }
int Max1(int a, int b)
 {
   int s;
   if(a>b)
   s=a;
   else
   s=b;
   return s;
   }
int Min1(int a, int b)
 {
   int s;
   if(a>b)
   s=b;
   else
   s=a;
   return s;
   }
int main()
 {
  int a,b,c,d,h;
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
  cout<<"Which operation you want to perform?"<<endl;
  cout<<"2.Sum of two numbers  3.Maximum of two numbers  4.Minimum of two numbers"<<endl;
  cin>>h;
  if(h==3)
  c=Max1(a,b);
  else if(h==2)
  c=AddSum1(a,b);   
  else if(h==4)
  c=Min1(a,b);
  cout<<c<<endl;
  }
