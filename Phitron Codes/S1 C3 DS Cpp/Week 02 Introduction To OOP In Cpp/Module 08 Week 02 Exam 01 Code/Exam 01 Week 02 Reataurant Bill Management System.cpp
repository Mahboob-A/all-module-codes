


            /// Exam 01 Week 02 Reataurant Bill Management System.cpp

    /// Week 02 Exam: Exam 01
    // Mini Project: Restaurant Bill Management System


    /// Week 02 Exam
    // Mini Project: Restaurant Bill Management System

    #include <bits/stdc++.h>
    using namespace std;

    class Restaurant
    {
    public:
        int food_item_codes[12];
        string food_item_names[12];
        int food_item_prices[12];
    protected:
        double total_tax;

    public:
        void set_total_tax(double total_tax)
        {
            this -> total_tax += total_tax;
        }

        double get_total_tax()
        {
            return this -> total_tax;
        }

        int* get_food_codes()
        {
            return this -> food_item_codes;
        }
    };

    Restaurant* get_food_list(int n)
    {
        Restaurant* my_restaurant = new Restaurant;

        for (int i=0; i<n; i++)
        {
            cin>>my_restaurant->food_item_codes[i];
            cin.ignore();
            getline(cin, my_restaurant->food_item_names[i]);
            cin>>my_restaurant->food_item_prices[i];
        }
        return my_restaurant;

    }


    void print_food_list(Restaurant* my_restaurant, int n)
    {
        cout<<"\t\t\t\tMAKE BILL"<<endl;
        cout<<"\t\t_____________________________________"<<endl;
        cout<<"Item Code";
        cout<<"\tItem Name";
        cout<<"\t\t\tItem Price"<<endl<<endl;
        for (int i=0; i<n; i++)
        {
            cout<<my_restaurant->food_item_codes[i]<<"\t\t";
            cout<<my_restaurant->food_item_names[i]<<"\t\t";
            cout<<my_restaurant->food_item_prices[i]<<endl;
        }
    }


    void make_bill(Restaurant* my_restaurant, int n)
    {
        Flag:

        int code[100], quantity[100];
        int table_no, num_of_items, idx = 1;
        cout<<"Enter Table No: ";
        cin>>table_no;
        cout<<"Enter Number of Items: ";
        cin>>num_of_items;

        for (int i=1; i<=num_of_items; i++)
        {
            cout<<"Enter Item "<<i<<" Code ";
            cin>>code[i];
            cout<<"Enter Item "<<i<<" Quantity ";
            cin>>quantity[i];

        }
        cout<<"\n\n\tYou Have Ordered"<<endl;
        for (int i=1; i<=num_of_items; i++)
        {
            cout<<"Code of items: "<<code[i]<<" "<<" Quantity is "<<quantity[i]<<endl;
        }
        cout<<endl;

        cout<<"\t\t\t\t\t\tBILL SUMMARY"<<endl;
        cout<<"\t\t\t\t\t___________________________"<<endl;
        cout<<"Table No "<<table_no<<endl;
        cout<<"Item Code";
        cout<<"\t\tItem Name";
        cout<<"\t\tItem Price";
        cout<<"\t\tItem Quantity";
        cout<<"\t\tTotal Price"<<endl<<endl;


        int i, j, mark, total_price = 0;
        double tax = 0;
        double net_total = 0;
        bool found = false;
        for (i=1; i<=num_of_items; i++)
        {
            int myCode=code[i];
            for (j=0; j<12; j++)
            {
                int food_item_code=my_restaurant->food_item_codes[j];
                if (myCode == food_item_code)
                {
                    found = true;
                    mark = j;
                    break;
                }

            }

            if (!found)
            {
                cout<<"The Food Code You Have Entered is Not Valid"<<endl;
                cout<<"Please Input Again A Valid Food Code"<<endl;
                break;
            }
            else
            {
                total_price = quantity[i] * my_restaurant->food_item_prices[j];
                tax += (total_price * 5) / 100;
                net_total += total_price;
                cout<<myCode<<"\t\t\t"<<my_restaurant->food_item_names[mark]<<"\t";
                cout<<my_restaurant->food_item_prices[mark]<<"\t\t\t"<<quantity[i]<<"\t\t\t"<<total_price<<endl;

            }
        }

        cout<<"\nTax(5%) \t\t\t\t\t\t\t\t\t\t\t"<<tax<<endl;
        cout<<"_________________________________________________________________________________________________________";
        cout<<"\nNet Total\t\t\t\t\t\t\t\t\t\t\t"<<net_total+tax<<" Taka"<<endl;




        my_restaurant->set_total_tax(tax);
        //cout<<"Total Curent Tax is "<<my_restaurant->get_total_tax()<<endl;

        print_food_list(my_restaurant, n);
        goto Flag;


    }


    int main()
    {
        // number of foods
        int n;
        cin>>n;
        Restaurant* my_restaurant = get_food_list(n);
        print_food_list(my_restaurant, n);
        make_bill(my_restaurant, n);

        return 0;
    }




    /// code has these bugs:

    // 1) if the first food code is incorrect and rest are then the program gives promt that food code is incorrect and program runs again to take input
    // 2) if the first food code is correct and rest are incorrect then the program do not gives wrong code promt and it makes bill for correct code and also includes the wrong code
    // and gives the name of correct code food name but these incorrect code values are kept 0
    // 3) if the first food code is incorrect then it gives promt and also it prints the Bill Summary portion but there are no values
    // 3) I need to fix all these issues
