#include <GL/freeglut.h>
#include <GL/gl.h>
#include <math.h>
#include <stdio.h>
float X1,X2,Y1,Y2;
void plot(int x,int y)
{
	glBegin(GL_POINTS);
		glVertex2i(x,y);
		glEnd();
}
void bre(float X1,float Y1,float X2,float Y2)
{
	 int dx, dy, p, x, y;  
    dx=X2-X1;  
    dy=Y2-Y1;  
    x=X1;  
    y=Y1;  
    p=2*dy-dx;  
    if(x<X2)  
    {  
        while(x<=X2)
        {
		    if(p>0)  
		    {  
		        plot(round(x),round(y));
		        y=y+1;  
		        p=p+2*dy-2*dx;  
		        x=x+1;  
		    }  
		    
		    else  
		    {  
				plot(round(x),round(y));
		        p=p+2*dy;
		        x=x+1;  
		    }
		}      
            
    } 
    else if(x<X2&&y==Y2)
        {
       		while(x<=X2)	
        	{
        		plot(round(x),round(y));
	        	x++;
        	}
        }
    else if(x<X2&&y>Y2)
        {
       		while(y>=Y2)	
        	{
        		plot(round(x),round(y));
	        	x++;y--;
        	}
        }
    else if(x==X2)
    {
    	if(Y2<y)
    	{
    		float temp=Y2;
    		Y2=y;
    		y=temp;
    		temp=X2;
    		X2=x;
    		x=temp;
		}
		while(y<Y2)
		{
			plot(round(x),round(y));
			y++;
		}
    }
    else 
    {
   		if(y<Y2)
   		{
   			while(x>=X2)
   			{
   				plot(round(x),round(y));
   				y+=1;
   				x-=1;
   			}
   		}
   		else if(y>Y2)
   		{
   			while(x>=X2)
   			{
   				plot(round(x),round(y));
   				x--;y--;
   			}
   		}
   		else
   		{
   			while(x>=X2)
   			{
   				plot(round(x),round(y));
   				x--;
   			}
   		}
	}
}    		


void renderFunction()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    gluOrtho2D(-320,320,-240,240);
    glBegin(GL_LINES);
        glVertex2i(-320,0);
        glVertex2i(320,0);
        glVertex2i(0,-240);
        glVertex2i(0,240);        
        
    glEnd();
        //bre(X1,Y1,X2,Y2);
  	 bre(X1,Y1,X2,Y1);
     bre(X1,Y1,X1,Y2);
     bre(X2,Y2,X1,Y2);
     bre(X2,Y2,X2,Y1);
     float X3,Y3,X4,Y4,X5,Y5;
     X3=(X1+X2)/2;
     Y3=(Y1+Y2)/2;
     bre(X3,Y2,X1,Y3);
     bre(X3,Y1,X1,Y3);
     bre(X3,Y1,X2,Y3);
     bre(X2,Y3,X3,Y2);
     X4=(X1+X3)/2;
     Y4=(Y3+Y2)/2;
     X5=(X2+X3)/2;
     Y5=(Y3+Y1)/2;    
     bre(X4,Y4,X5,Y4);
     bre(X5,Y4,X5,Y5);
     bre(X5,Y5,X4,Y5);
     bre(X4,Y5,X4,Y4);
     
    
    glFlush();
}    
int main(int argc, char** argv)
{
    printf("Please Enter x1 coordinate\n");
    scanf("%f",&X1);
    printf("Please Enter y1 coordinate\n");
    scanf("%f",&Y1);
	printf("Please Enter x2 coordinate\n");
    scanf("%f",&X2);
	printf("Please Enter y2 coordinate\n");
    scanf("%f",&Y2);


    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("BRESENHAM");
    glutDisplayFunc(renderFunction);
    glutMainLoop();    
    return 0;
}
