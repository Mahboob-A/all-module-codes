

    /// Template Code Main File
    /// 23-1 Generic Implementation of Stack using Template | Part 2
    // Mod date- 170822,Wednesday,  Watch date: 240822, Wednesday

    #include <bits/stdc++.h>
    #include"MyStackTemplateHeader.h"
    using namespace std;

    /// for mod 23 3

     // class of person to insert in Stack

    // id
    int IDpass = 100;
    class person
    {
        string name;
        int id;
        float salary;

    public:
        person() // null constructor
        {
            name = "";
            id = -1;
            salary = -1.0;
        }


        // setter
        void setName(string name)
        {
            this -> name = name;
        }

        void setSalary(float salary)
        {
            this -> salary = salary;
        }

        // getter
        int getId()
        {
            return id;
        }

        string getName()
        {
            return name;
        }

        float getSalary()
        {
            return salary;
        }

        void print()
        {
            cout<<name << " | " << id << " | " << salary  <<endl;
        }

        // constructor to assign values
        person(string name, float salary)
        {
            setName(name);
            setSalary(salary);
            id = IDpass;
            IDpass++;
        }


    };

    int main() {



        Stack <person> sta;
        person c ("Abul Qasim", 979.65);
        person a ("Abul Kalam", 324.98);
        person b ("Samsul Islam", 376.63);

        // top e ke asbe seta push er opor dependent
        // push jake je serial e kora hobe se sei vabe stack e bosbe.
        // last line e jake push kora holo sei holo Last In tar mane sei akhn top e ache
        sta.push(c);
        sta.push(a);
        sta.push(b);


        person printObj;

        /*
        while(!sta.empty())
        {
            printObj = sta.pop();
            printObj.print();
        }
        */

        printObj = sta.Top();
        printObj.print();

        cout<<"size: "<<sta.size()<<endl;




        ///*

        cout<<"\n\nStack Int"<<endl;
        Stack <int> st;

        st.push(6);
        st.push(2);
        st.push(3);
        st.push(4);
        st.push(10);
        cout<<st.Top()<<endl;
        //st.Top();
        cout<<st.pop()<<endl;
        cout<<st.size()<<endl;

        cout<<endl<<endl;
        while(!st.empty())
        {
            cout<<st.pop()<<" ";
        }
        if (!st.empty()) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;


        Stack <string> st1;
        st1.push("Ok");
        cout<<st1.pop()<<endl;

        Stack <char> st2;
        st2.push('a');
        cout<<st2.pop()<<endl;
        //*/










        /// for mod 23 - 2
        // below code has bug or the stack header file has bug
        // seek support and fix it

        /*

        Stack <float> st;

        st.push(1.3);
        st.push(2.6);
        st.push(3.5);
        st.push(4.8);
        st.push(5.9);

        if (!st.empty()) cout<<"The stack is not empty"<<endl;  // true
        else cout<<"The stack is empty"<<endl;

        //cout<<"The size of the stack is: "<<st.size()<<endl;  // 4

        //if(st.Top() != -1) cout<<"The Top element is: "<<st.Top()<<endl;         // 5

        //cout<<"The popped element is: "<<st.pop()<<endl;  // 5

        //if(st.Top() != -1) cout<<"The Top element is: "<<st.Top()<<endl;       // 4

        /*
        if (!st.empty()) cout<<"The Top element is: "<<st.Top()<<endl;

        cout<<"The size of the stack is: "<<st.size()<<endl;  // 4

        if (!st.empty()) cout<<"The stack is not empty"<<endl;  // true
        else cout<<"The stack is empty"<<endl;

        cout<<"The popped element is: "<<st.pop()<<endl;
        //if(st.Top() != -1) cout<<"The Top element is: "<<st.Top()<<endl;

        while(!st.empty())
        {
            cout<<"The popped element is: "<<st.pop()<<endl;
        }

        if (!st.empty()) cout<<"The Top element is: "<<st.Top()<<endl;
        if (!st.empty()) cout<<"The stack is not empty"<<endl;  // true
        else cout<<"The stack is empty"<<endl;

        */




        return 0;
    }
