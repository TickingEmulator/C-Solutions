#include <cstdio>
#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d){
    if (a > b && a > c && a > d){
        return a;
    }else if (b > c && b > d){
        return b;
    }else if (c > d){
        return c;
    }else {
        return d;
    }
    return a;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    cout << max_of_four(a, b, c, d);
    return 0;
}
