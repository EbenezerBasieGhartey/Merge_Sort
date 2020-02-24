# include<iostream>
using namespace std;

void Merge_Sort(int a[], int low, int mid, int high) {
  int i = low, j = mid + 1, index = low, temp[100], k;

  while ((i <= mid) && (j <= high)) {
    if (a[i] < a[j]) {
      temp[index] = a[i];
      i++;
    } else {
      temp[index] = a[j];
      j++;
    }
    index++;
  }

  if (i > mid) {
    while (j <= high) {
      temp[index] = a[j];
      j++;
      index++;
    }
  }
   else {
    while (i <= mid) {
      temp[index] = a[i];
      i++;
      index++;
    }
  }

  for (k = low; k < index; k++) 
  {
    a[k] = temp[k];
  }

}

void Merge_Sort(int a[], int low, int high) {
  if (low < high) {
    int middle = (low + high) / 2; 

    Merge_Sort(a, low, middle); 
    Merge_Sort(a, middle + 1, high); 

    Merge_Sort(a, low, middle, high);
  }
}

int main() {
  int a[30];
  int size;
  cout << "Enter the size of the array : "<<endl;
    cin >> size;
    cout << "Enter the elements of the array : "<<endl;
    for (int h = 0; h < size; h++)
        cin >>a[h];
        Merge_Sort(a, 0, size-1);
        
cout<<"sorted array = ";
  for (int i = 0; i < size; i++) {
    cout << a[i] << "   ";
  }
}
