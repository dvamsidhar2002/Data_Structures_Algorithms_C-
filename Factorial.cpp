#include<iostream>
#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	int num,fact=1,i;
	cout<<"Enter the number whose factorial you want to find : ";
	cin>>num;
	i=num;
	while(i>0){
		fact = fact * i;
		i--;
	}
	cout<<"\nFactorial of the entered number : "<<fact;
	return 0;
}
