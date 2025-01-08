#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};


int main()
{
    // Node *a = new Node(10);
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout << a.val << endl;
    // 
    // cout << c.val << endl;
    // cout << d.val << endl;
    // cout << a.next << endl;
    // cout << (*a.next).val << endl;
    // cout << b.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->next->val << endl;
    cout << (*c.next).val << endl;
    cout << c.next->val << endl;
    // cout << (*c.next).val << endl;
    return 0;
}