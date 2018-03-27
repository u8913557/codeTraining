#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct dict_entry_s {
    char* key;
    int value;    
} dict_entry_s;

typedef struct dict_s {
    dict_entry_s *entry;
    int len;
    int cap;
} dict_s, *dict_t; 

int dict_find_index(dict_t dict, const char* key) {
    for(int i=0; i < dict->len; i++) {
        if(!strcmp(dict->entry[i].key, key))
            return i;
    }
    return -1;
}

int dict_find(dict_t dict, const char* key) {
    int index = dict_find_index(dict, key);
    return (index==-1) ? -1 : dict->entry[index].value;
}


void dict_add(dict_t dict, const char* key, int value) {
    int index = dict_find_index(dict, key);
    if(index != -1) {
        dict->entry[index].value = value;
        return;
    }
    if(dict->len == dict->cap) {
        dict->cap += 10000;
        dict->entry = realloc(dict->entry, sizeof(dict_entry_s)*dict->cap);
    }
    int keyLen = strlen(key);
    dict->entry[dict->len].key = (char*)malloc((keyLen+1)*sizeof(char));
    strcpy(dict->entry[dict->len].key, key);

    dict->entry[dict->len].value = value; 
    dict->len++;
}

dict_t dict_new(void) { 
    dict_s proto = {0};
    proto.len=0;
    proto.cap=10;
    proto.entry = (dict_entry_s*)malloc(10 * sizeof(dict_entry_s));
    dict_t d = malloc(sizeof(dict_s)); 
    *d = proto; 
    return d; 
} 

void dict_free(dict_t dict) { 
    for (int i = 0; i < dict->len; i++) { 
        free(dict->entry[i].key); 
    } 
    free(dict->entry); 
    free(dict); 
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int n = 0;
    char strKey[100] ={0};
    int value =0;
    dict_t phoneBook = dict_new();
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%s", strKey);
        scanf("%d", &value);
        dict_add(phoneBook, strKey, value);
    }
    
    for(int j=0; j<n; j++) {
        scanf("%s", strKey);
        int value = dict_find(phoneBook, strKey);
       if(-1 == value){
           printf("Not found\n");
       }
       else {
           printf("%s=%d\n", strKey, value);
       }
    }
    
    dict_free(phoneBook);
        
    
    return 0;
}
