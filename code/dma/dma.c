//
// Created by wangxi on 2023-02-01.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dma.h"
void printInts(int * ptr, int size)
{
    printf("The ints are: ");
    while(size-->0) printf("%d ",*(ptr++));

    printf("\n");
}

int * getInts(int size)
{
    int * mem = (int*) malloc(sizeof(int)*size);
    int i = 0;
//    while (size-->0)
//    {
//        printf("Enter a num:");
//        scanf("%d",mem+(i++));
//    }

    while (size>0)
    {
        size--;
        printf("Enter a num:");
        scanf("%d",mem+i);
        i++;
    }
    return mem;
}
//merge left and right
//size of left is sizes[0];
//size of right is sizes[1];
int * addInts(int * left, int * right,int * sizes)
{
    int * rs = (int*) malloc(sizeof(int)*(sizes[0]+sizes[1]));
//    int * rs = (int*) malloc(sizeof(int)*(*sizes+*(sizes+1)));
    memcpy(rs,left,sizeof(int)*sizes[0]);
    memcpy(rs+sizes[0],right,sizeof(int)*sizes[1]);
    return rs;
}


//int * addIntsv2(int * arrays[],int * sizes)
int * addIntsv2(INT_PTR arrays[],int * sizes)
{
    return addInts(arrays[0],arrays[1],sizes);
}

//int * addIntsv3(int ** arrays,int * sizes)
int * addIntsv3(INT_PTR * arrays,int * sizes)
{
    return addIntsv2(arrays,sizes);
}

int totalsize( INT_PTR sizes,int count)
{
    int total = 0;
    while(count-->0)total+=*(sizes++);
    return total;
}

int * addIntsv4(INT_PTR * arrays,INT_PTR sizes,int arraycount)
{
    INT_PTR rs = (INT_PTR) malloc(sizeof(int)* totalsize(sizes,arraycount));
    INT_PTR cur = rs;
    INT_PTR right = NULL;
    for(int i=0;i<arraycount;i++)
    {
        right = arrays[i];
        memcpy(cur,right,sizeof(int)*(sizes[i]));
        cur+=sizes[i];
    }
    return rs;
}