#include  <stdio.h>
#include  "main.h"

/*
** p_way: 0 = ASC, 1 = DESC
*/
void    sort_array(int p_array[], signed int p_size, unsigned short p_way)
{
        int extr_value;
        for (int i=0; i<(p_size-1); i++)
        {
            extr_value = p_array[i];
            for (int j=(i+1); j<p_size; j++)
            {   
                if ((extr_value > p_array[j] && p_way == 0)  
                    || (extr_value < p_array[j] && p_way == 1)) 
                    switch_values(&extr_value, &p_array[j]);
            }   
            p_array[i] = extr_value;
        }   
}

void  switch_values(int *ptr1, int *ptr2)
{
      int temp_value;
      temp_value = *ptr1;
      *ptr1 = *ptr2;
      *ptr2 = temp_value;
}

void    list_array(int p_array[], unsigned int p_size)
{
        for (int i=0; i<p_size; i++)   
            printf("array[%d] = %d\n", i, p_array[i]);

        printf("====================\n");
}

int     main(void)
{
        int array_test[7] = {1, 3, 8, 4, 6, 10, 2}; 
     
        list_array(array_test, 7); 
        sort_array(array_test, 7, 0);
        list_array(array_test, 7);
        sort_array(array_test, 7, 1); 
        list_array(array_test, 7);
        return (0);
}
