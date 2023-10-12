#include <stdio.h>

void modify1(int a) {
    a = 7;
    printf("inside modify1 a = %d\n", a);
}

void modify2(int *a) {
    *a = 23;
    printf("inside modify2 a = %p\n", *a);
}

char is_prime(int n) {
    int i;
    for (i=2; i<n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void goldbach(int n) {
    int i, found=0;
    for (i=3; i<n/2; i++) {
        if (is_prime(i) && (is_prime(n-i))) {
            printf("Proven: %d = %d + %d\n", n, i, n-i);
            found++;
        }
    }
    if (!found) {
        printf("Goldbach was a liar!\n");
    }
}


int factorial(int n) {
    if (n==1){
        return 1;
    }
    return n * factorial(n-1);
}


void hanoi(char *source, char *dest, char *inter, int n) {
    if (n == 0)
        return;
    hanoi(source, inter, dest, n-1);
    printf("Move from %s to %s\n", source, dest);
    hanoi(inter, dest, source, n-1);
}

int main() {
    // test out or prime function:
    int i;
//    for (i=2; i < 100; i++) {
//        if (is_prime(i)) {
//            printf("%d is prime\n", i);
//        }
//    }
    int n = 5;
    // test the Golbach conjecture
//    goldbach(n);

//    printf("fact %d = %d\n", n, factorial(n));
    hanoi("A", "C", "B", 5);
    return 0;
}
