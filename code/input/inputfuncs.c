//
// Created by wangxi on 2023-01-11.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void readString(char * cPtr, char * cLengthPtr);//Forward declaration
void readStringEx(char * cPtr, int len);
void readNumbers(int * nPtr,int nSize);
void printNumbers(int * nPtr,int nSize);
int main(int argc, const char * argv[])
{
    int nRs =0;
    char cArray[10];
    char * cPtr0 = cArray;
//    char * cPtr = &cArray[1];
//    char * cPtr1 = &cArray[0];
//    cPtr1++;
//    unsigned int temp = 0xffffffff;
//    temp = 0b1111111111111111111111111111;
//    printf("%ud\n",temp);
//    nRs = scanf("%9s",cArray);
////    nRs= scanf_s("%s",cArray, strlen(cArray));?
//    printf("%s\n",cArray);
//    printf("%ud\n",temp);
//    readStringEx(cPtr0,5);
//    printf("%s\n",cArray);
//    //Convert an int to string
//    sprintf(cArray,"%d",10);
//    sprintf(cArray,"%3.1f",3.14159);
//    //Convert a string to int
//    nRs=atoi("1234");
    //atol atof

    int nArray[4];
    readNumbers(nArray,4);
    printNumbers(nArray,4);
}

void readNumbers(int * nPtr,int nSize)
{
    printf("Enter 4 numbers:");
    while(scanf("%d",nPtr++) && --nSize);
//    {
//        nPtr++;
//    }
}
void printNumbers(int * nPtr,int nSize)
{
    for(int i=0;i<nSize;i++)
    {
        printf("%d\n",nPtr[i]);
    }
}


void readStringEx(char * cPtr, int len)
{
    char cFmt[4];//Allocate a string
    //Init string
    cFmt[0]='\0';
    sprintf(cFmt,"%%%ds",len);
    printf("Enter a string:");
    scanf(cFmt,cPtr);
}


void readString(char * cPtr, char * cLengthPtr)
{
    char cFmt[4];//Allocate a string
    //Init string
    cFmt[0]='\0';
//    strcat(cFmt,"%");
//    strcat(cFmt,cLengthPtr);
//    strcat(cFmt,"s");
    sprintf(cFmt,"%%%ss",cLengthPtr);
    printf("Enter a string:");
    scanf(cFmt,cPtr);
}