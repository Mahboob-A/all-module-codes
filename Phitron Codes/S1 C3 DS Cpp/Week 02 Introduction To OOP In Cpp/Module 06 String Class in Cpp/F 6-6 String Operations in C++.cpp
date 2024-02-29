


                /// F - F 6-6 String Operations in C++
                //200722 08.20 am

    #include <bits/stdc++.h>

    using namespace std;

    int main() {

        // 1) find() function: to find a given character from a string
        string s1 = "aaaabbbdddbaaabdsssg";
        int idx = s1.find('b');  // -> the function returns a int value where the character has been found the first time
        cout<<"find() function by idx: b "<<idx<<endl;

        // can also be written like as follows:
        // if the char is not found then negative or large value is returned
        cout<<"find() function: d "<<s1.find('d')<<endl;  // if the char is not found
        cout<<"Find_first_of: s "<<s1.find_first_of('s')<<endl; // this function is same as find() function


        /// problem with these tow function: seek support

        // 2) rfind() function: to find a given character from the last or reverse position of a string
        string s2 = "abccccddde";
        cout<<"rfind() function: d "<<s2.rfind('d')<<endl;
        cout<<"Find_last_of: c "<<s2.find_last_of('c')<<endl;

        // NOTE:
        /// find_first_of() is same to find() function
        /// find_last_of() is same to rfind() function

        // 3) find_first_not_of function: to find the first index where the character is not found
        string s3 = "aaabbcd";
        cout<<"find_first_not_of() function: a "<<s3.find_first_not_of('a')<<endl;
        cout<<"This function will resurn zero if [0]th char is different to the parameter char of the function: "<<s3.find_first_not_of('b')<<endl;

        // 4) find_last_not_of() function: to find the first index where the last char is not found from oth index
        string s4 = "aabbccdd";
        cout<<"find_last_not_of() function: d "<<s4.find_last_not_of('d')<<endl;
        cout<<"if find_last_not_of() function parameter char is not the last char of string then it retuns the length of the string: "<<s4.find_last_not_of('a')<<endl;
        cout<<"if the parameter char is not exit in string then also string length is returned "<<s4.find_last_not_of('q')<<endl;

        // 5) substr() function: to create a substring
        string s5 = "aabbccddeeffgghh";
        cout<<"making substring directly -> "<<s5.substr(3, 4)<<endl;

        // saving the substring in another obejct:
        string sub = s5.substr(6, 3);
        cout<<"Printing the saved substring -> "<<sub<<endl;

        return 0;
    }

