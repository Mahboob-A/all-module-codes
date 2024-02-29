    #include <stdio.h>  // cp book subin array problem
    int main () {
        int n;
        printf("Enter number of students: ");
        scanf("%d", &n);

        int f_term[n], s_term[n], final_term[n], marks_count[101];
        double final_result[n];

        for (int i=0; i<n; i++) {
            printf("Enter %d student's first term number: ", i+1);
            scanf("%d", &f_term[i]);
        }
        for (int i=0; i<n; i++) {
            printf("Enter %d student's second term number: ", i+1);
            scanf("%d", &s_term[i]);
        }
        for (int i=0; i<n; i++) {
            printf("Enter %d student's final term number: ", i+1);
            scanf("%d", &final_term[i]);
        }
        for (int i=0; i<n; i++) {
            final_result[i] = f_term[i] / 4.0 + s_term[i] / 4.0 + final_term[i] / 2.0;
        }
        for (int i=0; i<101; i++) {
            marks_count[i] = 0;
        }
        for (int i=0; i<n; i++) {
            int x = (int)final_result[i];
            marks_count[x]++;
        }
        for (int i=0; i<n; i++) {
            printf("%d th student got %0.2lf marks in final result \n", i+1, final_result[i]);
        }
        for (int i=0; i<101; i++) {
            printf("Marks: %d Count: %d\n", i, marks_count[i]);
        }
    }
