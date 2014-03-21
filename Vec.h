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
	vector<double> add(double a,char x,double b,char y);  //�[�k
	vector<double> add(double a,char x,vector<double> ve);
	vector<double> dec(double a,char x,vector<double> ve);  //��k
	/*vector<double> dot(double a,char x,vector<double> ve);
	vector<double> mult(double a,char x,vector<double> ve);*/
	void push(string str);  //�r��s��S "(3,4,5)"
	vector<double>Vec::normal(vector<double> ve); //normalize
	vector<double>cross(double a , char x , vector<double> ve );//cross
	vector<double>Vec::magnitude(vector<double> ve); //magnitude and return vector
	double Vec::magnitude_to_double(vector<double> ve); //magnitude and return double
	double Vec::component(vector<double> va,vector<double> vb,char a,char b); //component
	vector<double> Vec::projection(vector<double> va,vector<double> vb,char a,char b); //projection
	double Vec::area_of_parallelogram(vector<double> va,vector<double> vb,char a,char b); //area_of_parallelogram
	double Vec::area_of_triangle(vector<double> va,vector<double> vb,char a,char b); //area_of_triangle
	double Vec::angle(vector<double> va,vector<double> vb,char a,char b); //angle
	vector<double> Vec::plane_normal(vector<double> va,vector<double> vb,char a,char b); //plane_normal
	vector<double> pop(double a,char x);  //���Xa���V�q
	string print_out(vector<double> a);  //�ץX�V�q���r��
	double length(char x); //�V�q����
	double length(vector<double> ve);
	double dot(vector<vector<double>> ve);  //���n
	bool  parall(vector<double>a , vector<double> b);
	bool  orthogonal(vector<double>a,vector<double>b);
	double p_norm(double a,char b);
	int i,j;
	Vec();
	~Vec();
};