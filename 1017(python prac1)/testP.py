print(type(1))
print(type(1.2))
print(type(True))
print(type('asdf'))
print(type([]))
print(type(()))
print(type({}))
print(2e4)

print(bool([])) #list가 초기화 되지 않았다면 false를 return함



array = ['1234',1234,1.234] #list는 초기화가 가능하고 값의 자료형의 제약이 없음
print(array)


for i in range(0,3,1): #range에서 가장 앞에 있는 파라미터는 시작 숫자/ 두번째는 횟수(종료되는 인덱스 아님, 0,1,2 -> 3회)/ 마지막은 다음 수와의 간격(2라면 0,2,4)
    print(type(array[0]))


array[1] = 'asdf'
print(array[1])

ttuple = ('1234',1234,1.23) #tuple은 초기화가 불가능 하다는 특성 빼고는 list와 동일하다. tuple과 산술 연산에 쓰는 중괄호는 안에 컴마, 의 유무로 판단
print(ttuple[1]) #tuple도 인덱스를 사용할 때는 대괄호 사용함

sset = {1,2,3,4,4,4,4,5,'asdf','asdf'} #set은 중복된 값은 저장이 안됨. 따라서 인덱스 값도 없음. 초기화는 가능함
print(sset)
sset.add('fdsa')
print(sset)


print({1,2,3,4} & {3,4,5,6}) #교집합
print({1,2,3,4} | {3,4,5,6}) #합집합
print({1,2,3,4} - {3,4,5,6}) #차집합

ddict = {'이름':'hdj','asdf':56,'rweqe':';asdf'} #set에서 확장된 내용. 당연히 순서는 없음. 대신 key : value 구조. 
#주의할 점은 key와 value는 1:1 대응 필수 {x:y , n} -> 이런식 불가능 하지만 {x:[y,n]} 이런식으로 value에 군집형 자료형을 사용할 수 있다.



#파이썬에서 변수에는 값이 저장된 공간의 메모리 주소를 저장함
#c의 포인터랑은 다른 개념. c는 자료형이 정해져 있어서 메모리 위치가 특정되지만, python은 특정할 수 없어서 전혀 다른 개념임
a = 1234
b = 1234
print(a)
print(id(a)) 
print(id(b)) #두 주소가 같게 나오는 이유는 python은 성능을 위해 0~일정 값 까지 같은 메모리 주소를 공유함, 대신 변수 명이 다르면 각자 다르게 초기화 할 수 있음


x=12345662343434253434
y=12345662343434253434
print(id(x)) 
print(id(y)) #하지만 그 일정 값 이상의 값은 각자 다른 주로를 갖음

id = 'k'
print(id)
#id(a) id 가 변수명으러 사용되면서 함수 기능 사라짐
del(id) #id를 메모리에서 제거


print(6**2) #지수 연산자
print(7/2) #나누기 파이썬은 나누기를 했을 때 자동으로 실수형으로 결과를 출력함
print(7%2) #나머지
print(7//2) #몫

a+=1
print(a)
a//=5
print(a)


if a%2 == 0 :
    print("짝수")
else :
    print("홀수")

lun = 2024
if (lun % 400==0) or (lun%400!=0)and(lun%4==0 and lun%100!=100):
    print('윤년')
else: 
    print('평년')


a = 10
b = 10.0
print(a is b) #js의 === 과 동일한 기능. 변수의 자료형까지 같은지 확인
print(a is not b) #!===

a = (1,2,3,"1234")
b = (23,6,1,"asdf","1234")
print(1 in a)
print([1,2] in [1,2,3]) #false나옴. 이 문장은 1,2를 갖은 리스트가 있는지 물어보는 내용.
print([1,2] in [[1,2],5,6])


print(True and True)
print(True & True) #비트 연산자를 논리 연산자로 사용할 수 있음, 하지만 연산 순위가 비트연산 우선이라는 것을 반드시 기억해야 함

a = True
b = False
print(a & b) # False
print(a & a) # True
print(a | b) # True
print(a ^ b) # True
print(~b) # -1
print(bool(~a)) # True

#산술 연산자 중 부호 연산을 할 때 비트 연산자 not(~)도 함께 수행됨



