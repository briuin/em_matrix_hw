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
#include <cstring>
#define MAX 80
using namespace std;

class Addedfunc
{
public:
	
	Vec *addvec;
	//�x�s��J���V�q
	
	string erase_space(string s);   //�M���r��ťճB

	string clearallstupidinput(string s);  //�i�����M���r��ť�
	string scaler_to_addition(string s);//scaler�����[�k
	string Addedfunc::multiscaler_toone(string s);//�Ҧp3*3*3*3�ܦ�81
	Addedfunc();
	~Addedfunc();
};