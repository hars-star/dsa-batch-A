#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter number of borrow records: ");
    scanf("%d", &n);

    int books[n];

    printf("Enter book IDs:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &books[i]);
    }

    printf("Books borrowed more than once are:\n");

    for (i = 0; i < n; i++) {
        count = 1;

           for (j = 0; j < i; j++) {
            if (books[i] == books[j]) {
                break;
            }
        }

        if (j != i)
            continue;
        for (j = i + 1; j < n; j++) {
            if (books[i] == books[j]) {
                count++;
            }
        }

        if (count > 1) {
            printf("%d ", books[i]);
        }
    }

    return 0;
}
