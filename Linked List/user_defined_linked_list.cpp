#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int printList(Node* n){
	while(n!=NULL){
		cout<<n->data<<"->";
		n = n->next;
	}
	cout<<"NULL";
    cout<<"\n";
	return 0;
}

int main()
{
    struct Node *head, *prev, *p;
    int n,i;
    cout<<"\n\nEnter the number of elements you want to input : ";
    cin>>n;
    head=NULL;

    for(i=0;i<n;i++)
    {
        p =(struct Node *) malloc(sizeof(struct Node));
        cin>>p->data;
        p->next = NULL;
        if(head==NULL)
        {
            head=p;
        }
        else
        {
            prev->next = p;
        }
        prev=p;
    }

    cout<<"Entered linked list : ";
	printList(head);
    return 0;
}