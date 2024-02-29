


            /// 7-1 Make BankAccount Class
            // 210722 04.15 pm


    /// A - Making of Class BankAccount and Constructor to take input

    /// " this " pointer:

    // usage if " this " pointer here (use "this" pointer if constructor parameter dt names and class member dt names are same)
    // just dereference the member using " this " pointer and assign value

    #include <bits/stdc++.h>
    using namespace std;

    class BankAccount
    {
    public:
        string account_holder_name;
        string holder_address;
        int age;
        int account_number;

    protected:
        int balance;

    private:
        string password;

    public:   // making a constructor to input the details
        BankAccount(string account_holder_name, string holder_address, int age, string password)
        {
            this -> account_holder_name = account_holder_name;  // using this pointer as parameter and class member names are same
            this -> holder_address = holder_address;
            this -> age = age;
            this -> password = password;  // in this case, if " this "  pointer not used, it will also work or will be of no problem
            this -> account_number = rand() % 1000000000;  // shorting the random number so that it doesnot overflow the int limit
            cout<<"Your Bank Account Number is: "<<this -> account_number<<endl; // if " this " has not been used here, it will be of no problem
        }



    };

    int main() {

        BankAccount user_1("Mahboob Alam", "Kharibona", 25, "ppk");



        return 0;
    }
