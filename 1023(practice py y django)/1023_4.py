#Pg 사이 문자 인덱싱
s = "PythonProgramming"
print(s[:10])
s.index('P') #p가 있는 첫번째 인덱스 리턴


#문제: t = "DataScience"에서 맨 끝 문자와 맨 처음 문자 인덱싱
t = "DataScience"
print(t[-1] + t[0])

#짝수 인덱스 문자 인덱싱 
c = "HelloWorld" 
print(c[::2])

#3~8문자 슬라이싱
d = "ProgrammingLanguage"
print(d[2:8])

#문제: a = "ArtificialIntelligence"에서 'Artificial' 부분 슬라이싱
a = "ArtificialIntelligence"
print(a[:10])


#문제: b = "MachineLearning"에서 'Learning' 부분을 거꾸로 슬라이싱
b = "MachineLearning"
print(b[-1:-9:-1])

#문제: e = "CloudComputing"에서 두 부분 분리 후 뒤집기
e = "CloudComputing"
print(e[4::-1] + " " + e[-1:4:-1])

#Technology 까꾸로
f = "InformationTechnology"
