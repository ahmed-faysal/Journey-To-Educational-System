#include "declarations.h"
#include "functions.h"

void drawSchool()
{
    glPushMatrix();

    glTranslatef(20,300,0);
    glScalef(0.9,0.9,0);
    // School Building
    glBegin(GL_POLYGON);
    glColor3ub(184, 88, 68);
    glVertex2f(400, 175);
    glVertex2f(1000, 175);
    glVertex2f(1000, 500);
    glColor3ub(241, 130, 94);
    glVertex2f(400, 500);
    glEnd();

    // School Building Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(400, 175);
    glVertex2f(1000, 175);
    glVertex2f(1000, 500);
    glVertex2f(400, 500);
    glEnd();

    // School Board
    glBegin(GL_POLYGON);
    glColor3ub(183, 184, 188);
    glVertex2f(500, 530);
    glVertex2f(880, 530);
    glVertex2f(880, 470);
    glVertex2f(500, 470);
    glEnd();

    // School Board Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(500, 530);
    glVertex2f(880, 530);
    glVertex2f(880, 470);
    glVertex2f(500, 470);
    glEnd();

    print("Kindergarten", 0, 0, 0, 1, 570, 485, .2, .2, 1.5);

    // School Door
    glBegin(GL_POLYGON);
    glColor3ub(183, 184, 188);
    glVertex2f(600, 175);
    glVertex2f(600, 280);
    glVertex2f(800, 280);
    glVertex2f(800, 175);
    glEnd();

    // School Door Border
    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(600, 175);
    glVertex2f(600, 280);
    glVertex2f(800, 280);
    glVertex2f(800, 175);
    glEnd();

    // School Door Divider
    glBegin(GL_LINES);
    glColor3ub(20, 20, 20);
    glVertex2f(700, 280);
    glVertex2f(700, 175);
    glEnd();

    // School Windows
    for (int i = 0; i <= 500; i+=100)
    {
        for (int j = 0; j <= 100; j+=80)
        {
            glBegin(GL_POLYGON);
            glColor3ub(59, 91, 132);
            glVertex2f(425 + i, 450 - j);
            glVertex2f(475 + i, 450 - j);
            glVertex2f(475 + i, 400 - j);
            glColor3ub(97, 131, 159);
            glVertex2f(425 + i, 400 - j);
            glEnd();

            glBegin(GL_LINE_LOOP);
            glColor3ub(20, 20, 20);
            glVertex2f(425 + i, 450 - j);
            glVertex2f(475 + i, 450 - j);
            glVertex2f(475 + i, 400 - j);
            glVertex2f(425 + i, 400 - j);
            glEnd();

            glLineWidth(4);
            glBegin(GL_LINES);
            glColor3ub(140, 75, 55);
            glVertex2f(425 + i, 400 - j);
            glVertex2f(475 + i, 400 - j);
            glEnd();
            glLineWidth(1);
        }
    }

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(425, 280);
    glVertex2f(475, 280);
    glVertex2f(475, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(425, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(425, 280);
    glVertex2f(475, 280);
    glVertex2f(475, 200);
    glVertex2f(425, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(525, 280);
    glVertex2f(575, 280);
    glVertex2f(575, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(525, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(525, 280);
    glVertex2f(575, 280);
    glVertex2f(575, 200);
    glVertex2f(525, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(825, 280);
    glVertex2f(875, 280);
    glVertex2f(875, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(825, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(825, 280);
    glVertex2f(875, 280);
    glVertex2f(875, 200);
    glVertex2f(825, 200);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(59, 91, 132);
    glVertex2f(925, 280);
    glVertex2f(975, 280);
    glVertex2f(975, 200);
    glColor3ub(97, 131, 159);
    glVertex2f(925, 200);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub(20, 20, 20);
    glVertex2f(925, 280);
    glVertex2f(975, 280);
    glVertex2f(975, 200);
    glVertex2f(925, 200);
    glEnd();

    glPopMatrix();
}

void drawBackground()
{
    glPushMatrix();

    glTranslatef(0,150,0);
    glScalef(1,1,0);

    // Background
    glBegin(GL_POLYGON);
    glColor3ub(sky_r, sky_g, sky_b); // Sky Blue
    glVertex2f(0, 800);
    glVertex2f(1400, 800);
    glVertex2f(1400, 400);
    glVertex2f(0, 400);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(sky_r, sky_g, sky_b); // Sky Blue
    glVertex2f(0, 400);
    glVertex2f(1400, 400);
    glColor3ub(grass_r, grass_g, grass_b); // Green Grass
    glVertex2f(1400, 175);
    glVertex2f(0, 175);
    glEnd();

    glPopMatrix();
}

void drawRoad()
{
    glPushMatrix();

    glTranslatef(0,-150,0);
    glScalef(1,3,0);
    // Road
    glBegin(GL_POLYGON);
    glColor3ub(40, 40, 40);
    glVertex2f(0, 175);
    glVertex2f(1400, 175);
    glVertex2f(1400, 75);
    glVertex2f(0, 75);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0, 125);
    glVertex2f(200, 125);

    glVertex2f(300, 125);
    glVertex2f(500, 125);

    glVertex2f(600, 125);
    glVertex2f(800, 125);

    glVertex2f(900, 125);
    glVertex2f(1100, 125);

    glVertex2f(1200, 125);
    glVertex2f(1400, 125);
    glEnd();
    glLineWidth(1);

    glPopMatrix();
}

void characters()
{
    glPushMatrix();

    glTranslatef(ctX + 250,ctY,0);
    glScalef(csX,csY,0);

    drawWoman(0, 0, 1, 1,
              60, 60, 60,
              142, 33, 119, // top
              117, 36, 100, // ribbon
              142, 33, 119 // skirt
             );

    drawKid(400, 300,
            .7, .7,
            2, 95, 247
           );

    glPopMatrix();
}

void showScene2()
{
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    drawBackground();
    drawRoad();
    drawSchool();

    characters();

    print(" Study life begins walking to KG school holding mom's hand.. ",
          1, 1, 1, gs_subtitle_1_appear, 300, 30 + trans_subtitle_1_done, .14, .14, 1);
}
