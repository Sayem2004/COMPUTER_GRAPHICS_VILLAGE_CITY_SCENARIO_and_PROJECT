
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
void Sky()
{
glBegin(GL_POLYGON);
glColor3ub(135, 206, 235); // Sky color
glVertex2f(-9.0f, 7.0f);
glVertex2f(-9.0f, 3.0f);
glVertex2f(9.0f, 3.0f);
glVertex2f(9.0f, 7.0f);
glEnd();

glFlush();
}

void Cloud1()
{
glBegin(GL_POLYGON); /// circleGround
float x1 = -6.5252736835729f;
float y1 = 5.3904638283552f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255); // cloud color
    float r = 0.5036f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x1;
    float y = r * sin(a) + y1;
    glVertex2f(x, y);
}
glEnd();

       glBegin(GL_POLYGON); /// circleGround
    float x2 = -5.7449542684683f;
    float y2 = 5.4951408230644f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,255);
        float r =0.5520f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x2;
        float y = r * sin(a) + y2;
        glVertex2f(x, y);
    }
    glEnd();

       glBegin(GL_POLYGON); /// circleGround
    float x3 = -6.3254357845827f;
    float y3 = 6.3515889615939f;
    for (int i = 0; i < 300; i++)
    {
        glColor3ub(255,255,255);
        float r =0.562f;
        float pi = 3.1416f;
        float a = (i * 2 * pi) / 300;
        float x = r * cos(a) + x3;
        float y = r * sin(a) + y3;
        glVertex2f(x, y);
    }
    glEnd();

    glBegin(GL_POLYGON); // circleGround
float x4 = -5.4594715556251f; // Center x
float y4 = 6.2564280573128f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 0.555f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x4;
    float y = r * sin(a) + y4;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // circleGround
float x5 = -7.0f; // Center x
float y5 = 6.0f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 0.483f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x5;
    float y = r * sin(a) + y5;
    glVertex2f(x, y);
}
glEnd();

glFlush();
}
void Cloud2()
{
    glBegin(GL_POLYGON); // circleGround
float x6 = -2.0f; // Center x
float y6 = 6.0f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 0.580f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x6;
    float y = r * sin(a) + y6;
    glVertex2f(x, y);
}
glEnd();


glBegin(GL_POLYGON); // circleGround
float x7 = -1.2819078576867f; // Center x
float y7 = 5.4761086422082f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 0.621f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x7;
    float y = r * sin(a) + y7;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // circleGround
float x8 = -0.3635563713453f; // Center x
float y8 = 5.4847086627539f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 0.546f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x8;
    float y = r * sin(a) + y8;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // circleGround
float x9 = -0.5491688947226f; // Center x
float y9 = 6.1898154243161f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 0.581f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x9;
    float y = r * sin(a) + y9;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // circleGround
float x10 = -1.2533595864024f; // Center x
float y10 = 6.3991694137344f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 255, 255);
    float r = 0.547f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x10;
    float y = r * sin(a) + y10;
    glVertex2f(x, y);
}
glEnd();


glFlush();
}

void Sun()
{
    glBegin(GL_POLYGON); // circleGround
float x14 = 4.0f; // Center x
float y14 = 6.0f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 204, 0); // Sun color code
    float r = 1.0f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x14;
    float y = r * sin(a) + y14;
    glVertex2f(x, y);
}
glEnd();
glFlush();
}

