main()
{
float radius,area,len,wid,side;
clrscr();
printf("Enter radius of circle");
scanf("%f%f",&radius);
area=3.14*radius*radius;
printf("Area of circle=%f\n",area);
printf("Enter len&wid of rectangle");
scanf("%f%f",&len,&wid);
area=len*wid;
printf("Area of rectangle=%f\n",area);
printf("Enter side of square");
scanf("%f%f",&side);
area=side*side;
printf("Area of square=%f\n",area);
getch();
}