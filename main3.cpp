/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<math.h>
using namespace std;
int main()
{
   int i=1226,h,c,s,u;
   double d,x;
   while(i>=1225)
   {
       for(int j=1;j<=i;j++)
       {
           h+=j;
           if(h==i)
           {
               c=1;
               break;
           }
           else
           c=0;
       }
    u=sqrt(i);
    s=sqrt(i);
    if(u==s && c==1)
     {
        cout<<i;
        break;
      }
      i++;
   }
    return 0;
}
