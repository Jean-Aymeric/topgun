//
// Created by gautm on 01/02/2022.
//

#include "model.h"
int transformX(int x);
int transformY(int y);
void movePlane(Plane *plane);

void initSky(Sky sky){
    for (int i = 0; i<HEIGHT; i++){
        for (int j = 0; j < WIDTH; ++j) {
            sky[i][j] = EMPTY;
        }
    }
}

void putCloud(Sky sky, int x, int y){
    for (int i = 0; i < 12; ++i) {
        sky[transformY(y)][transformX(x+2+i)] = CLOUD;
    }
    for (int i = 0; i < 16; ++i) {
        sky[transformY(y+1)][transformX(x+1+i)] = CLOUD;
    }
    for (int i = 0; i < 16; ++i) {
        sky[transformY(y+2)][transformX(x+i)] = CLOUD;
    }
    for (int i = 0; i < 16; ++i) {
        sky[transformY(y+3)][transformX(x+i)] = CLOUD;
    }
    for (int i = 0; i < 14; ++i) {
        sky[transformY(y+4)][transformX(x+1+i)] = CLOUD;
    }
}

int transformX(int x){
    return x%WIDTH;
}

int transformY(int y){
    return y%HEIGHT;
}

void initPlane(Plane *plane, int player){
    switch (player) {
        case 0:
            plane->x = 2;
            plane->y = 3;
            plane->direction = EAST;
            break;
        case 1:
            plane->x = WIDTH-2;
            plane->y = HEIGHT-3;
            plane->direction = WEST;
            break;
    }

}

void movePlanes(Plane planes[NBPLANES]){
    for (int i = 0; i < NBPLANES; ++i) {
        movePlane(&planes[i]);
    }
}

void movePlane(Plane *plane){
    switch (plane->direction) {
        case NORTH:
            plane->y = transformY(plane->y - 1);
            break;
        case EAST:
            plane->x = transformX(plane->x + 1);
            break;
        case SOUTH:
            plane->y = transformY(plane->y + 1);
            break;
        case WEST:
            plane->x = transformX(plane->x - 1);
            break;
    }
}