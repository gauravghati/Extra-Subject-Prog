#include <GL/freeglut.h>
#include <GL/gl.h>
#include<math.h>
#include<stdio.h>

void BLA_Line(int x1,int y1,int x2,int y2 );
void plot(int x,int y);
void renderFunction()
{ glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
   
   
   
    BLA_Line(0,240,320,0);
    BLA_Line(30,0,60,20);
/*    BLA_Line(640,240,320,480);
    BLA_Line(0,240,320,480);
    
    BLA_Line(0,0,640,0);
    BLA_Line(0,0,0,480);
    BLA_Line(0,479,639,479);
    BLA_Line(639,0,639,480);
    
    BLA_Line(160,120,160,360);
    BLA_Line(160,360,480,360);
    BLA_Line(480,360,480,120);
    BLA_Line(480,120,160,120); */
    glFlush();
}
void BLA_Line(int x1,int y1,int x2,int y2 )
{  int dx,dy;
   dx=abs(x2-x1);
   dy=(y2-y1);
   int p=2*dy-dx;
   float m=dy/dx;
   plot(round(x1),round(y1));
    if(m<1)
   { if(p<0)
     { x1+=1;
       plot(round(x1),round(y1));
       p+=2*dy;
      
      }
    
    else{
          x1+=1;
          y1+=1;
          p+= 2*(dy-dx);
          plot(round(x1),round(y1));
     }
    
  }
  
  else{
  if(p<0)
     { y1+=1;
       plot(round(x1),round(y1));
       p+=2*dx;
      
      }
  
    else{
          x1+=1;
          y1+=1;
          p+= 2*(dx-dy);
          plot(round(x1),round(y1));
     }
  }    		

}
void plot(int x,int y)
{
	 glBegin(GL_POINTS);
        glVertex2i(x, y); 
    glEnd();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("OpenGL - First window demo");
    glutDisplayFunc(renderFunction);
    glutMainLoop();    
    return 0;
}
