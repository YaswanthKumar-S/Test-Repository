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
    }
    else{
        newnode->next = head;
        head = newnode;
    }
}

void display(){
    pos = head;
    while(pos!=NULL){
        cout << pos->data << " ";
        pos = pos->next;
    }
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        insert_first();
    }
    display();
}

