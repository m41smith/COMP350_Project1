// Marcus Smith
#include <stdio.h>
#include <stdlib.h>

int sum(int n) {
    int total = 0; // Where total sum will be stored
    // for loop to sum the natural numbers
    int i;
    for (i = 0; i <= n; i++) {
        total = total + i;
    }
    return total;
}

void sum_p(int n, int* answer) {
    int total = 0; // Where total sum will be stored
    // for loop to sum the natural numbers
    int i;
    for (i = 0; i <= n; i++) {
        total = total + i;
    }
    *answer = total;
}

int main(int argc, char* argv[]) {
    int n;
    n = atoi(argv[1]);
    if (n > 0) {
        int ans = sum(n);
        printf("Sum is %d\n", ans);
        int ans2;
        sum_p(n, &ans2);
        printf("Sum_p is %d\n", ans2);
    } else {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        int ans = sum(n);
        printf("Sum is %d\n", ans);

        int ans2;
        sum_p(n, &ans2);
        printf("Sum_p is %d\n", ans2);
    }
    return 0;
}