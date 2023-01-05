#include<stdio.h>
#include<stdlib.h>
#define N 5
int cq[N];
int front=-1;
int rear=-1;
void enqueue(int item);
int dequeue();
int isempty();
int isfull();
