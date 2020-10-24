import numpy as np 

def unitStep(v): 
	if v >= 0: 
		return 1
	else: 
		return 0
 
def perceptronModel(x, w, b): 
	v = np.dot(w, x) + b 
	y = unitStep(v) 
	return y 

def NOT(x): 
	wNOT = -1
	bNOT = 0.5
	return perceptronModel(x, wNOT, bNOT) 

# AND Logic Function 
# w1 = 1, w2 = 1, bAND = -1.5 
def AND(x): 
	w = np.array([1, 1]) 
	bAND = -1.5
	return perceptronModel(x, w, bAND) 

# NAND Logic Function 
# with AND and NOT 
# function calls in sequence 
def NAND(x): 
	output_AND = AND(x) 
	output_NOT = NOT(output_AND) 
	return output_NOT 

# testing the Perceptron Model 
test1 = np.array([0, 1]) 
test2 = np.array([1, 1]) 
test3 = np.array([0, 0]) 
test4 = np.array([1, 0]) 

print("NAND({}, {}) = {}".format(0, 1, NAND(test1))) 
print("NAND({}, {}) = {}".format(1, 1, NAND(test2))) 
print("NAND({}, {}) = {}".format(0, 0, NAND(test3))) 
print("NAND({}, {}) = {}".format(1, 0, NAND(test4))) 
