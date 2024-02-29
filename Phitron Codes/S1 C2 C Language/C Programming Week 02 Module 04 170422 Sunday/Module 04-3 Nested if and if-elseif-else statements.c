    #include <stdio.h>
    #include <stdbool.h>
			             // divisible
			             // not divisible
			             // can not divide (0)

/*int main() {
    int a, b;
	scanf("%d %d", &a, &b);

    if (b != 0) {
        printf("Reminder is %d\n", a%b);
		if (a%b == 0) {
            printf("%d is divisible by %d\n", a, b);
		}
		else {
			printf("%d is not divisible by %d\n", a, b);
		}
	}
	else {
		    printf("You can not divide by 0" );
	}

}*/
/// positive, negative, zero finder.

int main() {
    int a, b;    /// if-elseif-else condition
	scanf("%d", &a);

    if (a > 0) {
        printf("Positive");
	}
	else if (a < 0){
			printf("Negative");
    }
	else {
			printf("Zero");
	}
}







