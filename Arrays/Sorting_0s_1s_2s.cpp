#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

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
	cout<<"\n";
	for(int i=0;i<n;i++)
	{
		cout<<data[i]<<" ";
	}
}

int main(){
	int arr[] = {0,1,2,0,2,1};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Current Array : \n";
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	insertionSort(arr,size);
return 0;
}
