main()
{
int len;
char str1[10],str2[10];
clrscr();
scanf("%s%s",&str1,&str2);
len=strlen(str1);
printf("Length of str1=%d",len);
printf("\n1st String %s",str2);
printf("\n2nd String before copy function%s",str1);
strcpy(str1,str2);

printf("\n2nd String after copy function %s\n",str1);
if(strcmp(str1,str2)==0)
 {
  printf("Both strings are equal");
 }
else
  {
  printf("Both strings are not equal");
  }
getch();
}