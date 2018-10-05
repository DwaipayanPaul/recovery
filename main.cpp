/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    double h;
    for(int a=1;a<=100;a++)
    {
        for(int m=1;m<=100;m++)
        {
            for(int b=1;b<=100;b++)
            {
                h=a+(m*3)+(b/2.0);
                if(h==100 && a+m+b==100)
                cout<<"1.apple="<<a<<"  mangoes="<<m<<"  banana="<<b<<endl;
            }
        }
    }

    return 0;
}
