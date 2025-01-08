#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    

    head->next = b;
    b->next = c;
    c->next = d;

    // cout << a->val << endl;
    // cout << b->val << endl;
    // cout << c->val << endl;
    // cout << d->val << endl;

    // cout << a->next->val;
    // cout << b->next->next->val;

    //printing list
    Node *temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }



    // a.next = &b;
    // b.next = &c;
    // c.next = &d;
    // cout << c.next << endl;
    // cout << d.next;

    // cout << a.val << endl;
    //
    // cout << c.val << endl;
    // cout << d.val << endl;
    // cout << a.next << endl;
    // cout << (*a.next).val << endl;
    // cout << b.val << endl;
    // cout << a.next->val << endl;
    // cout << a.next->next->next->val << endl;
    // cout << (*c.next).val << endl;
    // cout << c.next->val << endl;
    // cout << (*c.next).val << endl;
    return 0;
}