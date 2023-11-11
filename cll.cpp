#include <iostream>
using namespace std;

// circular singly ll
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertNode(Node* &tail,int element,int data){
    //empty list
    if(tail==NULL)
    {
        Node* temp=new Node(data);
        tail=temp;
        temp->next=temp;
    }
    else
    {
        //non- empty
        Node* curr=tail;
        while(curr->data!=element)
        {
            curr=curr->next;
        }
        Node* temp1=new Node(data);
        temp1->next=curr->next;
        curr->next=temp1;
    }
}

int main()
{

    return 0;
}