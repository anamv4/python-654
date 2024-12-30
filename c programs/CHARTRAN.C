//WAP for pyramid  pattern
main()
{
  char i,j,rows=0;
  clrscr();
  printf("Enter no of rows\n");
  scanf("%d",&rows);

  for(i=65;rows<=i;--i)
  {
  for(j=1;j<=i;j++)
    {
     printf("a");
     }
    printf("\n");
  }
  getch();
}