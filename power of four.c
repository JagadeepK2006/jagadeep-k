bool isPowerOfFour(int n) {
  long x = 1;
  while(x < n) {
    x <<= 2;
  };
  return n == x;
}
