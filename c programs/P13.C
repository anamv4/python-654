//program using  for loop
main()
{
 int no,no1,i;
 clrscr();
 printf("Enter no for table");
 scanf("%d",&no);
 no1=no;
// in for loop initilization conditon and increment in a single statement.
for(i=1;i<=10;i++)

 {
  printf("%d*%d=%d",no1,i,no);
  printf("\n");
  no=no+no1;
 }

getch();
}