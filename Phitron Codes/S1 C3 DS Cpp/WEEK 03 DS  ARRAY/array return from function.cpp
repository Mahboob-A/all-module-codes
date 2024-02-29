



    #include <iostream>
    using namespace std;
    int* createArray()
    {
        int size;
        cin>>size;
        int *ar = new int[size];
        return ar;
    }

    void inputArray(int *ar, int n)
    {
        for (int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
    }

    void printArray(int *ar, int n)
    {
        cout<<"array printing: \n\n";
        for (int i=0; i<n; i++)
        {
            cout<<ar[i]<<" ";
        }
    }

    int main() {

        int size;
        cin>>size;
        int *ar = createArray();

        inputArray(ar, size);
        printArray(ar, size);



        return 0;
    }
