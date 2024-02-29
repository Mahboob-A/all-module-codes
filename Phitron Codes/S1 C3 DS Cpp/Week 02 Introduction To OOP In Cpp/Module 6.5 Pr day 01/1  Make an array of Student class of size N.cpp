    /// 1 - 1: Make an array of Student class of size N. Template is given below
    //200722 04.20 pm

    #include <bits/stdc++.h>
    using namespace std;

    class Student
    {
    private:
        string password;

    protected:
        int english_marks;

    public:
        string name;
        char section;
        int roll;
        int standard;

    void set_marks(int eng_mrks)
    {
        english_marks = eng_mrks;
    }

    void set_password(string pass)
    {
        password = pass;
    }

    void update_marks(string key, int marks)
    {
        if (key == password)
        {
            english_marks = marks;
            cout<<"Marks update done!"<<endl;
            standard = -1;
        }                               /// make a correction of the get_standard() function
        else
        {
            cout<<"Password is incorrect!"<<endl;
            cout<<"Marks could not be updated, please input correct password"<<endl;
            standard = -2;
        }
    }


    int get_marks()
    {
        return english_marks;
    }

    int get_standard()
    {
        return standard;
    }


    };


    int main() {
        int i, n, base= 1;
        cout<<"Input number of students: "<<endl;
        cin>>n;
        Student a[n];

        cout<<"Input "<<n<<" students name, section, roll, English Marks and create a password: "<<endl;
        for (i=0; i<n; i++)
        {
           string name, password;
           char section;
           int eng_mrks, roll;
           cin>>name>>section>>roll>>eng_mrks>>password;
           a[i].name = name;
           a[i].section = section;
           a[i].roll = roll;
           a[i].set_marks(eng_mrks);
           a[i].set_password(password);
        }

        cout<<"Do you want to update English marks of a Student? input any key to continue / n to stop: "<<endl;
        char input;
        cin>>input;
        if (input == 'n')
        {
            return 0;
        }

        int roll, marks;
        string password;
        bool found = false;
        cout<<"Input roll, new English marks and password to update English marks of that Student: "<<endl;
        cin>>roll>>marks>>password;
        for (i=0; i<n; i++)
        {
            if (a[i].roll == roll)
            {
                found = true;
                a[i].update_marks(password, marks);
            }
        }

        if (!found)
        {
            cout<<"Student not found!"<<endl;
            base = -10;

        }

        if (a[i].get_standard() == -2)  // code has bug here  cant call like this a[i] while not in a loop fix how can i solve it
         {
            cout << "Working"<<endl;
        }



        if ( base == 1)  // put a[i].get_standard() == -1 this condition with && base == 1 to print in such joined condition
        {
            for (i=0; i<n; i++)
            {
                cout<<a[i].name<<" "<<a[i].section<<" "<<a[i].roll<<" "<<a[i].get_marks()<<endl;
            }
        }

        return 0;
    }

