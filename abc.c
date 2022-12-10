#include <stdio.h>

int main()
{
    int heights[]={8,7,9,10,7,8,11};
   int len = sizeof(heights) / sizeof(int);
   int a[len];
   int k;
for(int i=0;i<len;i++){
    if(i==len-2){
    a[i]=1;a[i+1]=0;
        break;
    }
    k=1;
    for(int j=i;j<len;j++){
        if(heights[i]<heights[j])
         break;
        else
        a[i]=k++;
    }
    
    
}
for(int i=0;i<len;i++)
    printf("%d\t",a[i]);
    
    return 0;
}
