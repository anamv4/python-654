main()
{
float principle,time,rate,SI;
clrscr();
printf("Enter principle,time & rate of SI");
scanf("%f%f%f",&principle,&time,&rate);
SI=principle*time*rate;
printf("Simple interest=%f",SI);
getch();
}