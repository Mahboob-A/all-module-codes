    #include <stdio.h>

    /*

    int main() {
        int n;
        scanf("%d", &n);

        for (int cs=1; cs<=n; cs++) {
            int r, e, c;
            int result, adv, dsnmttr, dnadv;
            scanf("%d %d %d", &r, &e, &c);

            int adv_prft = e - c;

            if (adv_prft > r && r<=c) {
                printf("advertise\n");
            }
            else if (r<e && (adv_prft == r)) {
                printf("does not matter\n");
            }
            else {
                printf("do not advertise");
            }
            //printf("Case %d: advertise%d\n does not matter%d\n", cs, adv, dsnmttr);
        }

    }



    */



        #include <stdio.h>

    int main() {
        int n;
        scanf("%d", &n);

        for (int cs=1; cs<=n; cs++) {
            int r, e, c;
            int result, adv, dsnmttr, dnadv;
            scanf("%d %d %d", &r, &e, &c);

            int adv_prft = e - c;

            if (adv_prft > r) {
                printf("advertise\n");
            }
            else if (adv_prft == r) {
                printf("does not matter\n");
            }
            else {
                printf("do not advertise");
            }
        }

    }

