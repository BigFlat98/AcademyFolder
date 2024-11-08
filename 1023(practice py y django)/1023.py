# 1) 다음 요구 사항에 맞는 단어장 만들기
# 단어장은 하나가 아니라 여러개가 생성 될 수 있음으로 클래스로 정의
# 사용자로부터 단어와 뜻을 입력 받아 저장한다.
# 단어를 입력하면 뜻을 출력해준다.
# 뜻을 입력하면 단어를 출력해준다.
# 저장한 단어와 뜻을 모두 출력할 수 있다.
class WordDictionary:
    def __init__(self):
        self.dictionary = {}
        
    def add_word(self, word, meaning):
        self.dictionary.update({word:meaning})
        #self.dictionary[word] = meaning -> 보통 추가는 이것 많이 씀
    
    def get_word_meaning(self, word):
				# 단어장에 단어가 존재하면 해당 단어의 뜻을 출력
        if word in self.dictionary.keys():
            return print(self.dictionary[word])
        else:
            return print('단어장에 해당 단어 없음')

    
    def get_meaning_word(self, meaning):
				# 단어장에 뜻을 찾아서 단어를 출력
        # if meaning in self.dictionary.values():
        #     for i in self.dictionary:
        #         if self.dictionary[i] == meaning:
        #             result = i
        #             break
        #     return print(result)
        # else:
        #     return print('단어장에 해당 뜻 없음')  
        for k,v in self.dictionary.items():
            if meaning == v:
                return print(k)
        
        

    
    def display_all(self):
				# 단어장의 모든 단어를 출력
        return print(self.dictionary.keys())

            
dictionary = WordDictionary()
dictionary.add_word("leche","milk")
dictionary.add_word("queso","cheese")
dictionary.add_word("carne","meat")
dictionary.add_word("pescado","fish")
dictionary.add_word("en",["in","at"])
dictionary.get_word_meaning("leche")
dictionary.get_word_meaning("mazana")
dictionary.get_word_meaning("en")
dictionary.get_meaning_word("milk")
dictionary.get_meaning_word("car")
dictionary.get_meaning_word("at")
dictionary.display_all()
# 선택에 따라 저장, 단어 출력, 뜻 출력, 모든 단어 출력, 나가기 기능
while True:
    print("1.단어 저장")
    print("2.단어의 뜻 출력")
    print("3.뜻을 갖는 단어 출력")
    print("4.모두 출력")
    print("5.나가기")
    try:
        user = int(input("원하는 작업 선택. 1~5 ->"))
    except :
        print('오류발생')
        break
    
    if user == 1:
        word = input("단어 입력:")
        meaning = input("뜻 입력:")
        dictionary.add_word(word, meaning)
    elif user == 2:
        word = input("단어 입력:")
        dictionary.get_meaning_word(word)
    elif user == 3:
        meaning = input("뜻 입력:")
        dictionary.get_word_meaning(meaning)
    elif user == 4:
        dictionary.display_all()
    elif user == 5:
        print("종료")
        break
    else :
        print("잘못된 ")