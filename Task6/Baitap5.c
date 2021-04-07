#include <stdio.h>
void main()
{
	int choice;
	
	printf ("\t     MENU\n");
	printf ("==============================\n");
	printf ("1. CF\n");
	printf ("2. C\n");
	printf ("3. HDJ\n");
	printf ("4. DreamWeaver\n");
	printf ("5. RDBMS\n");
	printf ("6. Learn Java By Example\n");
	printf ("==============================\n");
	printf ("Please choice (1-6): ");
	scanf ("\n%d", &choice);
	switch (choice)
	{
		case 1:
			printf ("You choice CF !");
			break;
		case 2:
			printf ("You choice C !");
			break;
		case 3:
			printf ("You choice HDJ !");
			break;
		case 4:
			printf ("You choice DreamWeaver !");
			break;
		case 5:
			printf ("You choice RDBMS !");
			break;
		case 6:
			printf ("You choice Learn Java By Example !");
			break;
		default:
			printf ("Your choice is not correct !");
		break;
	}
}
