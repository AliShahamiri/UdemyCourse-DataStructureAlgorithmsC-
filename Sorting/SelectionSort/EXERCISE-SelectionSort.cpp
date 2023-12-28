#include <iostream>

using namespace std;


	// CREATE SELECTIONSORT FUNCTION HERE //
    void selectionSort(int array[], int size)
    {
        int minIndex;
        int temp;
        for (int i = 0 ; i < size; i++)
        {
         minIndex = i;
          for (int j = i + 1 ; j < size; j++)
          {
              if (array[j] < array[minIndex])
              {
                minIndex = j;
              }
          }
          if (minIndex!=i)
          {
            temp            = array[i];
            array[i]        = array[minIndex];
            array[minIndex] = temp; 
          }
        }
    }




int main() {
    
    int myArray[] = {100,4,2,5,1,3};

    int size = sizeof(myArray) / sizeof(myArray[0]);


    selectionSort(myArray, size);


    for (auto value : myArray) {  
        cout << value << " ";
    }

    /*
        EXPECTED OUTPUT:
        ----------------
        1 2 3 4 5 6 
        
     */
    
}

