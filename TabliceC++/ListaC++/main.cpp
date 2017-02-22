#include <iostream>

using namespace std;
struct Node
{
    int value;
    Node* next;
    Node();
};
Node::Node()
{
    next=0;
}

struct List
{
    Node* first;
    List();
    void add(int value1);
    void wyswietl();
    void usun(int value1);
};
List::List()
{
    first=0;
}

void List::add(int value1)
{
    Node* nowy= new Node();
    Node* tmp = new Node();
    tmp = first;

    nowy->value=value1;
    nowy->next=0;

    if(first==0)
    {
        first=nowy;
        cout << "pierwszy element listy: " << endl;
    }
    else
    {
        while(tmp->next!=0)
        {
            tmp=tmp->next;

        }
        tmp->next=nowy;

    }

}
void List::wyswietl()
{

    Node* tmp;
    tmp=first;

    while(tmp!=0)
    {
        cout << tmp->value << endl;
        tmp=tmp->next;
    }
}
void List::usun(int value1)
{
    int i=0;
    Node* tmp = first;

    if(tmp->value==value1)
    {
        cout << "usunieto pierwszy XD" << endl;
        first=tmp->next;
    }
    else
    {
        while(tmp!=0)
        {
            tmp=tmp->next;
            if(tmp->next->value==value1)
            {
                i++;
                cout << " usunieto "<< i+1 << " element"<< endl;
                tmp->next=tmp->next->next;
            }

        }

    }

}
int main()
{
     cout << "Hello world!" << endl;

    List* lista = new List();
    lista->add(5);
    lista->add(3);
    lista->add(7);
    lista->usun(3);
    lista->wyswietl();

    return 0;
}
