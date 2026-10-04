#include <iostream>
using namespace std;

void demonstrateBasicPointers()
{
    int value = 10;

    int* ptr = &value;
    int** doublePtr = &ptr;

    cout << "value           = " << value << '\n';
    cout << "*ptr              = " << *ptr << '\n';
    cout << "**doublePtr  = " << **doublePtr << '\n';
    
    // Modify the value through double pointer
    **doublePtr = 50;

    cout << "After **doublePtr = 50:\n";
    cout << "value                   = " << value << '\n';
    cout << '\n'; 
}

void allocateInteger(int** ptr)
{
    // *ptr represents the original pointer
    *ptr = new int(100);
}

void demonstratePointerModification()
{
    int* ptr = nullptr;

    cout << "Before allocation:\n";
    cout << "ptr = " << ptr << '\n';

    allocateInteger(&ptr);

    cout << "After allocation:\n";
    cout << "*ptr = " << *ptr << '\n';

    delete ptr;
    ptr = nullptr;

    cout << '\n';
}

int** createMatrix(int rows, int columns)
{
    int** matrix = new int*[rows];

    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];

        for(int j = 0; j < columns; j++) {
            matrix[i][j] = 0;
        }
    }

    return matrix;
}

void destroyMatrix(int** matrix, int rows)
{
    for(int i = 0; i < rows; i++)
    {
        delete[] matrix[i];
    }

    delete[] matrix;
}

void demonstrateMatrix()
{
    const int rows = 3;
    const int columns = 4;

    int** matrix = createMatrix(rows, columns);

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            matrix[i][j] = (i + 1) * 10 + j;
        }
    }

    cout << "Matrix:\n";

    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << ' ';
        }
        cout << '\n';
    }

    destroyMatrix(matrix, rows);

    cout << '\n';
}

struct Node 
{
    int data;
    Node* next;
};

void insertFront(Node** head, int value)
{
    Node* newNode = new Node;
    newNode->data = value;

    // * head is the actual head pointer
    newNode->next = *head;

    // Change the original head.
    *head = newNode;
}

void printList(Node* head)
{
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }

    cout << "nullptr\n";
}

void destroyList(Node** head)
{
    Node *current = *head;

    while(current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    // Change original head to nullptr
    *head = nullptr;
}

void demonstrateLinkedList()
{
    Node* head = nullptr;
    insertFront(&head, 10);
    insertFront(&head, 20);
    insertFront(&head, 30);

    cout << "Linked List:\n";
    printList(head);
    destroyList(&head);

    cout << "After destroying list:\n";
    if(head == nullptr) {
        cout << "head = nullptr\n";
    }

    cout << '\n';
}

int main()
{
    demonstrateBasicPointers();
    demonstratePointerModification();
    demonstrateMatrix();
    demonstrateLinkedList();
    return 0;
}