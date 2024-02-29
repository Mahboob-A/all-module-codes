



            /// 1 DYNAMIC ARRAY





    // conceptual session 7 - 1 | conceptual date: 220822 | watch date: 230922
    // dynamic array
    #include <iostream>

    using namespace std;

    int main()  {


        int n;
        cin>>n;

        /// allocating array dynamically
        // as we need to use "new" keyword while allocating memory in heap, and as "new"
        // keyword returns a pointer, so we will store the [0]'s address in a pointer
        // and we need to specify the 'new' keyword which type of dt array we are creating so that it can allocate memory accordingly

        int *myArray = new int[n];

        // we have two ways to dereference the dynamic array 1. is the following and second one is the later
        for(int i=0; i<n; i++)
            cin>>myArray[i];

        for(int i=0; i<n; i++)
            cout<<*(myArray+i)<<" ";


        /// deallocating the heap memory
        // we need to use delete keyword to delete the allocated memory
        // delete keyword then put this beside delete keyword -> "[]", it is to specify the keyword that
        // we need to delete an array. And after that, we need to tell the array name we need to deallocate or freeing memory

        delete[] myArray;

        // and now, delete keyword has released all the n'th memory allocated to myArray array.
        // but a point to remember that myArray is not array, it is a pointer pointing to the [0] of an dynamic array.
        // so, even after the memory released, myArray pointer will might now point to garbage value and it might cause
        // problem, so, it is good practice to make the array pointer to null at this point.

        myArray = NULL;







        return 0;
    }
