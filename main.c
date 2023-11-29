#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "math_addition.h"

int main() {
    unsigned long long int p, q, n, phi, e, d, k, message, ciphertext, decrypted;
    srand(time(NULL));
    p = rand() % 100 + 1;
    q = rand() % 100 + 1;
    printf("P: (%d)\n", p);
    printf("Q: (%d)\n", q);
    n = p*q;
    phi = (p - 1) * (q - 1);
    do {
        d = rand() % phi;
    } while (gcd(d, phi) != 1);
    k=2;
    e = ((k*phi)+1)/(d);

    printf("Private Key: (%d, %d)\n", d, n);
    printf("Public Key: (%d, %d)\n", e, n);
    printf("Enter the message to encrypt: ");
    scanf("%d", &message);
    ciphertext = powmod(message, e, n);
    printf("Encrypted message: %d\n", ciphertext);
    decrypted = powmod(ciphertext, d, n);
    printf("Decrypted message: %d\n", decrypted);
    return 0;
}
