board = []
mc = []
bingo = 0
row_num = 10

hor_bingo = [[j for j in range((i-1)*5, i*5)] for i in range(1,6)]
# print(hor_bingo)
ver_bingo = [[i+j*5 for j in range(5)] for i in range(5)]
# print(ver_bingo)
dia_bingo = [[i*6 for i in range(5)], [i*4 for i in range(1,6)]]
# print(dia_bingo)

bingos = hor_bingo+ver_bingo+dia_bingo
'''
for i in range(row_num):
    row = map(int, raw_input().split())

    if i <= 4:
        board += row
    else:
        mc += row
'''
board = [11,12,2,24,10,
        16,1,13,3,25,
        6,20,5,21,17,
        19,4,8,14,9,
        22,15,7,23,18]

mc =    [5,10,7,16,2,
        4,22,8,17,13,
        3,18,1,6,25,
        12,19,23,14,21,
        11,24,9,20,15]


for idx, num in enumerate(mc):
    check = board.index(num)
    iter_bingos = list(bingos)

    for case in iter_bingos:
        if check in case:
            case.remove(check)

        if not case:
            bingo+=1
            bingos.remove(case)

    if bingo >= 3:
        print(idx+1)
        break

