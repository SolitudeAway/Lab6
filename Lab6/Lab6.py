def check(l):
    while True:
        a = float(input("Введіть " +l+ ": "))
        if a != int(a) or a < 1:
            print("Ця цифра не є натуральною")
        else:
            return a

def gcd (a, b):
    while b != 0:
        c = a
        a = b
        b = c % b
    return a

n = check("n")
m = check("m")
i = check("i")
d = int(gcd(gcd(m,n),i))
print ("Найбільший спільний дільник:", d)