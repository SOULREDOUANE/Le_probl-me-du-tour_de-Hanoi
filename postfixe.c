#include<stdio.h>
typedef struct 

{
    char car[100];
    float val;
} Oper;

void main(){
    
}

void consp(char * ch,int i, Oper oper[]){
    if (ch[i]=="(")
    {
       i++;
       consp(ch,i,oper);
       oper[i]=char[i];
       
    }
    

}
