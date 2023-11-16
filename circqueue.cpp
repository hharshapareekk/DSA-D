#include <bits/stdc++.h>
using namespace std;

class CircularQueue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    CircularQueue(int n)
    {
        int size = n;
        arr = new int[size];
        front = rear = -1;
    }

    bool enqueue(int value)
    {
        if (((front == 0) && (rear = size - 1)) || (rear = (front - 1) % (size - 1)))
        {
            cout << "QUEUE IS FULL" << endl;
            return false;
        }
        else if (front == -1) // first element
        {
            front = rear = 0;
            arr[rear] = value;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = value;
        }
        else
        {
            rear++;
            arr[rear] = value;
        }
        return true;
    }



    bool dequeue(int value){
        if(front == -1)
        {
            cout<<"QUEUE IS EMPTY"<<endl;
            return false;
        }
        int ans= arr[front];
        arr[front]= -1;

        if( front == rear)
        {
            front= -1;
        }
        else if(front = size-1)
        {
            front =0;
        }
        else
        {
            front++;
        }
        return ans;
    }
};
int main()
{
    return 0;
}