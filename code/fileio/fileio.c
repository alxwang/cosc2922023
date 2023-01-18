//
// Created by wangxi on 2023-01-18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "fileio.h"

int demoOpenClose(const char * filename, const char * mode)
{
    FILE * f  = NULL;
    int err = EXIT_SUCCESS;

    f=fopen(filename,mode);
    if(f==NULL)
    {
        err=errno;
        printf("got error.\n errno=%d\n errmsg=%s\n",err, strerror(err));
    }
    else
    {
        printf("Successed\n");
        fclose(f);
    }
}
