main()
{
char ch;
clrscr();
printf("Enter your chracter");
scanf("%c",&ch);
if(ch>=65 && ch<=91)
{
printf("It is uppercase");
}
else
{
printf("It is lowercase");
}
getch();
}