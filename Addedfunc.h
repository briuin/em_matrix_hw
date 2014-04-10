#pragma once
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include "string.h"
#include "Vec.h"

#define MAX 80
using namespace std;

class Addedfunc
{
public:
	
	Vec *addvec;
	//儲存輸入的向量
	
	string erase_space(string s);   //清除字串空白處

	string clearallstupidinput(string s);  //進階版清除字串空白
	string scaler_to_addition(string s);//scaler換成加法
	Addedfunc();
	~Addedfunc();
};