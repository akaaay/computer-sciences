#   ######      /===========================================================\
#  #######      | CLASS EXAMPLE FOR "COMPUTER SCIENCES" (07JCJ**)           |
#  ####   \     | https://github.com/squillero/computer-science             |
#   ###G  c\    |                                                           |
#   ##     _\   | Copyright © 2020 Giovanni Squillero <squillero@polito.it> |
#   |    _/     | Licensed under the EUPL-1.2 <https://eupl.eu/>            |
#   |   _/      \===========================================================/


def main():
    """Main entry point"""
    friends = ['Alice', 'Bob', 'Carla', 'David']

    result = ""
    for n in friends[:-1]:
        result = result + n + ", "
    result = result + friends[-1]

    print(f">>>> {result} <<<<")


if __name__ == '__main__':  # BLACK MAGIC!
    main()
