#include <stdio.h>
#include <stdlib.h>
#include "uthash.h"

typedef struct {
    int value;
    UT_hash_handle hh;
} Hashentry;

int main(){
    int arr[]={1,2,31,335,2434,2,32,5,652,6,232,678,5675,4234,46,2,435,3212,4546};
    int n=sizeof(arr)/sizeof(arr[0]);
    Hashentry* table=NULL;
    Hashentry* entry;
    for(int i=0;i<n;i++){
        HASH_FIND_INT(table,&arr[i],entry);
        if(entry)printf("Duplicate element found: %d at %d\n",arr[i],i);
        else{
            entry=malloc(sizeof(Hashentry));
            entry->value=arr[i];
            HASH_ADD_INT(table,value,entry);
        }
    }
    printf("End of program\n");
}