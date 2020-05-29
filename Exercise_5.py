A = [[9, 1], [1, 9], [9, 1]];
B = [[2, 6, 4], [4, 2, 6]];
result = [[0, 0, 0], [0, 0, 0], [0, 0, 0]];
for i in range(0, 3):
    c = int(0);
    while (c < 3):

        sum = int(0);
        for j in range(0, 2):
            sum = sum + (A[i][j] * B[j][c]);

        result[i][c] = sum;
        c = c + 1;
print(result);