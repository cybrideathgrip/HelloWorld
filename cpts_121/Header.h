#pragma once

/*
Programmer: Simon Vollmer
Class: CptS 121, Lab Section 01
Instructor: Andrew O'Fallon
Programming Assignment 3:  Statistical Analysis of Student Records
Date: 6/24/2020

Header File for program
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double read_double(FILE* infile);

int read_integer(FILE* infile);

double calculate_sum(double number1, \
	double number2, \
	double number3, \
	double number4, \
	double number5);

double calculate_mean(double sum, int number);

double calculate_deviation(double number, double mean);

double calculate_variance(double deviation1, \
	double deviation2, \
	double deviation3, \
	double deviation4, \
	double deviation5, \
	int number);

double calculate_standard_deviation(double variance);

double find_max(double number1, \
	double number2, \
	double number3, \
	double number4, \
	double number5);

double find_min(double number1, \
	double number2, \
	double number3, \
	double number4, \
	double number5);

void print_double(FILE* outfile, double number);
