#include<windows.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<time.h>

float theta=0.0;
int a=0,m=0,b=0;

void delay(float secs)
{
    float end = clock()/CLOCKS_PER_SEC + secs;
    while((clock()/CLOCKS_PER_SEC) < end);
}

/*void welcomeDisplay()
{
    glClearColor(1.0,0.5,0.0,1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);

    glRasterPos3f(-150.0,400.0,0);
    char message1[] = "COMPUTER GRAPHICS ASSIGNMENT";
    for(int k=0;k<strlen(message1);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message1[k]);
    }

    glRasterPos3f(0.0,300.0,0);
    char message2[] = "THIRSTY CROW";
    for(int k=0;k<strlen(message2);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message2[k]);
    }

    glRasterPos3f(-80.0,200.0,0);
    char message3[] = "NAME: AVINASH PRASAD";
    for(int k=0;k<strlen(message3);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message3[k]);
    }

    glRasterPos3f(0.0,150.0,0);
    char message4[] = "USN: 1KS18CS008";
    for(int k=0;k<strlen(message4);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message4[k]);
    }

    glRasterPos3f(0.0,0.0,0);
    char message5[] = "INSTRUCTIONS";
    for(int k=0;k<strlen(message5);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message5[k]);
    }

    glRasterPos3f(-200.0,-100.0,0);
    char message6[] = "1. PRESS 'LEFT CLICK' TO START THE FAN. ";
    for(int k=0;k<strlen(message6);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message6[k]);
    }

    glRasterPos3f(-200.0,-150.0,0);
    char message7[] = "2. PRESS 'RIGHT CLICK' TO STOP THE FAN ";
    for(int k=0;k<strlen(message7);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message7[k]);
    }

    glRasterPos3f(-200.0,-200.0,0);
    char message8[] = "3. PRESS 's' TO MOVE CROW ";
    for(int k=0;k<strlen(message8);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message8[k]);
    }

    glRasterPos3f(-200.0,-250.0,0);
    char message9[] = "4. PRESS 'r' TO REVERSE THE SPIN";
    for(int k=0;k<strlen(message9);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message9[k]);
    }

    glRasterPos3f(-200.0,-300.0,0);
    char message10[] = "5. PRESS 's' TO SPIN SLOW ";
    for(int k=0;k<strlen(message10);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message10[k]);
    }

    glRasterPos3f(-150.0,-400.0,0);
    char message11[] = " 'SPACEBAR' FOR START THE PROJECT ";
    for(int k=0;k<strlen(message11);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message11[k]);
    }

    glRasterPos3f(-150.0,-450.0,0);
    char message12[] = " 'ESC' FOR STOP THE PROJECT ";
    for(int k=0;k<strlen(message12);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message12[k]);
    }

    glutPostRedisplay();
    glutSwapBuffers();
   // glFlush();
}*/


void pot(void)
{
    glColor3f(0.4,0.2,0.1);
    glBegin(GL_POLYGON); // pot top
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+45*cos(theta),-260+15*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON);  // pot neck
    glVertex2f(35,-300);
    glVertex2f(35,-260);
    glVertex2f(-35,-260);
    glVertex2f(-35,-300);
    glEnd();

    glBegin(GL_POLYGON); // pot bottom
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+95*cos(theta),-380+90*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // pot end
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+35*cos(theta),-465+10*sin(theta));
    }
    glEnd();
    //glutSwapBuffers();
    //glFlush();
}

void crow(void)
{
    glBegin(GL_POLYGON); // crow head
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-570+20*cos(theta),300+20*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // crow eye
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-567+5*cos(theta),303+3.5*sin(theta));
    }
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glPointSize(3.0);  // crow eye ball
    glBegin(GL_POINTS);
    glVertex2f(-567.0,303.0);
    glEnd();

    glBegin(GL_TRIANGLES);  // crow peak
    glVertex2f(-560,308);
    glVertex2f(-530,295);
    glVertex2f(-565,285);
    glEnd();

    glBegin(GL_POLYGON); // crow stomach
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-600+35*cos(theta),282-35*sin(theta));
    }
    glEnd();

    glBegin(GL_TRIANGLES);  // crow tail
    glVertex2f(-627,279);
    glVertex2f(-665,289);
    glVertex2f(-670,269);
    glEnd();

    glBegin(GL_POLYGON);  // crow legs
    glVertex2f(-592,252);
    glVertex2f(-592,235);
    glVertex2f(-600,235);
    glVertex2f(-600,252);
    glEnd();

    //glutSwapBuffers();
    //glFlush();
}

