//
// Created by Darkinki on 29.11.2023.
//

#ifndef PRACTICALTASK8_MATH_ADDITION_H
#define PRACTICALTASK8_MATH_ADDITION_H

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
long int powmod(long int base, long int exp, long int mod) {
    long int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}


#endif //PRACTICALTASK8_MATH_ADDITION_H
