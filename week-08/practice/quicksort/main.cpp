#include <iostream>
#include <algorithm>
#include <vector>

void printArray(int *array, int n);
void printVector(std::vector<int> &vector);

//int* quickSort(int *array, int low, int high, int &stepCounter, int mode = 0);
//std::vector<int> quickSort(std::vector<int> &vector, int low, int high, int &stepCounter, int mode = 0);

//int* shakerSort(int* array, int size, int &stepCounter, int mode = 0);
std::vector<int> shakerSort(std::vector<int> &vector, int &stepCounter, int mode = 1);


int main()
{
    int stepCounter = 0;
    int test[] = {4, 2, 7, 5, 8, 3, 6, 9, 0};
    int n = sizeof(test) / sizeof(test[0]);

    std::vector<int> vector = {4, 2, 7, 5, 8, 3, 6, 9, 0};

    //std::cout << "Before Quick Sort :" << std::endl;
    //std::cout << "Before shaker Sort :" << std::endl;
    //printArray(test, n);
    printVector(vector);

    //std::cout << "\nAfter quick Sort :" << std::endl;
    std::cout << "\nAfter shaker Sort :" << std::endl;
    shakerSort(vector, stepCounter, 1);
    //quickSort(vector, 0, n-1, stepCounter, 0);
    //quickSort(test, 0, n-1, stepCounter, 0);

    printVector(vector);
   // printArray(test, n);

    std::cout << "stepCounter is: " << stepCounter<< std::endl;

    return 0;
}

void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << std::endl;
}
void printVector(std::vector<int> &vector){
    for (int i = 0; i <vector.size() ; ++i) {
        std::cout<<vector[i]<<std::endl;
    }
}

/*int* quickSort(int *array, int low, int high, int &stepCounter, int mode)
{
    int *newArray = array;
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    if(mode == 1) {

        while (i <= j) {
            while (array[i] < pivot)
                i++;
            while (array[j] > pivot)
                j--;
            if (i <= j) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
                j--;
                stepCounter++;
            }
        }
        if (j > low){
            quickSort(array, low, stepCounter, j);
        }
        if (i < high) {
            quickSort(array, i, stepCounter, high);
        }
    }
    else if (mode == 0) {
        while (i <= j) {
            while (array[i] > pivot)
                i++;
            while (array[j] < pivot)
                j--;
            if (i <= j) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                i++;
                j--;
                stepCounter++;
            }
        }
        if (j > low){
            quickSort(array, low, j, stepCounter, 0);
        }
        if (i < high){
            quickSort(array, i, high, stepCounter, 0);
        }
    }
    return newArray;
}*/
/*std::vector<int> quickSort(std::vector<int> &vector, int low, int high, int &stepCounter, int mode)
{
    std::vector<int> newVector = vector;
    int i = low;
    int j = high;
    int pivot = vector[(i + j) / 2];
    int temp = 0;

    if (mode == 1) {

        while (i <= j) {
            while (vector[i] < pivot)
                i++;
            while (vector[j] > pivot)
                j--;
            if (i <= j) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
                i++;
                j--;
                stepCounter++;
            }
        }
        if (j > low) {
            quickSort(vector, low, stepCounter, j);
        }
        if (i < high) {
            quickSort(vector, i, stepCounter, high);
        }
    } else if (mode == 0) {
        while (i <= j) {
            while (vector[i] > pivot)
                i++;
            while (vector[j] < pivot)
                j--;
            if (i <= j) {
                temp = vector[i];
                vector[i] = vector[j];
                vector[j] = temp;
                i++;
                j--;
                stepCounter++;
            }
        }
        if (j > low) {
            quickSort(vector, low, j, stepCounter, 0);
        }
        if (i < high) {
            quickSort(vector, i, high, stepCounter, 0);
        }
    }

    return newVector;

}
 int* shakerSort(int* array, int size, int &stepCounter, int mode){
    int *newArray = array;

    int i;
    int j;
    int k;

    if(mode == 1) {

        for (k = 0; k < size;) {

            for (i = 0; i < size - 1; i++) {
                if (array[i] > array[i + 1]) {
                    std::swap(array[i], array[i + 1]);
                    stepCounter++;
                }
            }
            size--;
            for (j = size - 1; j > 0; j--) {
                if (array[j] < array[j - 1]) {
                    std::swap(array[j], array[j - 1]);
                    stepCounter++;
                }
            }
            k++;
        }
    }else if (mode == 0) {
        for (k = 0; k < size;) {

            for (i = 0; i < size - 1; i++) {
                if (array[i] < array[i + 1]) {
                    std::swap(array[i], array[i + 1]);
                    stepCounter++;
                }
            }
            size--;
            for (j = size - 1; j > 0; j--) {
                if (array[j] > array[j - 1]) {
                    std::swap(array[j], array[j - 1]);
                    stepCounter++;
                }
            }
            k++;
        }
    }

    return newArray;
}*/
std::vector<int> shakerSort(std::vector<int> &vector, int &stepCounter, int mode){
    std::vector<int> newVector = vector;
    int size = (int)vector.size();
    int i;
    int j;
    int k;

    if(mode == 1) {

        for (k = 0; k < size;) {

            for (i = 0; i < size- 1; i++) {
                if (vector[i] > vector[i + 1]) {
                    std::swap(vector[i], vector[i + 1]);
                    stepCounter++;
                }
            }
            size--;
            for (j = size - 1; j > 0; j--) {
                if (vector[j] < vector[j - 1]) {
                    std::swap(vector[j], vector[j - 1]);
                    stepCounter++;
                }
            }
            k++;
        }
    }else if (mode == 0) {
        for (k = 0; k < size;) {

            for (i = 0; i < size - 1; i++) {
                if (vector[i] < vector[i + 1]) {
                    std::swap(vector[i], vector[i + 1]);
                    stepCounter++;
                }
            }
            size--;
            for (j = size - 1; j > 0; j--) {
                if (vector[j] > vector[j - 1]) {
                    std::swap(vector[j], vector[j - 1]);
                    stepCounter++;
                }
            }
            k++;
        }
    }
    return newVector;
}
