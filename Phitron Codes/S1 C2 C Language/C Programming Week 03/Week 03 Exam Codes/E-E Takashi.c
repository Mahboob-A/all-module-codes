    #include <stdio.h>
    int main() {
        int A,B,C,D,E,F,X;
        scanf("%d %d %d %d %d %d %d",&A,&B,&C,&D,&E,&F,&X);
        int takahasi = 0;
        int aoki = 0;
        for(int i=0;i<X;i++){
        if(i%(A+C)<A){
            takahasi += B;
        }
        if(i%(D+F)<D){
            aoki += E;
        }
    }
        if(takahasi>aoki) {
          printf("Takahashi\n");
        }
        else if (takahasi<aoki) {
           printf("Aoki\n");
        }
        else if (takahasi==aoki) {
           printf("Draw\n");
        }

    return 0;

    }



