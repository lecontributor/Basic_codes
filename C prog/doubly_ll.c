#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *pre, *post;
}node;
node *headl = NULL, *headr = NULL, *ptr = NULL;
int skey;

void insert()
{
	int x;
	printf("\n Enter the data: ");
	scanf("%d",&x);
	node *cur = (node*)malloc(sizeof(node));
	cur->data = x;
	cur-> post = cur->pre = NULL;
	if(!headl)
		headl = headr = cur;
	else
	{
		headr->post = cur;
		ptr = headr;
		headr = headr->post;
		headr->pre = ptr;
	}
}

void pl()
{
	node *ptr;
	if(!headl)
		printf("\n List empty \n");
	else
	{
		printf("\n List : ");
		for(ptr = headl; ptr; ptr=ptr->post)
			printf("%d ",ptr->data);
		printf("\n");
	}
}

void pr()
{
	node *ptr;
	if(!headr)
		printf("\n List empty \n");
	else
	{
		printf("\n List : ");
		for(ptr = headr; ptr; ptr=ptr->pre)
			printf("%d ",ptr->data);
	}
}

void delete_beg()
{
	if(!headl)
	{
		printf("\n List empty \n");
		return;
	}
	else if(!headl->post)
	{
		ptr=headl;
		headl = headr = NULL;
		free(ptr);
	}
	else
	{
		ptr = headl;
		headl = headl->post;
		headl->pre = NULL;
		free(ptr);
	}
}

void delete_end()
{
	if(!headl)
	{
		printf("\n List empty \n");
		return;
	}
	else if(!headr->pre)
		delete_beg();
	else
	{
		ptr = headr;
		headr = headr->pre;
		headr->post = NULL;
		free(ptr);
	}
}

void delete_mid()
{
	node *bef, *aft;
	if(!headl)
	{
		printf("\n List empty \n");
		return;
	}
	else
	{
		printf("\n Enter the element to be deleted : ");
		scanf("%d",&skey);
		if(skey==headl->data)
			delete_beg();
		else if(skey==headr->data)
			delete_end();
		else
		{
			for(ptr=headl; ptr; ptr=ptr->post)
				if(ptr->data==skey)
					break;
			if(!ptr)
				printf("\n Element not present \n");
			else
			{
				bef = ptr->pre;
				aft = ptr->post;
				bef->post = aft;
				aft->pre = bef;
				free(ptr);
			}
		}
	}
}

int main()
{
	int choice, yn = 1;
	do
	{
		printf("\n ***Doubly linked list*** ");
		printf("\n 1. Insert ");
		printf("\n 2. Print from left ");
		printf("\n 3. Print from right ");
		printf("\n 4. Delete from beginning ");
		printf("\n 5. Delete in between ");
		printf("\n 6. Delete from end ");
		printf("\n 7. Exit ");
		printf("\n Enter : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
					break;
					
			case 2: pl();
					break;
					
			case 3: pr();
					break;
					
			case 4: delete_beg();
					break;
					
			case 5: delete_mid();
					break;
					
			case 6: delete_end();
					break;
					
			case 7: yn = 0;
					printf("\n Bye-Bye \n\n");
					break;
					
			default:printf("\n Wrong choice...enter again?(1/0) : ");
					scanf("%d",&yn);
					break;
		}
	}while(yn==1);
	return 0;
}
