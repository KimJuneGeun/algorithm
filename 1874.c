#include<stdio.h>
int stack[100001];
int chk[100001];
int size,inx;
char res[200001];

void push(int x);
void pop();
int empty();

int main()
{
    int n,su,top;
    scanf("%d",&n);
    top = 1;
    for(int i=0;i<n;i++) {
        scanf("%d",&su);
        if(su >= top) {
        for(int j=top;j<=su;j++) {
            if(chk[j] == 0) {
                chk[j] = 1;
                push(j);
            }
        }
        pop();
        if(empty()) 
            top = 1;
        else
            top = stack[size-1];
        }
        else {
            printf("NO\n");
            return 0;
        }
    }
    for(int i=0;i<inx;i++) {
        printf("%c\n",res[i]);
    }
    return 0;
}

void push(int x) {
    res[inx++] = '+';
    stack[size] = x;
    size++;
}
void pop() {
    if(!empty()) {
    res[inx++] = '-';
    size--;
    stack[size] = 0;
    }
}
int empty() {
    if(size == 0) 
        return 1;
    else 
        return 0;
}