//
// Created by gautm on 01/02/2022.
//


#include "view.h"

void display(Sky sky, Plane planes[NBPLANES]){
    int planeIsHere = 0;
    system("cls");
    for (int i = 0; i<HEIGHT; i++){
        for (int j = 0; j < WIDTH; ++j) {
            planeIsHere = 0;
            for (int k = 0; k < NBPLANES; ++k) {
                if (planes[k].x == j && planes[k].y == i){
                    planeIsHere = 1;
                }
            }
            if (planeIsHere && sky[i][j] != CLOUD){
                printf("%c",PLANE);
            }else{
                printf("%c",sky[i][j]);
            }
        }
        printf("\n");
    }
}
