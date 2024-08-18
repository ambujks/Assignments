#include <iostream>
using namespace std;

// Definition of the Node class for the linked list
class Node
{
public:
    int data;   // Data part of the node
    Node *next; // Pointer to the next node

    // Constructor to initialize the node
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Function to insert a new node at the tail of the linked list
void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val); // Create a new node
    if (head == NULL)
    { // If the linked list is empty, make the new node the head
        head = n;
        return;
    }
    Node *temp = head; // Temporary pointer to traverse the list
    while (temp->next != NULL)
    { // Traverse to the last node
        temp = temp->next;
    }
    temp->next = n; // Set the next of the last node to the new node
}

// Function to insert a new node at the head of the linked list
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val); // Create a new node
    n->next = head;          // Point the new node's next to the current head
    head = n;                // Make the new node the head
}

// Function to delete a node with a specific value
void deleteNode(Node *&head, int val)
{
    // If the list is empty, there's nothing to delete
    if (head == NULL)
    {
        cout << "List is empty, cannot delete." << endl;
        return;
    }

    // If the node to be deleted is the head node
    if (head->data == val)
    {
        Node *temp = head; // Temporary pointer to store the head node
        head = head->next; // Move the head to the next node
        delete temp;       // Delete the old head node
        return;
    }

    // Otherwise, find the node to delete
    Node *temp = head; // Temporary pointer to traverse the list
    while (temp->next != NULL && temp->next->data != val)
    {
        temp = temp->next; // Move to the next node
    }

    // If the node to delete was found
    if (temp->next != NULL)
    {
        Node *toDelete = temp->next;   // Pointer to the node to be deleted
        temp->next = temp->next->next; // Bypass the node to delete
        delete toDelete;               // Delete the node
    }
    else
    {
        cout << "Node with value " << val << " not found." << endl;
    }
}

// Function to display the linked list
void display(Node *head)
{
    Node *temp = head; // Temporary pointer to traverse the list
    while (temp != NULL)
    {                                 // Traverse the entire list
        cout << temp->data << " -> "; // Print each node's data
        temp = temp->next;            // Move to the next node
    }
    cout << "NULL" << endl; // Indicate the end of the list
}

int main()
{
    Node *head = NULL; // Initialize the linked list as empty

    // Insert some nodes at the tail
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);

    // Display the linked list
    cout << "Linked List: ";
    display(head);

    // Insert a node at the head
    insertAtHead(head, 5);
    cout << "After inserting 5 at the head: ";
    display(head);

    // Delete a node from the linked list
    deleteNode(head, 20);
    cout << "After deleting 20 from the list: ";
    display(head);

    // Attempt to delete a node that doesn't exist
    deleteNode(head, 100);

    return 0;
}