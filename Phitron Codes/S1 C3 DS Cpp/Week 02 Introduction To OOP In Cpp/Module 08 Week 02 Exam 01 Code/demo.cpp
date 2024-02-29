
    #include <bits/stdc++.h>
    using namespace std;

    class Restaurant
    {
    public:
        int food_item_codes[12];
        string food_item_names[12];
        int food_item_prices[12];
    protected:
        int total_tax;

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


    void print_food_list(int n, Restaurant* my_restaurant)
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


    void make_bill(Restaurant* my_restaurant)
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
        cout<<"\tYou Have Ordered"<<endl;
        for (int i=1; i<=num_of_items; i++)
        {
            cout<<"Code of items: "<<code[i]<<" "<<" Quantity is "<<quantity[i]<<endl;
        }
        cout<<endl;

        cout<<"\t\t\t\tBILL SUMMARY"<<endl;
        cout<<"\t\t\t________________________"<<endl;
        cout<<"Table No "<<table_no<<endl;
        cout<<"Item Code";
        cout<<"\t\tItem Name";
        cout<<"\t\tItem Price";
        cout<<"\t\tItem Quantity";
        cout<<"\t\tTotal Price"<<endl<<endl;


        int total_price = 0;
        double tax = 0;
        double net_total = 0;
        for (int i=1; i<=num_of_items; i++)
        {
            int myCode=code[i];
            for (int j=1; j<=12; j++)
            {
                int food_item_code=my_restaurant->food_item_codes[j];
                if (myCode == food_item_code)
                {
                    total_price = (quantity[i] * my_restaurant->food_item_prices[j]);
                    tax = (total_price * 5) / 100;
                    net_total = total_price + tax;
                    cout<<my_restaurant->food_item_codes<<"\t"<<my_restaurant->food_item_names<<"\t";
                    cout<<my_restaurant->food_item_prices<<"\t"<<quantity[i]<<"\t"<<total_price<<endl;
                    cout<<"Tax(5%) \t\t"<<tax;
                    cout<<"_____________________________________________________"<<endl;
                    cout<<"Net Total\t\t"<<net_total<<endl;
                    my_restaurant->set_total_tax(tax);
                }
                /*
                else
                {
                    cout<<"The Food Code You Have Entered is Not Valid"<<endl;
                    cout<<"Please Input Again A Valid Food Code"<<endl;
                }
                */
            }


        }
        cout<<"Total Curent Tax is "<<my_restaurant->get_total_tax()<<endl;
        goto Flag;


    }


    int main()
    {
        // number of foods
        int n;
        cin>>n;
        Restaurant* my_restaurant = get_food_list(n);
        print_food_list(n, my_restaurant);
        make_bill(my_restaurant);

        return 0;
    }
