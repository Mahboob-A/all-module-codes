//    #include <stdio.h>
//
//    int main() {
//        int n;
//        scanf("%d", &n);
//
//        for (int cs=1; cs<=n; cs++) {
//            int r, e, c;
//            scanf("%d %d %d", &r, &e, &c);
//
//            int adv_prft = e - c;
//
//            if (adv_prft > r) {
//                printf("advertise\n");
//            }
//            else if (adv_prft == r) {
//                printf("does not matter\n");
//            }
//            else {
//                printf("do not advertise");
//            }
//        }
//
//    }
///////////////////////////////////////////

       #include <stdio.h>

    int main() {
        int n;
        scanf("%d", &n);

        for (int cs=0; cs<n; cs++) {
            int normal_rev;
            int advert_rev;
            int advert_cost;
            scanf("%d %d %d", &normal_rev, &advert_rev, &advert_cost);

            int advert_profit = advert_rev - advert_cost;

            if (advert_profit > normal_rev) {
                printf("advertise\n");
            }
            else if (advert_profit == normal_rev) {
                printf("does not matter\n");
            }
            else {
                printf("do not advertise\n");
            }
        }

    }


