for a in range(100000):
    b = 1000 * (a-500) / (a-1000)
    c = ((-a)*(-a) + a * 1000 - 500000)/(a-1000)

    if (0<a and a<b and b<c):
        print(a,b,c)
