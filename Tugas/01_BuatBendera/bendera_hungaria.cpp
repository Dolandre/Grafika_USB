#include <GL/glut.h>

void benderaHungaria() {
    // Garis bendera merah
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);
    glVertex2f(0.0, 0.66);
    glVertex2f(1.0, 0.66);
    glVertex2f(1.0, 1.0);
    glVertex2f(0.0, 1.0);
    glEnd();

    // Garis bendera putih
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex2f(0.0, 0.33);
    glVertex2f(1.0, 0.33);
    glVertex2f(1.0, 0.66);
    glVertex2f(0.0, 0.66);
    glEnd();

    // Garis bendera hijau
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0.0, 0.0);
    glVertex2f(1.0, 0.0);
    glVertex2f(1.0, 0.33);
    glVertex2f(0.0, 0.33);
    glEnd();
}

void display() {
    glClearColor(1.0, 1.0, 1.0, 1.0); // Latar belakang putih (RGBA: 1.0, 1.0, 1.0, 1.0)
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    benderaHungaria();
    glutSwapBuffers();
}

void reshape(int width, int height) {
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1.0, 0.0, 1.0); // Skala bendera Hungaria tetap 1:1
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Bendera Hungaria");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}