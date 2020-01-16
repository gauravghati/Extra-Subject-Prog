#include <GL/freeglut.h>
#include <GL/gl.h>

void renderFunction()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    gluOrtho2D(0.0,640.0,0.0,480.0);
    
    // G
    glBegin(GL_LINES);			// y
        glVertex2i(10, 10);
        glVertex2i(10, 100);    
    glBegin(GL_LINES);			// x
        glVertex2i(10, 10);
        glVertex2i(75, 10);
    glBegin(GL_LINES);			 
        glVertex2i(10, 100);
        glVertex2i(100, 100);   
    glBegin(GL_LINES);
        glVertex2i(75, 10);
        glVertex2i(75, 50); 
    glBegin(GL_LINES);
        glVertex2i(75, 10);
        glVertex2i(75, 50);
    glBegin(GL_LINES);
        glVertex2i(75, 50);
        glVertex2i(100, 50);   
    glBegin(GL_LINES);
        glVertex2i(100, 10);
        glVertex2i(100, 50);  
        
    //A    
    glBegin(GL_LINES);			// y
        glVertex2i(120, 100);
        glVertex2i(200, 100);    
    glBegin(GL_LINES);			// x
        glVertex2i(120, 50);
        glVertex2i(200, 50);
    glBegin(GL_LINES);			 
        glVertex2i(120, 100);
        glVertex2i(120, 10);
    glBegin(GL_LINES);			 
        glVertex2i(200, 100);
        glVertex2i(200, 10);   
    
    //U    
    glBegin(GL_LINES);			// x
        glVertex2i(220, 100);
        glVertex2i(220, 10);
    glBegin(GL_LINES);			 
        glVertex2i(220, 10);
        glVertex2i(300, 10);
    glBegin(GL_LINES);			 
        glVertex2i(300, 10);
        glVertex2i(300, 100);         
    
    //R    
    glBegin(GL_LINES);			 
        glVertex2i(320, 100);
        glVertex2i(400, 100);   
    glBegin(GL_LINES);
        glVertex2i(320, 100);
        glVertex2i(320, 10); 
    glBegin(GL_LINES);
        glVertex2i(320, 50);
        glVertex2i(400, 10);
    glBegin(GL_LINES);
        glVertex2i(320, 50);
        glVertex2i(400, 50);   
    glBegin(GL_LINES);
        glVertex2i(400, 100);
        glVertex2i(400, 50);                  
        
    //A    
    glBegin(GL_LINES);			// y
        glVertex2i(420, 100);
        glVertex2i(500, 100);    
    glBegin(GL_LINES);			// x
        glVertex2i(420, 50);
        glVertex2i(500, 50);
    glBegin(GL_LINES);			 
        glVertex2i(420, 100);
        glVertex2i(420, 10);
    glBegin(GL_LINES);			 
        glVertex2i(500, 100);
        glVertex2i(500, 10);   
        
    //V    
    glBegin(GL_LINES);			 
        glVertex2i(520, 100);
        glVertex2i(560, 10);
    glBegin(GL_LINES);			 
        glVertex2i(560, 10);
        glVertex2i(600, 100);         
                                                
    glEnd();
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
