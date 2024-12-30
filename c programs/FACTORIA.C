main()
{
long int fno;
int no;
clrscr();
printf("Enter a number to find factorial :");
scanf("%d",&no);
fno=1;

while(no>1)
{
fno=fno*no;
no--;
}
printf("factorial of %ld",fno);
getch();
}