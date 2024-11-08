#1.주어진 문자열에서 홀수 인덱스 문자만 출력
text = "abcdefghijklm"
print(text[1::2])


#2.주어진 리스트에서 10보다 큰 숫자만 출력하세요.
numbers = [4, 11, 15, 3, 20, 7]
result =[]
for i in numbers :
    if i > 10 :
        result.append(i)
print(result)


#3.문자열을 반으로 나누어, 앞부분과 뒷부분을 각각 뒤집어서 출력하세요. 문자열의 길이가 홀수면 가운데 문자는 포함하지 않고 처리하세요.
text = "hellopython"
print(text[len(text)//2::-1])
print(text[:-(len(text)//2)-1:-1])


#4.리스트에서 중복된 요소를 제거하고, 남은 요소들을 오름차순으로 정렬하여 출력하세요.
numbers = [4, 6, 2, 8, 4, 3, 6, 7]
t_numbers = set(numbers)
t_numbers = tuple(t_numbers)

print(sorted(t_numbers))


#5.주어진 문자열이 회문(palindrome)인지 확인하는 프로그램을 작성하세요. 회문이면 “회문입니다”를, 아니면 “회문이 아닙니다”를 출력하세요.
text = "massdssam"
left =text[:len(text)//2:1]
right = text[:-(len(text)//2)-1:-1]
if left == right :
    print('회문입니다.')
else :
    print('회문이 아닙니다.')

#6.2차원 리스트가 주어졌을 때, 각 행의 합을 구하고 가장 큰 합을 출력하세요.
matrix = [
    [3, 5, 2],
    [1, 4, 4],
    [6, 2, 8]
]
s_result = []
s =0
for i in matrix :
    s_result.append(sum(i)) 
    if sum(i) > s:
        s = sum(i)
print(matrix)
print(s)
