#include<stdio.h>
#include<stdlib.h>

struct data
{
	int value;
	struct data *next;
}*head,*tail,*curr;

void push(int x){
	curr=(data*) malloc(sizeof(data));
	curr->value=x;
	if(head==NULL){
		head = tail = curr;
	}else{
		tail->next = curr;
		tail = curr;
	}
	tail->next=NULL;
}

void view(){
	curr=head;
	while(curr!=NULL){
		printf("%d ",curr->value);
		curr=curr->next;
	}
}

void viewaverage(int average){
	curr=head;
	int avg=0;
	int count=0;
	while(curr!=NULL){
		avg+=curr->value;
		count++;
		curr=curr->next;
	}
	avg=avg/count;
	curr=head;
	while(curr!=NULL){
		if(curr->value>avg)
		printf("%d ",curr->value);
		curr=curr->next;
	}
}

void popdepan(){
	if(head!=NULL){
		curr = head;
		head = head->next;
		free(curr);
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	viewaverage(25);
	popdepan();
	printf("\n");
	view();
}
