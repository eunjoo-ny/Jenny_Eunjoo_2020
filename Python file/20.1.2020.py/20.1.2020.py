


key_list=["name","hp","mp","level"]
value_list=["기사",200,30,5]
character={}
for i in range(len(value_list)):
    character[key_list[i]]=value_list[i]
print(character)

limit=1000
i=1
sum_value=0
while sum_value <limit:
    sum_value+=i
    i+=1
print("{}를 더할때 {}를 넘으며 그 때의 값은{}입니다.".format(i,limit,sum_value))

max_value=0
a=0
b=0

for i in range(1,99+1):
    j=100-i
    if max_value< i*j:
        max_value=i*j
        a=i
        b=j
print("최대가 되는 경우:{}*{}={}".format(a,b,max_value))