void Mountain()
{
    glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Mountain color (RGB)
glVertex2f(-8.5f, 3.0f);
glVertex2f(-8.3583949665587f, 3.5153945432494f);
glVertex2f(-8.0f, 4.0f);
glVertex2f(-7.5084820826558f, 4.3749655281058f);
glVertex2f(-7.0352351359371f, 4.2011197109438f);
glVertex2f(-6.6972016025666f, 3.5443688461097f);
glVertex2f(-6.5f, 3.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Mountain color (RGB)
glVertex2f(-6.0f, 3.0f);
glVertex2f(-5.8762630215239f, 3.5057364422959f);
glVertex2f(-5.615494295781f, 3.9982995909215f);
glVertex2f(-5.3740417719449f, 4.4812046385937f);
glVertex2f(-4.8138719166452f, 5.012400191033f);
glVertex2f(-4.2923344651593f, 5.2828270177294f);
glVertex2f(-4.0f, 5.0f);
glVertex2f(-3.6935322060458f, 4.5391532443143f);
glVertex2f(-3.5953073934139f, 4.0407064427356f);
glVertex2f(-3.5f, 3.5f);
glVertex2f(-3.5f, 3.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Mountain color (RGB)
glVertex2f(-3.25f, 3.0f);
glVertex2f(-3.0947299469324f, 3.5153945432494f);
glVertex2f(-2.7755271069774f, 4.1718712885655f);
glVertex2f(-2.2737913658897f, 4.4908627395471f);
glVertex2f(-1.7835929603893f, 4.1800690914298f);
glVertex2f(-1.4802742544078f, 3.6472119052461f);
glVertex2f(-1.2917247885274f, 3.0077832818256f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Mountain color (RGB)
glVertex2f(-1.2790110484999f, 3.0130240923076f);
glVertex2f(-0.9103947083164f, 3.6844324262132f);
glVertex2f(-0.5417783681329f, 4.0925433742735f);
glVertex2f(-0.1103767523185f, 4.4908627395471f);
glVertex2f(0.5f, 5.0f);
glVertex2f(1.2320992802101f, 5.4856471377517f);
glVertex2f(1.7729529336029f, 5.1089812005674f);
glVertex2f(2.314998268289f, 4.6849624924255f);
glVertex2f(2.6704497391802f, 4.2373569364884f);
glVertex2f(3.0390660793636f, 3.776586511259f);
glVertex2f(3.5919905896388f, 3.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Mountain color (RGB)
glVertex2f(3.16f, 3.0f);
glVertex2f(3.5919905896388f, 3.9608946813508f);
glVertex2f(4.1054204920372f, 4.4611597144569f);
glVertex2f(5.0f, 5.0f);
glVertex2f(5.6555095168869f, 4.3846236290592f);
glVertex2f(5.8873039397695f, 4.0755643985491f);
glVertex2f(6.1190983626522f, 3.6023174518304f);
glVertex2f(6.321f, 3.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(34, 139, 34); // Mountain color (RGB)
glVertex2f(6.64f, 3.0f);
glVertex2f(6.8434559341604f, 3.6409498556441f);
glVertex2f(7.0499385984848f, 4.1896466960002f);
glVertex2f(7.3621240146178f, 4.5669339470646f);
glVertex2f(7.6329064152516f, 4.826349248807f);
glVertex2f(8.2052481685958f, 5.2055622101019f);
glVertex2f(8.6366331307313f, 4.9753401831673f);
glVertex2f(9.0f, 4.5f);
glVertex2f(9.0f, 3.0f);

glEnd();

glFlush();

}

void FieldHouseTreeRoad()
{
    // field
    glBegin(GL_POLYGON);
glColor3ub(20, 255, 80); // Field color (RGB)
glVertex2f(-9.0f, -3.0f);
glVertex2f(-9.0f, 3.0f);
glVertex2f(9.0f, 3.0f);
glVertex2f(9.0f, -3.0f);
glEnd();

// tree 1st
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19); // Wood color (RGB)
glVertex2f(-8.4f, -2.6f);
glVertex2f(-8.2f, -2.6f);
glVertex2f(-8.2f, -0.8f);
glVertex2f(-8.4f, -0.8f);
glEnd();

// leef
glBegin(GL_POLYGON); // circleGround
float x6 = -8.4f; // Center x
float y6 = -0.8f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0); // Deep leaf color (RGB)
    float r = 0.548f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x6;
    float y = r * sin(a) + y6;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // circleGround
float x7 = -8.616275971757f; // Center x
float y7 = -0.449732763364f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0); // Deep leaf color (RGB)
    float r = 0.468f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x7;
    float y = r * sin(a) + y7;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // circleGround
float x8 = -8.1559999844317f; // Center x
float y8 = -0.4933378569f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0); // Deep leaf color (RGB)
    float r = 0.580f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x8;
    float y = r * sin(a) + y8;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // circleGround
float x9 = -7.9282844959654f; // Center x
float y9 = -0.876093677939f; // Center y
for (int i = 0; i < 300; i++)
{
    glColor3ub(0, 100, 0); // Deep leaf color (RGB)
    float r = 0.481f; // Set radius value
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x9;
    float y = r * sin(a) + y9;
    glVertex2f(x, y);
}
glEnd();

//  ''''''''2nd Tree
glBegin(GL_POLYGON); // Tree
glColor3ub(139, 69, 19); // Wood color (RGB)
glVertex2f(4.0f, 1.0f);
glVertex2f(4.3f, 1.0f);
glVertex2f(4.3f, 2.2369661306932f);
glVertex2f(4.0f, 2.2369661306932f);
glEnd();

// ------ Leef

glBegin(GL_POLYGON); // Circle
glColor3ub(0, 100, 0); // Deep leaf color (RGB)
float x10 = 3.4705145611805f;
float y10 = 2.2080622480299f;
for (int i = 0; i < 300; i++)
{
    float r = 0.5f; // Example radius
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x10;
    float y = r * sin(a) + y10;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // Circle
glColor3ub(0, 100, 0); // Deep leaf color (RGB)
float x11 = 3.9907844491197f;
float y11 = 2.2369661306932f;
float r = 0.349f; // Radius
for (int i = 0; i < 300; i++)
{
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x11;
    float y = r * sin(a) + y11;
    glVertex2f(x, y);
}
glEnd();

glBegin(GL_POLYGON); // Circle
glColor3ub(0, 100, 0); // Deep leaf color (RGB)
float x12 = 4.590540014383f;
float y12 = 2.2369661306932f;

for (int i = 0; i < 300; i++)
{
    float r = 0.435f; // Radius
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x12;
    float y = r * sin(a) + y12;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // Circle
glColor3ub(0, 100, 0); // Deep leaf color (RGB)
float x13 = 4.344857011745f;
float y13 = 2.7861399012958f;
for (int i = 0; i < 300; i++)
{
    float r = 0.372f; // Radius
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x13;
    float y = r * sin(a) + y13;
    glVertex2f(x, y);
}
glEnd();
glBegin(GL_POLYGON); // Circle
glColor3ub(0, 100, 0); // Deep leaf color (RGB)
float x14 = 3.7595533878134f;
float y14 = 2.7716879599641f;
for (int i = 0; i < 300; i++)
{
    float r = 0.495f; // Radius
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x14;
    float y = r * sin(a) + y14;
    glVertex2f(x, y);
}
glEnd();


// *************** house1
//**********
glBegin(GL_POLYGON); // Shape defined by the points
glColor3ub(155, 165, 90);
glVertex2f(-5.8f, 3.2f);
glVertex2f(-5.8f, 2.0f);
glVertex2f(-4.2f, 2.0f);
glVertex2f(-4.2f, 3.2f);
glEnd();
glBegin(GL_POLYGON); // Polygon
glColor3ub(128, 50, 128); // Custom color (RGB)
glVertex2f(-6.0059906394092f, 3.1960307110426f);
glVertex2f(-5.0077265727377f, 4.1942947777142f);
glVertex2f(-4.0f, 3.2f);
glEnd();


//door
glBegin(GL_POLYGON); // Shape defined by the points
glColor3ub(139, 69, 19); // Door color (RGB)
glVertex2f(-5.1f, 2.0f);
glVertex2f(-5.1f, 2.7f);
glVertex2f(-4.9f, 2.7f);
glVertex2f(-4.9f, 2.0f);
glEnd();

//window
// Left window
glBegin(GL_POLYGON); // Shape defined by the points
glColor3ub(211, 211, 211); // Light gray color (RGB)
glVertex2f(-5.6f, 2.6f);
glVertex2f(-5.6f, 2.9f);
glVertex2f(-5.4f, 2.9f);
glVertex2f(-5.4f, 2.6f);
glEnd();

// Right window
glBegin(GL_POLYGON); // Shape defined by the points
glColor3ub(211, 211, 211); // Light gray color (RGB)
glVertex2f(-4.6f, 2.6f);
glVertex2f(-4.4f, 2.6f);
glVertex2f(-4.4f, 2.9f);
glVertex2f(-4.6f, 2.9f);
glEnd();

// Upper window
glBegin(GL_POLYGON); // Shape defined by the points
glColor3ub(211, 211, 211); // Light gray color (RGB)
glVertex2f(-4.8f, 3.4f);
glVertex2f(-4.8f, 3.6f);
glVertex2f(-5.2f, 3.6f);
glVertex2f(-5.2f, 3.4f);
glEnd();


//Road


glBegin(GL_POLYGON); // Road
glColor3ub(0, 0, 0); // Road color (Gray)
glVertex2f(1.0f, 3.0f);
glVertex2f(3.0f, 3.0f);
glVertex2f(3.0f, -3.0f);
glVertex2f(1.0f, -3.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 255, 255); // White color (RGB)
glVertex2f(1.9, 3);
glVertex2f(1.9, 2.5);
glVertex2f(2.1, 2.5);
glVertex2f(2.1, 3);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255); // White color (RGB)
glVertex2f(1.9, 2.2);
glVertex2f(2.1, 2.2);
glVertex2f(2.1, 1.3);
glVertex2f(1.9, 1.3);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255); // White color (RGB)
glVertex2f(1.9, 0.9);
glVertex2f(2.1, 0.9);
glVertex2f(2.1, 0.2);
glVertex2f(1.9, 0.2);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255); // White color (RGB)
glVertex2f(2.1, -0.2);
glVertex2f(2.1, -1.1);
glVertex2f(1.9, -1.1);
glVertex2f(1.9, -0.2);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255); // White color (RGB)
glVertex2f(1.9, -1.5);
glVertex2f(1.9, -2.6);
glVertex2f(2.1, -2.6);
glVertex2f(2.1, -1.5);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 255, 255); // White color (RGB)
glVertex2f(1.9, -2.9);
glVertex2f(1.9, -3);
glVertex2f(2.1, -2.9);
glVertex2f(2.1, -3);
glEnd();


