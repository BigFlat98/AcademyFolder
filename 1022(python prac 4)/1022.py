#예외처리
#print(5/0) zero division error

# s=[1,2,1,1]
# print(s[7]) out of index error

# print("2"+6) type error

# open("test.txt") file error

# int("5.2") value error, different parameter


# for i in range(10):
# print(i) syntax error

n = input("숫자 입력:")
try:
    print(5/int(n)) 
except:
    print(f"{n}은 입력할 수 없습니다. 공습경보!@")
#-> 이렇게 작성하면 발생하는 예외에 대해 모두 처리가 가능


n = input("숫자 입력:")
try:
    print(5/int(n)) 
except ZeroDivisionError as e: #->지정 예외 처리, 예외는 클래스 형태로 돼있음. as e는 긴 예외명 대신 e를 사용해서 처리문에서 예외명을 참조할 수 있음. 자바에 있는 exception e느낌
    print(f"{e} 발생")
    print(f"{n}은 입력할 수 없습니다. 공습경보!@")
except ValueError as e2:
    print(f'{e2} 발생')
else : #->예외가 발생하지 않았을 때 실행문 처리
    print("정상 작동")


try:
    f = open("./test.txt","w")
    f += 1
except:
    print("happened error")

finally: #예외 발생 유무에 상관 없이 반드시 실행하는 코드 
    f.close()

#입력값에 5를 더하는 코드를 작성하고 입력값이 숫자가 아닌경우 발생하는 ValueError를 예외처리하고, 
# 입력값이 숫자인 경우 제곱을 출력하고, 예외발생 여부와 상관없이 실행되는 출력문을 작성하시오.
n = input("숫자 입력:")
try:
    n = int(n) + 5 
except ValueError as e:
    print(f"{e} 발생")
else :
    print(n ** 2)
finally:
    print("실행 완료")


#예외 회피
try:
    print(5/0) #실행문이 실행되지 않아도 전혀 문제되지 않는 경우만 사용 필요
except:
    pass


#예외 발생
#-> 미완성 코드를 타인에게 전달할 때, 미완성 됐음을 알리거나 코드의 의도를 전달하고 싶은 경우
#-> 내가 짠 코드가 문법과 작동에는 이상 없지만 나의 의도에 맞지 않는 경우, 예외를 발생시켜서 의도의 범위 밖 상황 통제
#raise NotImplementedError #raise는 에러를 호출하는 키워드. NotImplementedError 정의가 안됐다는 에러 클래스

class Taxi:
    def move(self):
        raise NotImplementedError #해당 부분이 아직 미완성 됐음을 전달
    
    def car(self):
        print("씽씽~~")
taxi = Taxi()
#taxi.move()

class Bus(Taxi):
    def move(self):
        print("붕붕~~")

bus = Bus()



#예외 만들기
print(Exception.__subclasses__()) #Exception은 예외가 모여있는 클래스

#Exception클래스를 상속받아 만들면 됨
class CustomError(Exception):
    pass
#raise CustomError


class CustomError2(Exception):
    def __str__(self): #오류 발생 텍스트 생성 함수
        return "허허 문제가 발생했어요~"
#raise CustomError2

class CustomError3(Exception):
    msg = "허허 발생했어요~"
    def __init__(self): #상속 받아서 생성자 만들고 오류 발생시 텍스트 리턴
        super.__init__(self.msg)
    def __str__(self):
        return self.msg
#raise CustomError3

class CustomError4(Exception):
    msg = "너무 복잡한 함수가 되어 실행을 종료합니다."
    def __init__(self):
        super().__init__(self.msg)
    def __str__(self):
        return self.msg
    
#10보다 큰수가 입렫괴면 Complex예외 발생. 
n = input("10보다 작은 수 입력")
if int(n) > 10:
    raise CustomError4
else :
    print("정상 작동")
#내가 의도하지 않는 부분 처리

#많이 사용하는 경우. 파일을 올릴 때 파일 형식이 의도와 다른 경우 예외 처리
#사용자의 입장에서 내가 의도한 내용에 맞지 않는 행위를 할 경우가 예상될 때 작성해 주면 됨

#다음 요구사항에 맞는 비밀번호 생성기를 만들어 해당 사항에 대한 예외를 만들어 예외처리 하시오.
# - 비밀번호의 길이는 6~10 개로 모두 숫자로 이루어져있어야함.
# - 입력값이 숫자가 아닐경우 부적절한 값을 가진 인자를 받아 발생하는 에러(ValueError)로 예외처리 하시오.
# - 비밀번호는 두번 입력하고 해당 입력 문자의 길이가 다른 경우 예외로 만들고 인덱스를 벗어나는 에러(IndexError)로 예외처리하시오.
# - 비밀번호 길이가 6개보다 짧을 경우 “TooShort” 이라는 예외를 만들어 예외처리 하시오.
# - 비밀번호 길이가 10개보다 길 경우 “TooLong”이라는 예외를 만들어 예외처리 하시오.
class TooShort(Exception):
    msg="비밀번호가 너무 짧습니다."
    def __init__(self):
        super().__init__(self.msg)
    def __str__(self):
        return self.msg

class TooLong(Exception):
    def __str__(self):
        return "비밀번호가 너무 깁니다."
    



try:
    pw1 = input("6~10자리 숫자로 이뤄진 비밀번호 입력:")
    if len(pw1) < 6:
        raise TooShort
    elif len(pw1) > 10:
        raise TooLong
    pw2 = input("입력한 비밀번호 다시 입력")
    if len(pw2) < 6:
        raise TooShort
    elif len(pw2) > 10:
        raise TooLong
    pass1 = int(pw1)
    pass2 = int(pw2)
except ValueError:
    print("비밀번호에 잘못된 값이 입력됐습니다.")
else:
    if len(pw1)!=len(pw2):
        raise IndexError
finally:
    print("실행 완료")


class TooShort(Exception):
    def __str__(self):
        return "비밀번호가 너무 짧습니다."
class TooLong(Exception):
    def __str__(self):
        return "비밀번호가 너무 깁니다."

while(True):
    try:
        pw1 = input("비밀번호 입력(6~10 숫자만) : 종료시 '나가기' 입력 ->")
        if (len(pw1) < 6):
            raise TooShort
        elif (len(pw1) > 10):
            raise TooLong
        elif (pw1 =='나가기'):
            break
        int(pw1)

        pw2 = input("동일하게 입력 ->")
        if pw2 == '나가기' :
            break
        int(pw2)

        pw2[len(pw1)] #만약 pw2의 길이가 pw1의 길이보다 짧으면 인덱스 에러가 발생함
        pw1[len(pw2)]
    except ValueError:
        print("잘못된 값 입력")
    except IndexError:
        print("입력된 두 비밀번호의 값이 서로 다릅니다.")




