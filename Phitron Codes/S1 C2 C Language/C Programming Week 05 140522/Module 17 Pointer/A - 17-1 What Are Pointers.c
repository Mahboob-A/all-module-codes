
        /// 17-1 What Are Pointers

    #include <stdio.h>
    int main () {
        int price;
        int marks;
        int age;

        scanf("%d %d %d", &price, &marks, &age);

        printf("Variable address in hexa:\n%p\n %p\n %p\n", &price, &marks, &age);
        printf("%Variable address in integer:\n%lld\n %lld\n %lld\n", &price, &marks, &age);
    }
