# 3) email의 유효성 검사
# 이메일은 영어 또는 숫자로 시작한다.
# @ 뒤에는 도메인 주소가 와야한다.
# . 뒤에 반드시 net 또는 com으로 끝나야한다.
import re

def validate_email(email):
    pattern = re.compile('(^[0-9a-zA-Z]{3,12})@([0-9a-zA-Z]{3,6})[.](com$|net$)') #[0-9a-zA-Z] != \w , \w는 한글도 인식함. 다른 문자도 인식할 듯
    if pattern.match(email): 
        return True
    else:
        return False

# 테스트
print(validate_email('abc123@gmail.com')) # True
print(validate_email('123abc@naver.net')) # True
print(validate_email('abc#naver.com')) # False
print(validate_email('abc123@naver.co.kr')) # False