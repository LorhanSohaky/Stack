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

#include <Stack.h>
#include <stdlib.h>

static Node *createNode(void *Evalue, int type,Node *nextN){
    Node *node=malloc(sizeof(Node));
    if(node==NULL){
        return NULL;
    }
    node->value.Value=Evalue;
    node->value.Type=type;
    node->next=nextN;
    return node;
}

Stack *createStack(){
    return calloc(1,sizeof(Stack));
}

int insertElement(Stack *stack,void *value, int type){
    if(stack==NULL || type==-1){
        return -1;
    }
    Node *node=createNode(value,type,stack->last);
    if(node==NULL){
        return -1;
    }
    stack->last=node;
    return 0;
}

GenericField *getElement(const Stack *stack){
    if(stack!=NULL){
        return &(stack->last->value);
    }
    return NULL;
}

int nextElement(Stack *stack){
    if(stack==NULL || stack->last==NULL){
        return -1;
    }
    Node *node=stack->last;
    stack->last=node->next;
    free(node);
    return 0;
}

int clearStack(Stack *stack){
    if (stack == NULL){
        return -1;
    }
    Node *node;
    while(stack->last!=NULL){
        node=stack->last;
		      stack->last=stack->last->next;
        free(node);
    }
    stack->last=NULL;
    free(stack);
    stack=NULL;
    return 0;
}
