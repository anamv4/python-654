main()
{
 int a,*ptr;
 clrscr();
 a=50;
 ptr=&a;
 printf("%d\n",a);
 printf("%u\n",&a);
  printf("%d\n",*&a);
 printf("%d",*ptr);
 getch();
}