void stone(void)
{
    glColor3f(0.35,0.35,0.35);
    glBegin(GL_POLYGON); // stone 1
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-720+15*cos(theta),-250+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 2
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-750+15*cos(theta),-235+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 3
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-765+15*cos(theta),-265+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 4
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-645+15*cos(theta),-245+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 5
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-630+15*cos(theta),-260+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 6
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-700+15*cos(theta),-280+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 6
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-670+15*cos(theta),-290+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 7
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-800+15*cos(theta),-150+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 8
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-715+15*cos(theta),-180+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 9
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(500+15*cos(theta),-350+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // stone 10
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(650+15*cos(theta),-400+7.5*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); // big stone
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-720+50*cos(theta),-100+31*sin(theta));
    }
    glColor3f(0.1,0.1,0.1);
    glBegin(GL_POLYGON); // big stone shadow
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-720+50*cos(theta),-85+31*sin(theta));
    }
    glEnd();

}

void birds(void)
{
    glLineWidth(1.5);
    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2f(0.0,400.0);  // bird_one
    glVertex2f(50.0,440.0);
    glVertex2f(50.0,440.0);
    glVertex2f(90.0,420.0);
    glVertex2f(0.0,400.0);
    glVertex2f(-50.0,440.0);
    glVertex2f(-50.0,440.0);
    glVertex2f(-90.0,420.0);
    glVertex2f(-150.0,350.0);  // bird_two
    glVertex2f(-200.0,390.0);
    glVertex2f(-200.0,390.0);
    glVertex2f(-240.0,370.0);
    glVertex2f(-150.0,350.0);
    glVertex2f(-100.0,390.0);
    glVertex2f(-100.0,390.0);
    glVertex2f(-60.0,370.0);
    glVertex2f(150.0,350.0);  // bird_three
    glVertex2f(200.0,390.0);
    glVertex2f(200.0,390.0);
    glVertex2f(240.0,370.0);
    glVertex2f(150.0,350.0);
    glVertex2f(100.0,390.0);
    glVertex2f(100.0,390.0);
    glVertex2f(60.0,370.0);
    glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS);
    glVertex2f(0.0,400.0);  // 1
    glVertex2f(-150.0,350.0);  // 2
    glVertex2f(150.0,350.0);  // 3
    glEnd();
}

void smallcactus(void)
{
    glLineWidth(4.5);
    glColor3f(0.0,0.3,0.0);
    glBegin(GL_LINES);  // right side cactus
    glVertex2f(365.0,-55.0);
    glVertex2f(365.0,-12.0);
    glVertex2f(365.0,-30.0);
    glVertex2f(380.0,-30.0);
    glVertex2f(380.0,-30.0);
    glVertex2f(380.0,-15.0);
    glVertex2f(365.0,-40.0);
    glVertex2f(350.0,-40.0);
    glVertex2f(350.0,-40.0);
    glVertex2f(350.0,-20.0);
    glEnd();
    glBegin(GL_LINES);  // left side cactus
    glVertex2f(-450.0,-43.0);
    glVertex2f(-450.0,0.0);
    glVertex2f(-450.0,-28.0);
    glVertex2f(-435.0,-28.0);
    glVertex2f(-435.0,-28.0);
    glVertex2f(-435.0,-8.0);
    glVertex2f(-450.0,-18.0);
    glVertex2f(-465.0,-18.0);
    glVertex2f(-465.0,-18.0);
    glVertex2f(-465.0,-3.0);
    glEnd();
}

