 #include <stdio.h>

/*int main() {
    int marks;
    scanf("%d", &marks);

	if (marks >=33) {
		printf("You have passed the examination.\n");

	}
	else {
		printf("You have not passed the examination.\n");

	}
}*/
//finding absolute value (positive number)

 int main() {
     int num;
     scanf("%d", &num);

     if (num < 0) { // num = hobe  - , tai - num  ke - 1 diye gun korle setar positive value aschhe
		num = -num;
     }
     printf("%d", num);

 //return 0;
 }
