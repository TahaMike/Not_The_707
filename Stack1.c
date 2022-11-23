#include<stdio.h>
#include<conio.h>
#define size 10
int S[10], T=-1;
int main() {
    int L;
    int value, choice;
    while(L=1) {
        printf("\n\n********Menu********\n\n");
        printf("Press 1 to push an element into the stack\n");
        printf("Press 2 to Pop an element from the stack\n");
        printf("Press 3 to Peek an element from the stack\n");
        printf("Press 4 to display all element from the stack\n");
        printf("Press 5 to Exit\n");
        printf("Make your selection\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Enter the value to insert\n");
                scanf("%d",&value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                _exit(0);
                break;
            default :
                printf("Wrong Selection!!\n");
            
        }
    }
}

int push(int value) {
    if(T==size-1)
        printf("Stack Overflow");
    else {
        T++;
        S[T]=value;
        printf("Insertion successful\n");
    }
}

int pop() {
    if(T==-1)
        printf("Stack Empty\n");
    else {
        printf("deletion successful\n");
        T--;
    }
}
int peek() {
    if(T==-1)
        printf("Stack Empty\n");
    else 
        printf("The top most value in the stack is : %d",S[T]);
}
int display() {
    int n=1, i;
    if(T==-1)
        printf("Stack Empty\n");
    else {
        for(i=T; i>=0; i--) {
            printf("Item no.%d is %d\n", n,S[i]);
            n++;
        }
    }   
}
    else {
        for(i=T; i>=0; i--) {
            printf("Item no.%d is %d",n,S[i]);
        }
}

S[i]);
            n++;
        }
    }   
}
//Thank you for watching : )flow");
    else {
        for(i=T; i>=0; i--) {
            printf("Item no.%d is %d",n,S[i]);
        }
}

//Now this file with ".c" extension..
