main()
{
 int a,b;
 clrscr();
 printf("Enter values of a and b");
 scanf("%d%d",&a,&b);
 add(&a,&b);
 getch();
}
add(int *x, int *y)
{
 int p;
  p=*x+*y;
  printf("Addition=%d",p);
}


