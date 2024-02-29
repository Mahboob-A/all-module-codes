


            //Write a program to evaluate a prefix expression.

            //You will be given a prefix expression in string format.
            //You have to print the result of the evaluation of the given prefix expression.


    // practice day 02: week 07:

    #include <bits/stdc++.h>
    #include"MYSTACKGEN.h"
    #include" MYQUEUEGEN.h"
    using namespace std;


    int prefixEvaluation(string s)
    {
        Stack<int>st;
        for(int i=s.length()-1; i>=0; i--)
        {
            char ch = s[i];
            if(ch >= '0' && ch <= '9')
            {
                st.push(ch-'0');
            }
            else
            {
                int a = st.pop();
                int b = st.pop();
                switch(ch)
                {
                    case '+':
                        st.push(a+b);
                        break;
                    case '-':
                        st.push(a-b);
                        break;
                    case '*':
                        st.push(a*b);
                        break;
                    case '/':
                        st.push(a/b);
                        break;
                    case '^':
                        st.push(pow(a,b));
                        break;
                    case '%':
                        st.push(a%b);
                        break;
                    default:
                        break;
                }
            }
        }
        return st.Top();
    }

    int main() {

        string s;
        cin>>s;

        int res = prefixEvaluation(s);
        cout<<res<<endl;



        return 0;
    }
