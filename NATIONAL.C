			 //indian national flag//

     #include<stdio.h>
     #include<conio.h>
     #include<conio.H>
     main()
     {
     int gm,gd,i,j=0;
     clrscr();
     gd=detect;
     initgraph(&gd,&gm," ");
     delay(500);
     setcolor(6);
     rectangle(225,125,355,155);
     while(j<=23)
     {
     for(i=0;i<123;i++)
     outtextxy(225+i,125+j,"?");
     j++;
     }
     delay(500);
     setcolor(7);
     rectangle(225,155,355,185);
     j=0;
     while(j<=23)
     {
     for(i=0;i<123;i++)
     outtextxy(225+i,155+j,"?");
     j++;
     }