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

# w1 = 1, w2 = 1, b = -1.5 
def AND(x): 
	w = np.array([1, 1]) 
	b = -1.5
	return perceptronModel(x, w, b) 

test1 = np.array([0, 1]) 
test2 = np.array([1, 1]) 
test3 = np.array([0, 0]) 
test4 = np.array([1, 0]) 

print("AND({}, {}) = {}".format(0, 1, AND(test1))) 
print("AND({}, {}) = {}".format(1, 1, AND(test2))) 
print("AND({}, {}) = {}".format(0, 0, AND(test3))) 
print("AND({}, {}) = {}".format(1, 0, AND(test4))) 
