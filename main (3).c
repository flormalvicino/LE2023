#include <stdio.h>
#include <string.h>
struct alumnos {
  char nombre[40];
  char apellido[40];
  int DNI;
  int edad;
  float promedio;
};

struct alumnos florencia_malvicino, sofia_rios, nicolas_badino;

void imp_datos1 (void);

void imp_datos1 (void){
  printf("Nombre: %s\n", florencia_malvicino.nombre);
  printf("apellido: %s\n", florencia_malvicino.apellido);
  printf("DNI: %d\n", florencia_malvicino.DNI );
  printf("edad: %d\n", florencia_malvicino.edad);
  printf("promedio: %f\n", florencia_malvicino.promedio);
}
void imp_datos2 (void);
void imp_datos2 (void){
  printf("Nombre: %s\n", sofia_rios.nombre);
  printf("apellido: %s\n", sofia_rios.apellido);
  printf("DNI: %d\n", sofia_rios.DNI);
  printf("edad: %d\n", sofia_rios.edad);
  printf("promedio: %f\n", sofia_rios.promedio);
  }
void imp_datos3 (void);
void imp_datos3 (void){
  printf("Nombre: %s\n", nicolas_badino.nombre);
  printf("apellido: %s\n", nicolas_badino.apellido);
  printf("DNI: %d\n", nicolas_badino.DNI);
  printf("edad: %d\n", nicolas_badino.edad);
  printf("promedio: %f\n", nicolas_badino.promedio);
  }

int main(void)
{
  strcpy(florencia_malvicino.nombre,"Florencia");
  strcpy(florencia_malvicino.apellido,"Malvicino");
  florencia_malvicino.DNI = 46736983;
  florencia_malvicino.edad = 17;
  florencia_malvicino.promedio = 6.50;
  
  strcpy(sofia_rios.nombre,"Sofia");
  strcpy(sofia_rios.apellido,"Rios");
  sofia_rios.DNI = 46736983;
  sofia_rios.edad = 16;
  sofia_rios.promedio = 9;
  
  strcpy(nicolas_badino.nombre,"Nicolas");
  strcpy(nicolas_badino.apellido,"Badino");
  nicolas_badino.DNI = 50084939;
  nicolas_badino.edad = 16;
  nicolas_badino.promedio = 7;
  
  int alumno;
  printf("menu de alumnos:\n");
  printf("1.florencia_malvicino\n");
  printf("2.sofia_rios\n");
  printf("3.nicolas_badino\n");
  printf("seleccione un alumno\n");
  scanf("%d",&alumno);
  switch(alumno){
    case 1:
      imp_datos1();
      break;
    case 2:
      imp_datos2();
      break;
    case 3:
      imp_datos3();
      break;
    default:
      printf("opcion incorrecta");
  }
      return 0;
}
