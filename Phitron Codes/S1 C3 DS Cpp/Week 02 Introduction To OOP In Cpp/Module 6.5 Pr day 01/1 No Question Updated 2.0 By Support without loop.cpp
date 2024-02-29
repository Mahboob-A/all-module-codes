


                /// 1 No Question Updated 2.0 By Support without loop.cpp
                //210722 12.100 pm

                /// need to fix my own updated using the concept here


    #include <iostream>
    using namespace std;

    // int flag = 0;

    class Student
    {
    public:
        string name;
        char section;
        int roll;
        int flag;

    protected:
        int english_marks;

    private:
        string password;

    public:
        void set_marks (int eng_mrks)
        {
            english_marks = eng_mrks;
        }

        void set_password (string key)
        {
            password = key;
        }

        void update_marks (string key, int eng_mrks)
        {
            if (key == password)
            {
                english_marks = eng_mrks;
                cout<<endl<<"!!! English marks updation of "<<name<<" is successfully completed !!!"<<endl<<endl;
                flag = 1;

            }
            else
            {
                cout<<endl<<"***Failed! system could not update marks***"<<endl<<endl;
                cout<<"The password is incorrect!"<<endl;
            }
        }

        int get_marks ()
        {
            return english_marks;
        }


    };
    int main()
    {

        cout<<"Input numbr of students: "<<endl;
        int i, n;
        cin>>n;

        string name, pass;
        char sec;
        int roll, marks;
        Student stdn[n];

        cout<<"Input "<<n<<" students Name, Section, Roll, English Marks and create a Password: "<<endl;
        for (i=0; i<n; i++)
        {
            cin>>name>>sec>>roll>>marks>>pass;

            stdn[i].name = name;
            stdn[i].section = sec;
            stdn[i].roll = roll;
            stdn[i].set_marks(marks);
            stdn[i].set_password(pass);
        }

        cout<<"Do you want to update English Marks of a student? Press any key to continue or n to stop: "<<endl;
        char input;
        cin>>input;
        if (input == 'n')
        {
            cout<<"You have inputed all details successfully!"<<endl;
            return 0;
        }

        cout<<"Input Roll, New Marks and previous Password of the student to update marks: "<<endl;
        cin>>roll>>marks>>pass;
        bool found = false;
        int mark;
        for (i=0; i<n; i++)
        {
            if (stdn[i].roll == roll)
            {
                mark = i;
                found = true;
                stdn[i].update_marks(pass, marks);
            }
        }

        if (!found)
        {
            cout<<endl<<endl<<"The studnet does not exist in our database: "<<endl;
            cout<<"Please input the data first."<<endl<<endl;
            cout<<"Data you have inputed: are as follows:: "<<endl<<endl;
            for (i=0; i<n; i++)
            {
                cout<<"Name:["<<stdn[i].name<<"]"<<" "<<"Section:["<<stdn[i].section<<"]"<<" "<<"Roll:["<<stdn[i].roll<<"]"<<" "<<"English Marks:["<<stdn[i].get_marks()<<"]"<<endl;
            }
        }

        // use below concept to access

        /**cout << "The updated marks of the requested student is: " << endl;
        cout << "Student Name: " << stdn[mark].name <<" "<<"Section:["<<stdn[mark].section<<"]";
        cout << " "<<"Roll:["<<stdn[mark].roll<<"]"<<" "<<"Updated English Marks:["<<stdn[mark].get_marks()<<"]"<<endl;*/

        if (stdn[mark].flag == 1)
        {
            cout<<"The updated marks of the student " << stdn[mark].name << " is: as follows:: "<<endl<<endl;
            for (i=0; i<n; i++)
            {
                if (mark == i)
                {
                    cout<<"Name:["<<stdn[i].name<<"]"<<" "<<"Section:["<<stdn[i].section<<"]"<<" "<<"Roll:["<<stdn[i].roll<<"]"<<" "<<"Updated English Marks:["<<stdn[i].get_marks()<<"]"<<endl;
                }
            }

            cout<<endl;

            cout<<"The marks of all other stuents are: as follows:: "<<endl<<endl;
            for (i=0; i<n; i++)
            {
                if (mark == i)
                {
                    continue;
                }
                cout<<"Name:["<<stdn[i].name<<"]"<<" "<<"Section:["<<stdn[i].section<<"]"<<" "<<"Roll:["<<stdn[i].roll<<"]"<<" "<<"English Marks:["<<stdn[i].get_marks()<<"]"<<endl;
            }
        }

        return 0;
    }
