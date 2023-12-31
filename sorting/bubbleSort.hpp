#include <iostream>
/*

Best: O(n)
Average: O(n^2)
Worst: O(n^2)
Space auxiliar: O(1)

*/


void bubbleSort(int mass[], int size){
    for (int i = 0; i < size; i++)
    {
        bool flag = true;
        for (int j = 0; j < size-(1+i); j++)
        {
            if (mass[j]>mass[j+1])
            {
                flag = false;
                int temp = mass[j];
                mass[j] = mass[j+1];
                mass[j+1] = temp;
            }
            
        }
        if (flag)
        {
            break;
        }   
    }
}