#include<stdio.h>

void abc(char *a)
{
    int i;
    for(i=0;i<15;i++)
   {
        if(a[i]>=65&&a[i]<=90)
       {
                a[i]=a[i]+32;
       }
        else if(a[i]>=97&&a[i]<=122)
       {
                 a[i]=a[i]-32;
       }
   }
}

int main()
{
         char a[15];
         printf("Konversi huruf kecil ke huruf besar dan sebaliknya\nInput 1 kata: ");
         scanf("%s",a);
         abc(a);
         printf("Hasil: %s\n",a);
      return 0;
}
