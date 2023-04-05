//
// Created by wangxi on 2023-03-29.
//

#include <stdio.h>
#include <stdlib.h>
#include "bitmap.h"
int main(int argc, char ** argv) {
    FILE * in = fopen("michael.bmp","rb");
    FILE * out = fopen("newmichael.bmp","wb");
    IMAGE * image = (IMAGE*)malloc(sizeof(IMAGE));
    readImage(image,in);
    printHeader(image);
    writeImage(image,out);
    freeImage(image);
    free(image);
    fclose(in);
    fclose(out);
}
