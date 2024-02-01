#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*pos=NULL, *head = NULL, *newnode = NULL;

void insert_first(){
    int num;
    cin>>num;
    newnode = new node();
    newnode->data = num;
    newnode->next = NULL;

    if(head==NULL){
        head = newnode;
        pos = newnode;
    }
    else{
        pos->next = newnode;
        newnode->next = head;
        pos = newnode;
    }
}

void display(){
    pos = head;
    while(pos->next!=head){
        cout << pos->data << " ";
        pos = pos->next;
    }
    cout << pos->data;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        insert_first();
    }
    display();
}

