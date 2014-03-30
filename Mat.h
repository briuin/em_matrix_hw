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
	vector<vector<vector<double>>> M; //�x�s�Ҧ��}�C
	void push(vector<vector<double>> x);
	
	vector<vector<double>> pop(double a,char x);  //���X�}�C
	string print_out(vector<vector<double>> a);  //�L�X�}�C
	vector<vector<double>> add(double a,char x,double b,char y);  //�[�k
	vector<vector<double>> add(double a,char x,vector<vector<double>> ve);
	vector<vector<double>> dec(double a,char x,vector<vector<double>> ve);  //��k
	vector<vector<double>> mul(double a,char x,vector<vector<double>> ve);  //���k
	vector<vector<double>> transpose(vector<vector<double>> ve); //	Matrix Transpose
	double Determinant(vector<vector<double>> ve);  //Determinant
	vector<vector<double>> gaussian_elimination(vector<vector<double>> mat);//�������h�k �ܦC���
	int rank(vector<vector<double>> mat);//�o�� ��M�ORank�o

};