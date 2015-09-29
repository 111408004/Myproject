typedef struct date{
    int month,day,year;

    }date;
typedef struct node {
	
	 node *next, *prev;
	char *name;
	int acc_no,age;
	char address[60];
	char citizenship[15];
	double phone;
	char acc_type[10];
        float amt;
        date dob;
        date deposit;
        date withdraw;

}node;
typedef struct list {
	 node *head, *tail;
	int length;
}list;
void init(list *l);
int length(list *l,char *str);
void createaccount(list *l, char *name,int pos);
void viewcustomerlist(list *l);
int transaction();
void accountdetails();
void deleteaccount();
void help();

