
        /// 250822, 7.30 pm


    #include <bits/stdc++.h>
    #include"MyStackConcepttual.h"
    using namespace std;


    int main () {

        Stack <int> *st = new Stack<int>();

        st->push(10);
        st->push(20);
        st->push(30);


        //cout<<st->Top()<<endl;
        cout<<"pop: "<<st->pop()<<endl;
        cout<<"pop: "<<st->pop()<<endl;

        cout<<"Top: "<<st->Top()<<endl;

        if (st->empty())
        {
            cout<<"The stack is empty"<<endl;
        }
        else
        {
            cout<<"The stack is not empty"<<endl;
        }

        cout<<"Size: "<<st->size()<<endl;







        return 0;
   }
