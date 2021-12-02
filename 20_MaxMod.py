import sys
def solve(A):
    arr_size = len(A)

    if (arr_size < 2):
        return 0
 
    first = -sys.maxsize-1 #maxsize attribute of the sys module fetches the largest value a variable of data type 
    second = -sys.maxsize-1
    for i in range(arr_size):
         
        if (A[i] > first):
            second = first
            first = A[i]

        elif (A[i] > second and A[i] != first):
            second = A[i]
 
    if (second == -sys.maxsize-1):
        return 0
    else:
        return second

if __name__ == '__main__':
    arr = [4, 5, 1, 8]
    n = len(arr)
    print(solve(arr))