void colour(void) // color
{
    glBegin(GL_POLYGON);  // color for sky
    glColor3f(0.8,0.9,1.0);
    glVertex2d(-960,-540);
    glVertex2d(960,-540);
    glColor3f(0.4,0.4,1.0);
    glVertex2d(960,540);
    glVertex2d(-960,540);
    glEnd();

    glBegin(GL_POLYGON); // color for sun
    glColor3f(1.0,0.6,0.0);
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+260*cos(theta),-100+220*sin(theta));
        glColor3f(1.0,0.4,0.0);

    }
    glEnd();

    glColor3f(0.9,0.5,0.1);  // color for desert
    glBegin(GL_POLYGON);
    glVertex2d(960,-25);
    glVertex2d(900,-28);
    glVertex2d(650,-40);
    glVertex2d(600,-43);
    glVertex2d(500,-45);
    glVertex2d(0,-78);
    glVertex2d(960,-450);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(960,-540);
    glVertex2d(960,-155);
    glVertex2d(750,-140);
    glVertex2d(750,-280);
    glVertex2d(650,-280);
    glVertex2d(650,-200);
    glVertex2d(500,-200);
    glVertex2d(500,-120);
    glVertex2d(-690,-20);
    glVertex2d(-690,-100);
    glVertex2d(-750,-100);
    glVertex2d(-750,-20);
    glVertex2d(-960,0);
    glVertex2d(-960,-540);
    glEnd();

    glColor3f(0.0,0.5,0.0);  // color for cactus
    glBegin(GL_POLYGON);
    glVertex2d(650,-280);
    glVertex2d(750,-280);
    glVertex2d(750,100);
    glVertex2d(650,100);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(750,-80);
    glVertex2d(900,-80);
    glVertex2d(800,0);
    glVertex2d(750,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(900,-80);
    glVertex2d(900,50);
    glVertex2d(800,50);
    glVertex2d(800,0);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(650,-200);
    glVertex2d(500,-200);
    glVertex2d(600,-120);
    glVertex2d(650,-120);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(500,-200);
    glVertex2d(500,-15);
    glVertex2d(600,-15);
    glVertex2d(600,-120);
    glVertex2d(650,-120);
    glEnd();

    //color for tree side branch
    glColor3f(0.5,0.2,0.0);
    glBegin(GL_POLYGON);  //right side branch
    glVertex2f(-710,85);
    glVertex2f(-655,120);
    glVertex2f(-635,105);
    glVertex2f(-710,60);
    glEnd();
    glBegin(GL_POLYGON);  //left side branch
    glVertex2d(-750,100);
    glVertex2d(-850,150);
    glVertex2d(-750,80);
    glEnd();

    glBegin(GL_POLYGON);  //trunk
    glVertex2d(-750,-100);
    glVertex2d(-750,220);
    glVertex2d(-715,200);
    glVertex2d(-690,220);
    glVertex2d(-690,99);
    glVertex2d(-690,72);
    glVertex2d(-690,-100);
    glEnd();

    glBegin(GL_POLYGON);  //left branch
    glVertex2d(-750,220);
    glVertex2d(-850,250);
    glVertex2d(-850,260);
    glVertex2d(-900,300);
    glVertex2d(-830,260);
    glVertex2d(-750,235);
    glVertex2d(-728,230);
    glVertex2d(-715,200);
    glEnd();
    glBegin(GL_POLYGON); //left branch top
    glVertex2d(-850,250);
    glVertex2d(-900,240);
    glVertex2d(-850,260);
    glEnd();

    glBegin(GL_POLYGON);  //middle branch
    glVertex2d(-750,235);
    glVertex2d(-735,280);
    glVertex2d(-720,277);
    glVertex2d(-713,270);
    glVertex2d(-728,230);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-735,280);
    glVertex2d(-765,350);
    glVertex2d(-756,356);
    glVertex2d(-720,277);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-765,350);
    glVertex2d(-800,380);
    glVertex2d(-765,360);
    glVertex2d(-755,390);
    glVertex2d(-756,356);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-720,277);
    glVertex2d(-650,350);
    glVertex2d(-645,338);
    glVertex2d(-713,270);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-650,350);
    glVertex2d(-575,380);
    glVertex2d(-645,338);
    glEnd();

    glBegin(GL_POLYGON); //right branch
    glVertex2d(-715,200);
    glVertex2d(-700,235);
    glVertex2d(-690,220);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-700,235);
    glVertex2d(-545,238);
    glVertex2d(-540,225);
    glVertex2d(-690,220);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(-545,238);
    glVertex2d(-520,260);
    glVertex2d(-535,237);
    glVertex2d(-470,215);
    glVertex2d(-540,225);
    glEnd();
}


