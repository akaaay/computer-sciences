#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2021 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

sum_ = 0
count = 0
completed = False
while not completed:
    user_input = input("Number: ")
    if user_input:
        sum_ += int(user_input)
        count += 1
    else:
        completed = True

if count == 0:
    print(f"D'oh")
else:
    print(f"Average of {count} values: {sum_/count:.2f}")
