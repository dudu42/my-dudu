#include <stdio.h>
int del(int *b){
  int pa=1,ch,tem,it,size=7;
  tem=b[1];
  it=b[size--];
  for(;pa*2<=size;pa=ch){
    ch=pa*2;
    if((ch!=size)&&(b[ch]<b[ch+1])){
      ch++;
}
    if(it>b[ch]){
      break;
}
    else{
      b[pa]=b[ch];
}
}
  b[pa]=it;
  return tem;
}
int main(){
  int a[30]={0},i=1,num;
  a[0]=100;
  do{
    scanf("%d",&num);
    if(num==0){
      break;
}
    a[i]=num;
    i++;
}while(num!=0);
  scanf("%d",&num);
  for(;a[i/2]<num;i/=2){
    a[i]=a[i/2];
}
  a[i]=num;
  for(i=1;i<7;i++){
    printf("%d ",a[i]);
}
  del(a);
  printf("\n");
  for(i=1;i<7;i++){
    printf("%d ",a[i]);
}
  return 0;
}
