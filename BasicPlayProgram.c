#include<stdio.h>
#include<windows.h>
#include<MMsystem.h>
#include<string.h>
void play();
void stop();

int main()
{
	int choice;
	
	do
	{
		printf("\n Enter Your Choice \n1.Play \n2.Stop \n3.Exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	play();
					break;
			case 2:printf("\n !!Stoped Song   ");
					stop();
					break;
				
		}
	}while(choice!=3);
	return 0;
}

void stop()
{
	PlaySound(TEXT("STOPED"),NULL,SND_APPLICATION);
	
}
void play()
{
	char songname[100];
	printf("\n Enter Song Name ");
	scanf("%s",&songname);
	
	PlaySound(songname,NULL,SND_ASYNC);
	printf("\n Playing Song....  ");
				
//return 0;	
}

