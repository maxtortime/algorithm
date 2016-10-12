def fibonacci(num):
    answers = [0,1]
    
    for i in range(2, num+1):
        answers.append(answers[i-1] + answers[i-2])
    
    return answers[-1]
        
        
# 아래는 테스트로 출력해 보기 위한 코드입니다.
print(fibonacci(100))
