#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

int main(){
	int i,x,size,temp;
	cout<<"Enter the size of the array : ";
	cin>>size;
	int arr[size];
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"\nHow many times do you want to rotate the array : ";
	cin>>x;
	
	while(x--){
		temp = arr[0];
		for(int j=0;j<size;j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[size-1] = temp;
	}
	cout<<"\nRotated array : ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
