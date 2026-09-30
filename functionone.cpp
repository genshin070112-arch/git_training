#include <iostream>
using namespace std;
int main(){
    int n1;
    int n2;
    char c;
    scanf("%d%c%d", &n1, &c, &n2);
    if(c == '+'){
        plus(n1, n2);
    }
    if(c == '-'){
        minus(n1, n2);
    }
    return 0;
}

double plus(double a, double b){
    return a + b;
}

double minus(double a, double b){
    return a - b;
}