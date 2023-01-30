#include <iostream>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

void printArray(int data[],int n){
	int x;
	for(x=0;x<n;x++)
	{
		cout<<data[x]<<" ";
	}
}

void insertionSort(int data[],int n){
	int step,j;
	for(step=1;step<n;step++){
		int key=data[step];
		int j = step-1;
		
		while(key < data[j] && j>=0){
			data[j+1] = data[j];
			--j;
		}
		data[j+1] = key;
	}
	
	cout<<"\nFinal answer : ";
	for(step=0;step<n;step++){
        cout<<data[step]<<" ";
    }
}

int main(){
	int num,i;
	cout<<"Enter the size of the array : ";
	cin>>num;
	int arr[num];
	cout<<"Enter "<<num<<" elements of array : ";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nOriginal Array : ";
	printArray(arr,num);
	
	// function to sort the array
	insertionSort(arr,num);
	
}