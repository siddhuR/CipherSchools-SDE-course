#include<iostream>
using namespace std;

class node
{
    public:

    int data;   // Let us assume for now that the datawhich the linked list is storing is int
    node * next;

    node(int data_input) {
        this->data = data_input;
        this->next = NULL;
    }
};

void printnode(node * & node)
{
    cout<<" Value "<<node->data;
    cout<<" Address "<<node->next;
}

void printlinkedlist(node * head )
{
    if(head==NULL)
    {
        cout<<"The linked list is still empty!! "<<endl;
        return;
    }

    node *temp;
    temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" -->";
        temp = temp->next;
    }
    cout<<endl;
}

void Insertatstart(node * &head, int data)
{
    node * temp = new node(data);

    if(head==NULL)
    {
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

void Insertatend(node * &head, int data)
{
    node *temp = new node(data);

    if(head==NULL)
    {
        head = temp;
        return;
    }

    node *end;
    end = head;

    while(end->next!=NULL)
    {
        end = end->next;
    }
    // After this while loop is complete, we have basically reached the end element

    end->next = temp;
}

void Insertatmiddle(node *&head, int location, int data)
{
    node *temp = new node(data);

    node *var = head;

    while(var->data!=location)
    {
        var = var->next;
    }

    // Now var will have the node address of the element at which the new data is going to be inserted

    temp->next = var->next;
    var->next = temp;
    
}

void deletenodeoflinkedlist(node *&head, int data)
{
    if(head->data == data)
    {
        cout<<"The head of the linked list is going to be deleted !! "<<endl;
        head = head->next;
        return;
    }

    node *temp;
    node *prev;
    temp = head;

    while(temp->data!=data)
    {
        if(temp->next==NULL)
        {
            cout<<"The elementto be deleted doesnt exists "<<endl;
            return;
        }
        prev = temp;
        temp = temp->next;
    }

    if(temp->next == NULL)
    {
        prev->next = NULL;
        return;
    }

    prev->next = prev->next->next;
}

int main()
{

     //  Head of a linked list is nothing but a fancy term to indicate the top or the first element of the linked list
    node * head=NULL;
    
    Insertatend(head, 5);
    Insertatend(head, 7);
    Insertatend(head, 8);


    Insertatstart(head,3);
    printlinkedlist(head);
    Insertatstart(head,2);
    printlinkedlist(head);

    Insertatend(head,9);
    Insertatend(head,10);

    printlinkedlist(head);

    Insertatmiddle(head,3,4);
    Insertatmiddle(head,5,6);
    printlinkedlist(head);


    deletenodeoflinkedlist(head,2);
    deletenodeoflinkedlist(head,10);
    deletenodeoflinkedlist(head,6);
    deletenodeoflinkedlist(head,11);

    printlinkedlist(head);

    return 0;
    
}