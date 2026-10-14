#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char polyhedron[12];
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", polyhedron);
        if (strcmp(polyhedron, "Tetrahedron")==0) count += 4;
        if (strcmp(polyhedron, "Cube")==0) count += 6;
        if (strcmp(polyhedron, "Octahedron")==0) count += 8;
        if (strcmp(polyhedron, "Dodecahedron")==0) count += 12;
        if (strcmp(polyhedron, "Icosahedron")==0) count += 20;
    }
    printf("%d\n", count);
    return 0;
}