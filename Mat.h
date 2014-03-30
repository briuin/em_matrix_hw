#pragma once
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>
#include "Vec.h"
#include <math.h>
using namespace std;

class Mat
{
public:
	Mat::Mat();
	Mat::~Mat();
	Vec *vec;
	int i,j,k;
	vector<vector<vector<double>>> M; //儲存所有陣列
	void push(vector<vector<double>> x);
	
	vector<vector<double>> pop(double a,char x);  //取出陣列
	string print_out(vector<vector<double>> a);  //印出陣列
	vector<vector<double>> add(double a,char x,double b,char y);  //加法
	vector<vector<double>> add(double a,char x,vector<vector<double>> ve);
	vector<vector<double>> dec(double a,char x,vector<vector<double>> ve);  //減法
	vector<vector<double>> mul(double a,char x,vector<vector<double>> ve);  //乘法
	vector<vector<double>> transpose(vector<vector<double>> ve); //	Matrix Transpose
	double Determinant(vector<vector<double>> ve);  //Determinant

};