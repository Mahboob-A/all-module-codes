 /**
    #include <stdio.h>
    /// empty room hostel
    int main () {
        int n;
        scanf("%d", &n);
        int rmppl, rmcpcty;

        int emptyRoom = 0;
        for (int i=0; i<n; i++) {

            scanf("%d %d", &rmppl, &rmcpcty);
            if (rmcpcty > rmppl) {
                emptyRoom++;
                emptyRoom--;
            }
        }
        printf("%d", emptyRoom);

    }

    **/

    #include <stdio.h>
    int main () {
        int n, p, q;
        scanf("%d", &n);

        int emptyRoom;
        for (int i=1; i<=n; i++) {
            scanf("%d %d", &p, &q);

            if (q-p>=2 && q>p) {
                emptyRoom++;
            }
        }
        printf("%d", emptyRoom);
        return 0;
    }
