main()
{
int no[10],i,ctreven,ctrodd;
clrscr();
ctreven=0;
ctrodd=0;
printf("Enter the element of an ARRAY");
for(i=0;i<=9;i++)
{
scanf("%d",&no[i]);
if(no[i]%2==0)
{
ctreven=ctreven+1;
}
else
{
ctrodd=ctrodd+1;
}
}
{
printf("NO of Even Elements : %d\n",ctreven);
printf("NO of Odd Elements : %d\n",ctrodd);
}
getch();
}