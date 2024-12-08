int thirdMax(int* nums, int numsSize) {
    long long m1 = LLONG_MIN, m2 = LLONG_MIN, m3 = LLONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > m1) {
            m3 = m2;
            m2 = m1;
            m1 = nums[i];
        } else if (nums[i] > m2 && nums[i] < m1) {
            m3 = m2;
            m2 = nums[i];
        } else if (nums[i] > m3 && nums[i] < m2) {
            m3 = nums[i];
        }
    }

    // If the third maximum does not exist
    if (m3 == LLONG_MIN) {
        return m1;
    }
    
    return m3;
    
}
