#pragma once
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Vec
{
public:
	double n;
	
	vector<vector<double>> S;  //儲存所有向量
	vector<double> v;  //暫時沒用到的樣子
	void push(vector<double> a);  //存向量到S
	vector<double> add(double a,unsigned char x,double b,unsigned char y);  //加法
	vector<double> add(double a,unsigned char x,vector<double> ve);
	vector<double> addedadd(double a,unsigned char x,vector<double> ve);
	vector<double> dec(double a,unsigned char x,vector<double> ve);  //減法
	double dot(vector<double> a,vector<double> b);
	/*vector<double> dot(double a,unsigned char x,vector<double> ve);
	vector<double> mult(double a,unsigned char x,vector<double> ve);*/
	void push(string str);  //字串存到S "(3,4,5)"
	vector<double>Vec::normal(vector<double> ve); //normalize
	vector<double>cross(double a , unsigned char x , vector<double> ve );//cross
	vector<double>Vec::magnitude(vector<double> ve); //magnitude and return vector
	double Vec::magnitude_to_double(vector<double> ve); //magnitude and return double
	double Vec::component(vector<double> va,vector<double> vb,unsigned char a,unsigned char b); //component
	vector<double> Vec::projection(vector<double> va,vector<double> vb,unsigned char a,unsigned char b); //projection
	double Vec::area_of_parallelogram(vector<double> va,vector<double> vb,unsigned char a,unsigned char b); //area_of_parallelogram
	double Vec::area_of_triangle(vector<double> va,vector<double> vb,unsigned char a,unsigned char b); //area_of_triangle
	double Vec::angle(vector<double> va,vector<double> vb,unsigned char a,unsigned char b); //angle
	vector<double> Vec::plane_normal(vector<double> va,vector<double> vb,unsigned char a,unsigned char b); //plane_normal
	vector<double> pop(double a,unsigned char x);  //取出a倍向量
	string print_out(vector<double> a);  //匯出向量成字串
	double length(unsigned char x); //向量長度
	double length(vector<double> ve);
	double dot(vector<vector<double>> ve);  //內積
	bool  parall(vector<double>a , vector<double> b);
	bool  orthogonal(vector<double>a,vector<double>b);
	double p_norm(double a,unsigned char b);
	double p_norm2(double a,vector<double> b);
	bool linear_indepen(vector<vector<double>> mat);
	vector<vector<double>> OrthogonalBasis(vector<vector<double>>  ve);
	int i,j;
	Vec();
	~Vec();
};