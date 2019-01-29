#include<iostream>
using namespace std;
struct node{
int data;
struct node *left,*right;
};
void insert1(struct node **,int );
int minsearch(struct node *);
int main(){
struct node *start=NULL;
int i;
for(i=0;i<8;i++){
    insert1(&start,i*2+8);
}
cout<<"minimum element="<<minsearch(start);

}
void insert1(struct node **ps,int x){
struct node *p;
p=(struct node *)malloc(sizeof(struct node));
p->data=x;
p->left=NULL;
p->right=NULL;
if(*ps==NULL){
    *ps=p;
    return ;
}
struct node *temp,*prev=NULL;
temp=*ps;
while(temp!=NULL){
        prev=temp;
    if(x>temp->data){
        temp=temp->right;
    }
    else{
        temp=temp->left;
    }
}
if(x>prev->data){
    prev->right=p;
}
else{
    prev->left=p;
}
}
int minsearch(struct node *p){
struct node *temp=p;
while(temp->left!=NULL){
    temp=temp->left;
}
return temp->data;
}




