# http://tryhelloworld.co.kr/challenge_codes/134

def Jaden_Case(s):
    # 함수를 완성하세요
    result = []
    for word in s.split(" "):
        lower_word = list(word.lower())

        if ord(lower_word[0]) >= 65:
            lower_word[0] = chr(ord(lower_word[0])-32)

        result.append("".join(lower_word))

    return " ".join(result)

# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(Jaden_Case("3people unFollowed me for the last week"))
