
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>

using namespace std;

// village move
    float _moveCloud1 = 0.0f;
    //float _moveCloud2 = 0.0f;
    float _moveShip = 0.0f;
    float speedBoat=0.001f;
//float bx=10;
// city
    float _movecar = 0.0f;
    float _moveCar2 = 0.0f;
    float _moveTrain = 0.0f;
    float _moveCloud_CITY1 = 0.0f;
    float _moveCloud_CITY2= 0.0f;
    float _moveCloud_CITY3= 0.0f;
    float _angle1 = 0.0f;

    void initGL() {
glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void Sky()
{
glBegin(GL_POLYGON);
glColor3ub(135, 206, 235); // Sky color
glVertex2f(-9.0f, 10.0f);
glVertex2f(-9.0f, 3.0f);
glVertex2f(9.0f, 3.0f);
glVertex2f(9.0f, 10.0f);
glEnd();


}

void Cloud1()
{
    glPushMatrix();
glTranslatef(_moveCloud1, 0.0f, 0.0f);
glBegin(GL_POLYGON); /// circleGround
float x1 = -8.5252736835729f;
float y1 = 7.3904638283552f;
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
    float x2 = -7.7449542684683f;
    float y2 = 7.4951408230644f;
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
    float x3 = -8.3254357845827f;
    float y3 = 8.3515889615939f;
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
float x4 = -7.4594715556251f; // Center x
float y4 = 8.2564280573128f; // Center y
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
float x5 = -9.0f; // Center x
float y5 = 8.0f; // Center y
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
//2nd cloud
 glBegin(GL_POLYGON); // circleGround
float x6 = -2.0f; // Center x
float y6 = 8.0f; // Center y
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
float y7 = 7.4761086422082f; // Center y
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
float y8 = 7.4847086627539f; // Center y
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
float y9 = 8.1898154243161f; // Center y
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
float y10 = 8.3991694137344f; // Center y
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

glPopMatrix();
}

void Sun()
{
    glBegin(GL_POLYGON); // circleGround
float x14 = 4.0f; // Center x
float y14 = 8.0f; // Center y
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



}

GLfloat position = 0.0f;
GLfloat speed = 0.5f;
void Ship()
{
 glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);


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

glPopMatrix();



  /* bx += speedBoat;


    if (bx > 0)
        bx = -9;

 glutPostRedisplay();*/


}
void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;   }
glutPostRedisplay();}



void StopShip()
{
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
}
//   END VILLAGE SEC..///***---------------------------





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
glVertex2f(-9.0f, 1.0f);
glVertex2f(-9.0f, -1.0f);
glVertex2f(9.0f, -1.0f);
glVertex2f(9.0f, 1.0f);
glEnd();


glBegin(GL_LINE_STRIP);
glColor3ub(255, 255, 255); // White color
glVertex2f(0.0f, 6.0f);
glVertex2f(0.0f, -6.0f);
glEnd();
glBegin(GL_LINES);
glColor3ub(255, 255, 255); // White color
glVertex2f(-9.0f, 0.0f);
glVertex2f(9.0f, 0.0f);
glEnd();

