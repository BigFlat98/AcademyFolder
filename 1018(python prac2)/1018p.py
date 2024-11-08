#데이터 다루기

#인덱스- squence type자료가 갖고있는 자료의 순서
#시작은 0~n-1 / 리버스 인덱스 존재 -1~-n

안녕 = 'hello'
print(안녕[1])
print(안녕[-1])

#str
s = 'hello python, I can do it'
#list
i = ["hello",'python','i','can','do','it']
#tuple
t = ("hello",'python','i','can','do','it')


print(t[-2])

#str의 7번째 문자
print(s[6])

#맨 뒤에 있는 분자
print(s[-1])

##뒤에서 7번째 
print(s[-7])


#list 첫번째
print(i[0])

#list 마지막
print(i[-1])

#list에서 p만
print(i[1][0]) 

#tuple에서 4번쩨 요소
print(t[3])

#tuple에서 뒤에서 두번째
print(t[-2])

#tuple에서 세번째 요소의 마지막
print(t[2][-1])


#슬라이싱:요소를 특정 범위만큼 가져오는 작업([시작 인덱스:마지막 인덱스+1])
#시작 인덱스가 0인 경우 생략이 가능[:n+1], 또한 마지막을 끝까지 가져오고 싶다면 생략 가능[n:]

#처음부터 5번째 까지
print(s[0:5])

#20번 인덱스부터 마지막(24)까지
print(s[20:])

#슬라이싱은 시작 인덱스를 리버스 인덱스로 넣어도 왼쪽에서 오른쪽으로만 작동함
s[-5:]

#슬라이싱에서 가져오는 항 사이의 간격도 설정 가능[::2]-> 항사이에 간격 2(하나 건너뛰고 다음 것)
#처음부터 끝까지 중에서 홀수번 인덱스만
print(s[1::2])

#슬라이싱에서 인덱스 끝에 들어가는 내용은 for문의 끝에 들어가는 내용과 동일하게 생각하면 됨
#음수 값이 들어간 경우 시작 인덱스에서 해당 값이 하나씩 더해진 값을 전달
print(s[-1::-1])#즉 이 코드는 인덱스 오른쪽 끝에서 -1씩 더해진 인덱스 리턴



#제어문
#조건문 -> 조건이 엄격한 이유는 코드 블럭을 사용하면 사용자에 따라 형태가 상이함(가독성 떨어짐) -> 사용자들이 작성한 양식을 통일하도록
# if 조건식:
#   조건식이 true일 때 수행문
# else:
#   ~~
if 3 > 2:
    print(True)
else:
    print(False)

#변수 n이 짝수면 "짝수"출력 , 홀수면 "홀수" 출력
n = 125
if n%2==0:
    print("짝수")
else:
    print("홀수")

#if의 조건문의 결과는 반드시 boolean형으로 나와야 함. 따라서 결과가 0 또는 1이라면 이 결과를 조건문에 바로 사용해도 됨
if n%2: #1->true
    print("홀수")
else :
    print("짝수")

if not n%2: 
    print("홀수")



#중첩 if문
sex = 1 #남성
high = 179
if sex:
    if high>=180:
        print('알파')
    else:
        print('아..')
else:
    print('말을 아낄 것')


man = ["남",190]
if (man[0] =='남') & (man[1]>=180):
    print("남")
    print(man[1])

if man[0] =="남":
    print("남")
    if man[1] >=180:
        print(man[1])


age = 20
if age<10 :
    print('kid')
else :
    if age<20 :
        print('student')
    else :
        print('adult')


if age <20:
    if age <=10:
        print('kid')
    else:
        print('student')
else:
    print('adult')


if age >=20:
    print('adult')
else:
    if age>=10:
        print('student')
    else:
        print('kid')




dic = {"자료구조":80,"알고리즘":90,"네트워크":30,"네트워크":50}#딕셔너리에서 key가 중복되는 값에서 value는 가장 마지막에 입력된 값이 최종값임
print(dic["네트워크"])


if "자료구조" in dic: #멤버 조건식 중요
    if dic["자료구조"] >= 60:
        print("이수 완료")
    else :
        print("재수강")


#elif
if age < 10:
    print("kid")
elif age <20:
    print("student")
else :
    print("adult")


import random 
reg = random.choice([0,2,4,8])#난수 생성. .choice list안에 있는 값 중 하나 랜덤으로 리턴
if reg==0:
    print("snake")
elif reg==2:
    print("human")
elif reg==4:
    print("horse")
else:
    print("octopus")

import time
#python 반복문
#for문은 반복 횟수를 정확히 정해서 작동
#while문은 조건에 해당될 때 까지 작동
for 변수 in [1,2,3,4,5]:
    print(변수)
    #time.sleep(1) #작동을 딜레이 하는 코드


for v in range(30):#for문을 30회 반복할 수 있음 range(30)는 range(0,30)와 동일한 표현. v에 0~29
    print('happy')

for _ in range(10):#for문의 변수를 안 쓴다면 _로 넣으면 됨
    print('happy')

for i in range(12,30,3):
    print(i)

#len()함수는 군집 자료형의 항의 개수 리턴
l = [1,2,3,4,5,6]
for i in range(len(l)):
    print(i)


#파이썬에서 range(n)든 슬라이싱[:n]이든 마지막 값의 리턴되는 값은 n-1임


