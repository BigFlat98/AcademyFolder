s = 'hello python'
s = s.replace('o','r') #s는 str형이기 때문에 초기화 가 불가능함. 따라서 특정값(o)을 원하는 값으로 변경하는 함수.
#함수는 실제 값을 바꾸는게 아닌 결과만 리턴하기 때문에 해당 값으로 다시 선언해줘야 함.
print(s) 

print(s.split(" "))

print(s.upper())
print(s.lower())

words = ['world','hello','python']
print(" ".join(words))#join함수는 배열 안에 있는 값을 str형으로 쭉 이어서 나오도록 하는 함수.

text = 'hello world'
print(text.startswith('hello world')) #가장 앞에 오는 값을 검사. bool 형으로 return
print(text.endswith('world'))#가장 끝에 오는 값 검사, 주로 확장자 검사할 때 자주씀


import os #지금 사용하는 파이썬 스크립트 외부에 접근할 수 있도록 하는 패키지
#print(os.listdir('/js/main.js'))

l = [1,2,3,4]
l2 = [5,6,7]
print(l + l2)
#print(l+5)안됨
print(l+[5])
l.append(5)#list에 특정 값 끝에 저장
print(l)
l.insert(1,7)#list 원하는 위치에 저장, 1은 인덱스 값
print(l)

l.remove(7) #맨 앞에 있는 7 삭제

del l[2] #메모리 해제
print(l)

numbers = [1,2,3,4]
numbers.pop()#파라미터에 값이 없으면 마지막 인덱스 값 삭제. 실제로 값 삭제됨
print(numbers)
print(numbers.pop(0))#해당 인덱스의 값을 꺼내서 보여줌. 꺼낸값이 삭제되진 않음. 재선언 해줘야 함

d = {'city':'seoul','age':24}
d.update({'city':'busan','height':180})
print(d.items())


import time
print(time.time())

print(time.localtime())#현재 스크립트가 실행되는 시스템 환경 기준


from time import localtime #time모듈에서 localtime 함수만 불러오는 경우
print(localtime())


#from sklearn.preprocessing import MinMaxScaler #모듈명이 너무 긴 경우 다음과 같이 from을 사용

#import pandas as pd #pandas의 모듈 명을 이 스크립트에서는 pd로 사용. pandas는 모듈 명은 못 쓰게 됨


import random


#짝 홀 검사 if문
n = random.randint(0,10)
print(n)

if n%2 :
    print("홀수")
else :
    print("짝수")

#if문 한 줄 코드
#위 코드와 동일하게 작동 if문 참일 때 if앞에 있는 문장 실행, else가 반드시 필요함. elif는 사용 불가 
print("짝수") if n%2==0 else print("홀수")


#done
score=40
print('pass') if score >=60 else print('fail')

#반복문 한 줄 코드
[print(i) for i in range(10)] #list 안에서만 작동. 이유는 결과를 리스트 형태로 리턴하기 때문에


l = [1,2,3,4]
l2 = []
for i in l:
    l2.append(i)
print(l2)


l2 = [i*2 for i in l]
print(l2)

#done
numbers=[1,2,3,4,5]
squ =[]
squ=[i**2 for i in numbers]
print(squ)


numbers = random.sample(range(50),10) #random.sample ->범위 내에서 원하는 개수 만큼 난수 리턴해줌

#조건문 반복문 복합
##numbers 의 요소 중 짝수인 것만 저장
[n for n in numbers if n%2==0] # else 생략 가능 for문이 도는 동안 조건에 맞으면 실행문 작동



#전역변수는 함수 밖에 선언되며, 함수 내에서 참조하거나 수정하고 싶은 경우 global 동일한 변수명 으로 선언을 다시 해서 사용해야 함

a = 'coffe' # 전역변수

def a_local():
	a = 'latte'  # 지역변수
	print(a)

