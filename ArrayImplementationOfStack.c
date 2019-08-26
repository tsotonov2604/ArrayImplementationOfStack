#include <stdio.h>
#define MAX_SIZE 101 
int A[MAX_SIZE]; // creation of an array size of 101 
int top = -1; //empty stack .. top is the index of integer 

void Push(int x){
    if (top == MAX_SIZE -1){
        printf("Error: stack overflow\n"); 
        return; 
    }
    top ++; 
    A[top] = x; // insertion of integer x at position top 
}

void Pop() {
    if(top == -1) {
        printf("Error: No element to pop\n"); 
        return; 
    }
    top --; 
}

int Top() {
    return A[top];
}

void Print() { 
    int i; 
    printf("Stack: "); 
    for (i = 0; i<=top; i++)
        printf("%d",A[i]); //prints all the elements of the stack 
    printf("\n");
}

int main() {
    Push(2); Print();
    Push(5); Print();
    Push(10); Print();
    Pop(); Print();
    Push(12); Print();
}