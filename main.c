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
    int temp = atoi(argv[1]);
    // int n;
    // printf("Enter a positive integer: ");
    // scanf("%d", &n);
    int ans = sum(temp);
    printf("Sum is %d\n", ans);

    int ans2;
    sum_p(3, &ans2);
    printf("Sum_p is %d\n", ans2);

    return 0;
}