#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/* 注意：手机编程必须int main（）,最后return 0 */
/* void main()编译不通过，原因见帮助常见问题 */

/* 编程页面可以双指缩放，试试有惊喜 */

int main()
{
   /* 我的第一个C程序 */
   printf("Hello, World! \n");
   int k =156;
   int arr1[16] ={1,2,3,4,5,6,7,8,9,10,11,15,18,156,454,654,65165};
   int left=0;
   int right=sizeof(arr1)/sizeof(arr1[0]);
   printf("right:%d",right);
   
   while (left<=right)
   {
    int mid =(left +right)/2;
    if (arr1[mid]<k)
        left=mid+1;

   else if (arr1[mid]>k)
        right=mid-1;

   else
   {
    printf("找到了下标是：%d",mid);
    break;
   }
   
   }
    if (left>right)
        printf("找不到");
   return 0;
}