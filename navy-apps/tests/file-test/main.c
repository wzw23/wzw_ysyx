#include <stdio.h>
#include <assert.h>

int main() {
	printf("achieve here 1\n");
  FILE *fp = fopen("/share/files/num", "r+");
  assert(fp);

	printf("achieve here 2\n");
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
	printf("achieve here 3\n");
	printf("size=%ld\n",size);
  assert(size == 5000);
	printf("achieve here 4\n");

  fseek(fp, 500 * 5, SEEK_SET);
  int i, n;
	printf("achieve here 5\n");
  for (i = 500; i < 1000; i ++) {
    fscanf(fp, "%d", &n);
		/*printf("n[%d]=%d\n",i,n);*/
    assert(n == i + 1);
  }

	printf("achieve here 6\n");
  fseek(fp, 0, SEEK_SET);
  for (i = 0; i < 500; i ++) {
    fprintf(fp, "%4d\n", i + 1 + 1000);
  }
	printf("achieve here 7\n");

  for (i = 500; i < 1000; i ++) {
    fscanf(fp, "%d", &n);
		/*printf("n[%d]=%d\n",i,n);*/
    assert(n == i + 1);
  }

	printf("achieve here 8\n");
  fseek(fp, 0, SEEK_SET);
  for (i = 0; i < 500; i ++) {
    fscanf(fp, "%d", &n);
    assert(n == i + 1 + 1000);
  }

  fclose(fp);

  printf("PASS!!!\n");

  return 0;
}
