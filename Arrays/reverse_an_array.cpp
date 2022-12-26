#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num,i,j,temp;
	cout<<"\nEnter the size of the array : ";
	cin>>num;
	int arr[num];
	cout<<"\nEnter "<<num<<" elements in the array : ";
	for(i=0;i<num;i++){
		cin>>arr[i];
	}
	
	cout<<"\nOriginal Array : \n";
	
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<"\nReversed Array : \n";
	// for loop to reverse the array
	for(i=0,j=num-1;i<num/2;i++,j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
