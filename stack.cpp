

#include <iostream>
#include <stack>
using namespace std;

// stack using STL
/*int main()
{
    // creation of stack
    stack<int> s;
    // push operation
    s.push(4);
    s.push(8);

    // pop operation
    s.pop();

    // top of the stack
    cout << "top element is:" << s.top() << endl;

    if (s.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout<<"Stack is not empty";
    }

    return 0;
}*/

// stack using implementation
// 1.ARRAY
/*class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // push
    void push(int element)
    {
        if (size - top > 1) // let's say size=0 no element (size-top==1 hence space he nhi hy) or could use top<size
        {
            top += 1;
            arr[top] = element;
            cout<<"Element "<<element<<" is inserted"<<endl;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    // pop
    void pop()
    {
        if (top >= 0)
        {
            top--;
            cout<<"Element "<<arr[top+1]<<" is popped"<<endl;
        }
        else
        {
            cout << "Stack underflow";
        }
    }

    // top
    int peek()
    {
        if (top >= 0)
            return arr[top];
        else
        {
            cout << "Stack is empty" << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Stack st(5);
    st.push(5);
    st.push(14);
    st.push(12);
    st.push(14);
    st.push(22);
    st.push(222);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
}*/

// 2.Linkedlist (pending)

class Stack
{
public:
    int data;
    Stack *next;
    Stack *prev;
    Stack *top;
    int size = 5;
    int val = -1;

    Stack(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    void push(Stack *&head, int data)
    {
        

        if (val < size)
        {
            Stack *top = NULL;
            if (head == NULL)
            {
                val += 1;
                Stack *temp = new Stack(data);
                head = temp;
                cout << "Element " << temp->data << " is inserted" << endl;
            }
            else
            {
                val += 1;
                Stack *temp = new Stack(data);
                temp->next = NULL;
                temp->prev = head->next;
                head->next = temp;
                head = temp;
                top = head;
                cout << "Element " << head->data << " is inserted" << endl;
            }
        }
        else
        {
            cout << "STACK OVERFLOW" << endl;
        }
    }

    // void pop(Stack* &head ,int data){
    //     if(val<= -1)
    //     {
    //         cout<<"STACK IS EMPTY"<<endl;
    //     }
    //     else
    //     {
    //         Stack* temp=head;
    //         temp->prev=
    
    //     }
    // }

    void peek(Stack* &head)
    {
        cout<<"Top Of The Stack Is: "<<head->data<<endl;
    }

    void pop(Stack* &head)
    {
        if(head==NULL)
        {
            cout<<"STACK UNDERFLOW"<<endl;
        }
        else
        {
            Stack* temp=head;
            Stack* prev=NULL;
            int count= 1;
            while(count<size)
            {
                prev=temp;
                temp=temp->next;
                count++;
            }
            prev->next=temp->next;
            temp->next->prev=prev;
            cout<<head->data<<" is deleted"<<endl;
            delete temp;
        }
    }
};

int main()
{
    Stack st(5);
    Stack *head = NULL;
    st.push(head, 25);
    st.peek(head);
    st.push(head,30);
    st.peek(head);
    st.pop(head);
    st.peek(head);
    return 0;
}
