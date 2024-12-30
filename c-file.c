#include <stdio.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif
void __stdcall asmfunc(int arr[], int* base);  // Declare the assembly function
#ifdef __cplusplus
}
#endif

int main() {
    system("cls");
    int arr[50];
    int size;  // Size of the array
    int base = 0;  
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter %d elements (0 or non-zero values): \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Assembly procedure calling from C! \n");
    asmfunc(arr, &base); 
    getch();
    printf("Back to C! \n");
    printf("Total non-zero values in the array: %d\n", base);

    return 0;
}
