









void main()
{
 char mat1[2][2],mat2[2][2];
 int i,j;
 clrscr();
 printf("Enter elements for matrix");
 for(i=1;i<=2;i++)
 {
  for(j=1;j<=2;j++)
  {
   scanf("%d%d",&mat1[i][j],&mat2[i][j]);
  }
 }
    for(i=1;i<=1;i++)
    {
     for(j=1;j<=1;j++)

  {
   printf("%d%d",mat1[i][j],mat2[i][j]);
   }
   printf("\n");
   }
  getch();
}