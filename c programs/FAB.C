 main()
 {
  int i,no1,no2,nextno;
   clrscr();
  no1=1;
  no2=2;

  printf("%d\n%d\n",no1,no2);
  for(i=1;i<=10;i++)
  {
    nextno=no1+no2;
    printf("%d\n",nextno);

    no1=no2;
    no2=nextno;
  }
  getch();
}