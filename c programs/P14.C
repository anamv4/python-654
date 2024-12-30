//program for prime no using  for loop
main()
{
 int no,i,ctr;
 clrscr();
 printf("Enter no for table");
 scanf("%d",&no);
ctr=0;
// in for loop initilization conditon and increment in a single statement.
for(i=2;i<=no;i++)

 {

 if(no%i==0)
 {
 ctr=ctr+1;
 }

 }
 if(ctr==1)
 {
  printf("Number is Prime");
 }
 else
 {
  printf("Number is Not Prime" );
 }
getch();
}