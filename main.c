#include <stdio.h>
int main() {
    int x = 0;
    int i = 0;
    int D[10000];
    int bin[10000];
    char c;
    while ((c = getchar()) != '\n') {
        if(c != ' '){
            x = x*10 + (c - '0');
        }
        if(c == ' '){
            D[i] = x;
            // перевод в 2 систему
            int z = 0;
            int n = 1;
            while(x){
                z = z+((x%2)*n);
                n = n * 10;
                x = x/2;
            }
            bin[i] = z;
            //
            i = i + 1;
            x = 0;
        }
    }
    D[i] = x;
    // перевод в 2 систему
    int z = 0;
    int n = 1;
    while(x){
        z = z+((x%2)*n); // 10/2 = 5 0 5/2 = 2 1 2/2 = 1 0 1/2 = 1 1   1+0*10+1*100+0*1000 =1010
        n = n * 10;
        x = x/2;
    }
    bin[i] = z;
    //
    for(int k=0; k<=(i); k++) // вывод множества 10 значений
    {
        printf("%d",D[k]);
        printf(" ");
    }
    printf("%c",'\n');
    for(int k=0; k<=(i); k++) // вывод множества 2 значений
    {
        printf("%d",bin[k]);
        printf(" ");
    }
    return 0;
}