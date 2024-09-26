///week03-2.cpp 用 C 語言的printf()試試看字串、字元
#include <stdio.h>
int main()
{
    printf("%d\n",'a');///單引號,單1個字母
    printf("%d\n","a");///雙引號,很多字母、字串、字元陣列、指標
    if('a' == 97) printf("原來'a'的值,就是97\n");
}
