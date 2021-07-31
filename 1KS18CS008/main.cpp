#include<windows.h>
#include<GL/glut.h>
#include<string.h>
#include<math.h>

float angle;
float theta;

void welcomeDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    glColor3f(1.0,1.0,1.0);

    glRasterPos3f(-150.0,400.0,0);
    char message1[] = "COMPUTER GRAPHICS ASSIGNMENT";
    for(int k=0;k<strlen(message1);k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, message1[k]);
    }

    glRasterPos3f(0.0,300.0,0);
    char message2[] = "CEILING FAN";
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
    char message8[] = "3. PRESS 'f' TO SPIN FAST ";
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
}

void display(void)
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glBegin(GL_POLYGON); //nut 1
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-110+3*cos(theta),-10+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 2
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-110+3*cos(theta),10+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 3
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-85+3*cos(theta),0+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 4
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-10+3*cos(theta),-110+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 5
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(10+3*cos(theta),-110+3*sin(theta));
    }
    glEnd();

     glBegin(GL_POLYGON); //nut 6
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-0+3*cos(theta),-85+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 7
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(110+3*cos(theta),10+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 8
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(110+3*cos(theta),-10+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 9
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(85+3*cos(theta),0+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 10
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(10+3*cos(theta),110+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 11
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(-10+3*cos(theta),110+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //nut 12
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+3*cos(theta),85+3*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //small circle
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+35*cos(theta),0+35*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //inner circle
    glColor3f(1.0,0.0,0.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+64*cos(theta),0+64*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //middle circle
    glColor3f(1.0,1.0,1.0);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+73*cos(theta),0+73*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //outer circle
    glColor3f(1,0.0,0.2);
    for(int i=0; i<360; i++)
    {
        theta=i*3.142/180;
        glVertex2f(0+75*cos(theta),0+75*sin(theta));
    }
    glEnd();

    glBegin(GL_POLYGON); //blade 1
    glColor3f(1.0,0.0,0.0);
    glVertex2d(0,25);
    glVertex2d(0,-25);
    glColor3f(1.0,0.0,0.2);
    glVertex2d(400,-50);
    glVertex2d(400,50);
    glEnd();

    glBegin(GL_POLYGON); //blade 2
    glColor3f(1,0.0,0.0);
    glVertex2d(-25,0);
    glVertex2d(25,0);
    glColor3f(1.0,0.0,0.2);
    glVertex2d(50,-400);
    glVertex2d(-50,-400);
    glEnd();

    glBegin(GL_POLYGON); //blade 3
    glColor3f(1.0,0.0,0.0);
    glVertex2d(0,-25);
    glVertex2d(0,25);
    glColor3f(1.0,0.0,0.2);
    glVertex2d(-400,50);
    glVertex2d(-400,-50);
    glEnd();

    glLineWidth(1.5);
    glBegin(GL_POLYGON); //blade 4
    glColor3f(1.0,0.0,0.0);
    glVertex2d(-25,0);
    glVertex2d(25,0);
    glColor3f(1.0,0.0,0.2);
    glVertex2d(50,400);
    glVertex2d(-50,400);
    glEnd();

    glutSwapBuffers();


}
void init(void)
{
    glClearColor(0.0,0.0,0.0,1.0);
}

void reshape(int w,int h)
{
    glViewport(0,0,(GLsizei)w,(GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-960,960,-540,540);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void spinStart(void)  //function for starting fan
{
    angle=0.3;
    glutPostRedisplay();
    glRotatef(angle,0.0,0.0,-1.0);
}

void spinFast(void)  //function for fast moving fan
{
    angle=1.2;
    glutPostRedisplay();
    glRotatef(angle,0.0,0.0,-1.0);

}

void spinSlow(void)  //function for fast moving fan
{
    angle=0.6;
    glutPostRedisplay();
    glRotatef(angle,0.0,0.0,-1.0);

}

void spinReverse(void)  //function for reverse moving fan
{
    angle=1.2;
    glutPostRedisplay();
    glRotatef(angle,0.0,0.0,1.0);
}

void spinStop()  //function for stopping fan
{
    glutIdleFunc(NULL);
}

void keyAction(unsigned char key,int x,int y)
{
    switch(key)
    {
    case 'f':   //for fast movement
        glutIdleFunc(spinFast);
        break;
    case 'r':   //for reverse movement
        glutIdleFunc(spinReverse);
        break;
    case 's':   //for slow movement
        glutIdleFunc(spinSlow);
        break;
    case 32:   //for starting project
        glutDisplayFunc(display);
        glutPostRedisplay();
        break;
     case 27:   //for stopping project
        exit(0);
        break;
    default:
        break;
    }
}

void mouAction(int button,int state,int x, int y)
{
    switch(button)
    {
    case GLUT_LEFT_BUTTON:
        if(state == GLUT_DOWN)
            glutIdleFunc(spinStart);
        break;
            case GLUT_RIGHT_BUTTON:
        if(state == GLUT_DOWN)
            glutIdleFunc(spinStop);
        break;
    default:
        break;
    }
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(1920,1080);
    glutCreateWindow("Ceiling Fan");
    glutDisplayFunc(welcomeDisplay);
    glutReshapeFunc(reshape);
    init();
    glutMouseFunc(mouAction);
    glutKeyboardFunc(keyAction);
    glEnable(GL_DEPTH_TEST);
    glutMainLoop();
}
