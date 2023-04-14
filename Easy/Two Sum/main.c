/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *result = (int*)malloc(sizeof(int)*2);

    for(int i=0;i<numsSize;i++){
        result[0]=i;
        for(int k=0;k<numsSize;k++){
            result[1]=k;
            if(nums[i] + nums[k] == target && i!=k){
                *returnSize = 2;
                return result;
            }
        }
    }

    *returnSize = 0;
    return result;
}