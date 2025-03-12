
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
void code()
{
    // road
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Black color
glVertex2f(-1.0f, 6.0f);
glVertex2f(1.0f, 6.0f);
glVertex2f(1.0f, -6.0f);
glVertex2f(-1.0f, -6.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Black color
glVertex2f(7.0f, 1.0f);
glVertex2f(7.0f, -1.0f);
glVertex2f(-7.0f, -1.0f);
glVertex2f(-7.0f, 1.0f);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3ub(255, 255, 255); // White color
glVertex2f(0.0f, 6.0f);
glVertex2f(0.0f, -6.0f);
glEnd();
glBegin(GL_LINES);
glColor3ub(255, 255, 255); // White color
glVertex2f(-7.0f, 0.0f);
glVertex2f(7.0f, 0.0f);
glEnd();

//Sky
glBegin(GL_POLYGON);
glColor3ub(0,  255, 255); // Sky blue color
glVertex2f(7.0f, 6.0f);
glVertex2f(7.0f, 10.0f);
glVertex2f(-7.0f, 10.0f);
glVertex2f(-7.0f, 6.0f);
glEnd();
//plot
glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(-7.0f, -1.0f);
glVertex2f(-1.0f, -1.0f);
glVertex2f(-1.0f, -6.0f);
glVertex2f(-7.0f, -6.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(1.0f, -6.0f);
glVertex2f(7.0f, -6.0f);
glVertex2f(7.0f, -1.0f);
glVertex2f(1.0f, -1.0f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(1.0f, 1.0f);
glVertex2f(7.0f, 1.0f);
glVertex2f(7.0f, 6.0f);
glVertex2f(1.0f, 6.0f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(-1.0f, 1.0f);
glVertex2f(-7.0f, 1.0f);
glVertex2f(-7.0f, 6.0f);
glVertex2f(-1.0f, 6.0f);
glEnd();

//Train
glBegin(GL_POLYGON);
glColor3ub(128, 128, 128); // Iron color
glVertex2f(-7.0f, -5.0f);
glVertex2f(-7.1f, -5.1f);
glVertex2f(7.1f, -5.1f);
glVertex2f(7.0f, -5.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128, 128, 128); // Iron color
glVertex2f(-7.0f, -6.0f);
glVertex2f(-7.0f, -5.90f);
glVertex2f(7.0f, -5.90f);
glVertex2f(7.0f, -6.0f);
glEnd();

glBegin(GL_LINE_STRIP);
glLineWidth(10);
glColor3ub(128, 128, 128); // Iron color
glVertex2f(-6.0f, -5.0f);
glVertex2f(-6.0f, -6.0f);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub(128, 128, 128); // Iron color

// Line segments
glVertex2f(-7.0f, -5.0f);
glVertex2f(-7.0f, -6.0f);

glVertex2f(-5.0f, -5.0f);
glVertex2f(-5.0f, -6.0f);

glVertex2f(-4.0f, -5.0f);
glVertex2f(-4.0f, -6.0f);

glVertex2f(-3.0f, -5.0f);
glVertex2f(-3.0f, -6.0f);

glVertex2f(-2.0f, -5.0f);
glVertex2f(-2.0f, -6.0f);

glVertex2f(-1.0f, -5.0f);
glVertex2f(-1.0f, -6.0f);

glVertex2f(1.0f, -5.0f);
glVertex2f(1.0f, -6.0f);

glVertex2f(2.0f, -5.0f);
glVertex2f(2.0f, -6.0f);

glVertex2f(3.0f, -5.0f);
glVertex2f(3.0f, -6.0f);

glVertex2f(4.0f, -5.0f);
glVertex2f(4.0f, -6.0f);

glVertex2f(5.0f, -5.0f);
glVertex2f(5.0f, -6.0f);

glVertex2f(6.0f, -5.0f);
glVertex2f(6.0f, -6.0f);

glVertex2f(7.0f, -5.0f);
glVertex2f(7.0f, -6.0f);
glEnd();


//tree
glBegin(GL_POLYGON);
glColor3ub(101, 67, 33); // Dark wood color
glVertex2f(-2.2f, -4.23f);
glVertex2f(-1.8f, -4.23f);
glVertex2f(-1.8f, -3.0f);
glVertex2f(-2.2f, -3.0f);

glEnd();
glBegin(GL_POLYGON);
glColor3ub(244, 238, 184); // Light green color
glVertex2f(-2.6999949152289f, -3.0f);
glVertex2f(-1.3f, -3.0f);
glVertex2f(-1.6f, -2.8f);
glVertex2f(-1.4f, -2.8f);
glVertex2f(-2.0f, -2.4f);
glVertex2f(-2.6f, -2.8f);
glVertex2f(-2.4f, -2.8f);

glEnd();
// bulding 1
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255); // White color
glVertex2f(-6.0f, -4.0f);
glVertex2f(-3.0f, -4.0f);
glVertex2f(-3.0f, -0.5f);
glVertex2f(-6.0f, -0.5f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(139, 69, 19); // Door color (brown)
glVertex2f(-4.8f, -4.0f);
glVertex2f(-4.2f, -4.0f);
glVertex2f(-4.2f, -3.0f);
glVertex2f(-4.8f, -3.0f);

glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 0, 139);
glVertex2f(-5.75f, -2.5f);
glVertex2f(-5.0f, -2.5f);
glVertex2f(-5.0f, -2.0f);
glVertex2f(-5.75f, -2.0f);

glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 0, 139); // Deep window color (dark blue)

// Updated points
glVertex2f(-4.0f, -2.5f);
glVertex2f(-3.21374f, -2.5f);
glVertex2f(-3.21374f, -2.0f);
glVertex2f(-4.0f, -2.0f);

glEnd();
glBegin(GL_LINES);
glColor3ub(128, 128, 128); // Gray color

glVertex2f(-6.0f, -1.8f);
glVertex2f(-3.0f, -1.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 0, 139); // Deep window color (dark blue)
glVertex2f(-5.8f, -1.2f);
glVertex2f(-5.2f, -1.2f);
glVertex2f(-5.2f, -0.71497f);
glVertex2f(-5.8f, -0.71497f);

glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 0, 139); // Deep window color (dark blue)
glVertex2f(-3.8f, -1.2f);
glVertex2f(-3.2f, -1.2f);
glVertex2f(-3.2f, -0.71f);
glVertex2f(-3.8f, -0.71f);

glEnd();
// bulding 2
glBegin(GL_POLYGON);
glColor3ub(255, 255, 0); // Yellow color
glVertex2f(1.9f, -4.42275f);
glVertex2f(5.0f, -4.42275f);
glVertex2f(5.00728f, -1.21375f);
glVertex2f(1.9f, -1.21375f);

glEnd();
glBegin(GL_POLYGON);
glColor3ub(205, 25, 0); // door
glVertex2f(3.2f, -4.4f);
glVertex2f(3.75575f, -4.4f);
glVertex2f(3.75575f, -3.64111f);
glVertex2f(3.2f, -3.64111f);

glEnd();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Window color (light blue)
glVertex2f(2.5f, -3.0f);
glVertex2f(3.0f, -3.0f);
glVertex2f(3.0f, -2.6032f);
glVertex2f(2.5f, -2.6032f);

glEnd();

glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Window color (light blue)

glVertex2f(4.0f, -3.0f);
glVertex2f(4.5f, -3.0f);
glVertex2f(4.5f, -2.6032f);
glVertex2f(4.0f, -2.6032f);

glEnd();

glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Window color (light blue)

glVertex2f(4.0f, -2.0f);
glVertex2f(4.5f, -2.0f);
glVertex2f(4.5f, -1.5f);
glVertex2f(4.0f, -1.5f);

glEnd();

glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Window color (light blue)

glVertex2f(2.5f, -2.0f);
glVertex2f(3.0f, -2.0f);
glVertex2f(3.0f, -1.5f);
glVertex2f(2.5f, -1.5f);

glEnd();

glBegin(GL_LINES);
glColor3ub(128, 128, 128); // Gray color for lines

// First line
glVertex2f(1.9f, -3.2f);
glVertex2f(5.0f, -3.2f);

// Second line
glVertex2f(1.9f, -2.3f);
glVertex2f(5.0f, -2.3f);

glEnd();
//2nd tree
glBegin(GL_POLYGON);
glColor3ub(50, 205, 50); // Tree leaf color
glVertex2f(5.2f, -2.5f);
glVertex2f(6.70547f, -2.5f);
glVertex2f(6.0f, -2.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(101, 67, 33); // Dark wood color
glVertex2f(5.81729f, -3.9f);
glVertex2f(6.21289f, -3.9f);
glVertex2f(6.21289f, -3.0213f);
glVertex2f(5.81729f, -3.0213f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(50, 205, 50); // Tree leaf color
glVertex2f(5.2f, -3.0f);
glVertex2f(6.80122f, -3.0f);
glVertex2f(6.38538f, -2.50554f);
glVertex2f(5.5f, -2.5f);
glEnd();

//3rd bulding
glBegin(GL_POLYGON);
glColor3ub(212, 108, 244); // Building color (slate gray)
glVertex2f(-7.0f, 2.0f);
glVertex2f(-4.0f, 2.0f);
glVertex2f(-4.0f, 6.8f);
glVertex2f(-7.0f, 6.8f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(101, 67, 33); // Door color (deep brown)
glVertex2f(-5.7f, 2.0f);
glVertex2f(-5.2f, 2.0f);
glVertex2f(-5.2f, 2.8264f);
glVertex2f(-5.7f, 2.8264f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 128, 128); // Light teal color
glVertex2f(-6.8f, 3.4f);
glVertex2f(-6.2f, 3.4f);
glVertex2f(-6.2f, 3.8f);
glVertex2f(-6.8f, 3.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 128, 128); // Light teal color
glVertex2f(-4.8f, 3.4f);
glVertex2f(-4.2f, 3.4f);
glVertex2f(-4.2f, 3.8f);
glVertex2f(-4.8f, 3.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 128, 128); // Light teal color
glVertex2f(-4.8f, 4.4f);
glVertex2f(-4.2f, 4.4f);
glVertex2f(-4.2f, 4.8f);
glVertex2f(-4.8f, 4.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 128, 128); // Light teal color
glVertex2f(-6.8f, 4.4f);
glVertex2f(-6.2f, 4.4f);
glVertex2f(-6.2f, 4.8f);
glVertex2f(-6.8f, 4.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 128, 128); // Light teal color
glVertex2f(-6.8f, 5.4f);
glVertex2f(-6.2f, 5.4f);
glVertex2f(-6.2f, 5.8f);
glVertex2f(-6.8f, 5.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 128, 128); // Light teal color
glVertex2f(-4.8f, 5.4f);
glVertex2f(-4.2f, 5.4f);
glVertex2f(-4.2f, 5.8f);
glVertex2f(-4.8f, 5.8f);
glEnd();

glBegin(GL_LINES);
glColor3ub(199, 21, 133); // Medium violet red color
glVertex2f(-7.0f, 3.0f);
glVertex2f(-4.0f, 3.0f);
glVertex2f(-7.0f, 4.0f);
glVertex2f(-4.0f, 4.0f);
glVertex2f(-7.0f, 5.0f);
glVertex2f(-4.0f, 5.0f);
glEnd();
//3rd tree
glBegin(GL_POLYGON);
glColor3ub(101, 67, 33); // Dark wood color
glVertex2f(-2.8f, 2.5f);
glVertex2f(-2.5f, 2.5f);
glVertex2f(-2.5f, 3.5f);
glVertex2f(-2.8f, 3.5f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(50, 205, 50); // Tree leaf color
glVertex2f(-2.67164f, 4.40746f);
glVertex2f(-1.92846f, 4.08767f);
glVertex2f(-2.2085f, 4.09002f);
glVertex2f(-1.70073f, 3.82163f);
glVertex2f(-2.01264f, 3.81437f);
glVertex2f(-1.5f, 3.5f);
glVertex2f(-3.7028f, 3.51697f);
glVertex2f(-3.2313f, 3.80712f);
glVertex2f(-3.49969f, 3.82163f);
glVertex2f(-3.10073f, 4.10453f);
glVertex2f(-3.36076f, 4.10119f);
glEnd();

//4th tree
glBegin(GL_POLYGON);
glColor3ub(50, 205, 50); // Example color (tree leaf green)
glVertex2f(-1.8f, 7.2f);
glVertex2f(-1.27909f, 6.79773f);
glVertex2f(-1.6f, 6.8f);
glVertex2f(-1.11899f, 6.59687f);
glVertex2f(-1.4f, 6.6f);
glVertex2f(-1.0f, 6.4f);
glVertex2f(-2.6f, 6.4f);
glVertex2f(-2.2f, 6.6f);
glVertex2f(-2.52207f, 6.59978f);
glVertex2f(-2.0f, 6.8f);
glVertex2f(-2.31248f, 6.79482f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(101, 67, 33); // Dark wood color
glVertex2f(-2.0f, 5.2f);
glVertex2f(-1.6f, 5.2f);
glVertex2f(-1.6f, 6.4f);
glVertex2f(-2.0f, 6.4f);
glEnd();

//4th house
glBegin(GL_POLYGON);
glColor3ub(129, 79, 119); // Kheyri color (brown)
glVertex2f(2.0f, 2.0f);
glVertex2f(5.0f, 2.0f);
glVertex2f(5.0f, 4.0f);
glVertex2f(2.0f, 4.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128, 0, 0); // Maroon color
glVertex2f(3.5f, 5.0f);
glVertex2f(5.5f, 4.0f);
glVertex2f(1.5f, 4.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19); // Door color (brown)
glVertex2f(3.2f, 2.0f);
glVertex2f(3.8f, 2.0f);
glVertex2f(3.8f, 2.8f);
glVertex2f(3.2f, 2.8f);
glEnd();
// First polygon
glBegin(GL_POLYGON);
glColor3ub(211, 211, 211); // Light gray
glVertex2f(2.2f, 3.2f);
glVertex2f(2.8f, 3.2f);
glVertex2f(2.8f, 3.6f);
glVertex2f(2.2f, 3.6f);
glEnd();

// Second polygon
glBegin(GL_POLYGON);
glColor3ub(211, 211, 211); // Light gray
glVertex2f(4.2f, 3.2f);
glVertex2f(4.8f, 3.2f);
glVertex2f(4.8f, 3.6f);
glVertex2f(4.2f, 3.6f);
glEnd();

// Third polygon
glBegin(GL_POLYGON);
glColor3ub(211, 211, 211); // Light gray
glVertex2f(3.2f, 4.2f);
glVertex2f(3.8f, 4.2f);
glVertex2f(3.8f, 4.6f);
glVertex2f(3.2f, 4.6f);
glEnd();
//water
glBegin(GL_POLYGON);
glColor3ub(0, 191, 255); // Swimming water color (Deep Sky Blue)
glVertex2f(5.6f, 1.8f);
glVertex2f(6.8f, 1.8f);
glVertex2f(6.8f, 3.4f);
glVertex2f(5.6f, 3.4f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(5.6f, 2.4f);
glVertex2f(6.0f, 2.4f);
glVertex2f(6.0f, 2.8f);
glVertex2f(5.6f, 2.8f);
glEnd();
// last tree
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Tree leaf color (Forest Green)
glVertex2f(6.0f, 7.1f);
glVertex2f(6.3f, 6.9f);
glVertex2f(6.1f, 6.9f);
glVertex2f(6.6f, 6.6f);
glVertex2f(6.2f, 6.6f);
glVertex2f(6.8f, 6.2f);
glVertex2f(5.2f, 6.2f);
glVertex2f(5.8f, 6.6f);
glVertex2f(5.4f, 6.6f);
glVertex2f(5.9f, 6.9f);
glVertex2f(5.7f, 6.9f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(101, 67, 33); // Dark wood color
glVertex2f(5.8f, 5.2f);
glVertex2f(6.2f, 5.2f);
glVertex2f(6.2f, 6.2f);
glVertex2f(5.8f, 6.2f);
glEnd();

// Parking car
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Natural color: beige
glVertex2f(1.6f, 1.5f);
glVertex2f(1.7590051059217f, 1.8027312259343f);
glVertex2f(2.7128006024573f, 1.7964562555624f);
glVertex2f(2.8069251580364f, 1.5172200740108f);
glVertex2f(3.0014492395667f, 1.5172200740108f);
glVertex2f(3.0f, 1.2f);
glVertex2f(1.2f, 1.2f);
glVertex2f(1.2f, 1.5f);
glEnd();


// parking car wheel
glBegin(GL_POLYGON); // wheel
float x23 = 1.6f;
float y23 = 1.2f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0); // Wheel color: black
    float r = 0.100f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x23;
    float y = r * sin(a) + y23;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON);
glColor3ub(50, 50, 50); // Window color: light blue
glVertex2f(2.3f, 1.5f);
glVertex2f(2.65f, 1.5f);
glVertex2f(2.65f, 1.75f);
glVertex2f(2.3f, 1.75f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(50, 50, 50); // Window color: light blue
glVertex2f(1.8f, 1.5f);
glVertex2f(2.2f, 1.5f);
glVertex2f(2.1982530319578f, 1.7493939777728f);
glVertex2f(1.8f, 1.75f);
glEnd();

glBegin(GL_POLYGON); // wheel
float x24 = 2.6f;
float y24 = 1.2f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 0, 0); // Wheel color: black
    float r = 0.100f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x24;
    float y = r * sin(a) + y24;
    glVertex2f(x, y);
}
glEnd();

//Beanch
// First polygon
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(-3.3568f, 1.27893f);
glVertex2f(-3.16353f, 1.26236f);
glVertex2f(-3.15164f, 1.72229f);
glVertex2f(-3.2619f, 1.71862f);
glEnd();

// Second polygon
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(-3.08915f, 1.42825f);
glVertex2f(-2.9458f, 1.42825f);
glVertex2f(-3.0f, 1.7f);
glVertex2f(-3.1f, 1.7f);
glEnd();

// Third polygon
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(-1.68874f, 1.44295f);
glVertex2f(-1.56745f, 1.4356f);
glVertex2f(-1.6f, 1.7f);
glVertex2f(-1.7f, 1.7f);
glEnd();

// Fourth polygon
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(-1.5f, 1.7f);
glVertex2f(-1.4f, 1.7f);
glVertex2f(-1.34024f, 1.26954f);
glVertex2f(-1.50172f, 1.2622f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 0); // Yellow color
glVertex2f(-3.46779f, 1.7148f);
glVertex2f(-1.16886f, 1.72917f);
glVertex2f(-1.16763f, 1.84317f);
glVertex2f(-3.47362f, 1.8355f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128, 128, 128); // Gray color
glVertex2f(-3.47362f, 1.8355f);
glVertex2f(-3.2f, 2.0f);
glVertex2f(-1.4f, 2.0f);
glVertex2f(-1.16763f, 1.84317f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(204, 204, 153); // Tea color
glVertex2f(-3.2f, 2.0f);
glVertex2f(-3.05818f, 2.54114f);
glVertex2f(-1.55762f, 2.54547f);
glVertex2f(-1.4f, 2.0f);
glEnd();
// lam
glBegin(GL_POLYGON);
glColor3ub(50, 110, 200); // Black color
glVertex2f(-1.4f, -0.6f);
glVertex2f(-1.2f, -0.6f);
glVertex2f(-1.2f, -1.6f);
glVertex2f(-1.4f, -1.6f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(5, 103, 108);
glVertex2f(-1.4f, -0.8f);
glVertex2f(-1.4f, -0.7f);
glVertex2f(-1.8f, -0.6f);
glVertex2f(-1.79565f, -0.67433f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(5, 103, 108);
glVertex2f(-1.2f, -0.8f);
glVertex2f(-1.2f, -0.7f);
glVertex2f(-0.8f, -0.6f);
glVertex2f(-0.80151f, -0.67812f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 0); // Yellow color
glVertex2f(-1.8f, -0.8f);
glVertex2f(-1.8f, -0.4f);
glVertex2f(-2.2f, -0.4f);
glVertex2f(-2.2f, -0.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 0); // Yellow color
glVertex2f(-0.8f, -0.8f);
glVertex2f(-0.4f, -0.8f);
glVertex2f(-0.4f, -0.4f);
glVertex2f(-0.8f, -0.4f);
glEnd();



    glFlush();
}
void car()
{
    glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(-6.6f, 0.4f);
glVertex2f(-5.4f, 0.4f);
glVertex2f(-5.4f, 0.6f);
glVertex2f(-6.6f, 0.6f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(-6.44633f, 0.59896f);
glVertex2f(-6.34033f, 0.79746f);
glVertex2f(-5.7f, 0.8f);
glVertex2f(-5.51743f, 0.60089f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Car window color (light blue)
glVertex2f(-6.3f, 0.6f);
glVertex2f(-6.05f, 0.6f);
glVertex2f(-6.05f, 0.75f);
glVertex2f(-6.3f, 0.75f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(173, 216, 230); // Car window color (light blue)
glVertex2f(-5.95f, 0.75f);
glVertex2f(-5.95f, 0.6f);
glVertex2f(-5.7f, 0.6f);
glVertex2f(-5.7f, 0.75f);
glEnd();

// chaka
       glBegin(GL_POLYGON); /// circleGround
    float x1 = -5.675f;
    float y1 = 0.4f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,255);
        float r =0.0953f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x1;
        float y = r * sin(a) + y1;
        glVertex2f(x, y);
    }
    glEnd();
       glBegin(GL_POLYGON); /// circleGround
    float x2 = -6.311f;
    float y2 = 0.4f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,255);
        float r =0.0953f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x2;
        float y = r * sin(a) + y2;
        glVertex2f(x, y);
    }
    glEnd();
//2nd car

glBegin(GL_POLYGON);
glColor3ub(245, 245, 245); // Light white car color
glVertex2f(2.0f, -0.8f);
glVertex2f(2.0f, -0.6f);
glVertex2f(3.2f, -0.6f);
glVertex2f(3.2f, -0.8f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(245, 245, 245); // Light white car color
glVertex2f(2.28299f, -0.6006f);
glVertex2f(2.4f, -0.3f);
glVertex2f(2.93607f, -0.3025f);
glVertex2f(3.043f, -0.59858f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Black color
glVertex2f(2.4f, -0.6f);
glVertex2f(2.6f, -0.6f);
glVertex2f(2.6f, -0.4f);
glVertex2f(2.4f, -0.4f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Black color
glVertex2f(2.7f, -0.4f);
glVertex2f(2.7f, -0.6f);
glVertex2f(2.9f, -0.6f);
glVertex2f(2.9f, -0.4f);
glEnd();

//chaka

      glBegin(GL_POLYGON); /// circleGround
    float x3 = 2.4f;
    float y3 = -0.8f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255, 83, 73);
        float r =0.1f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x3;
        float y = r * sin(a) + y3;
        glVertex2f(x, y);
    }
    glEnd();
       glBegin(GL_POLYGON); /// circleGround
    float x4 = 2.9f;
    float y4 = -0.8f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255, 83, 73);
        float r =0.1f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x4;
        float y = r * sin(a) + y4;
        glVertex2f(x, y);
    }
    glEnd();

glFlush();
}
void Train()
{
glBegin(GL_POLYGON);
glColor3ub(238, 130, 238); // Violet color
glVertex2f(-6.7f, -6.0f);
glVertex2f(-6.5f, -6.0f);
glVertex2f(-6.5f, -4.5f);
glVertex2f(-6.69661f, -4.40015f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(109, 120, 19); // Train color (brown)
glVertex2f(-6.5f, -6.0f);
glVertex2f(-6.5f, -4.5f);
glVertex2f(-5.5f, -4.5f);
glVertex2f(-5.5f, -6.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128, 128, 128); // Gray color
glVertex2f(-6.5f, -4.5f);
glVertex2f(-5.5f, -4.5f);
glVertex2f(-5.6f, -4.4f);
glVertex2f(-6.69661f, -4.40015f);
glEnd();

// train wheel
      glBegin(GL_POLYGON); /// circleGround
    float x5 = -6.25f;
    float y5 = -5.89f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255, 83, 73);
        float r =0.173f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x5;
        float y = r * sin(a) + y5;
        glVertex2f(x, y);
    }
    glEnd();
       glBegin(GL_POLYGON); /// circleGround
    float x6 = -5.80f;
    float y6 = -5.89f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255, 83, 73);
        float r =0.173f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x6;
        float y = r * sin(a) + y6;
        glVertex2f(x, y);
    }
    glEnd();


//train 2
glBegin(GL_POLYGON);
glColor3ub(238, 130, 238); // Violet color
glVertex2f(-3.90037f, -4.40123f);
glVertex2f(-5.20316f, -4.38912f);
glVertex2f(-5.0f, -4.5f);
glVertex2f(-3.79674f, -4.51003f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128, 128, 128); // Gray color
glVertex2f(-5.2f, -6.0f);
glVertex2f(-5.0f, -6.0f);
glVertex2f(-5.0f, -4.5f);
glVertex2f(-5.20316f, -4.38912f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(109, 120, 19); // Train color (brown)
glVertex2f(-5.0f, -6.0f);
glVertex2f(-5.0f, -4.5f);
glVertex2f(-3.8f, -4.5f);
glVertex2f(-3.8f, -6.0f);
glEnd();

glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f); // Black color
glVertex2f(-5.5f, -5.4f);
glVertex2f(-5.2f, -5.4f);
glEnd();

//Train Wheel2

      glBegin(GL_POLYGON); /// circleGround
    float x7 = -4.74f;
    float y7 = -5.89f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255, 83, 73);
        float r =0.173f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x7;
        float y = r * sin(a) + y7;
        glVertex2f(x, y);
    }
    glEnd();
       glBegin(GL_POLYGON); /// circleGround
    float x8 = -4.10f;
    float y8 = -5.89f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255, 83, 73);
        float r =0.173f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x8;
        float y = r * sin(a) + y8;
        glVertex2f(x, y);
    }
    glEnd();