#for문 조건부에 사용하는 군집 자료형은 non sequence type도 사용 가능함. 단 당연히 for 변수의 값이 의도하는 순서대로 안 들어감


for i in range(10,0,-1): #여기서는 역순이기 때문에 끝에 n-1을 해주면 됨
    print(i)

for i in range(0,10,1):
    print(10-i)

print()
print()

for i in range(3):
    for j in range(5):
        print(j)
    print('-----------------')


#구구단 출력
for i in range(2,10):
    for j in range(1,10):
        print(f"{i}*{j}={i*j}")#print에 변수를 사용하는 법 ->f"{변수}{변수}" 포멧팅


#도형(다음 기회에)
l = []
for i in range(7):
    if i<4:
        l.append("*")
    else:
        l.remove("*")
    print(l)

#while
a=0
while True:
    if a>=3:
        break
    a+=1

a=0
while a<=3:
    print(a)
    a+=1


a=0
while a<10:
    print(f'var={a}')
    a+=1
    if a>5:
        print(f'{a} id  bigger than 5')
        continue
        print('this print sentence will never work because of continue')
    print('leave me alone')
print()
print()
print()
print()
print()
print()

#1000부터 0까지 1씩 줄어드는 num변수.
#15로 나눴을 때, 나머지가 0이 되는 첫번째 숫자를 찾으시오.
t=0
for i in range(1000,-1,-1):
    if i%15==0 :
        t = i
        break
print(f"첫 숫자{t},몫은{t//15}")

num =1
while num <=1000:
    if num % 15 ==0:
        t = num
    num+=1
print(f"첫 숫자{t},몫은{t//15}")

#함수
import random #모듈, 외장함수를 불러오기 위한 코드
import time

#입력받은 변수에 10을 더하는 함수
def plus(a):
    return a+10
print(plus(10))

def minus(a):
    return a-10

#가변 매개변수
def sum_all(*args): #가변 매개변수는 변수명 앞에 *을 붙여줌. 매개변수는 튜플형으로 값들을 저장함
    sum = 0
    for a in args:
        sum +=a
    print(sum)
    print(args)
    return


sum_all(1,5,5,30)
sum_all()

#키워드 매개변수. 각 매개변수에 키워드를 적용해야 하는 경우 사용
def marvel(**kwords): #매개변수는 딕셔너리 형태로 저장되며, 매개변수 입력는 (key1 = value1,key2=value2...) 이런식으로 적으면 됨
    print(kwords)
    for key, value in kwords.items(): #for문에서 딕셔너리를 사용하는 방법
        print(f"{key}의 나이는 {value}입니다")

    for i in kwords: #딕셔너리 항 하나씩 i에 들어감
        print(i)
        
    # for i,j in kwords: #변수를 2개 쓰는 경우 앞에 key, 뒤에 value가 들어감
    #     print(i,j)

marvel(ironman = 50,thor = 900,captain = 200)


#함수 매개변수를 여러 종류로 사용
def test(a,*args,**kwords):#세 종류를 섞어 쓰는 경우 고정 > 가변 >키워드 순으로 적고. 
                           #중요)호출시 고정 매개변수는 필수로 적고, 키워드 매개변수 형식이 나올 때 까지 가변 매개변수로 적용된다.
    if a=='ironman':
        result = sum(args)
        print(kwords.items())
        return result
    else:
        print("마블 아님")
test("ironman",10,10,name="토니스타크")


#많이 쓰는 내장 함수
print(abs(-20))
print(bool(0))
print(bool(15)) #boo함수에서 True, False제외 0이거나 None, 값이 빈 상황 빼면 True
print(chr(65)) #파라미터에 해당하는 아스키 코드를 리턴
print(ord("a")) #파라미터로 받은 값은 아스키 코드 정수로 리턴
#필요 이유는 문자를 숫자로 치환 후 산술연산을 하고 싶어서 

#이름앞에 A~Z붙여서 출력
name='hhh'
for a in range(65,91):
    print(chr(a)+name)
#이럴 때 활용 가능, 문자 내림 차순 등에도 이용


print(dir(ord("a")))#파이썬 설치 폴더 내에 있는 폴더를 리턴. 파라미터로 받은 함수를 사용할 때 접근이 필요한 모든 폴더를 리턴함

a = input() #입력값을 받는 함수. 입력받은 모든 값은 str형으로 리턴
b = input()
print(a+b)#수를 입력받아도 str로 처리. 산술연산이 아닌 연결자 처리가 됨
print(int(a) + int(b))

print(len([1,2,3]))

print(round(3.141592,3))#소숫점 3째 자리에서 반올림
print(sorted([2,6,2,7,19,1])) #정렬, 기본이 오른차순

print(enumerate([5,4,3,3,2,1]))
for e in enumerate([5,4,3,2,1]):
    print(e)


#매우 중요
for i, e in enumerate([5,4,3,2,1]): #sequnce 형 변수를 파라미터로 받으면 값과 인덱스를 리턴해줌 매우중요.
    print(f"idx:{i},val:{e}")


l = ["a","b","c"]
l2 =[1,2,3]
print(zip(l,l2)) #두 sequnce형 변수를 같은 인덱스끼리 묶어서 하나의 list 로 갖는 튜플을 리턴. 
                #두 파라미터 형식이 하나는 튜플 하나는 리스트여도 상관없고 합쳐진 튜플의 인덱스 수는 인덱스가 가장 적은 파라미터를 기준으로 만들어짐

s = "hello java"
