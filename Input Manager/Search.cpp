#include "Search.h"

using namespace std;

void search(char* token,Trienode* trie,Mymap* map,int k)
{
    cout<<"Not implemented yet"<<endl;
}
void df(Trienode* trie)
{
    cout<<"Not implemented yet"<<endl;
}
int tf(char* token,Trienode* trie)
{
    char* token2;
    token2=strtok(NULL," \t\n");
    if(token2==NULL)
    {
        free(token2);
        return -1;
    }
    for(int l=0;l<strlen(token2);l++)
    {
        if(!isdigit(token2[l]))
        {
            token2=NULL;
            free(token2);
            return -1;
        }
    }
    int id=atoi(token2);
    token2=strtok(NULL," \t\n");
    if(token2==NULL)
    {
        free(token2);
        return -1;
    }
    cout<<"Not implemented yet"<<endl;
}