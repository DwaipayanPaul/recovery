#include<iostream>
using namespace std;
int Max1(int a, int b)
 {
   int s;
   if(a>b)
   s=a;
   else
   s=b;
   return s;
   }
 void Max2(int a, int b, int &d)
  {
   if(a>b) 
   d=a;
   else
   d=b;
    }
 
int main()
 {
  int a,b,c,d;
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
  c=Max1(a,b);
  cout<<c<<endl;
  Max2(a,b,d);
  cout<<d<<endl;
}
