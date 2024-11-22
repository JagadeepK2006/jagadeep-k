#include <malloc.h>
#include <stdint.h>

inline int findUnsetBit(uint8_t num) {
  int position = 0;

  while ((num & 1) == 1) {
    num >>= 1;
    position++;
  }

  return position;
}

int missingNumber(int *nums, int numsSize) {
  int i;

  // How many u8 integers (bytes) do we need to have bit flags for each number
  // 0..n
  int flagArraySize = (numsSize + 7) / 8;

  // calloc will also initialize all bytes to 0
  uint8_t *flagArray = calloc(flagArraySize, sizeof(uint8_t));

  // Go through all numbers and set the corresponding bits
  for (i = 0; i < numsSize; i++) {
    int index = nums[i] / 8;
    int bitPosition = nums[i] % 8;
    int8_t mask = (uint8_t)1 << bitPosition;
    flagArray[index] |= mask;
  }

  // Find the unset bit in the flag array
  int bitPosition = -1;
  for (i = 0; i < flagArraySize; i++) {
    if (flagArray[i] != 0xFFu) {
      bitPosition = findUnsetBit(flagArray[i]);
      break;
    }
  }

  int missingNumber = 8 * i + bitPosition;

  free(flagArray);

  return missingNumber;
}
