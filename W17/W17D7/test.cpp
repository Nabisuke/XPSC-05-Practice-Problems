def fun_2x(x):
    return np.exp(2 * x)

def fun_3x(x):
    return np.exp(3 * x)

def fun_5x(x):
    return np.exp(5 * x)

def fn_2x(x, n):
    return (2**n) * np.exp(2 * x)

def fn_3x(x, n):
    return (3**n) * np.exp(3 * x)

def fn_5x(x, n):
    return (5**n) * np.exp(5 * x)

def taylor(x, a, n, fn):
    sum = 0
    for i in range(n + 1):
        sum += fn(a, i) * (x - a)**i / np.math.factorial(i)
    return sum


x = np.arange(-1, 1, 0.01)

y_2x = fun_2x(x)
y_3x = fun_3x(x)
y_5x = fun_5x(x)

a = 0

taylor_2x = taylor(x, a, 2, fn_2x)
taylor_3x = taylor(x, a, 2, fn_3x)
taylor_5x = taylor(x, a, 2, fn_5x)

method_1 = taylor_2x * taylor_3x

method_2 = taylor_5x

mse_method_1 = np.mean((method_1 - y_5x)**2)
mse_method_2 = np.mean((method_2 - y_5x)**2)

print("MSE for Method 1:", mse_method_1)
print("MSE for Method 2:", mse_method_2)

if mse_method_1 < mse_method_2:
    print("Method 1 is more accurate")
else:
    print("Method 2 is more accurate")

plt.title("Taylor Series Approximation")
plt.plot(x, y_5x, label='f(x) = e^(5x)', color='black')
plt.plot(x, method_1, label='Method 1: e^(2x) * e^(3x)', color='red')
plt.plot(x, method_2, label='Method 2: e^(5x)', color='green')
plt.legend()
plt.xlabel('x')
plt.ylabel('f(x)')
plt.grid(True)
plt.show()