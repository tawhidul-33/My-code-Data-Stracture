// 11
// 0 10
// 2 5
// 1 20
// 1 30
// 0 40
// 2 0
// 0 50
// 2 2
// 1 60
// 2 3
// 2 3
#include <bits/stdc++.h>
using namespace std;
class Node 
{
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) 
{
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void insert_at_head(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
        tail = newNode;
    }
}

void delete_head(Node*& head, Node*& tail) {
    if (head == NULL)
    {
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void delete_at_tail(Node*hade,Node*&tail,int indx)
{
    Node*tmp=hade;
    for(int i=1;i<indx;i++)
    {
        tmp=tmp->next;
    }
    Node*deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    tail=tmp;
}

 void delete_any_pos(Node*&hade,int indx)
{
    Node*tmp=hade;
    for(int i=1;i<indx;i++)
    {
        tmp=tmp->next;
    }
    Node*deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}


void link_list_print(Node* head) {
  
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int link_list_size(Node*&head)
{
    Node*tmp;
    tmp=head;
    int size=0;
    while(tmp!=NULL)
    {
        size++;
        tmp=tmp->next;
    }
    return size;
    
}


int main() {
    int t;
    cin >> t;
    Node* head = NULL;
    Node* tail = NULL;

    while (t--) {
        int indx, nv;
        cin >> indx >> nv;
        int siz=link_list_size(head);
        if (indx == 0) {
            insert_at_head(head, tail, nv);
        } else if (indx == 1) {
            insert_at_tail(head, tail, nv);
        } else if (indx == 2) 
        {
            if(nv==0)
            {
                delete_head(head,tail);
            }
            else if(nv==siz-1)
            {
              delete_at_tail(head,tail,nv);
            }
            else if(nv>=siz||nv<0)
            {
                link_list_print(head);
                continue;
                
            }
            else 
            {
                delete_any_pos(head, nv);
            }
        }

        link_list_print(head);
    }

    return 0;
}
