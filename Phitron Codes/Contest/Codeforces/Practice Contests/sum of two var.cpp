

// 201222, Tuesday, 11.20 pm



#include <iostream>

using namespace std;

int main() {

    int t, a, b;
    char c;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %c %d", &a, &c, &b);
        printf("%d\n", a+b);
    }

    return 0;
}
