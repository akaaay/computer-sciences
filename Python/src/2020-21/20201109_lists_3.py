#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-science   |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Licensed under the EUPL-1.2 <https://eupl.eu/>  |
#    |   _/       \=================================================/


def main():
    beatles = ['John', 'Paul', 'George', 'Ringo', 'Stuart']
    print("The BEATLES:")
    for i in range(len(beatles)):
        print(f"I love Beatles number {i+1}: {beatles[i]}!")


if __name__ == '__main__':  # BLACK MAGIC!
    main()