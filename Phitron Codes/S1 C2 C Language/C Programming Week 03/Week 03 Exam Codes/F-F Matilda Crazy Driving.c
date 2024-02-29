   /** #include <stdio.h>
    int main () {
        int n, m;
        scanf("%d %d", &n, &m);

        for (int i=1; i<=n; i++) {
            if (n%2 != 0) {
                printf("#");
            }
            printf("\n");
        }
        for (int j=1; j<=m; j++) {
            if (m%2 == 0) {
                if (j==m) {
                    printf("#");
                }
                else {
                    printf(".");
                }
            }
            if (j==1) {
                printf("#");
            }
            else {
                printf(".");
            }
        }
    }


**/



    #include <stdio.h>

    int main() {
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=1;i<=n;i++){
            if(i%4==2){
            for(int j=1;j<m;j++){
            printf(".");
            }
            printf("#");
         }  else if(i%4==0){
            printf("#");
            for(int j=1;j<m;j++){
                printf(".");
            }

        } else {
            for(int j=1;j<=m;j++){
                printf("#");
            }
        }
        printf("\n");
    }

    return 0;
}
