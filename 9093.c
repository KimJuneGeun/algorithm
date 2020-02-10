#include<stdio.h>
#include<string.h>
char stack[1002];
int size=0;
void push(char x);
void pop();
int empty();

int main()
{
    int t,len;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        scanf(" %[^\n]s", stack);
        len = strlen(stack);
        stack[len]+='\n';
        for(int j=0;j<=len;j++) {  
            if(stack[j] == ' ' || stack[j] == '\n' ) {
                while(!empty()) {
                    pop();
                }
                printf("%c",stack[j]);
            }        
            else 
                push(stack[j]);
        }
    }
}

void push(char x) {
    stack[size] = x;
    size++;
}
void pop() {
    if(!empty()) {
        printf("%c",stack[size-1]);
        stack[size-1] = ' ';
        size--;
    }
}

int empty() {
    if(size == 0) 
        return 1;
    else
        return 0;
}