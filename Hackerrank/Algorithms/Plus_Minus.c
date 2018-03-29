#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the plusMinus function below.
 */
void plusMinus(int arr_count, int* arr) {
    /*
     * Write your code here.
     */
    int positiveNum=0;
    int negativeNum=0;
    int zeroNum=0;
    float result1=0.0;
    float result2=0.0;
    float result3=0.0;
    
    if(arr_count !=0){
    
        for(int i=0; i<arr_count; i++){
            if(arr[i] >0)
                positiveNum++;
            else if(arr[i] <0)
                negativeNum++;
            else
                zeroNum++;
        }
        result1 = ((float)positiveNum/arr_count);
        result2 = ((float)negativeNum/arr_count);
        result3 = ((float)zeroNum/arr_count);
    
        printf("%.6f\n", result1);
        printf("%.6f\n", result2);
        printf("%.6f\n", result3);
    }
}

int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    char** arr_temp = split_string(readline());

    int arr[n];

    for (int arr_itr = 0; arr_itr < n; arr_itr++) {
        char* arr_item_endptr;
        char* arr_item_str = arr_temp[arr_itr];
        int arr_item = strtol(arr_item_str, &arr_item_endptr, 10);

        if (arr_item_endptr == arr_item_str || *arr_item_endptr != '\0') { exit(EXIT_FAILURE); }

        arr[arr_itr] = arr_item;
    }

    plusMinus(n, arr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);
        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}
