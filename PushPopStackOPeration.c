//Arrary implementation of STACK
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5
int stack[max];
int top=-1;
void push(int x){
    if(top==max-1)
        printf("Stack is Overflow\n");
    else{
        stack[++top]=x;
        printf("push Item:%d\n",stack[top]);
    }    
}
int pop(){
    int data;
    if(top==-1){
        printf("stack is empty\n");
        return 0;
    }
    else{
    data=stack[top];
    top=top-1;
    return data;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int ch,n,d;
    char c;
    do{
        printf("1.PUSH ITEM\n");
        printf("2.POP ITEM\n");
        printf("3.Display ITEM\n");
        printf("4.Exit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        
        switch(ch){
            case 1:
                printf("Enter item to push on stack:");
                scanf("%d",&n);
                push(n);
                break;
            case 2:
                d=pop();
                printf("The deleted item is:%d\n",d);
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0); 
        }
        printf("Do you want to coninue:");
        fflush(stdin);
        scanf("%c",&c);
    }while(c=='y'||c=='Y');
    getch();
    return 0;
}
