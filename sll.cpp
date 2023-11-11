#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    //constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }


   //destructor
    ~Node()
    {
        int value=this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
    };
};
void insertAtHead(Node* &head,int val)
{
    
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}
void display(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    temp=tail->next;
    tail=tail->next;
}

void insertAtLoc(Node* &head,int position,int data)
{
    Node* temp= head;
    Node* insertAtPos= new Node(data);
    if(position==1)
    {
        insertAtPos->next=head;
        head=insertAtPos;
        return;
        
    }
    int count=1;
    while(count<position-1)
    {
        temp=temp->next;
    }
    
    insertAtPos->next=temp->next;
    temp->next=insertAtPos;

}

void deleteNode(Node* &head,int position,int data)
{
    if(position==1)
    {
        Node* temp= head;
        head=head->next;
        delete temp;
    }
    else
    {
        Node* prev= NULL;
        Node* curr= head;
        int count=1;
        while(count<position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }

}


int main()
{
    Node *node = new Node(10);
    // cout << node->data << endl;
    // cout << node->next;
    Node* head=node;
    Node* tail=node;
    display(head);
    insertAtHead(head,12);
    display(head);
    insertAtTail(tail,20);
    display(tail);
    insertAtLoc(head,1,44);
    display(head);
    return 0;
}