glFlush();
}
void Lamp()
{
    glBegin(GL_POLYGON);
glColor3ub(155, 25, 70); // Lamp post color (assuming yellow as lamp post color)
glVertex2f(1.2f, -0.4f);
glVertex2f(1.4f, -0.4f);
glVertex2f(1.4f, -1.4f);
glVertex2f(1.2f, -1.4f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(155, 25, 70); // Lamp post color (assuming yellow as lamp post color)
glVertex2f(1.2f, -0.4f);
glVertex2f(0.8f, -0.4f);
glVertex2f(0.8f, -0.6f);
glVertex2f(1.2f, -0.6f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 0); // Yellow color
glVertex2f(0.8f, -0.8f);
glVertex2f(0.8f, -0.4f);
glVertex2f(0.6f, -0.4f);
glVertex2f(0.6f, -0.8f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(0.6f, -0.8f);
glVertex2f(0.6f, -0.4f);
glVertex2f(0.4f, -0.4f);
glVertex2f(0.4f, -0.8f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color
glVertex2f(0.4f, -0.8f);
glVertex2f(0.4f, -0.4f);
glVertex2f(0.2f, -0.4f);
glVertex2f(0.2f, -0.8f);
glEnd();



glFlush();
}

// sun
void sun(){
       glBegin(GL_POLYGON); /// circleGround
    float x1 = 2.0f;
    float y1 = 9.0f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(253, 184, 39);
        float r =0.6247f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x1;
        float y = r * sin(a) + y1;
        glVertex2f(x, y);
    }
    glEnd();
    glFlush();
}


// cloud
void Cloud1()
{
 glBegin(GL_POLYGON); /// circleGround
float x9 = -6.0149405468766f;
float y9 = 8.2963376649836f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);  // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x9;
    float y = r * sin(a) + y9;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x10 = -6.3f;
float y10 = 8.77f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x10;
    float y = r * sin(a) + y10;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x11 = -5.3598f;
float y11 = 8.2771f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x11;
    float y = r * sin(a) + y11;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x12 = -4.94f;
float y12 = 7.96f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x12;
    float y = r * sin(a) + y12;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x13 = -5.5655f;
float y13 = 8.7108f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x13;
    float y = r * sin(a) + y13;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x14 = -4.8728f;
float y14 = 8.7315f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x14;
    float y = r * sin(a) + y14;
    glVertex2f(x, y);
}
glEnd();


glFlush();
}


