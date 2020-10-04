import numpy as np


def step_function(val):
	'''The Heavyside Unit Step Function .  Val must be a scalar '''
	if ( val >=0 ):
		return 1
	else:
		return 0


def My_Perceptron(x_input , weights , bias):
	''' The Actual Perceptron Function with our bias and weights vector'''
	val= np.dot(weights , x_input ) + bias
	y_output = step_function(val)
	return y_output


def NOT(x_input):
	return My_Perceptron(x_input , weights=-1 , bias=0.5)


''' View the Results '''
 
print("The value of NOT(0) = {}" .format(NOT(0)))
print("The value of NOT(1) = {}" .format(NOT(1)))
