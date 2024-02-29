
    #include <stdio.h>
    int main () {
        int n, i, search_num, position, flag=0;
        int arr[100];
        scanf("%d", &n);

        for (i=0; i<n; i++) {
            scanf("%d", &arr[i]);
        }
        printf("Input Number To Search: ");
        scanf("%d", &search_num);

        for (i=0; i<n; i++) {
            if (arr[i] == search_num) {
                position = i+1;
                flag = 1;
                break;
            }
        }
        if (flag==1) {
            printf("Number found in [%d th] position", position);
        }
        else {
            printf("Number not found");
        }
    return 0;
    }
