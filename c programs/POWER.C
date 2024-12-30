main()
{
int base,exp,i;
long int outputvalue;
clrscr();
printf("Enter a base number & exp number");
scanf("%d%d",&base,&exp);
i=1;
 while(i<=exp)
 {
    outputvalue=base*exp;

    i++;
 }
 printf("outputvalue=%ld",outputvalue);
getch();
}
