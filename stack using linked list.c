#include"stdio.h"
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
}*top=NULL,*temp=NULL;
int data;
void push(int element)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    //scanf("%d",&new_node->data);
    new_node->data=element;
    new_node->next=top;
    top=new_node;
}
void display()
{
    if(top==NULL)
    {
        printf("the stack is empty");
    }
    temp=top;
    while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }

}
void pop()
{
    if (top==NULL)
    {
        printf("pop operation cannot be done \n");
    }
    printf("the element which is going to be deleted is %d ",top->data);
    temp=top->next;
    free(top);
    top=temp;

}
int main()
{
    while(1)
    {
        printf("push \n");
        printf("pop \n");
        printf("pea7k \n");
        printf("display \n");
        printf("enter the choose \n");
        int num;
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            exit(0);


        }
    }
}