//Sky
glBegin(GL_POLYGON);
glColor3ub(0,  255, 255); // Sky blue color
glVertex2f(9.0f, 6.0f);
glVertex2f(9.0f, 10.0f);
glVertex2f(-9.0f, 10.0f);
glVertex2f(-9.0f, 6.0f);
glEnd();
//plot
glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(-9.0f, -1.0f);
glVertex2f(-1.0f, -1.0f);
glVertex2f(-1.0f, -6.0f);
glVertex2f(-9.0f, -6.0f);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(1.0f, -6.0f);
glVertex2f(9.0f, -6.0f);
glVertex2f(9.0f, -1.0f);
glVertex2f(1.0f, -1.0f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(1.0f, 1.0f);
glVertex2f(9.0f, 1.0f);
glVertex2f(9.0f, 6.0f);
glVertex2f(1.0f, 6.0f);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(0, 255, 0); // Green color
glVertex2f(-1.0f, 1.0f);
glVertex2f(-9.0f, 1.0f);
glVertex2f(-9.0f, 6.0f);
glVertex2f(-1.0f, 6.0f);
glEnd();

//Train
glBegin(GL_POLYGON);
glColor3ub(128, 128, 128); // Iron color
glVertex2f(-9.0f, -5.0f);
glVertex2f(-9.1f, -5.1f);
glVertex2f(9.1f, -5.1f);
glVertex2f(9.0f, -5.0f);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(128, 128, 128); // Iron color
glVertex2f(-9.0f, -6.0f);
glVertex2f(-9.0f, -5.90f);
glVertex2f(9.0f, -5.90f);
glVertex2f(9.0f, -6.0f);
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

// Line segment
glVertex2f(-8.0f, -5.0f);
glVertex2f(-8.0f, -6.0f);

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


glVertex2f(8.0f, -5.0f);
glVertex2f(8.0f, -6.0f);
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

//house extra
glBegin(GL_POLYGON);
glColor3ub(255, 255, 204); // Light yellow color
glVertex2f(-8.5f, -4.0f);
glVertex2f(-6.5f, -4.0f);
glVertex2f(-6.5f, -1.10f);
glVertex2f(-8.5f, -1.10f);
glEnd();
//door
glBegin(GL_POLYGON);
glColor3ub(139, 69, 19); // Door color (Brown)
glVertex2f(-7.8f, -4.0f);
glVertex2f(-7.4f, -4.0f);
glVertex2f(-7.4f, -3.4f);
glVertex2f(-7.8f, -3.4f);
glEnd();
// First polygon
glBegin(GL_POLYGON);
glColor3ub(0, 153, 153); // RGB color (0, 153, 153)
glVertex2f(-7.8f, -3.0f);
glVertex2f(-8.4f, -3.0f);
glVertex2f(-8.4f, -3.32f);
glVertex2f(-7.8f, -3.32f);
glEnd();

// Second polygon
glBegin(GL_POLYGON);
glColor3ub(0, 153, 153); // RGB color (0, 153, 153)
glVertex2f(-7.2f, -3.4f);
glVertex2f(-6.6f, -3.4f);
glVertex2f(-6.6f, -3.0f);
glVertex2f(-7.2f, -3.0f);
glEnd();

// Third polygon
glBegin(GL_POLYGON);
glColor3ub(0, 153, 153); // RGB color (0, 153, 153)
glVertex2f(-8.4f, -2.2f);
glVertex2f(-7.8f, -2.2f);
glVertex2f(-7.8f, -1.8f);
glVertex2f(-8.4f, -1.8f);
glEnd();

// Fourth polygon
glBegin(GL_POLYGON);
glColor3ub(0, 153, 153); // RGB color (0, 153, 153)
glVertex2f(-7.2f, -2.2f);
glVertex2f(-6.6f, -2.2f);
glVertex2f(-6.6f, -1.8f);
glVertex2f(-7.2f, -1.8f);
glEnd();

glBegin(GL_LINES);
glLineWidth(10);
glColor3ub(128, 128, 128); // Iron color

// Line segment
glVertex2f(-8.5f, -2.50f);
glVertex2f(-6.5f, -2.50f);
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



}

