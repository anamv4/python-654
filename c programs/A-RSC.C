main()
{
int length,width,side,radius,area;
clrscr();
area=0;
printf("Enter values of length,width,side and radius") ;
scanf("%d%d",&length,&width,&side,&radius);
area_of_rectangle=(length*width);
area of_square=(side*side);
area of circle=(3.14*radius*radius);
printf("Area of rectangle=%d\narea of square=%d\narea of circle=%d,",area of rectangle,area of square,area of circle);
getch();
}
