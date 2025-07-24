# def fun(aa):
#     aa.append(3)
#     return aa

# a=[1,2]
# b=fun(a)
# print(a)
# print(b)
#a.clear()

# def fun(aa):
#     result = []
#     for i in range(len(aa)):
#         if i % 2 == 0:
#             result.append(aa[i])
#             result.append(aa[i] + 1)
#         else:
#             result.append(aa[i])
#             result.append(aa[i])
#     return result

def fun(aa):
    result = aa[:]
    aa.clear()
    for i in range(len(result)):
        aa.append(result[i])
        if i % 2 == 0:
            aa.append(result[i])
        else:
            aa.append(result[i]+1) 
if __name__ == "__main__":
    a = [11, 35, 62, 93]
    fun(a)
    print(a)

