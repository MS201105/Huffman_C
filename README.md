# Project_X
My repository for getting experience
Мой проект - архиватор на основе алгоритма Huffman
Эта программа позволяет архивировать строки, файлы и разархивировать файлы.
Гарантированно верно кодирует стандарт ASCII

1. Чтобы создать исполняемый файл(в папке со всеми исходниками): 
    Для Linux: gcc main.c heapfuncs.c huf_codes.c encodeStr.c encodeFile.c decodeFile.c -o huf
    Для windows аналогично.
    
2. Параметры для программы с названием исполняемого файла "huf".
    1)-h 
        Этот параметр выводит все возможные параметры для программы, кроме себя самой с кратким описанием их применения.
    2) -codestr СТРОКА
        Этот параметр позволяет закодировать строку в строку бит. 
        После выполнения вы увидите символы и их кодировку кодом Хаффмана, а также закодированную строку в коде Хаффмана.
        Пример:
        ```
        sm@sm-Aspire-3820:~/Desktop/C_PRO/project_huff/program_files$ ./huf -codestr 123
        Закодированные символы:
        1: 10
        2: 0
        3: 11
        Закодированная строка: 10011
        ```
    3) -code ИМЯФАЙЛА
        Этот параметр кодирует файл в файл с названием "encoded.huf" и отображает в терминале кодировку всех символов.
        Пример:
        Содержимое файла in1.txt:
        ```
        Huffman coding is a popular method of data compression that is based on the frequency of occurrence of a data item. The idea is to assign variable-length codes to input characters, with shorter codes assigned to more frequent characters.            The Huffman coding algorithm is optimal and widely used in various applications such as compression formats (e.g., JPEG, MP3) and in many compression utilities.

        The algorithm consists of two main parts:
        1. Building the Huffman tree.
        2. Generating the codes from the tree.
        
        To build the Huffman tree, you start by creating a node for each unique character and its frequency. Then, you repeatedly merge the two nodes with the lowest frequencies until only one node remains, which becomes the root of the Huffman tree. This process ensures that more frequent characters are closer to the root, and thus have shorter codes.
        
        Once the tree is built, the codes are generated by traversing the tree. A left traversal corresponds to a '0' and a right traversal corresponds to a '1'. This way, each character gets a unique binary code that can be used for encoding.
        
        Let's consider a simple example. Suppose we have the following characters with their frequencies:
        - A: 5
        - B: 9
        - C: 12
        - D: 13
        - E: 16
        - F: 45
        
        Using the Huffman coding algorithm, we can create a tree and assign binary codes to each character based on their frequencies. The result might look like this:
        - A: 1100
        - B: 1101
        - C: 100
        - D: 101
        - E: 111
        - F: 0
        
        With these codes, we can now encode any string of characters into a binary string, and then decode it back using the Huffman tree.
        
        Huffman coding is a fundamental algorithm in data compression and has significant practical importance. It helps reduce the amount of data required to store or transmit information without losing any of the original data. This efficiency is particularly valuable in contexts where storage space or transmission bandwidth is limiteds
        ```

        Исполнение команды:
        ```
            sm@sm-Aspire-3820:~/Desktop/C_PRO/project_huff/program_files$ ./huf -code in1.txt
            Коды символов:
            : 10110010000

            : 100001
             : 111
            ': 00110000
            (: 10110111010
            ): 10110111011
            ,: 0011001
            -: 1000000
            .: 1101001
            0: 10110100
            1: 1011000
            2: 1011010111
            3: 1011011010
            4: 10110111001
            5: 1011001011
            6: 10110010001
            9: 10110010011
            :: 1000100
            A: 001100010
            B: 001100011
            C: 1011010100
            D: 1011010101
            E: 100000100
            F: 1011011110
            G: 1011011111
            H: 10000011
            I: 10110111000
            J: 10110101100
            L: 10110101101
            M: 10110110110
            O: 10110110111
            P: 1011011001
            S: 10110010010
            T: 11010000
            U: 10110010100
            W: 10110010101
            a: 1001
            b: 1000101
            c: 11000
            d: 00111
            e: 000
            f: 110110
            g: 100011
            h: 10111
            i: 0110
            k: 100000101
            l: 110101
            m: 110011
            n: 0101
            o: 0100
            p: 001101
            q: 11010001
            r: 0111
            s: 0010
            t: 1010
            u: 110111
            v: 10110011
            w: 1100100
            x: 1011011000
            y: 1100101
        ```
        Теперь закодированный файл сохранен как "encoded.huf" в бинарном виде.
    4) -decode ИМЯЗАКОДИРОВАННОГОФАЙЛА
        Эта команда позволяет декодировать файлы, закодированные моей программой и сохранять их в файле "decoded.txt".
        Пример:
            Прошлая команда закодировала для нас файл "encoded.huf"
            Теперь раскодируем его:
            ```
            sm@sm-Aspire-3820:~/Desktop/C_PRO/project_huff/program_files$ ./huf -decode encoded.huf 
            ```
            Теперь в файле "decoded.txt" в этой же директории можно увидеть содержимое исходного файла in1.txt
            
     
        
        

