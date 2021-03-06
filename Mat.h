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
#define  PI 3.141592653589741
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
	
	vector<vector<double>> pop(double a,unsigned char x);  //取出陣列
	string print_out(vector<vector<double>> a);  //印出陣列
	vector<vector<double>> add(double a,unsigned char x,double b,unsigned char y);  //加法
	vector<vector<double>> add(double a,unsigned char x,vector<vector<double>> ve);
	vector<vector<double>> add2(vector<vector<double>> v0,vector<vector<double>> ve);
	vector<vector<double>> dec2(vector<vector<double>> v0,vector<vector<double>> ve);
	vector<vector<double>> mul2(vector<vector<double>> v0,vector<vector<double>> ve);
	vector<vector<double>> dec(double a,unsigned char x,vector<vector<double>> ve);  //減法
	vector<vector<double>> mul(double a,unsigned char x,vector<vector<double>> ve);  //乘法
	vector<vector<double>> transpose(vector<vector<double>> ve); //	Matrix Transpose
	vector<vector<double>> scale(double a,vector<vector<double>> ve); //	Scale Matrix
	double Determinant(vector<vector<double>> ve);  //Determinant
	vector<vector<double>> gaussian_elimination(vector<vector<double>> mat);//高斯消去法 變列梯形
	int rank(vector<vector<double>> mat);//廢話 當然是Rank囉


	vector<vector<double>> Adjoint(vector<vector<double>> ve); //	Adjoint Matrix
	vector<vector<double>> Inverse(vector<vector<double>> ve); //	Inverse Matrix
	

	vector<double> eigenvalue(vector<vector<double>>mat);  //eigenvalue
	
		vector<vector<double>> PowEigen(vector<vector<double>> mat);

	vector<vector<double>> LeastSquare(vector<vector<double>> x,vector<vector<double>> y); //Least Square

	vector<vector<double>> eigenvector(vector<double> val,vector<vector<double>>mat); //eigenvector

	vector<double> solveliner(vector<vector<double>>a,vector<vector<double>> b);

	vector<vector<double>> UpperTri(vector<vector<double>> mat);
	vector<vector<double>> DownTri(vector<vector<double>> mat);

	
};