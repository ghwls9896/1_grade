
import header

def make_cipher(plaintext, key):
    
    ciphertext = ''

    first = ord(' ')
    last  = ord('~')
    
    for ch in plaintext:
        ciphertext += chr((ord(ch) + key - first) % (last - first + 1) + first)
        
    return ciphertext

def main():
    header.header_print("1-2 Caesar ciper", "2022.09.14", "(c) Kim, Tae-Hyong")

    plaintext = input("암호화할 문장을 입력하세요: ")
    key       = int(input("Caesar Cipher 키값을 입력하세요: "))
    filename  = input("암호문을 저장할 파일명을 입력하세요: ")

    ciphertext = make_cipher(plaintext, key)
    print("암호화된 문장: ", ciphertext)

    with open(filename, "w") as cfile:
        cfile.write(plaintext)

    print("암호문 파일을 저장했습니다: ", filename)
    
if __name__ == '__main__':
    main()
