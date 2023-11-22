#include <stdio.h>
int main(){
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   int to_find;
   scanf("%d",&to_find);
   for(int i=0;i<n;i++){
      if(a[i]==to_find){
         printf("Found");
         return 0;
      }
   }
   printf("Not Found");
}