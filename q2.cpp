#include<iostream>
using namespace std;
int AddSum1(int a, int b)
 {
   int s;
   s=a+b;
   return s;
   }
 void AddSum2(int a, int b, int &d)
  {
    d=a+b;
    }
 
int main()
 {
  int a,b,c,d;
  cout<<"Enter 1st number=";
  cin>>a;
  cout<<"Enter 2nd number=";
  cin>>b;
  c=AddSum1(a,b);
  cout<<c<<endl;
  AddSum2(a,b,d);
  cout<<d<<endl;
}
