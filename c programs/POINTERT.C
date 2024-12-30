main()
{
 int a,*ptr1,**ptr2;
 clrscr();
 a=50;
 ptr1=&a;
 ptr2=&ptr1;
 printf("%d\n",a);
 printf("%u\n",&a);
  printf("%d\n",*&a);
 printf("%d",*ptr1);
  printf("%u\n",ptr2);
  printf("%u\n",*&ptr1);
 printf("%d",**ptr2);
 getch();
 }