// Que.1 Given the number 'n', find out and return the number of digits present in a number.

#include<bits/stdc++.h>

int count(int n){
    
    int cnt = 0;
    while( n > 0) {
    int lastDigit = n  % 10;
    cnt  = cnt + 1;
    n = n / 10;
    }

    // OR  

    // int cnt = (int)(log10(n) + 1);
    return cnt;
}