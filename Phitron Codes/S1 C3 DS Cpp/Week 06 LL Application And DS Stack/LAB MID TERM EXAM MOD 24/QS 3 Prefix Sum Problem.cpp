


            /// QS 03: prefix sum problem
            // 280822, Sunday ( exam date: 180822)








    #include <iostream>
    using namespace std;

    int main() {

        /*
            Approach:
            1. Take input as usual as directed.
            1. We need to find the prefix sum of both array, income and spend.
               as the asking is the whether the real income is positive or negative, hence
               access the asking index of both prefix array and deduct spend from income and this is the
               real income. If this is positive then the girl is HAPPY or else she becomes upset as usual!
        */


        int T, D, Q, queryIdx, i, j;
        cin>>T;
        while(T--)
        {
            cin>>D;

            // declaration of array and prefix sum of both income and spend
            int incomeArr[D], spendArr[D], preIncome[D], preSpend[D];
            for(i=0; i<D; i++)
                cin>>incomeArr[i];

            for(j=0; j<D; j++)
                cin>>spendArr[j];


            // calculation of prefix sum
            preIncome[0] = incomeArr[0];
            for(i=1; i<D; i++)
                preIncome[i] = incomeArr[i] + preIncome[i-1];

            preSpend[0] = spendArr[0];
            for(j=1; j<D; j++)
                preSpend[j] = spendArr[j] + preSpend[j-1];


            // input number of queries
            cin>>Q;

            for(i=0; i<Q; i++)
            {
                // if the query index is greater than array size, then input again
                FLAG:
                cin>>queryIdx;
                if (queryIdx > D-1 || queryIdx < 0)
                {
                    cout<<"Can not perform this action. Value Should be 0 to upto "<<D-1
                    <<" Input Again"<<endl;
                    goto FLAG;
                }

                // calculating real income after deducting the spend from the original income - from [prefix income - spend] and print appropriate prompt
                int income = 0;
                income = (preIncome[queryIdx] - preSpend[queryIdx]);
                if (income < 0)
                {
                    cout<<"UPSET"<<endl;
                }
                else
                {
                    cout<<"HAPPY"<<endl;
                }
            }


        }

        return 0;
    }

