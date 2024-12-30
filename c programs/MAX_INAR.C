main()
{
int no[10],i,max;
clrscr();
max=0;
printf("Enter the values of an ARRAY");
for(i=0;i<=9;i++)
{
scanf("%d",&no[i]);
if(no[i]>max)
{
  max=no[i];
}
}

printf("Maximum No in given array=%d\n",max);

getch();
}