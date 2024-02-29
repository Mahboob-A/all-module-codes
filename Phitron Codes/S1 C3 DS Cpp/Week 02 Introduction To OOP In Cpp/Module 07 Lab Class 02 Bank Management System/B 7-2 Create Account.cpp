


            /// 7-2 Create Account
            // 210722 05.10 pm


    /// A - Making of Create Bank Account And Get_Balance. Return created account to main function and working with de-referencing using returned object and access class members using the object

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
            this -> balance = 0;
            this -> account_number = rand() % 1000000000;  // shorting the random number so that it doesnot overflow the int limit
            cout<<"!!! Congratulations! your bank account has been created: !!!"<<endl<<endl;
            cout<<"\tYour Details Are: "<<endl;
            cout<<"Name: [ "<<this->account_holder_name<<" ]"<<" "<<"Address: [ "<<this->holder_address<<" ]"<<" "<<"Age: [ "<<this->age<<" ]"<<endl;
            cout<<"Your Bank Account Number Is: "<<this -> account_number<<endl;   // if " this " has not been used here, it will be of no problem.

        }

        // method: getter to show bank balance

        int get_balance(string password)
        {
            if (this-> password == password) // " this " pointer is being used only because of the class member name and the function parameter dt name is same, if they were written different then this was no needed to use
            {
                return this -> balance;
            }
            else
            {
                return -1;
            }
        }
        /// also in this way it can be done
        /*
        int get_balance(string pass)
        {
            if (password == pass)
            {
                return balance;
            }
            else
            {
                return -1;
            }
        }
        */


    };

    // a function to create bank account:
    BankAccount* createAccount ()
    {
        string name, address, pass;
        int age;
        cout<<"\t!!! Bank Account Creation !!!"<<endl<<endl;
        cout<<"Input Account Holder Name, Address, Age and creare a Password: "<<endl;
        cin>>name>>address>>age>>pass;
        // Now creating a dynamic object and it will be saved it heap memory so the object will not be deleted.
        // if we had done this " BankAccoutn createAccount() " then this will be saved in static memory and it will be deleted once program goes out of this function
        // and we will not be able to use it in the main function.
        // so we are creating a dynamic object so that it is not deleted until " delete(object_name) is received.
        BankAccount *myAccount = new BankAccount(name, address, age, pass); // inputting values to BankAccount class using constructor
        // returning the object using pointer
        return myAccount;
    }

    int main() {

        BankAccount *newAccount = createAccount();  // receiving the returned object in a class type variable using create_Account function
        // *newAccount is a pointer, so, We need to dereference the pointer-obejct to access its memebers
        if (newAccount -> get_balance("abc") == -1)  // accessing the class method using the object by dereferencing
        {
            cout<<"\t*** Incorrect Password! ***"<<endl;
            cout<<"Account Balance Could Not Be Fetched. Please Input Correct Password."<<endl;
        }
        else
        {
            cout<<"Your Bank Account Balace is: "<<newAccount -> get_balance("abc")<<endl;
        }



        return 0;
    }

