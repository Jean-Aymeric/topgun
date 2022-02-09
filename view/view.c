//
// Created by gautm on 01/02/2022.
//


#include "view.h"

void display(Sky sky, Plane planes[NBPLANES]){
    int planeIsHere = -1;
    system("cls");
    for (int i = 0; i<HEIGHT; i++){
        for (int j = 0; j < WIDTH; ++j) {
            planeIsHere = -1;
            for (int k = 0; k < NBPLANES; ++k) {
                if (planes[k].x >= j-2 && planes[k].y >= i-2 && planes[k].x <= j+2 && planes[k].y <= i+2){
                    planeIsHere = k;
                }
            }
            if (sky[i][j]!=CLOUD && planeIsHere != -1 && getPlanePattern(&planes[planeIsHere],j,i) != 0) {
                printf("%c",PLANE);
            }else{
                printf("%c",sky[i][j]);
            }
        }
        printf("\n");
    }
}
