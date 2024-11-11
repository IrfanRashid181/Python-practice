#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

int stack[10];
int top = -1;
void Push()
{
    if(top == 10)
    {
        printf("Stack is full");
        //return IsFull();
    }
    else
    {

        printf("Enter element\n");
        int l;
        scanf("%d",&l);
        top++;
        stack[top] = l;
        printf("Top is %d \n",stack[top]);
    }
}
void Pop()
{
    if(top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Current top : %d\n",stack[top]);
        top--;
        printf("New top : %d\n",stack[top]);
    }

}
void IsFull()
{
    if(top == 10)
    {
        printf("Stack is full");
    }
    else
    {
        printf("U can push the element");
    }
}
void IsEmpty()
{
    if(top == -1)
    {
        printf("Stack is Empty");
    }

}


int main()
{

    int c;
    int x;
    int m;
    while(1)
    {
        printf("Enter 0 : push\n 1 : pop\n 2 : is full\n 3 : is empty\n");
        scanf("%d",&c);
        switch(c)
        {
          case 0:
          Push();
          break;

          case 1:
          Pop();
          break;

          case 2:
          IsFull();
          break;

          case 3:
          IsEmpty();
          break;

          default:
            printf("Wrong input\n");
            break;
        }
       //printf("If you want to continue press 12\n");
       //scanf("%d" ,&m);

    }//while(m==12);

    return 0;
}
