main()
{
int grosssalary,basic,ta,da,hra;
clrscr();
printf("Enter the salary");
scanf("%d",&basic);
hra=0;
ta=0;
da=0;
if(basic<25000)
{
hra=500;
ta=250;
}
else
{
hra=1800;
ta=750;
da=250;
}
grosssalary=basic+hra+ta+da;
printf("Gross Salary=%d",grosssalary);
getch();
}
