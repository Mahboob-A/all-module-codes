


            /// Love Babbar Codes
            // 180722 06.15 am


    #include <iostream>
    #include "Hero.cpp"
    using namespace std;


    class anotherHero
    {
        int level;
    };

    class emptyClass
    {
        // nothing here just empty
        // empty class's object is allocated 1 byte of memory
    };


    int main () {

        anotherHero h1;
        cout<<"Size of h1 is: "<<sizeof(h1)<<endl;

        emptyClass e1;
        cout<<"Size of e1 is: well e1 is object of an empty class -> "<<sizeof(e1)<<endl;

        Hero included_class_Object;
        cout<<"Size of included class Hero's obeject by #include \"Hero.cpp\" is: -> "<<sizeof(included_class_Object)<<endl;

        return 0;
    }
