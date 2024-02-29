
    // header file for only singly linked list only node part
    // this is included in queue header file
    #include <bits/stdc++.h>
    using namespace std;
    template <typename T>
    class Node
    {
    public:
        T val;
        Node *next;

        Node(T val)
        {
            this -> val = val;
            this -> next = NULL;
        }
    };
