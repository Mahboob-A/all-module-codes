

            /// Check Prime number 1 to 100
            // 180622 11.30 p.m


    #include<stdio.h>
void check_prime(void)
{
   int i, n, count,  total = 0;
    for (n=1; n<=100; n++)
    {
        count = 0;
        for (i=2; i<=n/2; i++)
        {
            if (n%i == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0 && n != 1)
        {
            total++;
             printf(" %d ", n);
        }

    }
    printf("\nTotal prime number are: %d.\n", total);
}


int main(){

    check_prime();


return 0;
}
