#include<stdio.h>
#include <stdlib.h>
int main()
{
    printf("File name is %s\n",__FILE__);
    printf("Today's date is %s\n",__DATE__);
    printf("current time is %s\n",__TIME__);
    printf("current line is %d\n",__LINE__);
    printf("ANSI is %d\n",__STDC__);
    
    return 0;
}