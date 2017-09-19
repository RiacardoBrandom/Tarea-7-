#include <stdio.h> 

int main (void) 
{ 

int n,cont,mayor=0,menor=0; 

for (cont=0; cont<=2; cont++) 
{ 
printf("Ingresa un Numero: "); 
scanf("%d",&n); 

if (cont==0) 
{ 
menor=mayor=n; 
} 

if (n<menor) 
{ 
menor=n; 
} 

if (n>mayor) 
{ 
mayor=n; 
} 

} 

printf("El Menor es: %d",menor); 
printf("El Mayor es: %d",mayor); 

return 0; 
} 

