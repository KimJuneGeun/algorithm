#include <stdio.h>

int stack[10001];
int size=0;

int empty()
{
    if(size == 0)
        return 1;
    else
        return 0;
}
void push(int x)
{
    stack[size] = x;
    size++;
}
void pop()
{
    if(!empty())
    {
        printf("%d\n", stack[size - 1]);
        stack[size - 1] = 0;
        size--;
    }
    else
        printf("-1\n");
}

int main()
{
    int n, x;
    char or[6];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s",or);
        if(or[0] == 'p' && or[1] == 'u')
        {
            scanf("%d",&x);
            push(x);
        }
        else if(or[0] == 'p' && or[1] == 'o')
            pop();
        else if(or[0] == 'e')
            printf("%d\n", empty());
        else if(or[0] == 't')
        {
            if(empty()) 
                printf("-1\n");
            else 
                printf("%d\n", stack[size - 1]);
        }
        else if(or[0] == 's')
            printf("%d\n", size);
    }
    return 0;
}