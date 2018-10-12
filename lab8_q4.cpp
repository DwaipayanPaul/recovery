/*
4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/
#include<iostream>
using namespace std;

// function to input in array
void inp_arr(int arr[],int &n)
{
	cout<<"Enter "<<n<<" elements"<<endl;
	for(int i=0;i<n;i++)
	{	
		cin>>arr[i];        // user input
	}
}

void mer_arr(int arf[],int arr1[],int arr2[],int &n,int &m)
{
	for(int i=0;i<m+n;i++)
	{
		if(i<n)
		{
			for(int j=0;j<n;j++)
				arf[j]=arr1[j];
		}
		else
		{
			for(int k=n;k<m+n;k++)
				arf[k]=arr2[k-n];
		}
	}
} 

void arrange_arr(int arr[],int &n)
{
	int t=0;	
	for(int i=0;i<(n-1);i++)
       {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
      }
}
void lar_arr(int arr[],int &s)
{
	cout<<"The largest element of two arrays ="<<arr[s-1]<<endl;
}

void sml_arr(int arr[],int &n)
{
	cout<<"The smallest element of two arrays="<<arr[0]<<endl;
}




//main function
int main()
{
	int m,n;
	int s=m+n;
	cout<<"Input no of elements for first array ="<<endl;  //taking input the number of elements
	cin>>n;
	int arr1[n];
	cout<<"Input no of elements for second array ="<<endl;  //taking input the number of elements
	cin>>m;
	int arr2[m];
	inp_arr(arr1,n);
	inp_arr(arr2,m);
	int arf[s];
	mer_arr(arf,arr1,arr2,n,m);
	arrange_arr(arf,s);
	sml_arr(arf,s);
	lar_arr(arf,s);
}
