#include<stdio.h>
int main()
{
  int intNum = 0;
  double doubleNum = 0;
  char charNum;
  scanf("%d %lf %c", &intNum, &doubleNum, &charNum);
  printf("%d\n%lf\n%c", intNum, doubleNum, charNum);
  return 0;
}