#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>

using namespace std;

void inputArray(int data[],int num) {
	int i;
	for(i=0; i<num; i++) {
		cin>>data[i];
	}
	return;
}

void sortingFunction(int data[],int n){
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
	
	return;
}

int main() {
	int x,y,i,j;
	cout<<"Enter the size of array 1 : ";
	cin>>x;
	cout<<"Enter the size of array 2 : ";
	cin>>y;
	int arr1[x],arr2[y];
	
	inputArray(arr1,x);
	inputArray(arr2,y);
	
	//function to sort the arrays
	sortingFunction(arr1,x);
	sortingFunction(arr2,y);
	
	
	cout<<"\nSorted Array 1 : ";
	for(i=0; i<x; i++) {
		cout<<arr1[i]<<" ";
	}
	cout<<"\nSorted Array 2 : ";
	for(i=0; i<y; i++) {
		cout<<arr2[i]<<" ";
	}
	
	//code snippet to find the intersection
	cout<<"\nIntersection of the arrays : ";
	i=0;
	j=0;
	while(i<x && j<y)
	{
		if (arr1[i] < arr2[j])
        i++;
        else if (arr2[j] < arr1[i])
        j++;
        
		else {
			cout<<arr2[j]<<" ";
			i++;
			j++;
		}
	}
	return 0;

}
