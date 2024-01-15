def main():
    def prime(n):
        C = 0
        k = 1
        while k < n:
            if n%k == 0:
                C += 1
            k += 1
        if C == 1:
            return 1
        else:
            return 0
    n = int(input("Nhập số tự nhiên n: "))
    for x in range(1,n+1):
        if prime(x):
            print(x, end = " ")
main()