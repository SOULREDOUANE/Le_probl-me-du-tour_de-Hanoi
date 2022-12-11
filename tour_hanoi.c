#include<stdio.h>
#include<string.h>
#include<malloc.h>

void deplacer(int ,char**,char**,char**);
void placer(int N,char** a,char** b);
void main(){

    char** a;
    char** b;
    char** c;
    a=(char**)malloc(9*sizeof(char*));
    c=(char**)malloc(9*sizeof(char*));
    b=(char**)malloc(9*sizeof(char*));
    for (int i = 0; i < 9; i++)
    {
          a[i]=(char*)malloc(9*sizeof(char));
          c[i]=(char*)malloc(9*sizeof(char));
          b[i]=(char*)malloc(9*sizeof(char));

    }
    


    int N=3;

    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < i; k++)
        {
            a[i][k]=' ';
        }
        
        for (int j = i; j <8-i; j++)
        {
            a[i][j]='-';
        } 
        a[i][8]='\0' ;
      
    }
    // a[0]={'-','-','-','-','-','-','-','-'};
    // a[1]={'-','-','-','-','-','-','-','-'};
    // a[2]={'-','-','-','-','-','-','-','-'};



    for (int i = 0; i <N; i++)
    {
        // printf("hello world!");
        printf("%s\n",a[i]);
    }

    deplacer( N,a,b,c);
    
    for (int i = 0; i < N; i++)
    {
        printf("%s           %s ",a[i],c[i]);
    }
    
    
    
    

}

void deplacer(int N,char** a, char** b,char** c){

    if (N>0)
    {
        deplacer(N-1,a,c,b);
        placer(N,a,b);
        deplacer(N-1,b,c,a);
        
    }
    

}

void placer(int N,char** a,char** b){

    char buffer[12];
    
    for (int  i = 0; i < N; i++)
    { 
        strcpy(buffer,a[i]);
        strcpy(a[i],b[i]);
        strcpy(b[i],buffer);
    }
}