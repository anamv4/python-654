main()
{
int mat1[2][2],mat2[2][2],j,i;
clrscr();
printf("Enter the elements of an 1st matrix");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&mat1[i][j]);
}
}
printf("Enter the elements of an 2nd matrix");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&mat2[i][j]);
}
}
printf("\n\n\n\n1st matrix :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",mat1[i][j]);
}
printf("\n");
}

printf("2nd matrix :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",mat2[i][j]);
}
printf("\n");
}
printf("addition of 1st and 2nd matrix :\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",mat1[i][j]+mat2[i][j]);
}
printf("\n");
}

getch();
}