// *******
//House2


glBegin(GL_POLYGON); // Polygon
glColor3ub(218, 204, 110); // Sage color (RGB)
glVertex2f(6.0f, 0.5f);
glVertex2f(6.0f, -2.0f);
glVertex2f(8.5f, -2.0f);
glVertex2f(8.5f, 0.5f);
glEnd();
glBegin(GL_POLYGON); // Polygon
glColor3ub(123, 145, 167); // Light navy blue color (RGB)
glVertex2f(5.5f, 0.5f);
glVertex2f(7.2863308926464f, 1.7957811141678f);
glVertex2f(9.0f, 0.5f);
glEnd();

//-----Door
glBegin(GL_POLYGON); // Polygon
glColor3ub(139, 69, 19); // Door color (RGB)
glVertex2f(7.2f, -2.0f);
glVertex2f(7.6f, -2.0f);
glVertex2f(7.6f, -1.2f);
glVertex2f(7.2f, -1.2f);
glEnd();

// First window
glBegin(GL_POLYGON); // Polygon
glColor3ub(120, 20, 60); // Deep red color (RGB)
glVertex2f(6.2f, -1.0f);
glVertex2f(6.8f, -1.0f);
glVertex2f(6.8f, -0.4f);
glVertex2f(6.2f, -0.4f);
glEnd();

