#include "searchengine.h"

using namespace std;
int main(int argc, char **argv)
{
    if(argc!=5 || strcmp(argv[1],"-d") || strcmp(argv[3],"-k"))
    {
        cout<<"wrong arguments"<<endl;
        return -1;
    }
    cout<<"Please Wait"<<endl;
    int linecounter=0;
    int maxlength=-1;
    int k=atoi(argv[4]);
    FILE* file = fopen(argv[2],"r");
    if(file==NULL)
        cout<<"Error opening file"<<endl;
    fclose(file);
}