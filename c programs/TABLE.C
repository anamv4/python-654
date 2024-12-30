main()
{
int i,tno,ntno;
clrscr();
printf("Enter no for table");
scanf("%d",&tno);
ntno=tno;
i=1;
while(i<=10)
{
printf("%dx%d=%d\n",tno,i,ntno);

ntno=ntno+tno;
i=i++;
}
getch();
}