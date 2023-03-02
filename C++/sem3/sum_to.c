#include <stdio.h>

// Return the sum of all values from 1 to n.
// `n` <= UINT_MAX - 1, otherwise i would overflow and the function would
// not terminate anymore
unsigned long long add_to_on(unsigned n) {
    unsigned long long sum = 0;
    for (unsigned i = 1; i <=n; ++i) {
        sum += i;
    }
    return sum;
}
unsigned long long add_to_o1(unsigned n) {
    return (unsigned long long) ((n / 2.0 * n) + (n / 2.0));
}

void print_usage(char* command) {
    printf("Usage: %s {1|n}\n", command);
}

int main(int argc, char** argv) {
  // one less than UINT_MAX (0xffffffff) as 4294967295 does not terminate
  unsigned n = 4294967294;
  if (argc != 2) { print_usage(argv[0]); return 1; }
  switch (*argv[1]) {
  case '1':
    add_to_o1(n); break;
  case 'n':
    add_to_on(n); break;
  default:
    print_usage(argv[0]);  return 1;
  }
  return 0;
}
