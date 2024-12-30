main()
{
int a,b,temp;
clrscr();

temp=0;
printf("enter your nos.");
scanf("%d%d",&a,&b);
printf("Before swaping :%d\t%d\n",a,b);
temp=a;
a=b;
b=temp;

printf("After swaping :%d\t%d",a,b);
getch();
}