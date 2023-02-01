//
// Created by wangxi on 2023-02-01.
//

#ifndef CODE_DMA_H
#define CODE_DMA_H
#define  INT_PTR int *
void printInts(int * ptr, int size);
int * getInts(int size);
int * addInts(int * left, int * right,int * sizes);
int * addIntsv2(INT_PTR arrays[],int * sizes);
int * addIntsv4(INT_PTR * arrays,INT_PTR sizes,int arraycount);
#endif //CODE_DMA_H
