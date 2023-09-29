#include <stdio.h>
#include <stdlib.h>

void printArray(int *p, int size);

int steps;

int *createArray(int n);

void sort(int *array, int size);

void swap(int *element1, int *element2);

void fillArray(int *p, int size);

int main(void) {
  int *p = 0;
  int cases;
  scanf("%d", &cases);
  for (int i = 0; i < cases; i++) {
    int currentCaseSize;
    scanf("%d", &currentCaseSize);
    p = createArray(currentCaseSize);

    fillArray(p, currentCaseSize);
    sort(p, currentCaseSize);
    printArray(p, currentCaseSize);

    printf("Optimal case takes %d steps", steps);
    steps = 0;
  }

  return 0;
}

int *createArray(int n) {
  int *p = (int *)malloc((sizeof(int) * n));
  printArray(p, n);
  return p;
}

void swap(int *element1, int *element2) {
  int value = *element1;
  *element1 = *element2;
  *element2 = value;
  steps += 1;
}
void sort(int *array, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i; j > 0; j--) {
      if (array[j] < array[j - 1]) {
        swap(&array[j], &array[j - 1]);
      }
    }
  }
}

void printArray(int *p, int size) {
  for (int i = 0; i < size; i++) {
    printf("%d\n", *(p + i));
  }
}

void fillArray(int *p, int size) {
  for (int i = 0; i < size; i++) {
    int pos;
    scanf("%d", &pos);
    p[i] = pos;
  }
}
