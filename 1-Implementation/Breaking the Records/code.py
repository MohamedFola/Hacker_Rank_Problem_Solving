#
# Complete the 'breakingRecords' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY scores as parameter.
#

def breakingRecords(scores):
    Max = scores[0]
    Min = scores[0]
    maxCount = 0
    minxCount = 0

    for i in scores:
        if i > Max:
            Max = i
            maxCount = maxCount + 1
        elif i < Min:
            Min = i
            minxCount = minxCount + 1

    return maxCount, minxCount
