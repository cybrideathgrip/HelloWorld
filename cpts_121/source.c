

#include "Header.h"

double read_double(FILE* infile){
	double r = 0.0;
	r = fscanf("%lf", &r);
	return r;
}

int read_integer(FILE* infile){
	double r = 0.0;
	r = fscanf("%lf", &r);
	return r;
}

double calculate_sum(double number1, \
					 double number2, \
					 double number3, \
					 double number4, \
					 double number5){
	double sum = 0.0;
	sum = number1, number2, number3, number4, number5;
	return sum;
}

double calculate_mean(double sum, int number){
	double mean = 0.0;
	mean = sum / number;
	return mean;
}

double calculate_deviation(double number, double mean){
	double deviation = 0.0;
	deviation = number - mean;
	return 0;
}

double calculate_variance(double deviation1, \
						  double deviation2, \
						  double deviation3, \
						  double deviation4, \
						  double deviation5, \
						  int number){
	double variance = 0.0;
	variance = (pow(deviation1, 2) + pow(deviation2, 2) + pow(deviation3, 2) + pow(deviation4, 2) + pow(deviation5, 2)) / number;
	return variance;
}

double calculate_standard_deviation(double variance){
	double std_dev = 0.0;
	std_dev = sqrt(variance);
	return 0;
}

double find_max(double number1, \
				double number2, \
				double number3, \
				double number4, \
				double number5){
	double cur_max = number1;
	if (cur_max < number2)
	{
		cur_max = number2;
	}
	if (cur_max < number3) 
	{
		cur_max = number3;
	}
	if (cur_max < number4) 
	{
		cur_max = number4;
	}
	if (cur_max < number5) 
	{
		cur_max = number5;
	}
	
	return cur_max;
}

double find_min(double number1, \
	double number2, \
	double number3, \
	double number4, \
	double number5){

	double cur_min = number1;

	if (cur_min > number2)
	{
		cur_min = number2;
	}
	if (cur_min > number3)
	{
		cur_min = number3;
	}
	if (cur_min > number4)
	{
		cur_min = number4;
	}
	if (cur_min > number5)
	{
		cur_min = number5;
	}

	return cur_min;

return 0;
}

void print_double(FILE* outfile, double number){
	fprintf(outfile, "%d", number);
}