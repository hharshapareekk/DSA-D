

#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float sgpa;
};

// Function to input student data
void inputStudentData(Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Roll No for student " << i + 1 << ": ";
        cin >> students[i].rollNo;
        cout << "Enter Name for student " << i + 1 << ": ";
        cin.ignore(); // Ignore any previous newline character
        getline(cin, students[i].name);
        cout << "Enter SGPA for student " << i + 1 << ": ";
        cin >> students[i].sgpa;
    }
}

// Function to display a list of students
void displayStudents(Student students[], int n)
{
    cout << "Student List:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Roll No: " << students[i].rollNo << ", Name: " << students[i].name << ", SGPA: " << students[i].sgpa << endl;
    }
}

// Rest of the code for sorting, searching, etc. (as provided in the previous responses)

// a.Design a roll call list, arrange the list of students according to roll numbers in ascending order using Bubble Sort

void bubbleSort(Student students[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (students[j].rollNo > students[j + 1].rollNo)
            {
                // Swap students[j] and students[j+1]
                Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int choice;
    cin >> choice;
    const int numStudents = 3;
    Student students[numStudents];
    int n = sizeof(students) / sizeof(students[0]);

    // Input student data
    inputStudentData(students, numStudents);
    cout << "WHAT DO YOU WISH TO DO WITH YOUR STUDENT DATA:\n1.Ascending order with respect to roll numbers\n2.Ascending order with respect to roll numbers\n3.Find first 10 toppers\n4. Search students according to SGPA. If more than one student having same SGPA, then output
            list of all students having same SGPA\n5.Search a particular student according to name "
            
    while(true)
    {switch (choice)
    {
    case 1:
    {
        bubbleSort(students, n);
        for (int i = 0; i < n; i++)
        {
            cout << "Roll No: " << students[i].rollNo << " , "
                 << "Name: " << students[i].name << " , "
                 << "SGPA:" << students[i].sgpa << endl;
        }
        break;
    }
    case 2:
    {

        break;
    }

    }
    }
    return 0;
}
