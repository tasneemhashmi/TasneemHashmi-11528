#include <stdio.h>
int main(){
    printf("BITWISE UTILITY TOOL\n");
    printf("[&]\t[|]\t[^]\t[< for left-shift]\t[> for right-shift]\n");
    printf("To run tool, press 1, else 0\n");
    int val;
    scanf("%d", &val);
    getchar();
    while (val==1){
        int a,b;
        char op;
        printf("Enter expression:\n");
        scanf("%d %c %d", &a, &op, &b);
        switch(op){
            case '&':printf("%d\n", a&b); break;
            case '|':printf("%d\n", a|b); break;        
            case '^':printf("%d\n", a^b); break;
            case '<':printf("%d\n", a<b); break;
            case '>':printf("%d\n", a>b); break;
            default: printf("ERROR! Invalid expression\n");
        }
        printf("Run Again?");
        scanf("%d", &val);
    }
    return 0;
}