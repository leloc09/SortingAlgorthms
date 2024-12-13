#pragma once

#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include <sstream>
#include <iomanip>
#include <chrono>
#include <string>
using namespace std;
// Array of function pointers
using FuncPtr = void (*)(int* arr, int n, int& comp);

int* loadArr(int& n, std::string file);
void saveArr(int* arr, int n, const string& file);
bool canConvertToInt(const char* text);
int getOrder(const char* order);
const char* getOrderName(int order);
