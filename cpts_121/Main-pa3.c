/* 
Programmer: Simon Vollmer
Class: CptS 121, Lab Section 01
Instructor: Andrew O'Fallon
Programming Assignment 4:  Statistical Analysis of Student Records
                        
Date: 6/24/2020

Description: This program is designed to process numbers, corresonding to student records, 
             read in from an input file. The program will evaluate some statistical calculations,
             and output the results to an output file.

Background: This Program will utilize a 4-file format for a C program, which is designed to include:
            - Conditional statements.
            - Cmpound condition.
            - Boolean expressions.
            - Custom defined functions.
            - File input & output.
            A modicum of statistical math is required for some of these equations. Most of which are provided
            

Relevant Formulas: mean = (sum of parts) / (number of parts)
                   deviation = number - mean
                   variance: is an average of the square of deviations. expressed as: variance = ((deviation_1^2)+...(deviation_N^2)) / N
                   standard deviation: the square root of the square of deviations (aka variance).
                   Some fundamentals principles of: Maximum, Minimum, Sum, and Average and square root will not be described elsewhere.
*/

#include "Header.h"

int main(void) {

    //open input.dat for reading
    FILE* input_file = NULL;
    input_file = fopen("input.dat", "r");
    
    //open output.dat for writing
    //FILE* output_file = NULL;
   // output_file = fopen("input.dat", "w");

    //read five records from the input file:

    //first declaring 5 record's worth of variables

    //record 1
    int student_ID_1 = 0, class_standing_1 = 0;
    double GPA_1 = 0.0, Age_1 = 0;
    
    //student_ID_1 = read_integer(input_file);
    //GPA_1 = read_double(input_file);
    //class_standing_1 = read_integer(input_file);
    //Age_1 = read_integer(input_file);

    fscanf(input_file, "%d", &student_ID_1);
    fscanf(input_file, "%lf", &GPA_1);
    fscanf(input_file, "%d", &class_standing_1);
    fscanf(input_file, "%lf", &Age_1);

    printf("Found so far:\n\
            Student#: %d\n\
            GPA: %lf\n\
            Class #: %d\n\
            Age: %lf\n\n",student_ID_1, GPA_1, class_standing_1, Age_1);

    //record 2
    //int student_ID_2 = 0, class_standing_2 = 0;
    //double GPA_2 = 0.0, Age_2 = 0;

    ////record 3
    //int student_ID_3 = 0, class_standing_3 = 0;
    //double GPA_3 = 0.0, Age_3 = 0;

    ////record 4/
    //int student_ID_4 = 0, class_standing_4 = 0;
    //double GPA_4 = 0.0, Age_4 = 0;

    ////record 5
    //int student_ID_5 = 0, class_standing_5 = 0;
    //double GPA_5 = 0.0, Age_5 = 0;

    //Calculate the sum of the GPAs
    //Calculate the sum of the class standing
    //Calculate the sum of the ages

    //Calculate the mean of the GPAs -> write result to output file

    //Calculate the mean of the class standings -> write result to output file

    //Calculate the mean of the ages  -> write result to output file
    
    //Calculate the deviation of each GPA: need ot call calculate_deviation() 5 times...

    //calculate the variance of the GPAs

    //calculate the standard deviation of all the GPAs -> write result to output file

    //Determine the minimum of the GPAs -> write result to output file

    //Determine the maximum of the GPAs -> write result to output file

    //Close the input and output files.
    fclose(input_file);
   // fclose(output_file);

    return 0;
}