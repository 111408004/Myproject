#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mini.h"
void init(list *l) {
	l->head = l->tail = NULL;
	l->length = 0;
}
void createaccount(list *l, char *name,int pos) {
	int choice;
	node *p, *tmp;
	int i;
	if(pos < 0 || pos > l->length)		
		return;
	tmp = (node *)malloc(sizeof(node));
	tmp->name = (char *)malloc(strlen(name) + 1);
	strcpy(tmp->name, name);
	 printf("\n\n\nEnter today's date(mm/dd/yyyy):");
         scanf("%d/%d/%d",&tmp->deposit.month,&tmp->deposit.day,&tmp->deposit.year);
         printf("\nEnter the account number:");
         scanf("%d",&tmp->acc_no);
	while(1) {
	scanf("%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n",&tmp->acc_no,tmp->name,&tmp->dob.month,&tmp->dob.day,&tmp->dob.year,&tmp->age,tmp->address,tmp->citizenship,&tmp->phone,tmp->acc_type,&tmp->amt,&tmp->deposit.month,&tmp->deposit.day,&tmp->deposit.year);
    
       
    }
	if(l->head == NULL) {
		tmp->next = tmp->prev = NULL;
		l->head = l->tail = tmp;
		l->length = 1;
		return;
	}
	if(pos == l->length) {
		l->tail->next = tmp;
		tmp->prev = l->tail;
		l->tail = tmp;
		tmp->next=NULL;
		(l->length)++;                                
		return; 
	}
	
	
}
void viewcustomerlist(list *l) {
	node *p;
 	p = (node *)malloc(sizeof(node));
    

	
}
int transaction() {
	int choice;
	printf("ENTER YOUR CHOICE\n");
	printf("1.Withdraw amount\n"\
		"2.Deposit amount\n");
	scanf("%d",choice);
	
}
void accountdetails() {

}
void deleteaccount() {

}
void help() {

}

		
