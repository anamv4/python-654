#include<stdio.h>
main()
{
int m1[2][2],m2[2][2],i,j;
clrscr();
printf("Enter numbers:-\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("\n%d",&m1[i][j]);

scanf("%d",&m2[i][j]);
}

}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{

printf("\n%d\t",m1[i][j]);
printf("%d\t",m2[i][j]);

}


printf("\n");
}
getch();
}