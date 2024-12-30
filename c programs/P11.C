main()
{
 int no,no1,i;
 clrscr();
 printf("enter number for table");
 scanf("%d",&no);
 no1=no;
 i=1;
 while(i<=10)
 {
  printf("%d*%d=%d",no1,i,no);
  printf("\n");
  no=no+no1;
  i=i+1;
 }
getch();
}