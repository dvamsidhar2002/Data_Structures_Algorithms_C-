#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){
	int m,n;
	cout<<"Enter the number of rows in matrix : ";
	cin>>m;
	cout<<"Enter the number of columns in the matrix : ";
	cin>>n;
	int mat[m][n];
	
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>mat[i][j];
		}
	}
	
	cout<<"\nMatrix : \n";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<mat[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	int key,temp;
	cout<<"Enter the element you want to find in the matrix : ";
	cin>>key;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(key== mat[i][j])
			{
			temp=key;
			cout<<"\nElement found at Row : "<<i<<" and Column : "<<j;
			}
		}
	}
	return 0;
}
