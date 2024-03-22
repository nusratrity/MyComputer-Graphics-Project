#include <iostream>
#include<graphics.h>
using namespace std;

void myFunction();
void flag();
void Emoji();
void village();
void boat();
void kite();
void train();


int main()
{
    myFunction();
    int day;
    while(day!=0)
    {
        cout<<"\nEnter your choice: ";
        cin>>day;
        if(day!=0&&day!=1&&day!=2&&day!=3&&day!=4&&day!=5&&day!=6)
            cout<<"You selected wrong Option"<<endl;
        else
            switch (day)
            {
            case 1:
               flag();
                break;
            case 2:
                Emoji();
                break;
            case 3:
                village();
                break;
            case 4:
                boat();
                break;
            case 5:
               kite();
                break;

            case 6:
               train();
               break;

            }
    }
    return 0;
}


void myFunction()
{
    cout << " Here is the Project Context:"<<endl;
    cout << "\n1. National Flag"<<endl;
    cout << "\n2. Emoji"<<endl;
    cout << "\n3. My village"<<endl;
    cout << "\n4. Boat"<<endl;
    cout << "\n5. The Kite"<<endl;
    cout << "\n6. Train"<<endl;
}


//national flag
void flag()
{
    initwindow(500,400,"National Flag");
//green Part
setcolor(GREEN);
rectangle(50,50,220,150);
setfillstyle(SOLID_FILL,GREEN);
floodfill(51,51,GREEN);

//handle
setcolor(WHITE);
rectangle(40,40,50,300);
setfillstyle(SOLID_FILL,DARKGRAY);
floodfill(41,41,WHITE);

//circle
setcolor(RED);
circle(130,100,35);
setfillstyle(SOLID_FILL,RED);
floodfill(131,101,RED);


//text
    setcolor(LIGHTMAGENTA);
     settextstyle(3,0,3);
     outtextxy(180,350," Fig: National Flag");



    getch();
    closegraph();
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Emoji()
{
    int gd= DETECT,gm;
    initgraph(&gd,&gm,"");
//face
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,YELLOW);
   circle(250,200,100);
   floodfill(251,201,YELLOW);

//  eyes
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(200,150,10);
floodfill(200,150,BLACK);

setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(300,150,10);
floodfill(300,150,BLACK);

//mouth
arc(250,200,180,360,80);

setcolor(YELLOW);
     settextstyle(3,0,3);
     outtextxy(180,380," Fig: MR.Smiley");




    getch();
    closegraph();
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void village()
 {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    //House

    line(150,50,200,100);
    line(150,50,80,120);
    line(80,120,100,120);
    line(150,50,350,50);
    line(350,50,400,100);
    line(100,100,100,200);
    line(100,200,200,200);
    line(200,100,200,200);
    line(400,200,400,100);
    line(200,200,400,200);
    line(200,100,400,100);
    //
 rectangle(130,130,170,170);
 rectangle(250,130,320,200);

line(320,130,305,140);
line(305,140,305,200);
line(250,130,265,140);
line(265,140,265,200);


   setfillstyle(SOLID_FILL,BLACK);
   floodfill(131,131,WHITE);
   setfillstyle(SOLID_FILL,LIGHTMAGENTA);
   floodfill(101,101,WHITE);
   setfillstyle(SOLID_FILL,LIGHTRED);
   floodfill(163,55,WHITE);
   setfillstyle(SOLID_FILL,LIGHTRED);
   floodfill(82,119,WHITE);
   setfillstyle(SOLID_FILL,MAGENTA);
   floodfill(251,121,WHITE);
   setfillstyle(SOLID_FILL,BROWN);
   floodfill(150,205,WHITE);
   setfillstyle(1,6);
   floodfill(250,205,WHITE);
   setfillstyle(SOLID_FILL,LIGHTRED);
   floodfill(310,145,WHITE);
   setfillstyle(SOLID_FILL,LIGHTRED);
   floodfill(260,145,WHITE);


//TREE
line(505,130,505,200);
line(532,130,532,200);
line(505,200,531,200);
line(480,130,560,130);
line(480,130,500,100);
line(500,100,480,100);
line(480,100,500,70);
line(500,70,480,70);
line(480,70,520,40);
line(560,130,540,100);
line(540,100,560,100);
line(560,100,540,70);
line(540,70,560,70);
line(560,70,520,40);

setfillstyle(SOLID_FILL,BROWN);
floodfill(506,131,WHITE);
setfillstyle(SOLID_FILL,GREEN);
floodfill(501,101,WHITE);

//MOUNTAIN
line(100,180,0,180);
line(400,180,505,180);
line(532,180,639,180);
line(100,150,50,110);
line(50,110,0,150);
line(400,150,450,110);
line(450,110,505,150);
line(532,150,590,110);
line(590,110,639,150);

setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(50,150,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(401,150,WHITE);
setfillstyle(SOLID_FILL,LIGHTGRAY);
floodfill(535,150,WHITE);

//sky
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(0,0,WHITE);
setfillstyle(SOLID_FILL,LIGHTBLUE);
floodfill(504,148,WHITE);
floodfill(535,132,WHITE);

//sun


circle(70,50,40);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(71,51,WHITE);

//grass

setfillstyle(SOLID_FILL,GREEN);
floodfill(20,250,WHITE);
setfillstyle(SOLID_FILL,GREEN);
floodfill(350,230,WHITE);


setcolor(WHITE);
     settextstyle(3,0,3);
     outtextxy(200,380," Fig: My Village");



    getch();
    closegraph();
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void boat()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");



//boat
   setcolor(YELLOW);
   setfillstyle(SOLID_FILL,DARKGRAY);
   line(50,200,350,200);
   line(50,200,120,299);
   line(280,299,120,299);
   line(280,299,350,200);
   floodfill(150,245,YELLOW);


//river
   setcolor(LIGHTBLUE);
   setfillstyle(SOLID_FILL,LIGHTBLUE);
   rectangle(0,300,640,450);
   floodfill(320,375,LIGHTBLUE);

//moon
   setcolor(WHITE);
   circle(500,60,40);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(501,60,WHITE);

//stars


setcolor(WHITE);
    for (int i = 0; i < 50; ++i)
        {
        int x = rand() % getmaxx(); // Generate random x coordinate
        int y = rand() % (getmaxy() / 2); // Generate random y coordinate in the upper half of the screen
        putpixel(x, y, WHITE); // Draw white dot as a star
    }


    setcolor(WHITE);
     settextstyle(3,0,3);
     outtextxy(220,380," Fig: Journey By Boat");



    getch();
    closegraph();

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void kite()

 {

    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


     line(200,200,300,100);
     line(300,100,400,200);
     line(400,200,300,300);
     line(300,100,300,300);
     line(300,300,200,200);
     arc(300,300,45,135,140);

     setfillstyle(SOLID_FILL,BLUE);
     floodfill(301,105,WHITE);

     setfillstyle(SOLID_FILL,RED);
     floodfill(299,105,WHITE);


     setfillstyle(SOLID_FILL,BLUE);
     floodfill(299,275,WHITE);

     setfillstyle(SOLID_FILL,RED);
     floodfill(301,275,WHITE);

     setfillstyle(SOLID_FILL,BLUE);
     floodfill(301,105,WHITE);

     setfillstyle(SOLID_FILL,RED);
     floodfill(301,275,WHITE);

     line(300,300,250,350);
     line(250,350,350,350);
     line(300,300,350,350);
     setfillstyle(SOLID_FILL,BLUE);
     floodfill(300,310,WHITE);

     setfillstyle(SOLID_FILL,YELLOW);
     fillellipse(250,208,18,WHITE);

     setfillstyle(SOLID_FILL,YELLOW);
     fillellipse(350,208,18,WHITE);




     setcolor(LIGHTMAGENTA);
     settextstyle(3,0,3);
     outtextxy(250,380," Fig: KITE");





    getch();
    closegraph();

}



void train()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"");
    initwindow(650,500,"Train");



    line(0,424,700,424);
  setfillstyle(SOLID_FILL,6);
  rectangle(40,340,120,407);
  floodfill(41,350,15);
  setfillstyle(SOLID_FILL,8);

	rectangle(30,330,130,340);

	floodfill(31,331,15);

	setfillstyle(SOLID_FILL,3);

	rectangle(50,360,70,380);

	floodfill(51,370,15);

	setfillstyle(SOLID_FILL,3);

	rectangle(90,360,110,380);
	floodfill(91,370,15);

	setfillstyle(SOLID_FILL,7);

	rectangle(120,390,150,398);

	floodfill(121,391,15);

	setcolor(8);

	setfillstyle(SOLID_FILL,8);

	circle(55,410,12);

	floodfill(56,420,8);

	setfillstyle(SOLID_FILL,8);

	circle(99,410,12);

	floodfill(100,420,8);

	setcolor(15);
setfillstyle(SOLID_FILL,6);

	rectangle(150,340,230,407);

	floodfill(151,341,15);

	setfillstyle(SOLID_FILL,8);

	rectangle(140,330,240,340);

	floodfill(141,331,15);

	setfillstyle(SOLID_FILL,3);

	rectangle(160,360,180,380);

	floodfill(161,361,15);
	setfillstyle(SOLID_FILL,3);
	rectangle(200,360,220,380);
	floodfill(201,361,15);

	setcolor(8);
	setfillstyle(SOLID_FILL,8);
	circle(165,410,12);
	floodfill(166,411,8);
	setfillstyle(SOLID_FILL,8);
	circle(210,410,12);
	floodfill(211,411,8);
	setcolor(15);

	setfillstyle(SOLID_FILL,2);
	rectangle(260,340,310,407);
	floodfill(261,341,15);
	setfillstyle(SOLID_FILL,8);
	rectangle(250,330,320,340);
	floodfill(251,331,15);
	setcolor(8);

	setfillstyle(SOLID_FILL,8);
	circle(284,406,18);
	floodfill(285,416,8);
	setcolor(15);

	setfillstyle(SOLID_FILL,11);
	rectangle(310,370,380,407);
	floodfill(311,380,15);
	setfillstyle(SOLID_FILL,3);
	rectangle(270,350,290,370);
	floodfill(271,360,15);

	setcolor(8);
	setfillstyle(SOLID_FILL,8);
	circle(328,410,12);
	floodfill(329,420,8);
	setfillstyle(SOLID_FILL,8);
	circle(364,410,12);
	floodfill(365,420,8);
	setcolor(15);

	setfillstyle(SOLID_FILL,7);
	rectangle(350,330,365,370);
	floodfill(351,340,15);
	setfillstyle(SOLID_FILL,8);
	rectangle(347,325,367,330);
	floodfill(348,326,15);
	setfillstyle(SOLID_FILL,7);
	rectangle(230,390,260,398);
	floodfill(231,391,15);
	setfillstyle(SOLID_FILL,15);
	circle(350,310,5);
	floodfill(351,311,15);
	setfillstyle(SOLID_FILL,15);
	circle(355,319,3);
	floodfill(356,320,15);
	setfillstyle(SOLID_FILL,15);
	circle(365,310,4);
	floodfill(366,311,15);
	setfillstyle(SOLID_FILL,15);
	circle(354,300,3);
	floodfill(355,301,15);
	setfillstyle(SOLID_FILL,15);
	circle(350,290,5);
	floodfill(351,291,15);
	setfillstyle(SOLID_FILL,15);
	circle(344,300,3);
	floodfill(345,301,15);


	 setcolor(YELLOW);
     settextstyle(3,0,3);
     outtextxy(250,450," Fig: Train");



    getch();
    closegraph();
}



//------------------------------------------------------------------the end------------------------------------------------------------------//





