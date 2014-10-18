//
//  main.c
//  Ch1 hello
//
//  Created by Bryan Zhang on 10/18/14.
//  Copyright (c) 2014 Bryan Zhang. All rights reserved.
//

#include <OpenGL/gl.h>
#include <GLUT/GLUT.h>


void init(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void dispaly(void){
    glclear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f(0.25, 0.25, 0);
    glVertex3f(0.75, 0.25, 0);
    glVertex3f(0.75, 0.75, 0);
    glVertex3f(0.25, 0.75, 0);
    glEnd();
    glFlush();
}



int main(int argc, char ** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(250, 250);
    glutInitWindowPosition(100, 100);
    glutcreateWindow("Hello");
    init();
    glutDisplayFunc(dispaly);
    glutMainLoop();
    return 0;
}
