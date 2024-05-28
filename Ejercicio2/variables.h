#define MAX_STR 40
#define MAX_REG 5

struct agenda
{
    char nombre[MAX_STR];
    char direccion[MAX_STR];
    char ciudad[MAX_STR];
    int telefono;
    int edad;
};

agenda arregloAgenda[MAX_REG];
agenda nuevaAgenda;

int opcion;
int indice = 0;