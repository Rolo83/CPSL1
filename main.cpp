#include "mbed.h"
#include <cstdio>


int t1 = 0;
int t2 = 1;
int next_term = t1 + t2;
int max_terms = 8;

//0, 1, 1, 2, 3, 5, 8, 13, 21...
//n = 0, ans = 0
//n = 1, ans = 1
//n = 2, ans (0+1) = 1
//n = 3, ans (1+1) = 2
//.




int fib(int n) {
    // n is the nth term result
    if(n == 0 || n == 1)
        return n;
    else
        return (fib(n-1) + fib(n-2));
                


}

    


int main()
{

    //this is the main function
    printf("Hello, lab program 1 using recursive functions \r\n");

    for(int i=0; i<max_terms; i++){
        printf("%d, ", fib(i));
        

       

    }

    printf("\r\n");



    while (true) {

    }
}

