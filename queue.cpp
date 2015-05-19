#include <iostream>
#include "queue.h"

It::It()
{

}

It::~It()
{

}

int* It::next(){
    if(ddq == dq) return NULL;
    return ddq+1;
}

Queue::Queue()
{
    n=0;
}

void Queue::append (int a){
    num[n++]=a;
}

It* Queue::createIterator(){
    It*it=new It();
    it ->ddq=num;
    it ->dq=num+n;
    return it;
}

