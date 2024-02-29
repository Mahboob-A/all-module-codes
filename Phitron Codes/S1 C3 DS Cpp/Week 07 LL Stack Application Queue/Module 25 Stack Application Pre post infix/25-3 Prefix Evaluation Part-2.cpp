


                /// Week 07: (Module start date: 200822, Module watch date: 290822, Monday)
                /// 25-3 Prefix Evaluation | Part-2

        /// Week 07: (Module start date: 200822, Module watch date: 290822, Monday)
    /// 25-2 Prefix Evaluation | Part-1

    #include <bits/stdc++.h>
    #include"MYSTACKGENMID.h"
    using namespace std;

    int prefixEvaluation(string chkVal)
    {
        Stack <int> st;
        for(int i=chkVal.length()-1; i>=0; i--)
        {
            // if chkVal[i] = 0 to 9 i.e operand then just push in Stack
            if (chkVal[i] >= '0' && chkVal[i] <= '9')
            {
                st.push(chkVal[i] - '0'); // pushing the integer value or we can typecast it to int
            }
            // else it is a operator in this case the calculation begins
            else
            {
                // pop the top two elements
                int a = st.pop();
                int b = st.pop();

                switch(chkVal[i])
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
                        st.push(pow(a, b));
                        break;
                    default:
                        break;
                }
            }
        }
        // step 03: as the top of the stack is now holding the answer, then return the top
        return st.Top();
    }

    int main() {

        // my own header file has been used
        /// this is a prefix working module it shows how a prefix calculation works
        /// user needs to input prefix form of input otherwise it would not work
        string s;
        cin>>s;

        // input
        // +*423
        // -+7*45+20

        int result = prefixEvaluation(s);
        cout<<result<<endl;


        return 0;
    }
