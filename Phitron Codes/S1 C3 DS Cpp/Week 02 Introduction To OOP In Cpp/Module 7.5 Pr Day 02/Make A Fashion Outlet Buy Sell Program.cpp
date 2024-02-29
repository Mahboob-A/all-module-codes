


            /// Make A Fashion Outlet Buy Sell Program
            // 230722 04.30 pm
            /// https://ideone.com/MsncW3
            /// https://github.com/v-selfnet/Phitron/blob/main/Mod_7_5_Practic.cpp?fbclid=IwAR1DEO6JgeqxN7vvOxr45rG7Xy7_yNPsc16ROj_a8_w7GPrAYgzMSG7uQpk

    #include <iostream>
    using namespace std;

    class Shop
    {
    public:
        string product_name[10];
	    int product_price[10];
	    int product_quantity[10];

    private:
        int total_income;

    public:


        void set_total_income(int total_income)
        {
            this -> total_income += total_income;
        }
        int get_total_income()
        {
            return total_income;
        }


	};

	Shop* product_input(int n)
	{
	    Shop *fashion_shop = new Shop;

	    for (int i=1; i<=n; i++)
	    {
	        cout<<"Prouduct "<<i<<" Name: ";
	        cin>>fashion_shop->product_name[i];
	        cout<<"Prouduct "<<i<<" price: ";
	        cin>>fashion_shop->product_price[i];
	        cout<<"Prouduct "<<i<<" quantity: ";
	        cin>>fashion_shop->product_quantity[i];
	    }
	    return fashion_shop;
	}

    int buy_product(Shop *fashion_shop, int n)
    {
        Flag:
        cout<<"\t\t*** Buy Product ***"<<endl;
        cout<<"\t\t___________________"<<endl;
        cout<<"Product Index\t\t";
        for (int i=1; i<=n; i++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;

        cout<<"Product Name\t\t";
        for(int i=1; i<=n; i++)
        {
            cout<<fashion_shop->product_name[i]<<"\t";
        }
        cout<<endl;

        cout<<"Product Price\t\t";
        for (int i=1; i<=n; i++)
        {
            cout<<fashion_shop -> product_price[i]<<"\t";
        }
        cout<<endl;

        cout<<"Product Quantity\t";
        for (int i=1; i<=n; i++)
        {
            cout<<fashion_shop -> product_quantity[i]<<"\t";
        }

        cout<<endl<<endl;

        int index, quantity;
        cout<<"Which of the product do you want to buy: Press 1 to "<<n<<endl;
        cin>>index;
        cout<<"What is the quantity of "<<fashion_shop -> product_name[index]<<" you want to buy: "<<endl;
        cin>>quantity;

        if (fashion_shop -> product_quantity[index] < quantity)
        {
            cout<<"Sorry! The product is not available anymore!"<<endl;
        }
        else
        {
            //int price = fashion_shop->product_price[index] * quantity;
            //fashion_shop -> set_total_income(price);
            fashion_shop -> set_total_income(fashion_shop->product_price[index] * quantity);
            fashion_shop-> product_quantity[index] -= quantity;
            cout<<"You have successfully pruchased "<<fashion_shop->product_name[index]<<" of "<<quantity<<" pieces!"<<endl;
            cout<<"You have paid Rs. "<<fashion_shop->get_total_income()<<" to the supplier!"<<endl;
        }
        cout<<endl<<endl;
        cout<<"DO you want to continue shopping? press any key to continue or 0 to stop: ";
        char input;
        cin>>input;
        if (input == '0')
        {
            return 0;
        }

        goto Flag;
    }






    int main() {

        cout<<"\t||| Welcome To Fashionista |||"<<endl<<endl;
        cout<<"Input Number Of Products: ";
	    int n;
	    cin>>n;
        Shop *fashion_shop = product_input(n);

        buy_product(fashion_shop, n);


        return 0;
    }


    /// another example


    /*
    #include<bits/stdc++.h>
using namespace std;

class Shop{

public:
    string name[10];
    int price[10];
    int quantity[10];

protected:
    int totalIncome; //[this->]

public:
    void setTotal(int totalIncome){
        this->totalIncome += totalIncome;
    }
    int getTotal(){
        return totalIncome;
    }

public:
    void printData(Shop *arr, int n){
        cout<<"\n\t~~~ Buy Products ~~~"<<"\n\n";
        cout<<"\tName"<<"\t\tPrice"<<"\tQuantity"<<"\n";
        for(int s=0, i=0, j=0, k=0;
                s<n, i<n, j<n, k<n;
                s++, i++, j++, k++){
            cout<<s+1<<"\t"
            <<arr->name[i]<<"\t\t"
            <<arr->price[j]<<"\t"
            <<arr->quantity[k]<<"\n";
        }
    }
};

int main(){
    Shop *myShop = new Shop;

    cout<<"Enter the number of products: ";
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Product "<<i+1<<" Name: ";
            cin>>myShop->name[i];
        cout<<"Product "<<i+1<<" Price: ";
            cin>>myShop->price[i];
        cout<<"Product "<<i+1<<" Quantity: ";
            cin>>myShop->quantity[i];
    }
    while(true){
        myShop->printData(myShop, n);
        cout<<endl;

        int idx, qty;
        cout<<"Select the product [1-"<<n<<"]: ";
        cin>>idx;
        cout<<"Quantity of product ["<<myShop->name[idx-1]<<"]: ";
        cin>>qty;

        if(myShop->quantity[idx-1] < qty){
            cout<<"["<<myShop->name[idx-1]<<"] "
            <<"Can not order more than ["
            <<myShop->quantity[idx-1]<<"] "<<"pieces."<<endl;
        }
        else{
            int total = qty * myShop->price[idx-1];
            myShop->setTotal(total);
            myShop->quantity[idx-1] -= qty;
            cout<<"Ordered Successfully !!!"<<endl
            <<"Product name: "<<myShop->name[idx-1]<<endl
            <<"Quantity: "<<qty<<endl
            <<"Product total price: "<<total<<endl
            <<"Total income: "<<myShop->getTotal()<<endl;
        }
        cout<<endl<<"Press [1] continue"<<endl
        <<"press [q] quit"<<endl<<"shop: ";
        char opt;
        bool shop = false;
        cin>>opt;
        if(opt=='q')    break;
        else            shop = true;
    }

}

 */
