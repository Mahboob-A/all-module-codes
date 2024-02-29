


                /// E- E 6-5: String Modifiers In C++
                //200722 06.30 am

    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        // 1) assign() function: assigning value to string object
        string st;
        st.assign("abcdefgh");
        cout<<st<<endl;

        // 2) append() function: string concat another technique (except " + " operator)
        string s1 = "i am";
        string s2 = " ok";
        string s3;
        s1.append(s2);  // concatenating another string object
        s1.append(" always");  // concatenating another string

        cout<<s1<<endl;

        // string concatenation using " + " operator
        string s4 = "i will ";
        string s5 = "study now";
        s4 += s5;
        cout<<s4<<endl;

        // 3) push_back() function: to add a character at the last position of a string
        string s6;
        s6.assign("add_a_character_to_lastPosition - added this char -> ");
        s6.push_back('a');
        cout<<s6<<endl;

        // 4) pop_back() function: to delete the last character in a string
        string s7 = "delete_a_char_from_last_pos";
        s7.pop_back();
        cout<<s7<<endl;

        // 5) insert() function: to insert a string inside a string object from a given inclusive position
        string s8 = "wxyz";
        s8.insert(3, "abcd");  // pos is inclusive i.e from that pos the insertion will begin
        cout<<s8<<endl;

        // 6) erase() function: to delete a string or number of characters from a given position
        string s9 = "mnopqrst";
        s9.erase(2, 3);  // pos is inclusive i.e from that pos the deletion will start and upto the 2nd parameter data
        //cout<<s9.erase(2, 3)<<endl;  can also shorten the code like this
        cout<<s9<<endl;

        // 7) swap() function: to swap two values

        // swaping non-string values
        int a = 10, b = 20;
        swap(a, b);
        cout<<a<<" "<<b<<endl;

        // swaping two strings
        string s10 = "abcd", s11 = "okok";
        swap(s10, s11);
        cout<<"Swapped! => s10 -> "<<s10<<" "<<"s11 -> "<<s11<<endl;


        return 0;
    }
