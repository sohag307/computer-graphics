#include <iostream>
#include <graphics.h>
#include<math.h>

using namespace std;

int main()
{   int gd = DETECT, gm;
   initgraph(&gd, &gm, "");



    int choice;

    cout << "Enter  your choice: ";
    cout <<"1:National Flag" <<endl;
    cout <<"2:Emoji" <<endl;
    cout <<"3:Moving Cycle" <<endl;
    cout <<"4:Moving Triangle" <<endl;
    cout <<"5:Rocket" <<endl;
    cin >> choice;



    if (choice == 1)
    {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");




   initwindow(1000,1000,"Flag");



//S
line(100,10,130,10);
line(100,10,100,30);
line(100,30,130,30);
line(130,30,130,50);
line(130,50,100,50);

//H
line(150,10,150,50);
line(150,30,180,30);
line(180,10,180,50);

//O
line(200,10,230,10);
line(200,10,200,50);
line(200,50,230,50);
line(230,10,230,50);

//H
line(250,10,250,50);
line(280,10,280,50);
line(250,30,280,30);

//A
line(320,10,300,50);
line(320,10,350,50);
line(310,30,330,30);

//G
line(360,10,390,10);
line(360,10,360,50);
line(360,50,390,50);
line(390,50,390,30);
line(370,30,410,30);
line(410,30,410,50);

//c
line(100,70,100,110);
line(100,70,130,70);
line(100,110,130,110);

//S
line(150,70,190,70);
line(150,70,190,70);
line(150,70,150,90);
line(150,90,190,90);
line(190,90,190,110);
line(150,110,190,110);

//E
line(210,70,210,110);
line(210,70,240,70);
line(210,90,240,90);
line(210,110,240,110);


//2001019141
line(260,70,290,70);
line(290,70,290,90);
line(290,90,260,90);
line(260,90,260,110);
line(260,110,290,110);


line(310,70,310,110);
line(340,70,340,110);
line(310,70,340,70);
line(310,110,340,110);


line(360,70,360,110);
line(390,70,390,110);
line(360,70,390,70);
line(360,110,390,110);

line(410,70,410,110);


line(430,70,430,110);
line(460,70,460,110);
line(430,70,460,70);
line(430,110,460,110);

line(480,70,480,110);


line(500,70,530,70);
line(530,70,530,110);
line(500,110,530,110);
line(500,90,530,90);
line(500,70,500,90);

line(550,70,550,110);

line(600,70,600,110);
line(570,90,600,90);
line(570,70,570,90);

line(620,70,620,110);

       setbkcolor(WHITE);
       setcolor(WHITE);
       rectangle(80,180,100,700);
       setfillstyle(1,WHITE);
       floodfill(90,190,WHITE);

       setcolor(WHITE);
       rectangle(100,200,400,350);
       setfillstyle(1,GREEN);
       floodfill(110,210,WHITE);


       setcolor(WHITE);
       circle(250,270,50);
       setfillstyle(1,RED);
       floodfill(260,280,WHITE);



        getch();
        closegraph();



		}







    else if (choice == 2)
    {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "");

//S
line(100,10,130,10);
line(100,10,100,30);
line(100,30,130,30);
line(130,30,130,50);
line(130,50,100,50);

//H
line(150,10,150,50);
line(150,30,180,30);
line(180,10,180,50);

//O
line(200,10,230,10);
line(200,10,200,50);
line(200,50,230,50);
line(230,10,230,50);

//H
line(250,10,250,50);
line(280,10,280,50);
line(250,30,280,30);

//A
line(320,10,300,50);
line(320,10,350,50);
line(310,30,330,30);

//G
line(360,10,390,10);
line(360,10,360,50);
line(360,50,390,50);
line(390,50,390,30);
line(370,30,410,30);
line(410,30,410,50);

//c
line(100,70,100,110);
line(100,70,130,70);
line(100,110,130,110);

//S
line(150,70,190,70);
line(150,70,190,70);
line(150,70,150,90);
line(150,90,190,90);
line(190,90,190,110);
line(150,110,190,110);

//E
line(210,70,210,110);
line(210,70,240,70);
line(210,90,240,90);
line(210,110,240,110);


//2001019141
line(260,70,290,70);
line(290,70,290,90);
line(290,90,260,90);
line(260,90,260,110);
line(260,110,290,110);


line(310,70,310,110);
line(340,70,340,110);
line(310,70,340,70);
line(310,110,340,110);


line(360,70,360,110);
line(390,70,390,110);
line(360,70,390,70);
line(360,110,390,110);

line(410,70,410,110);


line(430,70,430,110);
line(460,70,460,110);
line(430,70,460,70);
line(430,110,460,110);

line(480,70,480,110);


line(500,70,530,70);
line(530,70,530,110);
line(500,110,530,110);
line(500,90,530,90);
line(500,70,500,90);

line(550,70,550,110);

line(600,70,600,110);
line(570,90,600,90);
line(570,70,570,90);

line(620,70,620,110);

        // Draw smiley face emoji
       setcolor(BLUE);
       circle(300,250,100);
       setfillstyle(1,YELLOW);
       floodfill(305,255,BLUE);

       setcolor(BLACK);
       ellipse(270,220,0,360,20,25);
       setfillstyle(1,BLACK);
       floodfill(275,220,BLACK);

       setcolor(WHITE);
       circle(270,220,10);
       setfillstyle(1,WHITE);
       floodfill(272,222,WHITE);

       setcolor(BLACK);
       ellipse(330,220,0,360,20,25);
       setfillstyle(1,BLACK);
       floodfill(332,222,BLACK);

       setcolor(WHITE);
       circle(330,220,10);
       setfillstyle(1,WHITE);
       floodfill(335,225,WHITE);

       setcolor(BLACK);
       ellipse(300, 280, 180, 360, 47, 17);
       ellipse(300, 280, 180, 360, 48, 18);
       ellipse(300, 280, 180, 360, 48, 19);
       setfillstyle(1,BLACK);
       floodfill(335,225,WHITE);

        getch();
        closegraph();
    }



    else if (choice == 3)
    {
        int gd = DETECT,i,gm;
        initgraph(&gd, &gm, "");




initwindow(1200,1000,"cycle");


	 for(i=0;i<1300;i++)
		  {

//S
line(100,10,130,10);
line(100,10,100,30);
line(100,30,130,30);
line(130,30,130,50);
line(130,50,100,50);

//H
line(150,10,150,50);
line(150,30,180,30);
line(180,10,180,50);

//O
line(200,10,230,10);
line(200,10,200,50);
line(200,50,230,50);
line(230,10,230,50);

//H
line(250,10,250,50);
line(280,10,280,50);
line(250,30,280,30);

//A
line(320,10,300,50);
line(320,10,350,50);
line(310,30,330,30);

//G
line(360,10,390,10);
line(360,10,360,50);
line(360,50,390,50);
line(390,50,390,30);
line(370,30,410,30);
line(410,30,410,50);

//c
line(100,70,100,110);
line(100,70,130,70);
line(100,110,130,110);

//S
line(150,70,190,70);
line(150,70,190,70);
line(150,70,150,90);
line(150,90,190,90);
line(190,90,190,110);
line(150,110,190,110);

//E
line(210,70,210,110);
line(210,70,240,70);
line(210,90,240,90);
line(210,110,240,110);


//2001019141
line(260,70,290,70);
line(290,70,290,90);
line(290,90,260,90);
line(260,90,260,110);
line(260,110,290,110);


line(310,70,310,110);
line(340,70,340,110);
line(310,70,340,70);
line(310,110,340,110);


line(360,70,360,110);
line(390,70,390,110);
line(360,70,390,70);
line(360,110,390,110);

line(410,70,410,110);


line(430,70,430,110);
line(460,70,460,110);
line(430,70,460,70);
line(430,110,460,110);

line(480,70,480,110);


line(500,70,530,70);
line(530,70,530,110);
line(500,110,530,110);
line(500,90,530,90);
line(500,70,500,90);

line(550,70,550,110);

line(600,70,600,110);
line(570,90,600,90);
line(570,70,570,90);

line(620,70,620,110);
		    // For cycle
		    setcolor(WHITE);
		 	line(50+i,555,100+i,555);
        	line(75+i,525,125+i,525);
        	line(50+i,555,75+i,525);
         	line(100+i,555,125+i,525);
         	line(150+i,555,100+i,495);
         	line(75+i,525,75+i,520);
        	line(70+i,520,80+i,520);
        	line(80+i,495,100+i,495);

        	// For cycle Wheels
        	circle(150+i,555,30);
           	circle(50+i,555,30);

           	setcolor(RED);
           	circle(150+i,555,27);
           	circle(50+i,555,27);

           	//For Roads and Road lines
           	setcolor(WHITE);
        	line(0,536,getmaxx(),536);
        	line(0,650,getmaxx(),650);
           	line(0,538,getmaxx(),538);
	        line(0,652,getmaxx(),652);
	       	rectangle(0,590,50,596);
           	rectangle(100,590,150,596);
        	rectangle(200,590,250,596);
        	rectangle(300,590,350,596);
        	rectangle(400,590,450,596);
         	rectangle(500,590,550,596);
        	rectangle(600,590,650,596);
        	rectangle(700,590,750,596);
         	rectangle(800,590,850,596);
        	rectangle(900,590,950,596);
         	rectangle(1000,590,1050,596);
        	rectangle(1100,590,1150,596);
            rectangle(1200,590,1250,596);






		delay(10);


		cleardevice();
	}

        getch();
        closegraph();
    }


     else if (choice == 4)
     {



int gd=DETECT,gm;
initgraph(&gd,&gm,"");
initwindow(1150,700,"moving triangle");


for (int i=1;i<1150;i++)
{



//S
line(100,10,130,10);
line(100,10,100,30);
line(100,30,130,30);
line(130,30,130,50);
line(130,50,100,50);

//H
line(150,10,150,50);
line(150,30,180,30);
line(180,10,180,50);

//O
line(200,10,230,10);
line(200,10,200,50);
line(200,50,230,50);
line(230,10,230,50);

//H
line(250,10,250,50);
line(280,10,280,50);
line(250,30,280,30);

//A
line(320,10,300,50);
line(320,10,350,50);
line(310,30,330,30);

//G
line(360,10,390,10);
line(360,10,360,50);
line(360,50,390,50);
line(390,50,390,30);
line(370,30,410,30);
line(410,30,410,50);

//c
line(100,70,100,110);
line(100,70,130,70);
line(100,110,130,110);

//S
line(150,70,190,70);
line(150,70,190,70);
line(150,70,150,90);
line(150,90,190,90);
line(190,90,190,110);
line(150,110,190,110);

//E
line(210,70,210,110);
line(210,70,240,70);
line(210,90,240,90);
line(210,110,240,110);


//2001019141
line(260,70,290,70);
line(290,70,290,90);
line(290,90,260,90);
line(260,90,260,110);
line(260,110,290,110);


line(310,70,310,110);
line(340,70,340,110);
line(310,70,340,70);
line(310,110,340,110);


line(360,70,360,110);
line(390,70,390,110);
line(360,70,390,70);
line(360,110,390,110);

line(410,70,410,110);


line(430,70,430,110);
line(460,70,460,110);
line(430,70,460,70);
line(430,110,460,110);

line(480,70,480,110);


line(500,70,530,70);
line(530,70,530,110);
line(500,110,530,110);
line(500,90,530,90);
line(500,70,500,90);

line(550,70,550,110);

line(600,70,600,110);
line(570,90,600,90);
line(570,70,570,90);

line(620,70,620,110);

//body
setcolor(WHITE);
line(120+i,330,390+i,330);
line(120+i,330,270+i,200);
line(270+i,200,390+i,330);
//wheels
circle(180+i,360,30);
circle(320+i,360,30);


//Road
    line(0,300,1150,300);
    line(0,298,1150,298);
    line(0,500,1150,500);
    line(0,498,1150,498);
    line(0,400,100,400);
    line(150,400,250,400);
    line(300,400,400,400);
    line(450,400,550,400);
    line(600,400,700,400);
    line(750,400,850,400);
    line(900,400,1000,400);
    line(1050,400,1150,400);
    line(1050,400,1150,400);



 delay(10);
    cleardevice();
}

closegraph();


     }

     else if (choice == 5)
     {


int gr=DETECT,gm;
initgraph(&gr,&gm,"C");
 initwindow(1400,900,"");


//S
line(100,10,130,10);
line(100,10,100,30);
line(100,30,130,30);
line(130,30,130,50);
line(130,50,100,50);

//H
line(150,10,150,50);
line(150,30,180,30);
line(180,10,180,50);

//O
line(200,10,230,10);
line(200,10,200,50);
line(200,50,230,50);
line(230,10,230,50);

//H
line(250,10,250,50);
line(280,10,280,50);
line(250,30,280,30);

//A
line(320,10,300,50);
line(320,10,350,50);
line(310,30,330,30);

//G
line(360,10,390,10);
line(360,10,360,50);
line(360,50,390,50);
line(390,50,390,30);
line(370,30,410,30);
line(410,30,410,50);

//c
line(100,70,100,110);
line(100,70,130,70);
line(100,110,130,110);

//S
line(150,70,190,70);
line(150,70,190,70);
line(150,70,150,90);
line(150,90,190,90);
line(190,90,190,110);
line(150,110,190,110);

//E
line(210,70,210,110);
line(210,70,240,70);
line(210,90,240,90);
line(210,110,240,110);


//2001019141
line(260,70,290,70);
line(290,70,290,90);
line(290,90,260,90);
line(260,90,260,110);
line(260,110,290,110);


line(310,70,310,110);
line(340,70,340,110);
line(310,70,340,70);
line(310,110,340,110);


line(360,70,360,110);
line(390,70,390,110);
line(360,70,390,70);
line(360,110,390,110);

line(410,70,410,110);


line(430,70,430,110);
line(460,70,460,110);
line(430,70,460,70);
line(430,110,460,110);

line(480,70,480,110);


line(500,70,530,70);
line(530,70,530,110);
line(500,110,530,110);
line(500,90,530,90);
line(500,70,500,90);

line(550,70,550,110);

line(600,70,600,110);
line(570,90,600,90);
line(570,70,570,90);

line(620,70,620,110);


      setfillstyle(SOLID_FILL, BROWN);
    rectangle(650, 450, 700, 650);

    // Rocket body
    floodfill(652, 648, 15);
    line(0, 650, 1500, 650);

    // Land outline
    setfillstyle(SOLID_FILL, WHITE);
    line(650, 450, 700, 450);
    line(650, 450, 675, 350);
    line(675, 350, 700, 450);

    // Rocket head
    floodfill(652, 448, 15);
    setfillstyle(SOLID_FILL, BLUE);
    line(650, 500, 650, 450);
    line(625, 500, 650, 500);
    line(625, 500, 650, 450);

    // Rocket left up wing
    floodfill(648, 498, 15);
    setfillstyle(SOLID_FILL, BLUE);
    line(700, 450, 700, 500);
    line(725, 500, 700, 500);
    line(700, 450, 725, 500);

    // Rocket right up wing
    floodfill(702, 498, 15);
    setfillstyle(SOLID_FILL, BLUE);
    line(625, 650, 650, 650);
    line(650, 575, 650, 650);
    line(625, 650, 650, 575);

    // Rocket left down wing
    floodfill(627, 648, 15);
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(627, 698, 15);

    setfillstyle(SOLID_FILL, BLUE);
    line(725, 650, 700, 650);
    line(700, 575, 700, 650);
    line(725, 650, 700, 575);

    // Rocket right down wing
    floodfill(702, 648, 15);
    line(0, 650, 1500, 650);

    // Draw the land with green color
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(627, 698, 15);


getch();
closegraph();
}

    {
        cout << "Invalid choice!";
    }
         }

