/*
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
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
void lar_arr(int arr[],int &n)
{
	cout<<"The largest element="<<arr[n-1]<<endl;
}

void sml_arr(int arr[],int &n)
{
	cout<<"The smallest element="<<arr[0]<<endl;
}


//function to mean the elements
void mean_arr(int arr[],double &mean,int &n){
	double sum;	
	for(int i=0;i<n;i++)
	{	
		sum+=arr [i];
	}
 	mean=sum/n;
}



//main function
int main()
{
	int n;
	cout<<"Input no of elements="<<endl;  //taking input the number of elements
	cin>>n;
	int arr[n];
	inp_arr(arr,n);
	arrange_arr(arr,n);
	sml_arr(arr,n);
	lar_arr(arr,n);
	double mean=0.0;
	mean_arr(arr,mean,n);
	cout<<"The mean of the numbers entered is="<<mean<<endl;   //output
}
