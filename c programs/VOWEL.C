main()
{
char ch;
clrscr();
printf("Enter your character");
scanf("%c",&ch);
if (ch=='i' || ch=='a' || ch=='e' || ch=='o' || ch=='u')
{
printf("It is vowel");
}
else
{
printf("It is consonant");
}
getch();
}