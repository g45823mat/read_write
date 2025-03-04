#include <stdio.h>
#include <stdlib.h>
int main(){
  FILE *fp,*fp2;
  char s[256];
  int i,rr,pp;
  fp=fopen("./a.txt","r");
  fp2=fopen("./b2.txt","w");
  
  for(i=0;i<2;i++){
    fgets(s,256,fp);
  }
  for(i=0;i<2;i++){
    fgets(s,256,fp);
    sscanf(s,"%d%d",&rr,&pp);
    fprintf(fp2,"%d %d\n",rr,pp*2);
  }
  fclose(fp);
  fclose(fp2);
  
  return 0;
}