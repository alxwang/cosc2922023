//
// Created by wangxi on 2023-03-29.
//
#include "bitmap.h"
#include <memory.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

FILE * getFile(char * prompt,char * mode)
{
    FILE * file = NULL;
    char fn[256];
    fn[0]='\0';
//    memset(fn,0,256);
    printf("%s",prompt);
    fgets(fn,255,stdin);
    file = fopen(fn,mode);
    return file;
}
//IMAGE * readImage( FILE * f)
//{
//   IMAGE * image = (IMAGE*)malloc(sizeof(IMAGE));
//
//   return image;
//}


void readImage(IMAGE * image, FILE * f)
{
    readHeader(image,f);
    if(image->bmHDR)
        readData(image,f);
}
void readHeader(IMAGE * image, FILE * f){

}
void readData(IMAGE * image, FILE * f){

}
void printHeader(IMAGE* image){

}
void freeImage(IMAGE * image){
    free(image->bmHDR);
    image->bmHDR=NULL;
    free(image->bmData);
    image->bmData=NULL;
//    free(image);
}
void writeImage(IMAGE * image, FILE * f){
    writeHeader(image,f);
    writeData(image,f);
}
void writeHeader(IMAGE * image, FILE * f){
    if(fwrite(image->bmHDR,sizeof(BITMAPHDR),1,f)!=1)
    {
        printf("Failed to write image header");
    }
}
void writeData(IMAGE * image, FILE * f){

}