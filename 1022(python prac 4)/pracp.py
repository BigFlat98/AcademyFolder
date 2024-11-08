# 6) 조건부 표현식을 이용하여 절대값 구하기
num = 5
abs_num = -1 * num if num < 0 else num
print(abs_num) # 출력: 5


# 7) 리스트 컴프리헨션을 이용하여 짝수와 홀수 분리하기
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
even_nums = [i for i in nums if i%2==0]
odd_nums = [i for i in nums if i%2==1]

print(even_nums) # 출력: [2, 4, 6, 8]
print(odd_nums) # 출력: [1, 3, 5, 7, 9]

# 8) 조건부 표현식을 이용하여 리스트 안의 숫자들을 짝수면 2를 곱하고, 홀수면 3을 곱해서 변환하기
nums = [1, 2, 3, 4, 5, 6, 7, 8, 9]
transformed_nums = [i * 2 if i % 2 == 0 else i * 3 for i in nums]
print(transformed_nums) # 출력: [3, 4, 9, 8, 15, 12, 21, 16, 27]


# 9) 조건부 표현식을 이용하여 리스트 안의 문자열 중 길이가 5 이하인 문자열만 골라내기
words = ['Python', 'java', 'C', 'Javascript', 'Ruby']
short_words = [i for i in words if len(i)<=5]
print(short_words) # 출력: ['java', 'C', 'Ruby']
    

# > 10) 다음 요구사항에 맞는 가위바위보 게임 만들기
# > 
# - 사용자가 가위(0), 바위(1), 보(2) 중 하나를 선택한다.
# - 컴퓨터는 가위(0), 바위(1), 보(2) 중 랜덤으로 하나를 선택한다.
# - 사용자가 이길때까지 게임은 반복 진행된다.
# - 시도 횟수를 출력한다.

#계산 전
# 가위 0
# 바위 1
# 보  2

#계산
# 가위 (0 + 1) % 3 = 1
# 바위 (1 + 1) % 3 = 2
# 보  (2 + 1) % 3 = 0

#이기는 경우
#계산 전 과 계산 후 비교시 값이 같은 경우

#비기는 경우 
#

import random
cnt = 0
while(True):
    cpu = random.choice([0,1,2])
    user = int(input("가위(0) 바위(1) 보(2) 중 하나 입력:"))
    if user == (cpu + 1)%3 : # -> 이 이기는 알고리즘이 아주 맛있음 특정 대상값에 연속적인 수가 지정되 있을 때, 지정 수를 하나씩 미루는 알고리즘
        print('이김')
        break
    elif user == cpu:
        cnt+=1
        print("비김")
    else:
        cnt+=1
        print("짐")
