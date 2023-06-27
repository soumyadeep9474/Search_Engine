#include "Readinput.h"
using namespace std;
int read_sizes(int *linecounter,int *maxlength,char* docfile)
{
    FILE *file = fopen(docfile, "r");
    if(file == NULL)
    {
        cout<<"Error opening file"<<endl;
        return -1;
    }
    char *line=NULL;
    size_t falsebuffer=0;
    int currlength;
    while(-1!=(currlength=getline(&line,&falsebuffer,file)))
    {
        if(*maxlength<currlength)
            *maxlength=currlength;
        (*linecounter)++;
        free(line);
        line=NULL;
        falsebuffer=0;
    }
    fclose(file);
    free(line);
    if(*linecounter==0 || *maxlength < 6)
    {
        cout<<"Document is too emty and does not meet requirements"<<endl;
        return -1;
    }
    return 1;
}