void drawWheel(float x_center, float y_center, float radius)
{
    glPushMatrix();
    glTranslatef(x_center, y_center, 0);  // Position the wheel
    glRotatef(_angle1, 0.0f, 0.0f, 1.0f); // Rotate the wheel
    glBegin(GL_POLYGON);
    for (int i = 0; i < 300; i++) {
        glColor3ub(255, 255, 0); // Wheel color: black
        float pi = 3.1416f;
        float angle = (i * 2 * pi) / 300;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}

void car()
{
     glPushMatrix();
glTranslatef(_movecar, 0.0f, 0.0f);
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
drawWheel(-5.675f,0.4f,0.0953f);
drawWheel(-6.311f,0.4f,0.0953f);
      /* glBegin(GL_POLYGON); /// circleGround
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
    }*/
    glEnd();

    glPopMatrix();

}

void Car2()
{
    //2nd car
  glPushMatrix();
glTranslatef(_movecar, 0.0f, 0.0f);
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
drawWheel(2.4f,-0.8f,0.1f);
drawWheel(2.9f,-0.8f,0.1f);
     /* glBegin(GL_POLYGON); /// circleGround
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
    }*/
    glEnd();
    glPopMatrix();
}

//float position1 = 0.0f;
//float speed1 = 0.5f;

void Train()
{
     glPushMatrix();
glTranslatef(_moveTrain, 0.0f, 0.0f);
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
drawWheel(-6.25f,-5.89f,0.173f);
drawWheel( -5.80f,-5.89f,0.173f);
     /* glBegin(GL_POLYGON); /// circleGround
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
*/

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
drawWheel(-4.74f,-5.89f,0.173f);
drawWheel( -4.10f,-5.89f,0.173f);
/*
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
*/
glPopMatrix();


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
void Cloud_CITY1()
{
    glPushMatrix();
glTranslatef(_moveCloud1, 0.0f, 0.0f);
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

glPopMatrix();

}


// cloud2
void Cloud_CITY2()
{
        glPushMatrix();
glTranslatef(_moveCloud1, 0.0f, 0.0f);
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

glPopMatrix();
}

void Cloud_CITY3()
{
     glPushMatrix();
glTranslatef(_moveCloud1, 0.0f, 0.0f);

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


glPopMatrix();


}

void display2()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);




    code();
    car();
    Car2();
    Train();
    Lamp();
    sun();
    Cloud_CITY1();
    Cloud_CITY2();
    Cloud_CITY3();

glFlush();

}

/*int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(800,700);
    glutInitWindowPosition(10,10);
    glutCreateWindow("Task");

    glutDisplayFunc(display2);
    gluOrtho2D(-7,7,-6.2,10);
    glutMainLoop();
    return 0;
}*/

void display()
{
    // VILLAGE
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);




    Sky();
    Cloud1();
    //Cloud2();
    Sun();
    Mountain();
    FieldHouseTreeRoad();
    Turbine();
    TurbineWheel();
    River();
    Ship();
    StopShip();



glFlush();

}

void updateCloud1(int value) {
    _moveCloud1 -= 0.095f;
    if (_moveCloud1 < -9.0f) {
        _moveCloud1 = 9.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(20, updateCloud1, 0);
}

void updateShip(int value)
{
    if(position < -9.0)
        position = 14.0f;

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(20, updateShip, 0);
}


void updatecar(int value)
{
    _movecar -=0.093f;
    if(_movecar < -12.0f){
        _movecar = 14.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(20, updatecar, 0);
}
void updateCar2(int value)
{
    _moveCar2 -=0.093f;
    if(_moveCar2 < -9.0f){
        _moveCar2 = 12.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(20, updateCar2, 0);
}

void updateTrain(int value)
{
    _moveTrain -=0.1f;
    if(_moveTrain < -9.0f){
        _moveTrain = 14.0f;
    }
    glutPostRedisplay();
    glutTimerFunc(20, updateTrain, 0);
}
// END CITY CODE -------------=======================================
void handleKeypress(unsigned char key, int x, int y) {
	switch (tolower(key)) {
case 'b':
    glutDisplayFunc(display2);
    glutPostRedisplay();
    break;
    case 'a':
    glutDisplayFunc(display);
    glutPostRedisplay();
    break;

glutPostRedisplay();
	}}



// VILLAGE CODE MAIN FUNCTION CODE





int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1000,700);
    glutInitWindowPosition(10,10);
    glutCreateWindow("Task");

    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    gluOrtho2D(-9,9,-6,10);
    initGL();
    glutTimerFunc(20, updateCloud1, 0);
    glutTimerFunc(20, updateShip, 0);
    glutTimerFunc(20, updatecar, 0);
    glutTimerFunc(20, updateCar2, 0);

    glutTimerFunc(20, updateTrain, 0);
    glutMainLoop();

    return 0;
}


