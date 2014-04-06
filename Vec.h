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
	
	vector<vector<double>> S;  //�x�s�Ҧ��V�q
	vector<double> v;  //�ȮɨS�Ψ쪺�ˤl
	void push(vector<double> a);  //�s�V�q��S
	vector<double> add(double a,unsigned char x,double b,unsigned char y);  //�[�k
	vector<double> add(double a,unsigned char x,vector<double> ve);
	vector<double> addedadd(double a,unsigned char x,vector<double> ve);
	vector<double> dec(double a,unsigned char x,vector<double> ve);  //��k
	/*vector<double> dot(double a,unsigned char x,vector<double> ve);
	vector<double> mult(double a,unsigned char x,vector<double> ve);*/
	void push(string str);  //�r��s��S "(3,4,5)"
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
	vector<double> pop(double a,unsigned char x);  //���Xa���V�q
	string print_out(vector<double> a);  //�ץX�V�q���r��
	double length(unsigned char x); //�V�q����
	double length(vector<double> ve);
	double dot(vector<vector<double>> ve);  //���n
	bool  parall(vector<double>a , vector<double> b);
	bool  orthogonal(vector<double>a,vector<double>b);
	double p_norm(double a,unsigned char b);
	bool linear_indepen(vector<vector<double>> mat);
	int i,j;
	Vec();
	~Vec();
};