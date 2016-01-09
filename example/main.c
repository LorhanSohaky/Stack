/*
The MIT License (MIT)

Copyright (c) 2015 Lorhan Sohaky

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Stack.h>

typedef struct{
    char c[100];
    int v;
} Lol;

int main(){
    Lol a,b,*z;
    Stack *pilha;

    strcpy(a.c,"CASA1");
    strcpy(b.c,"CASA2");
    a.v=10;
    b.v=20;

    pilha=createStack();
    insertElement(pilha,&a,1);
    insertElement(pilha,&b,1);
    do{
        z=(Lol*)getFieldValue(getElement(pilha));
        if(z!=NULL){
            printf("%d  %s\n",z->v,z->c);
        }
    }while (nextElement(pilha)==0);
    clearStack(pilha);
    getchar();
    return 0;
}