void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    colour();

    glLineWidth(2);
    glBegin(GL_LINES); //Desert outline coordinates
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-960,0);
    glVertex2d(-750,-20);

    glVertex2d(-690,-20);
    glVertex2d(500,-120);

    glVertex2d(750,-140);
    glVertex2d(960,-155);

    glVertex2d(960,-25);
    glVertex2d(900,-28);

    glVertex2d(650,-40);
    glVertex2d(600,-43);

    glVertex2d(500,-45);
    glVertex2d(0,-78);

    glEnd();

    glBegin(GL_LINES); //Tree coordinates
    glColor3f(0.0,0.0,0.0);
    glVertex2d(-750,-100);
    glVertex2d(-750,220);

    glVertex2d(-690,-100);
    glVertex2d(-690,72);

    glVertex2d(-690,99);
    glVertex2d(-690,220);

    //branches
    glVertex2d(-750,220);
    glVertex2d(-850,250);

    glVertex2d(-850,250);
    glVertex2d(-900,240);

    glVertex2d(-900,240);
    glVertex2d(-850,260);

    glVertex2d(-850,260);
    glVertex2d(-900,300);

    glVertex2d(-900,300);
    glVertex2d(-830,260);

    glVertex2d(-830,260);
    glVertex2d(-750,235);

    glVertex2d(-750,235);
    glVertex2d(-735,280);

    glVertex2d(-735,280);
    glVertex2d(-765,350);

    glVertex2d(-765,350);
    glVertex2d(-800,380);

    glVertex2d(-800,380);
    glVertex2d(-765,360);

    glVertex2d(-765,360);
    glVertex2d(-755,390);

    glVertex2d(-755,390);
    glVertex2d(-756,356);

    glVertex2d(-756,356);
    glVertex2d(-720,277);

    glVertex2d(-720,277);
    glVertex2d(-650,350);

    glVertex2d(-650,350);
    glVertex2d(-575,380);

    glVertex2d(-575,380);
    glVertex2d(-645,338);

    glVertex2d(-645,338);
    glVertex2d(-713,270);

    glVertex2d(-713,270);
    glVertex2d(-728,230);

    glVertex2d(-728,230);
    glVertex2d(-715,200);

    glVertex2d(-715,200);
    glVertex2d(-700,235);

    glVertex2d(-700,235);
    glVertex2d(-545,238);

    glVertex2d(-545,238);
    glVertex2d(-520,260);

    glVertex2d(-520,260);
    glVertex2d(-535,237);

    glVertex2d(-535,237);
    glVertex2d(-470,215);

    glVertex2d(-690,220);
    glVertex2d(-540,225);

    glVertex2d(-540,225);
    glVertex2d(-470,215);

    glVertex2d(-750,100);
    glVertex2d(-850,150);

    glVertex2d(-850,150);
    glVertex2d(-750,80);

    glVertex2d(-710,85);
    glVertex2d(-655,120);

    glVertex2d(-710,60);
    glVertex2d(-635,105);

    glVertex2d(-635,105);
    glVertex2d(-655,120);
    glEnd();

    glBegin(GL_POLYGON); //tree hollow
    glColor3f(0.0,0.0,0.0);
    for(int i=0; i<180; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-690-15*sin(theta),43-25*cos(theta));
    }
    glEnd();

    glBegin(GL_LINES); //cactus
    glColor3f(0.0,0.0,0.0);
    glVertex2d(650,-280);
    glVertex2d(650,100);

    glVertex2d(750,-280);
    glVertex2d(750,100);

    glVertex2d(650,100);
    glVertex2d(750,100);

    glVertex2d(750,-80);
    glVertex2d(900,-80);

    glVertex2d(900,-80);
    glVertex2d(900,50);

    glVertex2d(900,50);
    glVertex2d(800,50);

    glVertex2d(800,50);
    glVertex2d(800,0);

    glVertex2d(750,0);
    glVertex2d(800,0);

    glVertex2d(650,-200);
    glVertex2d(500,-200);

    glVertex2d(500,-200);
    glVertex2d(500,-15);

    glVertex2d(500,-15);
    glVertex2d(600,-15);

    glVertex2d(600,-15);
    glVertex2d(600,-120);

    glVertex2d(600,-120);
    glVertex2d(650,-120);
    glEnd();

    glPointSize(4.5);  // cactus spike
    glBegin(GL_POINTS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(725.0,70.0);
    glVertex2f(700.0,-90.0);
    glVertex2f(680.0,10.0);
    glVertex2f(720.0,-30.0);
    glVertex2f(675.0,-160.0);
    glVertex2f(710.0,-210.0);
    glVertex2f(790.0,-60.0);
    glVertex2f(860.0,-50.0);
    glVertex2f(825.0,-10.0);
    glVertex2f(875.0,20.0);
    glVertex2f(520.0,-55.0);
    glVertex2f(575.0,-95.0);
    glVertex2f(535.0,-155.0);
    glVertex2f(585.0,-185.0);
    glVertex2f(635.0,-135.0);
    glEnd();

    smallcactus();
    birds();
    stone();

    glutSwapBuffers();
    //glFlush();
}

void movement()
{
    glClear(GL_COLOR_BUFFER_BIT);
    display();
    glPushMatrix();
    glTranslated(a,b,0);
    crow();
    glPopMatrix();
    glPushMatrix();
    glTranslated(0,0,0);
    pot();
    glPopMatrix();
    a+=190;
    b-=165;
    glFlush();
}

void keyAction(unsigned char key,int x,int y)
{
    switch(key)
    {
        //case 32:   //for starting project
            //glutDisplayFunc(movement);
            //glutPostRedisplay();
            //break;

        /*case 's':
            for(m=0; m<=2; m++)
            {
                movement();
                delay(1);
            }
            break;*/

        case 27:   //for stopping project
            exit(0);
            break;
        default:
            break;
    }
}

void init(void)
{
    glClearColor(1.0,1.0,1.0,1.0);
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-960,960,-540,540);
    glMatrixMode(GL_MODELVIEW);

}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Thirsty_Crow");
    glutDisplayFunc(movement);
    glutKeyboardFunc(keyAction);
    glutReshapeFunc(reshape);
    init();
    glutMainLoop();
}
