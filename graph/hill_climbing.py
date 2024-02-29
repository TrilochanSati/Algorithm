import random
import string
import copy

def generate_random_solution(length=13):
    return [ random.choice(string.printable) for _ in range(length) ]


def evaluate(solution):
    target=list("Hello, World!")
    diff=0
    for i in range(len(target)):
        s=solution[i]
        t=target[i]
        diff+=abs(ord(s)-ord(t))

    return diff

def mutate_solution(solution):
    index=random.randint(0,len(solution)-1)
    solution[index]=random.choice(string.printable)

best=generate_random_solution()
best_score=evaluate(best)

while True:
    print("Best score so far",best_score,"Solution",best)
    new_solution=copy.deepcopy(best)
    mutate_solution(new_solution)

    score=evaluate(new_solution)
    if evaluate(new_solution) < best_score:
        best=new_solution
        best_score=score

    elif best_score==0:
        break
