#include <stdio.h>
#include <stdlib.h>
typedef struct m{
  int n;
  struct m *next;
  struct m *front;
}node;
int main(){
  int num; 
  node *head=(node *)malloc(sizeof(node));
  head->next=NULL;
  head->front=NULL;
  node *last=head;
  do{
    scanf("%d",&num);
    node *p=(node *)malloc(sizeof(node));
    p->n=num;
    p->next=NULL;
    p->front=NULL;
    if(last){
      while(last->next){
        last=last->next;
}
      last->next=p;
      p->front=&*last;
}
  else{
    head=p;
}
}while(num!=0);
  node *a;
  for(a=head;a->next;a=a->next){
    printf("%d",a->n);
}
  node *c;
  for(c=last->next;c->front;c=c->front){
    printf("%d",c->n);
}
  printf("\n请输入你想查找的数字: ");
  int s,v=0;
  scanf("%d",&s);
  node *b=head;
  for(b=head;b;b=b->next){
    if(s==b->n){
      v=1;
}
}
  if(v){
    printf("找到了，%d",s);
}
  else{
    printf("没找到，");
}
  int i,j=0;
  printf("\n请输入你要查找的序号");
  scanf("%d",&i);
  node *l=head;
  while(l!=NULL&&j<i){
      l=l->next;
      j++;
}
  if(i==j){
    printf("\n找到了:%d",l->n);
}
  else{
    printf("没找到");
}
  return 0;
}
