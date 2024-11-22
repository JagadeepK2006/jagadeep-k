char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    char** ranges = (char**)malloc(numsSize * sizeof(char*));
    for (int i = 0; i < numsSize; i++) {
        ranges[i] = (char*)malloc(sizeof(char) * 25);
    }

    int curr = 0;
    int insert = 0;
    for (int next = 1; next <= numsSize; next++) {
        if (next == numsSize || nums[next] != nums[next - 1] + 1) {
            if (nums[curr] == nums[next - 1]) {
                sprintf(ranges[insert], "%d", nums[curr]);
            } else {
                sprintf(ranges[insert], "%d->%d", nums[curr], nums[next - 1]);
            }
            insert++;
            curr = next;
        }
    }

    *returnSize = insert;
    return ranges;
}