a_local()  # latte
print(a) # coffe
#변수명이 같은 경우 자바랑 달라서 헷갈리는데 그냥 함수 내에서 전역변수와 변수명이 같은 변수가 있다면 그냥 아예 독립된 변수라고 생각하면 될 듯 함


a = 'ice'
def temp():
     print(a)
     b = 'hot'
temp()


a = 'coffee'
def local_a():
     #print(a) 이 print문 오류남. 전역변수가 함수 내에서 참조가 안됨.값만 쓸거면 파라미터로 가져와야 함. 매우 주의해야할 내용인 듯 함
     a = 'latte'
local_a()

l=5

def local_l():
     global l #함수 내에서 함수 밖에 있는 전역변수를 참조해서 사용하고 싶다면 global 변수면 으로 참조 후 사용해야 함.
              #변수의 메모리에 직접 접근하도록 한다고 생각하면 됨
     l +=1
     print(l)
local_l()
print(l)


def slamdunk():
  s = 'Kang-beak-ho'
  def guard():
    nonlocal s
    s = 'Song-tea-sub'
    return s
  print("No1.가드",guard())
  print("No1 가드",s)


#람다표현식 -> 쉽게 말하면 익명함수. 특정 함수는 파라미터로 함수를 받고 해당 부분에 사용하기 위함
def ten(n):
    return n+10
#람다 식으로 전환
lambda x : x+10 #lambda parameter : active sentence 
(lambda x : x+10)(10) #람다 함수 호출 (람다식)(파라미터로 넣어줄 값)

#람다식에서는 지역변수 사용이 불가. 지역변수가 선언될 수 있게 되면 표현이 복잡해질 수 있음
#lambda x : y=7,x+y -> 이런식 불가능. 




#map()함수를 통한 람다 표현식 이해.
#각 요소에 곱하기 3
x=[1,3,5,7,9]
print([i*3 for i in x])


[i * 3 for i in x]

#map(함수,군집자료형) -> 각 요소를 순서대로 함수에 넣어줌, 중요한 것은 파이썬은 인터프리터라 그냥 너무 느린데

def three(x):
    return x*3

print(list(map(three,x)))

#글자 개수가 3개 이상인 값들 리스트에 넣기
c_zodiac = ['rat','ox','tiger','rabbit','dragon','snake',
            'horse','lamb','monkey','rooster','dog','pig']
three_zodiac =[]

three_zodiac = [i for i in c_zodiac if len(i) > 3]
print(three_zodiac)
#글자 수가 4개 이상인 요소의 값은 앞에 3자리만 사용
##1. 각 요소 가져오기
##2. 4글자 이상인지 판단
##3. 4글자면 앞에 3글자만 슬라이싱
##4. 3글자 이하면 그대로 사용

for c in c_zodiac:
    if len(c)>3:
        three_zodiac.append(c[:3])#슬라이싱의 개념을 아직 못잡고 있는 것 같음. 좀 더 연습이 필요하 할 듯 함
    else:
        three_zodiac.append(c)

print(three_zodiac)

def three_name(names):
    result = []
    for n in names:
        if len(n) > 3:
            result.append(n[:3])
        else:
            result.append(n)
    return result



#각 요소만 확인한다면
print(list(map(lambda x:x[:3] if len(x)>3 else x,c_zodiac)))


#map(), filter()->, reduce()-> 
list(filter(lambda x : len(x)>3,c_zodiac)) # ->함수의 조건에 해당하는 값만 저장된 리스트 리턴


#속성과 메서드를 합쳐서 멤버라고 한다.

class Book():
    pass #기능이 없이 만들고 싶을 때 사용



#클래스 명  Drink, 속성은 name, price 메서드는 order -> 수량을 입력받아 pric에 곱해서 {name} 은 {price * 수량} 출력
class Drink():
    company = 'koca'#클래스 속성
    def __init__(self,name,price):
        self.name = name #인스턴스 속성
        self.price = price 
    def order(self,qtt):
        return f"{self.name}은 {qtt*self.price}"
    def change_price(self,r):
        self.price = self.price + r
        print(f"{self.name}의 가격이 변했습니다.-> {self.price}")
        return self.price
