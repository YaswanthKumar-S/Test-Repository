#include<iostream>
using namespace std;
void Enqueue();
void Dequeue();
void Display();
struct queue
{
	int data;
	struct queue* next;
}*FRONT=NULL,*REAR=NULL,*pos=NULL;
int main()
{
	int choice;
	do
	{
		cout<<"1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n";
		cout<<"Enter Your Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				Enqueue();
				break;
			case 2:
				Dequeue();
				break;
			case 3:
				Display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Invalid Entry";
				break;
		}
	}while(choice!=4);
	
}
void Enqueue()
{
	int value;
	struct queue* newnode;
	newnode=new queue();
	cout<<"Enter Data:";
	cin>>value;
	newnode->data=value;
	newnode->next=NULL;
	if(FRONT==NULL && REAR==NULL)
	{
		FRONT=newnode;
		REAR=newnode;
	}
	else
	{
		REAR->next=newnode;
		REAR=newnode;
	}
}
void Dequeue()
{
	struct queue* delnode;
	if(FRONT==NULL && REAR==NULL)
	{
		cout<<"QUEUE IS EMPTY";
		return;
	}
	else
	{
		delnode=FRONT;
		FRONT=delnode->next;
		delete delnode;
	}
}
void Display()
{
	if(FRONT==NULL && REAR==NULL)
	{
		cout<<"QUEUE IS EMPTY";
		return;
	}
	else
	{
		for(pos=FRONT;pos!=NULL;pos=pos->next)
		{
			cout<<pos->data;
		}
		
	}
}


