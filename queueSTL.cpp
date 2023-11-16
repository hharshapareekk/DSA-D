#include <bits/stdc++.h>
using namespace std;



int main()
{
    queue <int> q;
    q.push(15);
    q.push(12);
    q.push(11);
    cout<<"Size of queue is: "<<q.size()<<endl;
    cout<<"Front element of queue is: "<<q.front()<<endl;
    q.pop();
    cout<<"Front element is: "<<q.front()<<endl;
    cout<<"Size of queue is: "<<q.size()<<endl;
    q.pop();

    q.pop();
    if(q.empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}