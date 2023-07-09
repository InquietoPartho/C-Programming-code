#include <stdio.h>  
#include <conio.h>  
int main ()  
{  
    int i, j, k, size;   
    scanf (" %d", &size);  
    int arr[size];
       
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            if ( arr[i] == arr[j])  
            {    
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                size--;  
                j--;      
            }  
        }  
    }  
    printf("%d\n",k);
    for ( i = 0; i < size; i++)  
    {  
        printf ("%d ", arr[i]);  
    }  
    return 0;  
}  