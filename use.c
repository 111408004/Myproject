#include <stdio.h>
#include <stdlib.h>
#include "mini.h"
int printmenu() {
	int choice;
	printf("******************************************\n");
	printf("\tWECOME TO NATIONAL BANK\n");
	printf("******************************************\n");
	printf("\t\t1. Open new account\n"\
		"\t\t2. List of customers \n"\
		"\t\t3. Transaction \n"\
		"\t\t4. Account details \n"\
		"\t\t5. Delete account\n"\
		"\t\t6.Help \n"\
		"\t\t7.Exit \n" );
	scanf("%d", &choice);	
	return choice;
}
int main() {
	
	int choice;
	int pos;
	char str[128], *s;
	list p;
	//init(&p);	
	while(1) {
		
		choice = printmenu();
		switch(choice) {
		case 1: // Open new account
			printf("Enter the value and pos\n");
			scanf("%s%d", str, &pos);
			createaccount(&p, str, pos);
			break;
		case 2: /* List of account*/
			viewcustomerlist(&p);
			break;
		case 3: /* Transaction  */
			transaction(&p);
			break;
		case 4: /*Account details*/
			
			break;
		case 5: /*Delete account*/
			
			break;
		case 6: /*Help */
			
			break;
		case 7: /*exit */
			exit(0);
			break;
		}	
	}
	return 0;
}
