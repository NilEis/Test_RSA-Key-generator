#include <stdio.h>
#include "helper_functions.h"
#include "asymmetric.h"

int main()
{
    unsigned int p = 0;
    unsigned int q = 0;
    unsigned int N = 0;
    unsigned int e = 0;
    unsigned int d = 0;
    int tested = 0;
    printf("Please input p and q: (p q):\n->");
    scanf("%u %u",&p,&q);
    tested = is_prime(p);
    if(tested==-1)
    {
        printf("p = %u is not a prime number\n", p);
        exit_program(-1);
    }
    tested = is_prime(q);
    if(tested==-1)
    {
        printf("q = %u is not a prime number\n", q);
        exit_program(-1);
    }
    get_RSA(p,q, &N, &e, &d);
    printf("\nN = %u\ne = %d\nd = %u\n\n",N,e,d);
    exit_program(0);
    return 0;
}
