#include <iostream>

using namespace std;

void show_arr (int ** arr,int arr_size);
int ** get_arr (int arr_size);


int main() {
    int arr_size = 10;

    int **arr = get_arr(arr_size);


    int k = 1;

    for (int i = 0; i < arr_size; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            if (i % 2 == 0) {
                arr[j][i - j] = k;
                arr[arr_size - 1 - j][arr_size - i + j - 1] = arr_size * arr_size + 1 - k;

                k++;

            }
        }
        for (int j = i; j > -1; j--) {
            if (i % 2 == 1) {
                arr[j][i - j] = k;
                arr[arr_size - 1 - j][arr_size - i + j - 1] = arr_size * arr_size + 1 - k;
                k++;

            }
        }


    }

    show_arr(arr, arr_size);





    return 0;


}


int ** get_arr (int arr_size){
    int** arr =new int*[arr_size];
    for (int k = 0; k <arr_size; ++k) {
        arr[k]=new int[arr_size];

    }

    for (int i = 0; i < arr_size; ++i) {
        for (int j = 0; j < arr_size; ++j) {
            arr[i][j]=0;

        }
    }
    return arr;
}

void show_arr (int ** arr,int arr_size){
    for (int i = 0; i < arr_size; ++i) {
        cout<<"\n\t\t\t";
        for (int j = 0; j <arr_size; ++j) {
            cout<<arr[i][j]<<"    ";


        }
        cout<<"\n\t\t\t";

    }

}



