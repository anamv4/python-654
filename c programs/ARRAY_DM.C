main()
{
int mat1[2][2],j,i;
clrscr();
printf("Enter the elements of an matrix");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&mat1[i][j]);
}
}

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",mat1[i][j]);
}
printf("\n");
}

getch();
}