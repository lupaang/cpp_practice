##
# def solution(phone_book):
#     answer = True
#     for pn in phone_book:
#         for ph in phone_book:
#             if(pn == ph):
#                 pass
#             else:
#                 l = len(pn)
#                 if ph[0:l] == pn:
#                     answer = False
#     return answer

##

def solution(phone_book):
    answer = True
    hash_map = {}
    for phone_number in phone_book:
        hash_map[phone_number] = 1
    for phone_number in phone_book:
        temp = ""
        for number in phone_number:
            temp += number
            if temp in hash_map and temp != phone_number:
                answer = False
    return answer
