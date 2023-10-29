#include <iostream>
using namespace std;
void printArray(int arr[],int size){
  for (int i=0;i<size;i++){
    cout<< arr[i] << " ";
  }
}
void insertionSort(int arr[], int size) {
  for (int i=1;i<size;i++){
    int key=arr[i];
    int j=i-1;
    while (key<arr[j] && j>=0){
      arr[j+1]=arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}
