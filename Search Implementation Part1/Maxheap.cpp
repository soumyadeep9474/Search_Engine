#include "Maxheap.h"
using namespace std;

Maxheap::Maxheap(int k):maxnumofscores(k),curnumofscores(0)
{
    heap=(double*)malloc(maxnumofscores*sizeof(double));
    ids=(int*)malloc(maxnumofscores*sizeof(int));
}