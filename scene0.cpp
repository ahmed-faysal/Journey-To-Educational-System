#include "declarations.h"
#include "functions.h"

void birth()
{
    //Ceiling
    glBegin(GL_POLYGON);
    glColor3ub(65, 105, 120); // Aqua
    glVertex2f(0, 800);
    glVertex2f(70, 700);
    glVertex2f(1400, 700);
    glVertex2f(1400, 800);
    glEnd();

    // Border for Ceiling
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 800);
    glVertex2f(70, 700);
    glVertex2f(1400, 700);
    glVertex2f(1400, 800);
    glEnd();

    // Side Wall
    glBegin(GL_POLYGON);
    glColor3ub(176, 204, 217); // Light Aqua
    glVertex2f(0, 800);
    glVertex2f(0, 75);
    glVertex2f(100, 200);
    glVertex2f(100, 700);
    glEnd();

    // Border for Side Wall
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(0, 800);
    glVertex2f(100, 700);
    glVertex2f(100, 200);
    glVertex2f(0, 75);
    glEnd();

    // Center Wall
    glBegin(GL_POLYGON);
    glColor3ub(120, 160, 175);
    glVertex2f(100, 700);
    glVertex2f(1400, 700);
    glColor3ub(164, 191, 203);
    glVertex2f(1400, 200);
    glVertex2f(100, 200);
    glEnd();

    // Floor
    glBegin(GL_POLYGON);
    glColor3ub(120, 160, 175);
    glVertex2f(100, 200);
    glVertex2f(1400, 200);
    glVertex2f(1400, 75);
    glVertex2f(0, 75);
    glEnd();

    // Border for Floor
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);
    glVertex2f(100, 200);
    glVertex2f(1400, 200);
    glVertex2f(1400, 75);
    glVertex2f(0, 75);
    glEnd();

    // Border
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(122, 76, 29); // Wood Dark Brown
    glVertex2f(300, 350);
    glVertex2f(300, 500);
    glVertex2f(300, 500);
    glVertex2f(500, 500);
    glVertex2f(500, 500);
    glVertex2f(500, 350);
    glVertex2f(300,350);
    glVertex2f(500,350);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(12, 172, 232); // Sky Blue
	glVertex2f(300, 500);
	glVertex2f(500, 500);
	glColor3ub(82, 163, 42); // Green Grass
	glVertex2f(500, 350);
	glVertex2f(300, 350);
	glEnd();


}

void drawBubble()
{
    drawCircle(575, 535, 255, 255, 255, 120, 50, 1);

    drawCircle(1200, 535, 255, 255, 255, 120, 50, 1);

    glColor3f(1,1,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(640,520);
    glVertex2f(645,520);
    glVertex2f(683,470);

    glBegin(GL_TRIANGLES);
    glVertex2f(1040,460);
    glVertex2f(1095,515);
    glVertex2f(1100,515);

    glEnd();
}

void showScene0()
{
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    print("This is how our future are decided before we know it",
          1, 1, 1, b_subtitle_1_appear, 300, 30 + trans_subtitle_1_done, .14, .14, 1);

    birth();

    drawMan(70, -120, 1.3, 1.3,
            60, 60, 60,
            20, 150, 225, // top
            60, 55, 25, // ribbon
            0, 0, 0 // skirt
           );

    drawWoman(1630, -90, -1.2, 1.2,
              20, 20, 20,
              229, 49, 49, // top
              37, 107, 202, // bottom
              229, 49, 49 // skirt
             );

    drawBaby(800,160,.8,.8);

    drawBubble();
    print("My son will be an Engineer",
          0, 0, 0, birth_bubble1_text, 470, 535, .075, .075, 1);

    print("No ! He'll be a doctor",
          0, 0, 0, birth_bubble2_text, 1100, 535, .075, .075, 1);
}
