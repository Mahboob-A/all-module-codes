


            /// 2.5.-1 Conditions In C++
            // 050722 10.00 am

    #include <iostream>
    using namespace std;

    int main () {

        int a, b;
        cin>>a>>b;

        if (a > b )
            cout<<"A is Greater"<<endl;
        else if (b > a)
            cout<<"B is Greater"<<endl;
        else
            cout<<"Both are equal"<<endl;



        int x;
        cin>>x;
        if (x % 2 == 0)
        {
            if (x < 10)
            {
                cout<<"Even and less than 10"<<endl;
            }
            else
            {
                cout<<"Even and greater or equal to 10"<<endl;
            }

        }
        else
        {
            cout<<"Odd"<<endl;
        }

        char c;
        cin>>c;

        switch(c)
        {
            case 'a':
                cout<<"Vowel"<<endl;
                break;

            case 'e':
                cout<<"Vowel"<<endl;
                break;

            case 'i':
                cout<<"Vowel"<<endl;
                break;

            case 'o':
                cout<<"Vowel"<<endl;
                break;

            case 'u':
                cout<<"Vowel"<<endl;
                break;

            default:
                cout<<"Consonant"<<endl;
        }

        return 0;
    }