// cloud2
void Cloud2()
{
    glBegin(GL_POLYGON); // circleGround
float x15 = -1.8876f;
float y15 = 9.5057f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x15;
    float y = r * sin(a) + y15;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x16 = -0.9623f;
float y16 = 9.6867f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.631f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x16;
    float y = r * sin(a) + y16;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x17 = -1.1500f;
float y17 = 8.7816f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.631f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x17;
    float y = r * sin(a) + y17;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x18 = -2.2218f;
float y18 = 8.6741f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x18;
    float y = r * sin(a) + y18;
    glVertex2f(x, y);
}
glEnd();

glFlush();
}

void Cloud3()
{
glBegin(GL_POLYGON); // circleGround
float x19 = 4.5f;
float y19 = 9.0f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x19;
    float y = r * sin(a) + y19;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x20 = 5.1118f;
float y20 = 9.3798f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x20;
    float y = r * sin(a) + y20;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x21 = 5.7548f;
float y21 = 9.2056f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x21;
    float y = r * sin(a) + y21;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // circleGround
float x22 = 5.0938f;
float y22 = 8.6587f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // Cloud color: white
    float r = 0.531f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x22;
    float y = r * sin(a) + y22;
    glVertex2f(x, y);
}
glEnd();




glFlush();
}

void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    code();
    car();
    Train();
    Lamp();
    sun();
    Cloud1();
    Cloud2();
    Cloud3();



}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800,700);
    glutInitWindowPosition(10,10);
    glutCreateWindow("Task");

    glutDisplayFunc(display);
    gluOrtho2D(-7,7,-6.2,10);
    glutMainLoop();
    return 0;
}


