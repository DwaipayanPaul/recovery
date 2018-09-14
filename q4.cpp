#include<iostream>
using namespace std;
int Min1(int a, int b)
 {
   int s;
   if(a>b)
   s=b;
   else
   s=a;
   return s;
   }
 void Min2(int a, int b, int &d)
  {
   if(a>b) 
   d=b;
   else
   d=a;
    }
 
int main()
 {
  int a,b,c,d;
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
  c=Min1(a,b);
  cout<<c<<endl;
  Min2(a,b,d);
  cout<<d<<endl;
}
