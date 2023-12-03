#include <iostream>
using namespace std;

binarySearch()
{
    int key;
    cout<<"enter key:";
    cin>>key;
    int size;
    cout<<"enter size:";
    cin>>size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            cout << mid + 1 << endl;
            flag = 1;
            break;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == 0)
    {
        cout << "NOT FOUND";
    }
}
int main()
{
    binarySearch();
    return 0;
}