// lab 2 - wap to input two sets A and B and perform basic set operation a) unio , b) intersection c) compliment d) difference
//  e) cartisan product


#include <stdio.h>

int main() {
    int A[20], B[20], U[50];
    int m, n, u;
    int i, j, found;

    // Input Universal Set
    printf("Enter number of elements in Universal Set: ");
    scanf("%d", &u);

    printf("Enter elements of Universal Set:\n");
    for(i = 0; i < u; i++)
        scanf("%d", &U[i]);

    // Input Set A
    printf("Enter number of elements in Set A: ");
    scanf("%d", &m);

    printf("Enter elements of Set A:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &A[i]);

    // Input Set B
    printf("Enter number of elements in Set B: ");
    scanf("%d", &n);

    printf("Enter elements of Set B:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &B[i]);

    // UNION
    printf("\nUnion (A U B): { ");
    for(i = 0; i < m; i++)
        printf("%d ", A[i]);

    for(i = 0; i < n; i++) {
        found = 0;
        for(j = 0; j < m; j++) {
            if(B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", B[i]);
    }
    printf("}\n");

    // INTERSECTION
    printf("Intersection (A n B): { ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            if(A[i] == B[j]) {
                printf("%d ", A[i]);
                break;
            }
        }
    }
    printf("}\n");

    // DIFFERENCE A-B
    printf("Difference (A - B): { ");
    for(i = 0; i < m; i++) {
        found = 0;
        for(j = 0; j < n; j++) {
            if(A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", A[i]);
    }
    printf("}\n");

    // DIFFERENCE B-A
    printf("Difference (B - A): { ");
    for(i = 0; i < n; i++) {
        found = 0;
        for(j = 0; j < m; j++) {
            if(B[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", B[i]);
    }
    printf("}\n");

    // COMPLEMENT OF A
    printf("Complement of A (A'): { ");
    for(i = 0; i < u; i++) {
        found = 0;
        for(j = 0; j < m; j++) {
            if(U[i] == A[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", U[i]);
    }
    printf("}\n");

    // COMPLEMENT OF B
    printf("Complement of B (B'): { ");
    for(i = 0; i < u; i++) {
        found = 0;
        for(j = 0; j < n; j++) {
            if(U[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if(!found)
            printf("%d ", U[i]);
    }
    printf("}\n");

    // CARTESIAN PRODUCT
    printf("Cartesian Product (A x B):\n{ ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("(%d,%d) ", A[i], B[j]);
        }
    }
    printf("}\n");

    return 0;
}