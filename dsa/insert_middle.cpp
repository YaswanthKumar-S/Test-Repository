#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *pos = NULL, *head = NULL, *newnode = NULL;

void create()
{
    int num;
    cin >> num;
    newnode = new node();
    newnode->data = num;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        pos = newnode;
    }
    else
    {
        pos->next = newnode;
        pos = newnode;
    }
}

void display()
{
    pos = head;
    while (pos != NULL)
    {
        cout << pos->data << " ";
        pos = pos->next;
    }
}

void insert_middle(int target, int value)
{
    newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    pos = head;
    while (pos != NULL)
    {
        if (pos->data == target)
        {
            newnode->next = pos->next;
            pos->next = newnode;
        }
        pos = pos->next;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        create();
    }
    int tar, val;
    cin >> tar >> val;
    insert_middle(tar, val);
    display();
}
