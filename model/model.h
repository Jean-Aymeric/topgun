//
// Created by gautm on 01/02/2022.
//

#ifndef TOPGUN_MODEL_H
#define TOPGUN_MODEL_H
#define HEIGHT 27
#define WIDTH 127
#define EMPTY ' '
#define CLOUD '@'
#define PLANE '#'
#define NBCLOUDS 10
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3
#define NBPLANES 2
typedef char Sky[HEIGHT][WIDTH];
typedef struct Plane{
    int x;
    int y;
    int direction;
}Plane;
static int spritePlane[5][5]= {
        {0, 0, 1, 0, 0},
        {1, 0, 0, 1, 0},
        {1, 1, 1, 1, 1},
        {1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0}
};
void initSky(Sky sky);
void putCloud(Sky sky, int x, int y);
void initPlane(Plane *plane, int player);
void movePlanes(Plane planes[NBPLANES]);
int getPlanePattern(Plane *plane, int x, int y);




#endif //TOPGUN_MODEL_H
