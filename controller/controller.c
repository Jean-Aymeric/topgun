//
// Created by gautm on 01/02/2022.
//


#include "controller.h"

void play(void){
    Sky sky;
    Plane planes[NBPLANES];

    srand(time(NULL));

    for (int i = 0; i < NBPLANES; ++i) {
        initPlane(&planes[i], i);
    }
    initSky(sky);
    for (int i = 0; i < NBCLOUDS; ++i) {
        putCloud(sky,rand()%WIDTH,rand()%HEIGHT);
    }
    
    for (;;){
        display(sky, planes);
        movePlanes(planes);
        Sleep(5);
    }


}