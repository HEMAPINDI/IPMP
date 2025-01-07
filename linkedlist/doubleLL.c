#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*first=NULL,*rear=NULL;
void create(int a[],int n){
    first=(struct node *)malloc(sizeof(struct node));
    struct node *t,*last;
    first->data=a[0];
    first->next=NULL;
    first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=(struct node *)malloc(sizeof(struct node));
        t->data=a[i];
        last->next=t;
        t->prev=last;
        last=t;
    }
}

void display(struct node *p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}
void insert(struct node *p,int index,int x){
        struct node *t=(struct node *)malloc(sizeof(struct node));
        t->data=x;
        t->prev=t->next=NULL;
        for(int i=1;i<index;i++)
        p=p->next;
        t->next=p->next;
        p->next=t;
        t->prev=p;
        p->next->prev=t;
}
int delete(struct node *p,int index){
    int x=-1;
    struct node *q;
    for(int i=1;i<index;i++)
        p=p->next;
    q=p->next;
    x=q->data;
    p->next=q->next;
    q->next->prev=q->prev;
    return x;
}
int main(){
    int a[]={1,2,3,4,5},n=5;
    create(a,n);
    printf("%d ",counting(first));
    insert(first,4,11);
    display(first);
    printf("%d ",delete(first,4));
    return 0;
}