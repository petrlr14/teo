#include "stdio.h"

int main(){
  
  int estado=0;

  char cadena[100];
  for(int i=0; i<100; i++){
    cadena[i]='*';
  }
  scanf("%s", cadena);
  for(int i=0; i<100; i++){
    char aux=cadena[i];
    if(aux=='*'){
      break;
    }
    switch(estado){
      case 0:
        if(aux=='a'){
          estado=1;
        }else{
          estado=4;
        }
        break;
      case 1:
        if(aux=='c') estado=2;
        break;
      case 2:
        if(aux=='a'){
          estado=3;
        }else{
          estado=4;
        }
        break;
      case 3:
        if(aux=='c'||aux=='a'){
          estado=4;
        }else{
          estado=3;
        }
        break;
      case 4:
        break;
    }
  }
  if(estado==3){
    printf("Sí\n");
  }else{
    printf("No\n");
  }
  
  return 0;
}


