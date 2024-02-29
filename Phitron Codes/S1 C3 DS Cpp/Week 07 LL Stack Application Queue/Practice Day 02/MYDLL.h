
    #include <bits/stdc++.h>
    using namespace std;
    template <typename T>
    class dNode
    {
    public:
        T val;
        dNode *next;
        dNode *prev;

        dNode(T val)
        {
            this -> val = val;
            this -> next = NULL;
            this -> prev = NULL;
        }
    };
