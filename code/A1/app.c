//
// Created by wangxi on 2023-03-22.
//
int str_cmp(const char * s1, const char * s2)
{
    int s1_len = strlen(s1);
    int s2_len = strlen(s2);
    if(s1_len!=s2_len) return 0;
    int len_in_4 = s1_len % sizeof(int);
    unsigned int s1_int = (unsigned int *)s1;
    unsigned int s2_int = (unsigned int *)s2;
    for(int i =0;i<len_in_4;i++)
    {
        if(*(s1_int++)!=*(s2_int++)) return 0;
    }

    for(int i=0;i<s1_len-len_in_4*sizeof(int);i++)
    {
        if(*(s1+len_in_4*sizeof(int)+i)!=*(s2+len_in_4*sizeof(int)+i))
            return 0;
    }
    return 1;
}

#define REC_SIZE 3*sizeof(long long int)
#define MAX_NAME_SIZE (REC_SIZE-sizeof(short))
void readDataToBuffer(long long int * llPtr, int numRecords)
{
    for(int i=0;i<numRecords;i++)
    {
        unsigned  short * iShort = (unsigned short*)(llPtr+REC_SIZE*i);
        printf("Please enter a number 0-65535: ")
        scanf_s("%hu",iShort);
        getc(stdin);
        printf("Please enter a name(<21 chars): ");
        gets_s((char*)(iShort+1),MAX_NAME_SIZE);
    }
}

void printDataFromBuffer(long long int * llPtr, int numRecords)
{
    for(int i=0;i<numRecords;i++)
    {
        unsigned  short * iShort = (unsigned short*)(llPtr+REC_SIZE*i);
        printf("The id Number is: %hu\n",*iShort);
        printf("The name is: %s\n",(char*)(iShort+1));
    }
}


