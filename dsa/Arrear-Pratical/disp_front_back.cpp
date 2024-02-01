#include<iostream>
using namespace std;
struct node{
    int data;
    node *prev,*next;
}*nn=NULL,*pos=NULL,*head=NULL;

void insert(int a)
{
    nn=new node();
    nn->data=a;
    nn->prev=NULL;
    nn->next=NULL;
    if(head==NULL)
    {
        head=nn;
        pos=nn;
    }
    else{
        pos->next=nn;
        nn->prev=pos;
        pos=nn;
    }
}
void dispb()
{
    pos=head;
    cout<<"Doubly List backward : ";
    while(pos!=NULL)
    {
        cout<<pos->data<<" ";
        pos=pos->next;
    }
    cout<<pos->data<<"\n";
}
void dispf()
{
    cout<<"Doubly list forward : ";
    pos=head;
    while(pos->next!=NULL) pos=pos->next;
    while(pos->prev!=NULL){
        cout<<pos->data<<" ";
        pos=pos->prev;
    }
    cout<<pos->data<<"\n";
}
int main()
{
    int n;
    cin>>n;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        insert(num);
    }
    dispb();
    dispf();
}