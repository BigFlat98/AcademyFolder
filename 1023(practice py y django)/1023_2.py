# 2) 다음의 암호문의 해석하시오.
# 암호문은 a~z까지의 문자가 2개씩 뒤로 밀려있는 구조이다.
# ord 함수 : 문자를 아스키코드로 변화해주는 함수(a : 97 ~ z : 122)
# chr 함수 : 아스키코드 번호를 문자로 변환해주는 함수( 97: a ~ 122 : z)
text = "g fmnc wms bgblr rpylqjyrc gr zw fylb. rfyrq ufyr amknsrcpq ypc dmp. bmgle gr gl zw fylb gq glcddgagclr ylb rfyr'q ufw rfgq rcvr gq qm jmle. sqgle qrpgle.kyicrpylq() gq pcamkkclbcb. lmu ynnjw ml rfc spj."
result_text = ""
for v in text:
    if (ord(v)>=97) and (ord(v)<=120):
        result_text += chr(ord(v)+2)
    elif (ord(v)==121) or (ord(v)==122):
        result_text += chr(ord(v)-24)
    else :
        result_text += v 

print(result_text)


alpha1 = [chr(i) for i in range(97,123)]
alpha1 = ''.join(alpha1) #list값 다 합쳐서 str형으로 나오도록
alpha2 = [chr(i) for i in range(99,123)]
alpha2 = ''.join(alpha2) + "ab"
new_table=str.maketrans(alpha1,alpha2)
print(text.translate(new_table))

table = str.maketrans("12345","asdfb")#문자열 변경 함수. replace("","")는 파라미터에 들어오는 값이 정확히 일치해야 작동됨
print("11444".translate(table))#maketrans를 통해 포멧을 정하고, translate를 사용하면 각 인덱스와 매칭되는 값으로 변함 -> 이게 아주 기똥참

