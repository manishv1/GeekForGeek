class Solution {
    public:
      // helper function to get gcd of two numbers.
      int gcd(int a, int b) {
          if (a == 0)
              return b;
          return gcd(b % a, a);
      }

      vector<int> lcmAndGcd(int a, int b) {

          vector<int> arr(2);
          // gcd of two numbers.
          int g = gcd(a, b);
          // product of 2 numbers divided by their gcd gives their lcm.
          int l = (a * b) / g;

          arr[0] = l;
          arr[1] = g;

          return arr;
      }
  };