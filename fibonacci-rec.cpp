#include <stdio.h>

// 1. Iterative Approach: O(n) Time, O(1) Space
int fib(int n){
    int t0 = 0, t1 = 1, s = 0, i;

    if(n<=1) return n;

    for(i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }

    return s;
}

// 2. Normal Recursion Approach: O(2^n) Time, O(n) Space
int rfib(int n){
    if(n<=1)
        return n;

    return rfib(n-2) + rfib(n-1); 
}

// 3. Memoization Approach: O(n) Time, O(n) Space
int F[11]; 

int mfib(int n){
    if(n<=1)
    {
        F[n] = n;
        return n;
    }
    
    else{
        if(F[n-2] == -1){
            F[n-2] = mfib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = mfib(n-1);
        }

        F[n] = F[n-2] + F[n-1];
        return F[n];
    }
}

int main(){
    int i;
    for(i = 0; i < 11; i++){
        F[i] = -1; 
    }
    
    printf("%d \n", fib(5));   
    printf("%d \n", rfib(7)); 
    printf("%d \n", mfib(9)); 

    return 0;
}
