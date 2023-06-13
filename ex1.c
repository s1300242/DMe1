#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int x;
  int tcount=0,hcount=0;
  int keep=1;
   srand((unsigned int) time(NULL));
  for(int i=1;i<4;i++){
    int x=rand();
    if(x%2==0){
      printf("Round %d: Heads\n",i);
    hcount++;
    }
else{
      printf("Round %d: Tails\n",i);
      tcount++;
    }

  }
    printf("Heads; %d, Tails; %d\n",hcount,tcount);

    return 0;
}
