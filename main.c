#include <string.h>
#include <stdio.h>


int main(int ac, char ** av)
{
  int rc = 0
  if (ac > 1 )
    rc = atoi(av[1])
  puts("Hello world");
  puts("foobar");
  puts("dev/branch");
  puts("bar/foo");
  return (rc);
}

