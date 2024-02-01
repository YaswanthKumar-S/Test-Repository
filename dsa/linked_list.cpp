#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
}*head=NULL,*current=NULL,*nn=NULL;
void insert()
{
    int val;
    cin>>val;
    nn=new node();
    nn->data=val;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
        current=nn;
    }
    else{
        nn->next=head;
        head=nn;
    }
}
void display()
{
    current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        insert();
    }
    display();
}