peachtree = Drink("pt",32000)
jugo = Drink('narangja',12000)
beer = Drink('tera',6000)
print(jugo.order(5))

print(beer.name , "price is " , beer.price)
print(beer.order(25))
beer.change_price(-500)

class self_instance():
    def __init__(self):
        print(id(self)) #-> self는 인스턴스가 생서됐을 때 그 인스턴스의 주소를 갖음


test_i = self_instance()
##클래스를 만들면 두가지 속성을 사용할 수 있음
#클래스 속성, 인스턴스 속성
#인스턴스에 따라 다른 속성들 name, price -> 생성자에서 self를 사용해 생성된 속성들
#클래스에 self가 사용되지 않고 선언된 속성을 클래스 속성이라 함.
#클래스 속성은 동일한 클래스로 생성된 인스턴스가 공통으로 갖는 속성이 됨


class Drink2:
    def __init__(self,name):
        self.name = name
        self.price = 5000
    def order(self,qtt):
        return f"{self.name}은 {qtt*self.price}"
    
wine = Drink2("redwine")
print(wine.name)
print(wine.price)

jugo.company = 'asdf'
print(peachtree.company)
print(jugo.company)


#숫자를 2개 입력받아 계산하는 클래스 만들기

class Calc:
    def __init__(self,num1,num2):
        self.num1 = num1
        self.num2 = num2
    
    def plus(self):
        return self.num1 + self.num2
    def minus(self):
        return self.num1 - self.num2
    def multi(self):
        return self.num1 * self.num2
    def divide(self):
        return self.num1 / self.num2

cal1  =Calc(5,6)
print(cal1.divide())


#상속
class Calc2(Calc):
    def division(self):
        return self.n1 // self.n2
    
class Calc3(Calc):
    def plus(self): #메소드 오버라이딩
        return self.n1 + self.n2 + 10
    

class Car:
    def __init__(self,wheel,engine):
        self.wheel = wheel
        self.engine = engine
    def acelerate(self):
        self.speed +=5
        return self.speed
    
class Suv(Car): #Car클래스 상속
    def __init__(self, wheel, engine, feel):
        super().__init__(wheel, engine) #부모 생성자 호출 후 생성자 초기화
        self.feel = feel
    

#다중 상속 -> 구림. 걍 쓰지 않도록 노력하자

#모듈(그냥 스크립트 하나) 사용법
#모듈을 사용할 때는 모듈로 가져오려는 파일의 위치가 현재 스크립트의 위치와 동일해야 함
#스크립트는 코드를 실행시키는 파일(main느낌) 모듈은 스크립트에서 가져다 쓰려는 기능들을 가져다 쓰려는 목적으로 만든 파일
#구분은 보통 파일명으로 사용함
import slamdunk
print(slamdunk.buksan)
slamdunk.position("강백호")

#!python WhatName.py -> 외부에서 파이선 파일 실행 코드
#파이썬 파일들은 파일 이름을 내부적으로 갖는데, 만약 파이썬 파일을 실행시키면 내부 이름은 __main__으로 설정됨, import 할 시 파일 명이 내부 이름이 됨.
#이로 구분 가능
import WhatName

if __name__ =='__main__': #-> __name__ -> 현재 파일의 내부 이름을 리턴.
    pass #실행코드 -> 이 if문을 적어서 하단에 실행 할 코드 적어주고, 상단에 모듈로 쓸 내용들을 적어주면 파일 하나에서 스크립트, 모듈 기능 모두 하도록 할 수 있다.



#라이브러리 > 패키지 > 모듈 > 클래스 > 속성, 메서드
#근데 사실 그냥 불러와서 사용할 수 있는 내용들을 모두 라이브러리라고 하긴 함

#모든 모듈 가져오기 -> __init__.py사용하기
#-> *



