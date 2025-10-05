
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>


void displayFunc();


void init() {
    glClearColor(1.0, 1.0, 1.0, 0.0);

    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);

    glPolygonMode(GL_FRONT, GL_FILL);
    glPolygonMode(GL_BACK, GL_LINE);
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(640, 480);
    glutInitWindowPosition(100, 150);
    glutCreateWindow("OpenGL UT Template");

    glutDisplayFunc(displayFunc);

    init();

    glutMainLoop();

    return 0;
}


void displayFunc() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Clockwise (Back Facing) (Lined)
    glBegin(GL_TRIANGLES);
        glVertex2i(100, 50);
        glVertex2i(100, 130);
        glVertex2i(150, 130);
    glEnd();

    // Counter Clockwise (Front Facing) (Filled)
    glBegin(GL_TRIANGLES);
        glVertex2i(200, 50);
        glVertex2i(250, 130);
        glVertex2i(200, 130);
    glEnd();

    glFlush();
}
