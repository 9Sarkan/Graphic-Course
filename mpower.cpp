// ConsoleApplication2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <gl\glut.h>

void draw();

int main(int argc, char **argv)
{
	glutInit(&argc, (char **)argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(400, 300);
	glutInitWindowSize(800, 600);
	glutCreateWindow("ALI MOHAMMADY");
	gluOrtho2D(-800, 800, -600, 600);
	glClearColor(0, 0, 0, 0);
	glMatrixMode(GL_PROJECTION);
	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;             /* ANSI C requires main to return int. */
}

void drawTriangle(int x0,int y0,int x1,int y1,int x2,int y2,float r = 1, float g = 1, float b = 1) {
	glBegin(GL_POLYGON);
	{
		// change color 
		glColor3f(r, g, b);
		// set point
		glVertex2f(x0, y0);
		// set point
		glVertex2f(x1, y1);
		// set point
		glVertex2f(x2, y2);
	}
	glEnd();
}

void drawM() {
	// T1
	drawTriangle(0, -200, 50, 200, 100, 200);
	// T2
	drawTriangle(0, -200, 100, 200, 80, -70);
	// T3
	drawTriangle(80, -70, 100, 200, 115, 40);
	// T4
	drawTriangle(80, -70, 115, 40, 155, -80);
	// T5
	drawTriangle(80, -70, 155, -80, 140, -200);
	// T6
	drawTriangle(80, -70, 100, -200, 140, -200);
	// T7
	drawTriangle(115, 40, 140, 200, 155, -80);
	// T8
	drawTriangle(140, 200, 200, -200, 155, -80);
	// T9
	drawTriangle(140, 200, 185, 200, 200, -200);
	// T10
	drawTriangle(200, -200, 165, -200, 155, -80);
	// T11
	drawTriangle(0, -200, 70, -200, 80, -70);
}

void DrawMPower() {
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT);
	char name[] = "BMW MPower";
	glRasterPos2d(0, 0);
	for (int i = 0; i < 10; i++) {
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, name[i]);
	}
	// Draw M
	drawM();
	// Draw First /
	drawTriangle(-15, 200, 35, 200, -15, -200, 1, 0, 0);
	drawTriangle(-15, 200, -65, -200, -15, -200, 1, 0, 0);
	// Draw second /
	drawTriangle(-65, 200, -15, 200, -65, -200, 0, 0.5, 0.5);
	drawTriangle(-65, 200, -115, -200, -65, -200, 0, 0.5, 0.5);
	// Draw third /
	drawTriangle(-115, 200, -65, 200, -115, -200, 0, 0, 1);
	drawTriangle(-115, 200, -165, -200, -115, -200, 0, 0, 1);
	glFlush();
}

void draw() {
	DrawMPower();
}