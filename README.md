# FastMRMR
# Language: C++
# Input: CSV
# Output: none
# Tested with: PluMA 1.0, GCC 4.8.4

PluMA plugin to run Fast Minimum Redundancy Maximum algorithm (Ramirez-Gallegos et al, 2016) for feature selection.

The plugin accepts as input a CSV file with rows as sample.  The first column is the category of the sample.
All columns after that are features.  The CSV file is thus a matrix, where entry (i, 1) is the category of sample i
and entriy (i, j) is the value of feature j in sample i, for all j != 1.

Most important features in distinguishing samples will be output to the screen .

The plugin depends on the executable fast-mrmr being in your system PATH, as well as its data-reader.
