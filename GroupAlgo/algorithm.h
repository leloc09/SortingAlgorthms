#pragma once

#include <iostream>

using FuncPtr = void (*)(int* arr, int n, int& comp);

// Commands: 
// 1: [Execution file]-a [Algorithm] [Given input] [Output parameter(s)] #5
// Ex: a.exe-a radix-sort input.txt-both 
// Input: Given arr from file			[Given input]
// Output: Save to output.txt
// 2: [Execution file]-a [Algorithm] [Input size] [Input order] [Output parameter(s)] #6
// Ex: a.exe-a selection-sort 50-rand-time
// Input: Generate array from			[Input order]
// Output: Save to output.txt
// 3: [Execution file]-a [Algorithm] [Input size] [Output parameter(s)] #5
// Ex: a.exe-a binary-insertion-sort 70000-comp
// Input: Generate array				no [Input order]
// Output: Save to output.txt
// 4: [Execution file]-c [Algorithm 1] [Algorithm 2] [Given input] #5
// Ex: a.exe-c heap-sort merge-sort input.txt
// Input: Given arr from file			[Given input]
// Output: Save to output.txt
// 5: [Execution file]-c [Algorithm 1] [Algorithm 2] [Input size] [Input order] #6 
// Ex: a.exe-c quick-sort merge-sort 100000-nsorted
// Input: Generate array from			[Input order]
// Output: Save to output.txt

// Commands elements:
// [Execution file] (string): file exe chay lenh
// [Mode] (string): co hai loai: "-a" hoac "-c"
// [Algorithm] (string): ten thuat toan:  insertion-sort, radix-sort, quick-sort
// [Input size] (int): kich thuoc mang
// [Input order] (string): loai mang: -rand/-nsorted/-sorted/-rev
// [Given input] (string): file chua mang tao boi nguoi dung
// [Output parameter(s)] (string): thong so can do: -time/-comp/-both

void commandLine(int argc, char* argv[]);
void testAlgorithm(const std::string name, int number);

// ____________Algorithms___________________

//# Nhóm thuật toán 1: (7 cái) -> 23h59 8/12/2024
//Selection Sort, Quick Sort->Quân
void selection_sort(int* arr, int n, int& comp);

void quick_sort(int* arr, int n, int& comps);

//Insertion Sort, Bubble Sort->Hòa
void InsertionSort(int* arr, int n, int& comp);

void BubbleSort(int* arr, int n, int& comp);

//Heap Sort->Lộc
void HeapSort(int* arr, int n, int& comp);

//Merge Sort->Khoa
void MergeSort(int* a, int n, int& comp);

//Radix Sort->Tường
void RadixSort(int* arr, int n, int& comp);





//# Nhóm thuật toán 2: (4 cái)
//Shaker Sort, -> Hòa
//Shell Sort, -> Lộc
//Counting Sort, -> Khoa
//Flash Sort->Quân