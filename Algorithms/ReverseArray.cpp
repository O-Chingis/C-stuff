#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// В первой строке задаётся число N — размер массива (количество оценок).
// Во второй строке вводится массив из N целых чисел, разделённых пробелами.
// На выходе программа должна вывести строку из N элементов массива, где все нули перемещены в конец, а порядок остальных чисел сохранён. Значения разделяются пробелами.

int main(){

int n = 0;

cin>>N;


int *arr=new int[N];

for(int i=0; i<N; i++){
cin>>arr[i];
}

int *brr=new int[N];
int idx=0;

for(int i=0; i<N; i++){
    if(arr[i]>0){
        brr[idx++]=arr[i];
        }       
}
for(int i=0; i<N; i++){
    if(arr[i]==0)
    brr[idx++]=arr[i];
    }
for(int i=0; i<N; i++){
    cout<<brr[i]<<" ";
    }
delete[] arr;
delete[] brr;
return 0;
}