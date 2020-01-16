#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>

void DDA(int x1, int y1, int x2, int y2);

void renderFunction()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0); 
    
   //lines
	DDA(640, 240, 0, 240);
	DDA(320, 0, 320, 480);
	//DDA(110, 10, 10, 110);
	//DDA(110, 10, 10, 110);				
	//DDA(110, 10, 10, 110);
	//DDA(110, 10, 10, 110);
	//DDA(110, 10, 10, 110);
	//DDA(110, 10, 10, 110);
	//DDA(110, 10, 10, 110);
	//DDA(110, 10, 10, 110);
	//DDA(110, 10, 10, 110);
	
    glEnd();s
    glFlush();
}


void DDA(int x1, int y1, int x2, int y2){
	
	float dy,dx,step,x,y,k,Xin,Yin;
	
	dx=x2-x1;
	dy=y2-y1;
	 
	if(abs(dx)> abs(dy)){
		step = abs(dx);
	}
	else
		step = abs(dy);
	 
	Xin = dx/step;
	Yin = dy/step;
	 
	x= x1;
	y=y1;
	glBegin(GL_POINTS);
	glVertex2i(x,y);
	glEnd();
	 
	for (k=1 ;k<=step;k++){
		x= x + Xin;
		y= y + Yin;
		 
		glBegin(GL_POINTS);
		glVertex2i(x,y);
		glEnd();
	}
	
	glFlush();

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
