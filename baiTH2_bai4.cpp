#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char ma[20];
    char ten[50];
    float d1, d2, d3;
};


struct Node {
    struct SinhVien data; 
    struct Node *next;    
};


struct LinkedList {
    struct Node *head; 
};