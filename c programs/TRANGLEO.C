main()
{
  char i,j,k,rows=0;
  clrscr();
  printf("Enter no of rows\n");
  scanf("%d",&rows);

  for(i=1;i<=rows;i++)
  {
  for(j=1;j<=rows-i;j++)
    {
     printf(" ");
     }
     for(k=1;k<=i;k++)
     {
      printf("%c",k+64);
     }
    printf("\n",i);
  }
  getch();
}