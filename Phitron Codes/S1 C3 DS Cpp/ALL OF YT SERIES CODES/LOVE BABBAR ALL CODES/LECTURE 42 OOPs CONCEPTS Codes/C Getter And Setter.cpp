


            /// C Getter and Setter
            //180722 10.00 am

    #include <iostream>

    using namespace std;

    class Hero
    {
        private:    // private member

        int level;
        int health;

        public:

        void print()
        {
            cout<<"Level is: "<<level<<endl;
            cout<<"Health is: "<<health<<endl;
        }

        int getLevel()   // getter to fetch the value of private member level
        {
            return level;
        }

        int getHealth()   // getter to fetch the value of private member health
        {
            return health;
        }

        void setLevel(int password, int l)  // setter to set value to private member level
        {
            if (password == 1234)
            {
                level = l;
            }
            else
            {
                cout<<"Password is incorrect!"<<endl;
                level = -1;
            }

        }

        void setHealth(int password, int h)   // // setter to set value to private member health
        {
            if (password == 1234)
            {
                health = h;
            }
            else
            {
                cout<<"Password is incorrect!"<<endl;
                health = -1;
            }

        }


    };

    int main() {

        Hero superman;

        superman.setLevel(1234, 5);
        if (superman.getLevel() == -1)
        {
            // print nothing.
        }
        else
        {
            cout<<"Value of superman's Level using setter is: "<<superman.getLevel()<<endl;
        }

        superman.setHealth(1231, 10);
        if (superman.getHealth() == -1)
        {
            // print nothing.
        }
        else
        {
            cout<<"Value of superman's Health using setter is: "<<superman.getHealth()<<endl;
        }




         return 0;
    }


    /


    #include <bits/stdc++.h>

    using namespace std;

    class Hero
    {
    private:
        char name[100];
        int health;
        int level;
        int standard;

    public:

        char getName()   // can we return char?
        {
            return name;
        }

        int getHealth()
        {
            return health;
        }

        int getStandard()
        {
            return standard;
        }

        int getLevel()
        {
            return level;
        }

        void setName(char str[])
        {
            strcpy(name, str);
        }


        void setHealth(int password, int h)
        {
            if (password == 1234)
            {
                health = h;
            }
            else
            {
                cout<<"Password is incorrect!"<<endl;
                standard = -1;
            }
        }

        void setLevel(int password, int l)
        {
            if (password == 1234)
            {
                level = l;
            }
            else
            {
                cout<<"Password is incorrect!"<<endl;
                standard = -1;
            }
        }

    };

    int main() {

        Hero superman;

        // code has bug in char section seek support
        // how to deal with string in case of setter and getter

        superman.setName("ok");
        cout<<"Name of the superman is: "<<superman.getName()<<endl;

        superman.setHealth(123, 10);

        if (superman.getStandard() == -1)
        {

        }
        else
        {
            cout<<"Health level of superman by setter is: "<<superman.getHealth()<<endl;
        }


        superman.setLevel(123, 50);
        if (superman.getStandard() == -1)
        {

        }
        else
        {
            cout<<"Level of superman by setter is: "<<superman.getLevel()<<endl;
        }


        return 0;
    }



    */



