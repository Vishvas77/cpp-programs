#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};  
int main()
{
    Node *head = NULL;
    Node *n1 = new Node();
    n1->data = 1;
    n1->next = NULL;
    n1->prev = NULL;
    head = n1;
    Node *n2 = new Node();
    n2->data = 2;   
    n2->next = NULL;
    n2->prev = n1;
    n1->next = n2;
    Node *n3 = new Node();
    n3->data = 3;
    n3->next = NULL;
    n3->prev = n2;
    n2->next = n3;
    // traversing the linked list
    Node *temp = head;
    while(temp !=NULL){
        cout << temp->data << " "; 
        temp =temp->next;
    }
    return 0;
}