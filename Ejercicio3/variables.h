#define MAX_STR 40
#define MAX_REG 100

struct EMPLEADOS
{
    char DNI[MAX_STR];
    char nombre[MAX_STR];
    char apellidos[MAX_STR];
    char sexo[MAX_STR];
    char cargo[MAX_STR];
    int salario;
};

EMPLEADOS arregloEmpleados[MAX_REG];
EMPLEADOS nuevoEmpleado;

int opcion;
int indice = 0;