#include<bits/stdc++.h>

using namespace std;


// Declaring the TreapNode

struct Treap_Node{

    int key_value;

    int priority;

    Treap_Node * left_ptr ;
    Treap_Node * right_ptr ;

    Treap_Node(int val) // constructor
    {
        this->key_value=val;
        this->left_ptr=NULL;
        this->right_ptr=NULL;
        this->priority=rand()/100;

    }

};



int main()
{

    // Functions to be called and implemented.

    return 0;
}
