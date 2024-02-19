void rotate(int* nums, int numsSize, int k){
    int i;
    k = k%numsSize; //Modulo in case k is huge
    int * tmp = (int *)malloc(sizeof(int)*k); //Only storing the first K elements
    for(i = 0; i < k; i++){
        tmp[i]=nums[numsSize-k+i]; //Store the right half into a temporary array
    }
    
    //Allows you to have overlap
    memmove(nums+k, nums, sizeof(int)*(numsSize-k)); //Move it 
    
    for(i=0;i<k;i++){
        nums[i]=tmp[i]; //
    }
    
    return;
}
