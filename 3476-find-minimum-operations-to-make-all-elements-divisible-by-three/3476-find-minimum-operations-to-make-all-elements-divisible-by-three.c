int minimumOperations(int* nums, int numsSize) {
    int sum = 0; 
    for (int i = 0; i<numsSize; i++)
    {
        if (nums[i] % 3 == 0)
        {
            sum += 0;
        }
        else 
        {
            sum += 1;
        }
    }
    return sum;
}