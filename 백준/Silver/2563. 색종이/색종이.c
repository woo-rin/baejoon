#include <stdio.h>
int main (){
  int ddd[100][100] = {0};
  int a, b, c;
  int ans=0;

  scanf("%d", &a);
  for(int k=0; k<a; k++){
    scanf("%d %d", &b, &c);
    for(int i=b; i<b+10; i++){
      for(int j=c; j<c+10; j++){
        ddd[i][j] +=1;
        if(ddd[i][j] == 1){
          ans +=1;
        }
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}