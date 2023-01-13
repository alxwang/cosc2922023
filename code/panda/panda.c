//
// Created by XIN Wang on 2023-01-13.
//
#include <stdio.h>
#include "panda.h"

void printIntArray(int nArray[],int nSize)
{
    //In c there is not length information attached to an array
    printf("The address stored in printIntArray in the function is \t%p\n", nArray);
    printf("The address of printIntArray in the function is \t%p\n", &nArray);

    for(int i=0;i<nSize;i++)
        printf("The loop counter is %d and the array value is %d"
               " and the value's address is is %p\n", i, nArray[i], &nArray[i]);
}

void printIntPointer(int * nPtr,int nSize)
{
    printf("The address stored in printIntPointer in the function is \t%p\n", nPtr);
    printf("The address of printIntPointer in the function is \t%p\n", &nPtr);

    //* is dereference op which will return the value of the point pointing to
    //Increase ++ op to a point will increase the address of the point based on the data type of the pointer
    for(int i=0;i<nSize;i++)
//        printf("The loop counter is %d and the array value is %d and the value's address is is %p\n", i, nPtr[i], &nPtr[i]);
//        printf("The loop counter is %d and the array value is %d and the value's address is is %p\n", i, *nPtr, nPtr++);
    printf("The loop counter is %d and the array value is %d and the value's address is is %p\n", i, *(nPtr+i), nPtr+i);

}

void printStringasCharArray(char cArray[])
{

}

void printStringasPointer(char* cPtr)
{

}

void printBytesOfInt(int n)
{

}

