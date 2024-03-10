#include<conio.h>
#include<stdio.h>
#include<process.h>
void main()
{  int i,j;
	textbackground(RED);

	system("cls");
	textbackground(RED);


	for(i=1;i<=25;i++)
	{
		for(j=1;j<=80;j++)
		{
			cprintf(" ");
		}

	}
	window(25,5,60,20);
	{

	int arr[9]={48,49,50,51,52,53,54,55,56},p=0,pos;
   int r,s;
   int re[9];
   char player1[20],player2[20];
   clrscr();
   textbackground(BLUE);
   textcolor(YELLOW);
   window(25,5,60,20);{
	clrscr();
   printf("  First Player Enter Your Name"); }
   window(25,6,60,20);{
	clrscr();
   scanf("%s",&player1);}
	window(25,7,60,20);{
	clrscr();
   printf("  Second Player Enter Your Name");}
	window(25,8,60,20);{
	clrscr();
   scanf("%s",&player2);}
	window(20,5,60,20);{
	clrscr();
   printf("  Let's Play");}
   m:
   window(25,6,60,20);{
	clrscr();
   printf("%c   |   %c|   %c",arr[0],arr[1],arr[2]);
   window(25,7,60,20);{
	clrscr();
   printf("____|____|____");
   window(25,8,60,20);{
	clrscr();
   printf("%c   |   %c|   %c",arr[3],arr[4],arr[5]);
   window(25,9,60,20);{
	clrscr();
   printf("____|____|____");
   window(25,10,60,20);{
	clrscr();
   printf("%c   |   %c|   %c",arr[6],arr[7],arr[8]);
   window(25,11,60,20);{
	clrscr();
   printf("    |    |    \n");

   }}}}}}
   if(p%2==0)
   {    a:
		 window(20,13,60,20);{
	clrscr();
	   printf("%s Enter your position\n",player1);}
		window(20,14,60,20);{
			clrscr();
	   scanf("%d",&pos);}
	   for(r=0;r<p;r++)
	   {
		  if( re[r]==pos)
		  {		 window(20,15,60,20);{
				clrscr();
			  printf("Please Enter other position");}
		  goto a;
		  }
	   }
	   re[p]=pos;

	   arr[pos]=42;

   }
   else
   {    b:
		 window(20,13,60,20);{
	clrscr();

	   printf("%s Enter your position\n",player2);}
		window(20,14,60,20);{
				clrscr();
	   scanf("%d",&pos);}
		for(r=0;r<p;r++)
	   {
		  if( re[r]==pos)
		  {		 window(20,14,60,20);{
				clrscr();
			  printf("  Please Enter other position");}
		  goto b;
		  }
	   }
	   re[p]=pos;
	   arr[pos]=48;
   }

   p++;
   if(arr[0]==arr[1]&&arr[1]==arr[2] || arr[0]==arr[3] && arr[3]==arr[6] || arr[0]==arr[4]&&arr[4]==arr[8] || arr[1]==arr[4]&&arr[4]==arr[7] || arr[2]==arr[5]&&arr[5]==arr[8] || arr[3]==arr[4]&&arr[4]==arr[5]|| arr[6]==arr[7]&&arr[7]==arr[8 ]|| arr[6]==arr[4]&&arr[4]==arr[2]  )
   {
		if(p==5||p==7||p==9)
			   {	 window(20,13,60,20);{
				clrscr();
				textcolor(YELLOW);
				cprintf("  %s is winnner   ",player1);
				} }
		else
			{
				 window(20,13,60,20);{
				clrscr();
				printf("  %s is winner   ",player2);}
				}

			goto l;


   }
	if(p<9)
	goto m;
	l:
	  window(25,6,60,11);{
	clrscr();
   printf("%c   |   %c|   %c",arr[0],arr[1],arr[2]);
   window(25,7,60,11);{
	clrscr();
   printf("____|____|____");
   window(25,8,60,11);{
	clrscr();
   printf("%c   |   %c|   %c",arr[3],arr[4],arr[5]);
   window(25,9,60,11);{
	clrscr();
   printf("____|____|____");
   window(25,10,60,11);{
	clrscr();
   printf("%c   |   %c|   %c",arr[6],arr[7],arr[8]);
   window(25,11,60,11);{
	clrscr();
   printf("    |    |    ");

   }}}}}}
	}




getch();
window(1,1,80,25);{
	clrscr();
	textcolor(BLINK);
	printf("\n\n\t\t\t\tThank You");
}
getch();

}




   
  