#include <stdio.h>
#define len 6
int minmax(int a[],int b[],int j,int k){
if(j<len){
  int min=a[0],i;
  for(i=0;i<k;i++){
    if(min>a[i]){
      min=a[i];
}
} 
  b[j++]=min;
  for(i=0;i<k;i++){
    if(a[i]==min){
      for(;i<k;i++){
        a[i]=a[i+1];
}
      a[--k]=0;
      break;
}
}
  minmax(a,b,j,k);
  }
}
int main(){
  int a[len]={0},b[len]={0};
  int num,i=0;
  int j=0;
  int k=len;
  do{
    scanf("%d",&num);
    a[i++]=num;  
}while(i<len);
  minmax(a,b,j,k);
  for(i=0;i<len;i++){
    printf("%d",b[i] );
}
  return 0;
}
