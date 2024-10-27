#include<iostream>
using namespace std;




// Define the structure for a Node
struct Node {
    int data;
    Node* next;
};
Node* head = nullptr;


// Function to insert a new node at the beginning of the linked list
void insertNodeAtBeginning(Node*& head, int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void insertthenewnode(Node*& head,int d)
{
    Node *tmp = new Node;
    tmp -> data = d ;
    tmp -> next = head ;
    // insert type of pointer
    // so in this case tmp -> next will point to the first node

    head = tmp ;
};
void insertthelastnode(Node*& head,int d)
{
    Node *pointer4 = new Node ;
    pointer4 -> data = d ;
    pointer4 -> next = NULL;
    if (head == NULL)
    {
        head  = pointer4;
    }
    else
    {
        Node *tmp = new Node ;
        tmp = head ;
        while(tmp != NULL)
        {
            tmp = tmp -> next ;
        }
        tmp -> next = pointer4 ;
    }
};
void deletenodefrombegin(Node*& head)
{
    Node *tmp ;
    tmp = head ;
    head = tmp -> next ;
    free(tmp);
};
void deletenodefromlast(Node*& head)
{
    Node *tmp1,*tmp2;
    tmp1 = head ;
    while(tmp1 != NULL)
    {
        tmp2 = tmp1 ;
        tmp1 = tmp1 -> next ;
    };
    tmp2 -> next = NULL;
    free(tmp1);
}
void reversed_linked_list(Node*& head)
{
    Node *tmp1,*tmp2,*tmp3;
    tmp1 = NULL;
    tmp2 = head ;
    while(tmp2 != NULL)
    {
        tmp3 = tmp2 -> next ;
        tmp2 -> next = tmp1 ;
        tmp1 = tmp2 ;
        tmp2 = tmp3 ;
    };
    head = tmp1 ;
};

bool findloopinlinkedlist(Node*& head)
{
    Node *tmp1,*tmp2;
    tmp1 = head ;
    tmp2 = head ;
    while(tmp2 != NULL && tmp2 -> next != NULL)
    {
        tmp1 = tmp1 -> next ;
        tmp2 = tmp2 ->next ->next ;
        if(tmp1 == tmp2)
        {
        return true ;
        }
        ;
    }
    return false ;
};
void showmid(Node*& head)
{
    Node *tmp1=head;
    Node *tmp2=head;
    while(tmp2 != NULL && tmp2 ->next != NULL)
    {
        tmp1 = tmp1 -> next;
        tmp2 = tmp2 -> next;
        tmp2 = tmp2 -> next;
    };
    cout<<"phan tu o giua la:";
    cout<<tmp1->data ;
    cout<<head ->data ;
}
void deleteNode(Node* ptr)
{
    // prt point to the index which you want to delete
    // tmp point to the next index which you want to delete
    Node *tmp ;
    tmp = ptr -> next ;
    ptr ->data = tmp -> data ;
    ptr ->next = tmp ->next ;
    free(tmp);
}

// Function to print the elements of the linked list
void printLinkedList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Declare an empty linked list

    // Insert elements into the linked list
    insertNodeAtBeginning(head, 3);
    insertNodeAtBeginning(head, 2);
    insertNodeAtBeginning(head, 1);
    reversed_linked_list(head);
    cout << "Linked List: ";
    printLinkedList(head);
    // Print the elements of the linked list
    // cout << "Linked List: ";
    // printLinkedList(head);
    // cout << endl ;
    // insertthenewnode(head, 4);
    // cout<<"Linked list";
    // printLinkedList(head);
    // showmid(head);
    // deletenodefrombegin(head);
    // cout<<"Linked list";
    // printLinkedList(head);
    // deletenodefromlast(head);
    // cout<<"Linked list";
    // printLinkedList(head);
    if (findloopinlinkedlist(head))
        cout<<"true";
    else
    {
        cout<<"fasle";
    }
    return 0;
}