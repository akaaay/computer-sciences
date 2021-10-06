#    ######       /=================================================\
#   #######       | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**) |
#   ####   \      | https://github.com/squillero/computer-sciences  |
#    ###G  c\     |                                                 |
#    ##     _\    | © 2020 Giovanni Squillero <squillero@polito.it> |
#    |    _/      | Free for personal or classroom use.             |
#    |   _/       \=================================================/

FILENAME = 'heaven.txt'


def main():
    with open(FILENAME, 'r') as input_file:
        for line in input_file:
            for word in line.split():
                trimmed_word = word.strip('.,!?\'"')
                print(f">>{trimmed_word}<<")


if __name__ == '__main__':
    main()
