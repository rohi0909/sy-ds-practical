#include <iostream>
using namespace std;

struct employee
{
    string empName;
    int empId;
    float empSalary;
    employee* next;
};

employee* head = NULL;


void Insert()
{
    employee* newNode = new employee;

    cout << "Enter Employee Name: ";
    cin >> newNode->empName;

    cout << "Enter Employee Id: ";
    cin >> newNode->empId;

    cout << "Enter Employee Salary: ";
    cin >> newNode->empSalary;

    newNode->next = head;
    head = newNode;

    cout << "Employee Record Inserted Successfully\n";
}

void deleteNode(int id)
{
    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    employee* temp = head;
    employee* prev = NULL;

    if (temp->empId == id)
    {
        head = temp->next;
        delete temp;
        cout << "Employee Deleted Successfully\n";
        return;
    }

    while (temp != NULL && temp->empId != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Employee Not Found\n";
        return;
    }

    prev->next = temp->next;
    delete temp;

    cout << "Employee Deleted Successfully\n";
}


void display()
{
    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    employee* temp = head;

    while (temp != NULL)
    {
        cout << "\nName: " << temp->empName;
        cout << "\nID: " << temp->empId;
        cout << "\nSalary: " << temp->empSalary << endl;

        temp = temp->next;
    }
}


void search(int id)
{
    if (head == NULL)
    {
        cout << "List is Empty\n";
        return;
    }

    employee* temp = head;

    while (temp != NULL)
    {
        if (temp->empId == id)
        {
            cout << "\nEmployee Found:\n";
            cout << "Name: " << temp->empName;
            cout << "\nID: " << temp->empId;
            cout << "\nSalary: " << temp->empSalary << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Employee Not Found\n";
}

int main()
{
    int choice, id;

    do
    {
        cout << "\n===== Employee Record Management =====\n";
        cout << "1. Insert Employee\n";
        cout << "2. Delete Employee\n";
        cout << "3. Display Employee\n";
        cout << "4. Search Employee\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            Insert();
            break;

        case 2:
            cout << "Enter Employee ID to Delete: ";
            cin >> id;
            deleteNode(id);
            break;

        case 3:
            display();
            break;

        case 4:
            cout << "Enter Employee ID to Search: ";
            cin >> id;
            search(id);
            break;

        case 5:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while (choice != 5);

    return 0;
}