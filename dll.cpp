#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
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
        cout<<"Memory is free for node with data "<<value<<endl;
    }
};

void display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node* &head,int data)
{
    Node* temp=new Node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node* &tail,int data)
{
    Node* temp=new Node(data);
    temp->prev=tail;
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
    
}
void insertAtLoc(Node* &head,int data,int position)
{
    Node* temp=head;
    Node* insertAtpos=new Node(data);
    int count=1;
    if(position==1)
    {
        insertAtHead(head,data);
        return;
    }
    else
    {
        while(count<(position-1))
        {
            temp=temp->next;
            count++;
        }
        insertAtpos->next=temp->next;
        temp->next->prev=insertAtpos;
        temp->next=insertAtpos;
        insertAtpos->prev=temp->next;


    }
}
void deletionofNode(Node* &head,int pos)
{
    if(pos==1)
    {
    Node* temp=head;
    head=head->next;
    delete temp;
    }
    else
    {
        int count =1;
        Node* curr=head;
        Node* prev=NULL;
        while(count<(pos))
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next->prev=prev;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node* tail= node1;
    display(head);
    insertAtHead(head,20);
    display(head);
    insertAtTail(tail,40);
    display(head);
    insertAtLoc(head,44,3);
    display(head);
    deletionofNode(head,2);
    display(head);
    return 0;

}