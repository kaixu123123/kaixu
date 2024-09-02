#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp_int(const void* e1, const void* e2)
{
    return (*(int*)e1 - *(int*)e2);
}
void test1()
{
    int arr[] = {9,8,7,6,5,4,3,2,1,0};
    // int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
struct Stu
{
    char name[20];
    int age;
};
void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;
        buf1++;
        buf2++;
    }
    
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(const void* e1m, const void* e2))
{
    int i = 0;
    for (i = 0; i < sz - 1; i++)
    {
        // 可能在循环遍历完前 数组就已经有序
        int flag = 1;
        int j = 0;
        for (j = 0; j < sz - 1; j++)
        {
            if (cmp((char*)base + j * width, (char*) base + (j + 1) * width) > 0)
            {
                Swap((char*)base + j * width,
                (char*)base + (j + 1) * width, width);
                flag = 0;
            }
            
        }
        if (flag == 1)
        {
            break;
        }
        
    }
    
}
// e1 和 e2 是指向需要比较的两个元素的指针。
// qsort 在排序过程中，会自动传递数组中需要比较的两个元素的指针给 e1 和 e2。
int cmp_stu_by_name(const void* e1, const void* e2)
{
   return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name); 
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
    return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2()
{
    struct Stu s[] = {{"zhangsan", 15}, {"lisa", 30}, {"pengge", 25}};
    int sz = sizeof(s) / sizeof(s[0]);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
      printf("%s %d\n", s[i].name,s[i].age);
    }
    
}
void test3()
{
    int arr[] = {5,4,6,1,8,2,4,3,9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
void test4()
{
    struct Stu s[] = {{"zhangsan", 15}, {"lisa", 30}, {"pengge", 25}};
    int sz = sizeof(s) / sizeof(s[0]);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
    int i = 0; 
        for (i = 0; i < sz; i++)
    {
      printf("%s %d\n", s[i].name,s[i].age);
    }
}
int main()
{   
    // test1();
    // test2();
    // test3();
    test4();

    return 0;
}