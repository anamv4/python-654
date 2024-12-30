//WAP for pyramid  pattern
main()
{
  int i,j,ctr=0,rows=0;
  clrscr();
  printf("Enter no of rows\n");
  scanf("%d",&rows);

  for(i=1;i<=rows;++i,ctr=0)
  {
    for(j=1;j<=rows-i;++j)

    {
     printf(" ");
    }
     while(ctr!=i)
     {
      printf("* ");
     ++ctr;
     }

    printf("\n");
  }
  getch();
}