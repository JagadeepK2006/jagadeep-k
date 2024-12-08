/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* result = (int*)malloc(nums1Size * sizeof(int));
    int index = 0;

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                // Check if the element is already in the result array
                int found=0;
                for(int k=0;k<index;k++){
                    if(result[k]==nums1[i]){
                        found=1;
                        break;

                    }
                }
                // Add to the result only if it's not already there
                if(found==0){
                    result[index++]=nums1[i];
                }
                break;// Break after finding the first occurrence in nums2
            }
        }
    }
    // Resize the result array to the actual number of elements
    result = (int*)realloc(result, index * sizeof(int));
    *returnSize = index;

    return result;

}
