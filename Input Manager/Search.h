#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Trienode.h"
#include "Map.h"

void search(char* token,Trienode *trie,Mymap *map,int k);
void df(Trienode* trie);
int tf(char* token,Trienode* trie);