// Second window
glBegin(GL_POLYGON); // Polygon
glColor3ub(120, 20, 60); // Deep red color (RGB)
glVertex2f(7.8f, -1.0f);
glVertex2f(8.4f, -1.0f);
glVertex2f(8.4f, -0.4f);
glVertex2f(7.8f, -0.4f);
glEnd();

// Third window
glBegin(GL_POLYGON); // Polygon
glColor3ub(120, 20, 60); // Deep red color (RGB)
glVertex2f(6.3f, 0.9f);
glVertex2f(6.3f, 0.6f);
glVertex2f(6.9f, 0.6f);
glVertex2f(6.9f, 0.9f);
glEnd();

// Fourth window
glBegin(GL_POLYGON); // Polygon
glColor3ub(120, 20, 60); // Deep red color (RGB)
glVertex2f(7.7f, 0.6f);
glVertex2f(8.3f, 0.6f);
glVertex2f(8.3f, 0.9f);
glVertex2f(7.7f, 0.9f);
glEnd();


// ========
// house 3
glBegin(GL_POLYGON);
glColor3ub(255, 153, 204); // Bronze color
glVertex2f(5.6f, 2.0f);
glVertex2f(7.0f, 2.0f);
glVertex2f(7.0f, 2.6f);
glVertex2f(5.6f, 2.6f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(153, 51, 102); // RGB color
glVertex2f(5.4f, 2.6f);
glVertex2f(7.2f, 2.6f);
glVertex2f(6.3f, 3.2f);
glEnd();

// **^^^^  Window

glBegin(GL_POLYGON);
glColor3ub(0, 0, 128); // Window color (RGB)
glVertex2f(5.7f, 2.5f);
glVertex2f(6.0f, 2.5f);
glVertex2f(6.0f, 2.2f);
glVertex2f(5.7f, 2.2f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 0, 128); // Window color (RGB)
glVertex2f(6.6f, 2.5f);
glVertex2f(6.6f, 2.2f);
glVertex2f(6.9f, 2.2f);
glVertex2f(6.9f, 2.5f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 0, 128); // Window color (RGB)
glVertex2f(6.1f, 2.9f);
glVertex2f(6.1f, 2.7f);
glVertex2f(6.5f, 2.7f);
glVertex2f(6.5f, 2.9f);
glEnd();

//Door
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19); // Door color (RGB)
glVertex2f(6.2f, 2.2f);
glVertex2f(6.5f, 2.2f);
glVertex2f(6.5f, 2.0f);
glVertex2f(6.2f, 2.0f);
glEnd();


