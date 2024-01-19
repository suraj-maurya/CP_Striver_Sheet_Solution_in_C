#include <stdio.h>
#include <string.h>

int main() {
int num, face=0;
scanf("%d", &num);
for (int i = 0; i < num; i++)
{
    char polyhedrons[20];
    scanf("%s", &polyhedrons);

    if (strcmp(polyhedrons, "Tetrahedron")==0)
    {
        face+=4;
    }else if (strcmp(polyhedrons, "Cube")==0)
    {
        face+=6;
    }else if (strcmp(polyhedrons, "Octahedron")==0)
    {
        face+=8;
    }else if (strcmp(polyhedrons, "Dodecahedron")==0)
    {
        face+=12;
    }else if (strcmp(polyhedrons, "Icosahedron")==0)
    {
        face+=20;
    }
}
 printf("%d", face);

return 0;
}