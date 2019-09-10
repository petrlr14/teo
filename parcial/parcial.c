#include "stdio.h"

#define SUCCESS 4
#define MAX_LENGTH 100

int main(){
  char cadena[MAX_LENGTH];
  int state = 0;
  for(int i=0; i<MAX_LENGTH; i++){
    cadena[i]='*';
  }
  scanf("%s", cadena);
  for(int i=0; i<MAX_LENGTH;i++){
    if(cadena[i]=='*'){
      break;
    }
    switch (state){
    case 0:
      if(cadena[i]=='a'){
        state++;
      }
      break;
    case 1:
      if(cadena[i]=='b'){
        state++;
      }else{
        state--;
      }
      break;
    case 2:
      if(cadena[i]=='a'){
        state++;
      }else{
        state=0;
      }
      break;
    case 3:
      if(cadena[i]=='a'){
        state++;
      }else{
        state--;
      }
      break;
    default:
      break;
    }
  }
  if(state==SUCCESS){
    printf("ACEPTADO\n");
  }else{
    printf("DENEGADO\n");
  }
  return 0;
}