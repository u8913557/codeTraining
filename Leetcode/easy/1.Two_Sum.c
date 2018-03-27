/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

//暴力法:

int* twoSum(int* nums, int numsSize, int target) 
{    
    int* answer = malloc(sizeof(int)*2);
    //static int answer[2] = {0};
    
    for(int i=0; i<numsSize; i++) 
    {
        for(int j=i+1; j<numsSize && j!=i; j++)        {
            if(nums[i]  == target - nums[j])
            {
                answer[0] = i;
                answer[1] = j;
            }
        }
    }
    return answer;
}

/*

//Hash 法

int* twoSum(int* nums, int numsSize, int target) 
{    
    int min = 2147483647;  
    int i = 0;  
    for (i = 0; i < numsSize; i++) {  
        if (nums[i] < min)  
            min = nums[i];  
    }  
    int max = target - min;  
    int len = max - min + 1;   //确定hash长度  
    int *table = (int*)malloc(len*sizeof(int));  
    int *indice = (int*)malloc(2*sizeof(int));  
    for (i = 0; i < len; i++) {  
        table[i] = -1;         //hash初值  
    }  
    for (i = 0; i < numsSize; i++) {  
        if (nums[i]-min < len) {  
            if (table[target-nums[i]-min] != -1) {        //满足相加为target  
                indice[0] = table[target-nums[i] - min];  
                indice[1] = i;  
                return indice;  
            }  
            table[nums[i]-min] = i;  
        }  
    }  
    free(table);  
    return indice;  
}*/