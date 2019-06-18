#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() {
    int t; 
    scanf("%d", &t);
    while(t--)
    {
        char s[100001];
        int count=0,i;
        scanf("%s",s);
        for(i=0;i<strlen(s)-1;i++)
        {
            if(s[i]==s[i+1])
                count++;
        }
        printf("%d\n",count);
    }
        
    return 0;
}
