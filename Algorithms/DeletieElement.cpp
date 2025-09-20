#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// В первой строке задаётся число  N  — размер массива (количество элементов).
// Во второй строке вводится массив из  N  чисел, разделённых пробелами.
// В третьей строке задаётся число element, которое нужно удалить из массива.
// На выходе программа должна вывести строку из элементов массива, из которого удалены все вхождения числа element. Оставшиеся числа должны быть записаны через пробел.

int main(){
	int N=0;
	cin>>N;
	
	int *arr=new int[N];
	int idx=0;
	
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	int element =0;
	cin>>element;
	
	int NS=0;
	
	for(int i=0; i<N; i++){
	    if(arr[i]==element){NS++;}
	    }
	int *brr=new int[N-NS];    
	
	for(int i=0;i<N; i++){
		if(arr[i]!=element){
		brr[idx++]=arr[i];
		}
		if (arr[i]==element){
			continue;
		}
	}
	for(int i=0; i<(N-NS); i++){
	cout<<brr[i]<<" ";
	}
	delete[] arr;
	delete[] brr;
	
	return 0;
}