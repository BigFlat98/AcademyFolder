#정규표현식 -> 문자열에서 특정 패턴을 찾아내는 식, 12개의 메타 문자가 있음
import re #정규표현식 모듈 가져오기


p = re.compile('[0-9]')#모든 숫자
print(p.match('1234')) #-> 결과를 보면 1만 확인을 함
p = re.compile('\d+')#[0-9] = \d , \d+ -> 1개 이상 적용
print(p.match('a1234'))#match함수는 처음부터 맞아야만 결과가 나옴. 안맞으면 뒤는 안나옴
print(p.match('12a45'))#맞는 부분 까지만 나오고 틀린 부분부터는 확인 안함

print(p.match('12a56').group()) #맞는 부분을 리턴

print(p.search('1234567'))
print(p.search('ㅁ1234567'))
print(p.search('12qa345'))#search 한번 맞았을 때 쭉 이어서 틀릴 때 까지 확인해서 리턴
#search 와 match의 차이는 match는 처음부터 맞아야 하고 search는 

print(p.findall('1234'))
print(p.findall('12a34'))
print(p.findall('a1234'))#findall은 맞는 것 다 찾아봄. 단 리턴이 각 값을 요소로 갖는 리스트로 받음


p.finditer('1234')#findall과 동일한 기능이고 리턴을 이터러블한 값으로 리턴해줌

for i in p.finditer('1234'): #match처럼 결과가 나오도록
    print(i)

#메타 문자
p = re.compile('.')
p.match('a') # . 은 \n를 제외한 모든 값과 매칭될 수 있음
p = re.compile('a[.]') #실제 .을 매칭하고 싶을 때는 [.]으로 넣어줘야함
p.match('a.')

p = re.compile('a*') #0~n번 a문자가 나와야 함
p.match('')#됨
p.match('b')#됨. a가 없는게 매칭된 것

p = re.compile('a+') #1~n a문자가 나와야 함
p.match('b')#안됨. a가 없어서

#{횟수}
p = re.compile('a{5}')#무조건 중괄호 안에 있는 횟수만큼 a 가 나와야 함
p.match('aaaaaaaaaa')#5번 매칭됨
p = re.compile('a{5,7}')# 5~7번 매칭
p.match('aaaaaa')

p = re.compile('a?')#? ={0,1}
p.match('aa')

p = re.compile('a|bc|def') #or랑 같음 


p = re.compile('^a') #^뒤에 오는 문자로 시작하는 패턴
p.search('baba')

p = re.compile('[^acbdsg]') #^뒤에 있는 값 모두 제외 하고 매칭
p.match('d')

p=re.compile('com&') #com으로 끝나는 문자열과 매칭
p.search('www.naver.com')


#정화번호가 형식에 맞는지 검사
#맨 앞에 +
#다음 국가 번호 2개
#-로 구분
#지역번호 2~3
#번호 3~4개
#번호 4개 
import re
p = re.compile('(^[+]\d{2})-(\d{2,3})-(\d{3,4})-(\d{4}$)')#$에 끝나야 함 표시
print(p.match('+82-02-123-1234'))#match 함수기 때문에 하나라도 안 맞으면 none리턴
print(p.match('+82-02-123-1234').group(0)) #소괄호로 그룹화 해놓으면 그룹함수 사용해서 가져올 수 있음. 0은 전체
print(p.match('+82-02-123-1234').group(1))



#문자열로 바꾸기
text = 'hello Python, I can do it'
p = re.compile('Python')
p.search(text)

print(p.sub('Java',text))

id_number = '240101-3456789'

p = re.compile('(\d{6}-[1-4])(\d{6})')
print(p.match(id_number))
p.match(id_number).group(2)
print(p.sub('\g<1>******',id_number))