


            /// just a lil bit clean code
            // 220722 07.30 pm




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
            cout<<endl<<"!!! Congratulations! your bank account has been created: !!!"<<endl<<endl;
            cout<<"\t:Your Details Are: "<<endl;
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
                cout<<"\t*** !Incorrect Password! ***"<<endl;
                cout<<"Account Balance Could Not Be Fetched. Please Input Correct Password."<<endl;
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

        // a class member to receive the inputed password and amount by user through add_money() fuction below
        void add_money(string password, int amount)    // the member receives the password and the amount and verifies and completes the transaction
        {
            if (amount < 0)
            {
                cout<<"\t*** Add Money To Bank Account Is Unsuccessful ***"<<endl<<endl;
                cout<<"!Invalid Denomination Entered!"<<endl;
                return;
            }
            if (this-> password == password)
            {
                this -> balance += amount;
                cout<<endl<<"\t!Add Money To Bank Account Is Successful!"<<endl<<endl;
            }
            else
            {
                cout<<"\t*** Add Money To Bank Account Is Unsuccessful ***"<<endl<<endl;
                cout<<"\t!Password Is Incorrect!"<<endl;
            }
        }

        void withdrawl_money(string password, int amount)
        {
            if (amount < 0)
            {
                cout<<"\t*** Money Withdrawl From Bank Account Is Unsuccessful ***"<<endl<<endl;
                cout<<"!Invalid Denomination Entered!"<<endl;
                return;
            }

            // the logic of this is done in nested if in 103 line both does same thing
            /*
            if (this -> balance < amount)
            {
                cout<<"\t*** Money Withdrawl Unsuccessful ***"<<endl<<endl;
                cout<<"\t!Insufficient Balance In Bank Account!"<<endl;
                return;
            }
            */
            if (this -> password == password)
            {
                if (this -> balance >= amount)
                {
                    this -> balance -= amount;
                    cout<<endl<<"\t!Money Withdrawl From Bank Account Is Successful!"<<endl<<endl;
                }
                else
                {
                    cout<<"\t*** Money Withdrawl From Bank Account Is Unsuccessful ***"<<endl<<endl;
                    cout<<"\t!Insufficient Balance In Bank Account!"<<endl;
                    return;
                }

            }
            else
            {
                cout<<"\t*** Money Withdrawl From Bank Account Is Unsuccessful ***"<<endl<<endl;
                cout<<"\t!Password Is Incorrect!"<<endl;
            }
        }
        friend class MyCash;
    };


    class MyCash
    {

    protected:
        int balance;

    public:

        MyCash()
        {
            this -> balance = 0;
        }

        void add_money_from_bank_member(BankAccount *newAccount, string password, int amount)
        {
            if (amount < 0)
            {
                cout<<"\t*** Add Money To MyCash Is Unsuccessful ***"<<endl<<endl;
                cout<<"!Invalid Denomination Entered!"<<endl;
                return;
            }
            if (newAccount -> balance < amount)
            {
                cout<<"\t*** Add Money To MyCash Is Unsuccessful ***"<<endl<<endl;
                cout<<"\t!Insufficient Balance In Bank Account!"<<endl;
                return;
            }
            if (newAccount -> password == password)
            {
                this -> balance += amount;
                newAccount -> balance -= amount;
                cout<<"\t!Add Money From Bank Account To MyCash Is Successful!"<<endl<<endl;
            }
            else
            {
                cout<<"\t*** Add Money From Bank Account To MyCash Is Unsuccessful ***"<<endl<<endl;
                cout<<"\t!Password Is Incorrect!"<<endl;
            }
        }

        int get_balance(BankAccount* newAccount, string password)
        {
            if (newAccount -> password == password)
            {
                return this -> balance;
            }
            else
            {
                cout<<"\t*** !Incorrect Password! ***"<<endl;
                cout<<"MyCash App Balance Could Not Be Fetched. Please Input Correct Password."<<endl;
            }
        }



    };


    // a function to create bank account:
    BankAccount* createAccount ()
    {
        string name, address, pass;
        int age;
        cout<<"\t!!! Bank Account Creation !!!"<<endl<<endl;
        cout<<"Input Account Holder Name, Village Name, Age and creare a Password: "<<endl;
        cin>>name>>address>>age>>pass;
        // Now creating a dynamic object and it will be saved it heap memory so the object will not be deleted.
        // if we had done this " BankAccoutn createAccount() " then this will be saved in static memory and it will be deleted once program goes out of this function
        // and we will not be able to use it in the main function.
        // so we are creating a dynamic object so that it is not deleted until " delete(object_name) is received.
        BankAccount *myAccount = new BankAccount(name, address, age, pass); // inputting values to BankAccount class using constructor
        // returning the object using pointer
        return myAccount;
    }

    // a function to input the password and amount to add into the bank account
    void add_money(BankAccount *newAccount)   // the function receives an BankAccount calss object so that the add_money() member in the class could be called to verify and complete the transaction
    {
        cout<<endl<<"\t### Add Money Wizard ###"<<endl<<endl;
        cout<<"Please Input Your Password and Amount To Add Money: "<<endl;
        string password;
        int amount;
        cin>>password>>amount;
        newAccount -> add_money(password, amount);
        cout<<"Your Current Bank Account Balance is: "<<newAccount -> get_balance("abc")<<endl;

    }

    void withdrawl_money(BankAccount *newAccount)
    {
        cout<<endl<<"\t### Money Withdrawl Wizard ###"<<endl<<endl;
        cout<<"Please Input Your Password and Amount To Withdrawl Money: "<<endl;
        string password;
        int amount;
        cin>>password>>amount;
        newAccount -> withdrawl_money(password, amount);
        cout<<"Your Current Bank Account Balance is: "<<newAccount -> get_balance("abc")<<endl;
    }



    void add_money_from_bank_function(MyCash *myCash_obj, BankAccount *newAccount)
    {
        cout<<endl<<"\t### Add Money Wizard To MyCash ###"<<endl<<endl;
        cout<<"Please Input Your Password and Amount To Add Money: "<<endl;
        string password;
        int amount;
        cin>>password>>amount;
        myCash_obj -> add_money_from_bank_member(newAccount, password, amount);
        cout<<"Your Current Bank Account Balance is: "<<newAccount -> get_balance("abc")<<endl;
        cout<<"Your Current MyCash App Balance is: "<<myCash_obj -> get_balance(newAccount, "abc")<<endl;
    }



    int main() {

        BankAccount *newAccount = createAccount();  // receiving the returned object in a class type variable using create_Account function
        // *newAccount is a pointer, so, We need to dereference the pointer-obejct to access its memebers

        add_money(newAccount);
        withdrawl_money(newAccount);
        MyCash *myCash_obj = new MyCash();  // calling the MyCash constructor here and creating a dynamic object
        add_money_from_bank_function(myCash_obj, newAccount); // calling the function to add money to app from bank


        return 0;
    }


