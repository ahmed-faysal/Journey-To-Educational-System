#include "declarations.h"
#include "functions.h"

void showScene1()
{
    // Background
    glClearColor(0.05, 0.05, 0.05, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    // Summary Title
    print("Summary",
          1, 1, 1, 1, 75, 650, .3, .3, 1.5);

    // Summary Text
    print("As children, we are taught to follow, not to lead. We are taught mostly to learn rather than explore.",
          1, 1, 1, summary_para1_fade, 75, 575, .125, .125, 1.25);
    print("Educational system makes us learn by heart, not to understand.",
          1, 1, 1, summary_para1_fade, 75, 550, .125, .125, 1.25);

    print("As we grow up, things don't change much. We are mostly given choice of either choosing",
          1, 1, 1, summary_para2_fade, 75, 475, .125, .125, 1.25);
    print("to be a Doctor or an Engineer, and the rest of the options are less focused... ",
          1, 1, 1, summary_para2_fade, 75, 450, .125, .125, 1.25);

    print("Why always doctor or Engineer ?",
          1, 1, 1, summary_para3_fade, 75, 375, .125, .125, 1.25);
    print("Why life goals are always focused on money !!!",
          1, 1, 1, summary_para3_fade, 75, 350, .125, .125, 1.25);

    print("Press N to move on...",
          1, 1, 1, summary_next_text_appear, 580, 10, .09, .09, 1);
}