// -+-+-+ Shop
glBegin(GL_POLYGON);
glColor3ub(153, 51, 102); // Color (RGB)
glVertex2f(3.5f, -1.6f);
glVertex2f(5.0f, -1.6f);
glVertex2f(5.0f, -1.2f);
glVertex2f(3.5f, -1.2f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(153, 153, 255); // Color (RGB)
glVertex2f(3.5f, -1.2f);
glVertex2f(5.0f, -1.2f);
glVertex2f(5.0f, -0.5f);
glVertex2f(3.5f, -0.5f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(0, 51, 102); // Color (RGB)
glVertex2f(3.3f, -0.5f);
glVertex2f(5.2f, -0.5f);
glVertex2f(4.3f, 0.2f);
glEnd();

// ==========''''
// khore
glBegin(GL_POLYGON);
glColor3ub(255, 204, 153); // khore color
glVertex2f(-8.4, 1.6);
glVertex2f(-8.1589713174194, 2.2804838697871);
glVertex2f(-8.0378638435838, 2.5497668303402);
glVertex2f(-7.8940588910561, 2.769703816559);
glVertex2f(-7.8015865339688, 2.8479794874643);
glVertex2f(-7.7, 2.9);
glVertex2f(-7.6292487964351, 2.8480165523001);
glVertex2f(-7.5640216971012, 2.7925735178663);
glVertex2f(-7.5053173077008, 2.7273464185324);
glVertex2f(-7.4303061434668, 2.6115683172148);
glVertex2f(-7.3487722692995, 2.4403471814633);
glVertex2f(-7.2753917825489, 2.2626033357785);
glVertex2f(-7.2313634904985, 2.1223650722107);
glVertex2f(-7, 1.6);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(255, 204, 153); // khore color
glVertex2f(-7.708052443489, 2.9405546680051);
glVertex2f(-7.6902257810655, 2.940337152322);
glVertex2f(-7.6902257810655, 2.8940);
glVertex2f(-7.708052443489, 2.8940);
glEnd();



glFlush();
}

void Turbine()
{
   // Turbine
glBegin(GL_POLYGON); // Shape defined by the points
glColor3ub(255, 255, 255); // White color (RGB)
glVertex2f(-6.0f, -2.0f);
glVertex2f(-5.0f, -2.0f);
glVertex2f(-5.2705373326904f, 0.4998231052418f);
glVertex2f(-5.7289378165437f, 0.5009984910979f);
glEnd();
glFlush();
}
void TurbineWheel()
{
    //circle
    glBegin(GL_POLYGON); // Circle
float x10 = -5.5f;
float y10 = 0.5f;
for (int i = 0; i < 300; i++)
{
    glColor3ub(255, 0, 0); // Red color
    float r = 0.224f;
    float pi = 3.1416f;
    float a = (i * 2 * pi) / 300;
    float x = r * cos(a) + x10;
    float y = r * sin(a) + y10;
    glVertex2f(x, y);
}
glEnd();

// Wheel
glBegin(GL_POLYGON); // Polygon
glColor3ub(255, 100, 0); // Red color
glVertex2f(-5.5420299259416f, 0.2757743127543f);
glVertex2f(-6.3173905121874f, -0.3589256187561f);
glVertex2f(-6.7147420738654f, -0.2443049759644f);
glVertex2f(-5.7289378165437f, 0.5009984910979f);
glEnd();

glBegin(GL_POLYGON); // Polygon
glColor3ub(255, 100, 0); // Red color
glVertex2f(-5.7289378165437f, 0.5009984910979f);
glVertex2f(-6.6611760268007f, 1.5164973386023f);
glVertex2f(-6.1526424416147f, 1.7014186423063f);
glVertex2f(-5.55f, 0.7231f);
glEnd();

glBegin(GL_POLYGON); // Polygon
glColor3ub(255, 100, 0); // Red color
glVertex2f(-5.55f, 0.7231f);
glVertex2f(-4.5827981179391f, 1.5667011801451f);
glVertex2f(-4.3611982085417f, 1.2457633803283f);
glVertex2f(-5.272f, 0.5f);
glEnd();

glBegin(GL_POLYGON); // Polygon
glColor3ub(255, 100, 0); // Red color
glVertex2f(-5.272f, 0.5f);
glVertex2f(-4.5338334511052f, -0.2602791402502f);
glVertex2f(-4.8104006299632f, -0.3586141371774f);
glVertex2f(-5.5420299259416f, 0.2757743127543f);
glEnd();


glFlush();
}


// ---*-*-////
void River()
{
glBegin(GL_POLYGON);
glColor3ub(65,105,225);
glVertex2f(-1.0f, -3.0f);
glVertex2f(-3.5f, -3.0f);
glVertex2f(-3.0f, -2.0f);
glVertex2f(-3.5f, 0.0f);
glVertex2f(-3.0f, 2.0f);
glVertex2f(-3.5f, 3.0f);
glVertex2f(-1.0f, 3.0f);
glVertex2f(-0.5f, 2.0f);
glVertex2f(-1.0f, 0.0f);
glVertex2f(-0.5f, -2.0f);
glVertex2f(-1.0f, -3.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(65,105,225); // River color (RGB)
glVertex2f(-9.0f, -3.0f);
glVertex2f(-9.0f, -6.0f);
glVertex2f(9.0f, -6.0f);
glVertex2f(9.0f, -3.0f);
glEnd();



glFlush();
}

// 88888888888888
//Ship
void Ship()
{
  // Ship  11
    glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Deep black color (RGB)
glVertex2f(1.5f, -4.0f);
glVertex2f(2.0f, -4.5f);
glVertex2f(5.0f, -4.5f);
glVertex2f(5.5f, -4.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0);
glVertex2f(2.5f, -4.0f);
glVertex2f(2.6928068120129f, -3.6512710995957f);
glVertex2f(3.0718117674845f, -3.5152180386572f);
glVertex2f(4.0f, -3.5f);
glVertex2f(4.2768531643685f, -3.6318349480331f);
glVertex2f(4.5f, -4.0f);
glEnd();

// Ship2
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Black color (RGB)
glVertex2f(-6.0f, -5.0f);
glVertex2f(-5.5f, -5.5f);
glVertex2f(-3.5f, -5.5f);
glVertex2f(-3.0f, -5.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(255, 0, 0); // Red color (RGB)
glVertex2f(-5.5f, -5.0f);
glVertex2f(-5.0f, -4.5f);
glVertex2f(-4.0f, -4.5f);
glVertex2f(-3.5f, -5.0f);
glEnd();

//-=-=-=-=-=-
// Stop Ship 3
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Red color (RGB)
glVertex2f(-3.2f, -0.4f);
glVertex2f(-1.8f, -0.4f);
glVertex2f(-2.1f, -0.7f);
glVertex2f(-2.9f, -0.7f);
glEnd();


//**-*-+++
//Stop Ship 4
glBegin(GL_POLYGON);
glColor3ub(0, 0, 0); // Black color (RGB)
glVertex2f(-2.2f, 1.6f);
glVertex2f(-0.8f, 1.6f);
glVertex2f(-1.05f, 1.35f);
glVertex2f(-1.95f, 1.35f);
glEnd();




glFlush();

}






void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);

    Sky();
    Cloud1();
    Cloud2();
    Sun();
    Mountain();
    FieldHouseTreeRoad();
    Turbine();
    TurbineWheel();
    River();
    Ship();





}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000,700);
    glutInitWindowPosition(10,10);
    glutCreateWindow("Task");

    glutDisplayFunc(display);
    gluOrtho2D(-9,9,-6,7);
    glutMainLoop();
    return 0;
}


