��    r      �  �   <      �	  �   �	  �   �
  �   L  �  D       /  )    Y  �  y  Q  0  �  �  k    G  �     �  0   �          ,  ,   H     u  ,   �  ,   �  '   �  -         C  (   d  (   �     �     �     �  q   �     j     n  *        �  Q   �  ?        T     k     �     �  $   �     �     �               ,     5  :   T     �     �  #   �     �     �  3   
     >     F  &   Y     �     �     �     �  (   �     �           ;   (  3   d  /   �  +   �  '   �  #         @      `      |      �      �   4   �      �   "   �   !   "!     D!  0   ]!  -   �!      �!     �!     �!     "  $    "     E"     `"     {"     �"     �"     �"     �"  $   �"     #     "#     3#  >   G#     �#     �#  P   �#  ,   $  *   8$     c$     p$     }$     �$     �$     �$     �$  B   �$     "%  �  .%  �  �&  W  `(  �  �*    =,  �   M/    �/  �  3    �4  J  �7  �  :  >  �<  k  �>  ,   VA  I   �A  \   �A  1   *B  N   \B  9   �B  Q   �B  N   7C  >   �C  O   �C  <   D  ?   RD  @   �D  -   �D  -   E     /E  �   3E     "F     %F  u   EF  4   �F  �   �F  V   xG  C   �G  4   H  3   HH  7   |H  G   �H  3   �H  2   0I     cI     I     �I  ?   �I  W   �I     BJ  "   `J  6   �J  B   �J  D   �J  �   BK  
   �K  8   �K  C   !L  2   eL  #   �L  #   �L     �L  @   �L  -   6M    dM  "   }O  D   �O  >   �O  :   $P  6   _P  2   �P  .   �P  *   �P  &   #Q     JQ     gQ  W   kQ  l   �Q  T   0R  n   �R  W   �R  m   LS  �   �S  j   @T  7   �T  i   �T  1   MU  }   U  }   �U  S   {V  R   �V  -   "W  7   PW  9   �W  (   �W  2   �W  e   X  8   �X  $   �X  )   �X  G   Y  _   TY  ;   �Y  �   �Y  G   �Z  c   �Z     U[     i[     }[  ]   �[  /   �[  b   \  $   �\  �   �\     T]         R   J   %       O           '   N   E       >       o       U   h   M   !   d   &       $                                L   ;   C   +   ?            Y   -                 l   D             r       i   7      Q   9         e       a       0   <      B   ,       
                  c       m      (   1   I               S   ]   	   \          b       @      K   :   X   V             A      g   "   )       8   4   G   _          H   F   j   =   Z      .   2           3       W                 [   T   #   n         f   `   6   q       /   p              k       ^   *           5       P    
Context control:
  -B, --before-context=NUM  print NUM lines of leading context
  -A, --after-context=NUM   print NUM lines of trailing context
  -C, --context=NUM         print NUM lines of output context
 
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.

 
Miscellaneous:
  -s, --no-messages         suppress error messages
  -v, --invert-match        select non-matching lines
  -V, --version             display version information and exit
      --help                display this help text and exit
 
Output control:
  -m, --max-count=NUM       stop after NUM matches
  -b, --byte-offset         print the byte offset with output lines
  -n, --line-number         print line number with output lines
      --line-buffered       flush output on every line
  -H, --with-filename       print the file name for each match
  -h, --no-filename         suppress the file name prefix on output
      --label=LABEL         use LABEL as the standard input file name prefix
 
Report bugs to: %s
       --include=FILE_PATTERN  search only files that match FILE_PATTERN
      --exclude=FILE_PATTERN  skip files and directories matching FILE_PATTERN
      --exclude-from=FILE   skip files matching any file pattern from FILE
      --exclude-dir=PATTERN  directories that match PATTERN will be skipped.
   -E, --extended-regexp     PATTERN is an extended regular expression (ERE)
  -F, --fixed-strings       PATTERN is a set of newline-separated strings
  -G, --basic-regexp        PATTERN is a basic regular expression (BRE)
  -P, --perl-regexp         PATTERN is a Perl regular expression
   -I                        equivalent to --binary-files=without-match
  -d, --directories=ACTION  how to handle directories;
                            ACTION is 'read', 'recurse', or 'skip'
  -D, --devices=ACTION      how to handle devices, FIFOs and sockets;
                            ACTION is 'read' or 'skip'
  -r, --recursive           like --directories=recurse
  -R, --dereference-recursive  likewise, but follow all symlinks
   -L, --files-without-match  print only names of FILEs containing no match
  -l, --files-with-matches  print only names of FILEs containing matches
  -c, --count               print only a count of matching lines per FILE
  -T, --initial-tab         make tabs line up (if needed)
  -Z, --null                print 0 byte after FILE name
   -NUM                      same as --context=NUM
      --color[=WHEN],
      --colour[=WHEN]       use markers to highlight the matching strings;
                            WHEN is 'always', 'never', or 'auto'
  -U, --binary              do not strip CR characters at EOL (MSDOS/Windows)
  -u, --unix-byte-offsets   report offsets as if CRs were not there
                            (MSDOS/Windows)

   -e, --regexp=PATTERN      use PATTERN for matching
  -f, --file=FILE           obtain PATTERN from FILE
  -i, --ignore-case         ignore case distinctions
  -w, --word-regexp         force PATTERN to match only whole words
  -x, --line-regexp         force PATTERN to match only whole lines
  -z, --null-data           a data line ends in 0 byte, not newline
   -o, --only-matching       show only the part of a line matching PATTERN
  -q, --quiet, --silent     suppress all normal output
      --binary-files=TYPE   assume that binary files are TYPE;
                            TYPE is 'binary', 'text', or 'without-match'
  -a, --text                equivalent to --binary-files=text
 %s home page: <%s>
 %s home page: <http://www.gnu.org/software/%s/>
 %s%s argument '%s' too large %s: invalid option -- '%c'
 %s: option '%c%s' doesn't allow an argument
 %s: option '%s' is ambiguous
 %s: option '%s' is ambiguous; possibilities: %s: option '--%s' doesn't allow an argument
 %s: option '--%s' requires an argument
 %s: option '-W %s' doesn't allow an argument
 %s: option '-W %s' is ambiguous
 %s: option '-W %s' requires an argument
 %s: option requires an argument -- '%c'
 %s: unrecognized option '%c%s'
 %s: unrecognized option '--%s'
 ' 'egrep' means 'grep -E'.  'fgrep' means 'grep -F'.
Direct invocation as either 'egrep' or 'fgrep' is deprecated.
 (C) (standard input) -P supports only unibyte and UTF-8 locales Binary file %s matches
 Example: %s -i 'hello world' menu.h main.c

Regexp selection and interpretation:
 General help using GNU software: <http://www.gnu.org/gethelp/>
 Invalid back reference Invalid character class name Invalid collation character Invalid content of \{\} Invalid preceding regular expression Invalid range end Invalid regular expression Memory exhausted Mike Haertel No match No previous regular expression PATTERN is, by default, a basic regular expression (BRE).
 Packaged by %s
 Packaged by %s (%s)
 Premature end of regular expression Regular expression too big Report %s bugs to: %s
 Search for PATTERN in each FILE or standard input.
 Success Trailing backslash Try '%s --help' for more information.
 Unknown system error Unmatched ( or \( Unmatched ) or \) Unmatched \{ Usage: %s [OPTION]... PATTERN [FILE]...
 Valid arguments are: When FILE is -, read standard input.  With no FILE, read . if a command-line
-r is given, - otherwise.  If fewer than two FILEs are given, assume -h.
Exit status is 0 if any line is selected, 1 otherwise;
if any error occurs and -q is not given, the exit status is 2.
 Written by %s and %s.
 Written by %s, %s, %s,
%s, %s, %s, %s,
%s, %s, and others.
 Written by %s, %s, %s,
%s, %s, %s, %s,
%s, and %s.
 Written by %s, %s, %s,
%s, %s, %s, %s,
and %s.
 Written by %s, %s, %s,
%s, %s, %s, and %s.
 Written by %s, %s, %s,
%s, %s, and %s.
 Written by %s, %s, %s,
%s, and %s.
 Written by %s, %s, %s,
and %s.
 Written by %s, %s, and %s.
 Written by %s.
 ` ambiguous argument %s for %s character class syntax is [[:space:]], not [:space:] conflicting matchers specified exceeded PCRE's backtracking limit exceeded PCRE's line length limit exhausted PCRE JIT stack failed to allocate memory for the PCRE JIT stack failed to return to initial working directory input file %s is also the output input is too large to count internal PCRE error: %d internal error internal error (should never happen) invalid %s%s argument '%s' invalid argument %s for %s invalid character class invalid content of \{\} invalid context length argument invalid matcher %s invalid max count invalid suffix in %s%s argument '%s' lseek failed memory exhausted no syntax specified others, see <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS> recursive directory loop regular expression too big support for the -P option is not compiled into this --disable-perl-regexp binary the -P option only supports a single pattern unable to record current working directory unbalanced ( unbalanced ) unbalanced [ unfinished \ escape unknown binary-files type unknown devices method warning: %s: %s warning: GREP_OPTIONS is deprecated; please use an alias or script write error Project-Id-Version: grep-2.21.78
Report-Msgid-Bugs-To: bug-grep@gnu.org
POT-Creation-Date: 2016-03-10 21:38-0800
PO-Revision-Date: 2015-11-26 21:58+0200
Last-Translator: Alexander Shopov <ash@kambanaria.org>
Language-Team: Bulgarian <dict@ludost.net>
Language: bg
MIME-Version: 1.0
Content-Type: text/plain; charset=utf-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=2; plural=(n != 1);
 
Контрол върху контекста:
  -B, --before-context=БРОЙ извеждане на този БРОЙ предхождащи редове
  -A, --after-context=БРОЙ  извеждане на този БРОЙ следващи редове
  -C, --context=БРОЙ        извеждане на този БРОЙ предхождащи и следващи
                            редове
 
Лиценз — Общ публичен лиценз на GNU (GNU GPL), както е публикуван от Фондацията
за свободен софтуер — версия 3 на лиценза или (по ваше решение) по-късна версия.
<http://gnu.org/licenses/gpl.html>
Тази програма е свободен софтуер. Можете да я разпространявате и/или променяте.
Тя се разпространява БЕЗ НИКАКВИ ГАРАНЦИИ доколкото е позволено от закона.
 
Разни:
  -s, --no-messages         без съобщения за грешки
  -v, --revert-match        извеждане на несъвпадащите редове
  -V, --version             извеждане на информация за версията и изход
      --help                извеждане на помощна информация и изход
 
Управление на резултата:
  -m, --max-count=БРОЙ      спиране след този БРОЙ резултати
  -b, --byte-offset         извеждане на отместването в байтове за всеки ред
  -n, --line-number         извеждане на номерата на редовете
      --line-buffered       буфериране по редове
  -H, --with-filename       извеждане на името на файла при всяко съвпадение
  -h, --no-filename         без извеждане на името на файла за всяко съвпадение
      --label=ЕТИКЕТ        използване на ЕТИКЕТ като име за стандартния вход
 
Докладвайте грешки в програмата на адрес: %s
Докладвайте грешки в превода на адрес: <dict@ludost.net>
       --include=ШАБЛОН_ЗА_ИМЕ
                            търсене само във файлове с имена, напасващи
                            ШАБЛОНа_ЗА_ИМЕ
      --exclude=ШАБЛОН_ЗА_ИМЕ
                            пропускане на файлове с имена, напасващи
                            ШАБЛОНа_ЗА_ИМЕ
      --exclude-from=ФАЙЛ   пропускане на файлове с имена, напасващи на
                            шаблоните в този ФАЙЛ
      --exclude-dir=ШАБЛОН_ЗА_ИМЕ
                            пропускане на директории с имена, напасващи
                            ШАБЛОНа_ЗА_ИМЕ
   -E, --extended-regexp     ШАБЛОНът е разширен регулярен израз
  -F, --fixed-regexp        ШАБЛОНът е от дословни низове, разделени с
                            нови редове
  -G, --basic-regexp        ШАБЛОНът е основен регулярен израз
  -P, --perl-regexp         ШАБЛОНът е регулярен израз на Perl
   -I                        същото като „--binary-files=without-match“
  -d, --directories=ДЕЙСТВИЕ
                            ДЕЙСТВИЕ при директориите. То може да е:
                            „read“ (изчитане), „recurse“ (рекурсивно търсене)
                            или „skip“ (пропускане)
  -D, --devices=ДЕЙСТВИЕ    ДЕЙСТВИЕ за специалните файлове, програмните канали
                            и гнездата. То може да е „read“ (изчитане) или
                            „skip“ (пропускане)
  -R, -r, --recursive       същото като „--directories=recurse“
   -L, --files-without-match извеждане само на имената на файлове без съвпадения
  -l, --files-with-matches  извеждане само на имената на файлове със съвпадения
  -c, --count               извеждане само на броя съвпадащи редове във файл
  -T, --initial-tab         подравняване на табулациите при необходимост
  -Z, --null                извеждане на знак NULL след всяко име на файл
   -БРОЙ                     същото като --context=БРОЙ
      --color[=КОГА]
      --colour[=КОГА]       оцветяване на съвпадащите низове. КОГА е „always“
                            (винаги), „never“ (никога) или „auto“ (автоматично)
  -U, --binary              знаците „CR“ в края на реда да се запазват
                            (DOS/Windows)
  -u, --unix-byte-offsets   отместванията се изчисляват сякаш знаците „CR“
                            липсват (DOS/Windows)
   -e, --regexp=ШАБЛОН       ШАБЛОН за регулярен израз
  -f, --file=ФАЙЛ           изчитане на ШАБЛОНа от ФАЙЛ
  -i, --ignore-case         без разлика между главни и малки букви
  -w, --word-regexp         ШАБЛОНът да съвпада само с цели думи
  -x, --line-regexp         ШАБЛОНът да съвпада само с цели редове
  -z, --null-data           редовете завършват с NULL, а не със знак за нов ред
   -o, --only-matching       извеждане само на съвпадението, а не целия ред
  -q, --quiet, --silent     нищо не се извежда, само се задава изходен код
      --binary-files=ВИД    двоичните файлове да се третират като такъв ВИД
                            ВИДът може да „binary“ (двоичен), „text“ (текстов),
                            или „without-match“ (без съвпадение).
  -a, --text                същото като „--binary-files=text“
 Уеб страница на „%s“: <%s>
 Уеб страница на „%s“: <http://www.gnu.org/software/%s/>
 прекалено дълъг аргумент „%3$s“ за опцията „%1$s%2$s“ %s: неправилна опция — „%c“
 %s: опцията „%c%s“ се използва без аргументи
 %s: опцията „%s“ не е еднозначна
 %s: опцията „%s“ не е еднозначна. Възможности: %s: опцията „--%s“ се използва без аргументи
 %s: опцията „--%s“ изисква аргумент
 %s: опцията „-W %s“ се използва без аргументи
 %s: опцията „-W %s“ не е еднозначна
 %s: опцията „-W %s“ изисква аргумент
 %s: опцията изисква аргумент — „%c“
 %s: непозната опция „%c%s“
 %s: непозната опция „--%s“
 “ „egrep“ е същото като „grep -E“, а „fgrep“ е същото като „grep -F“.
Стартирането чрез „egrep“ и „fgrep“ е остаряло — ползвайте изрични опции.
 © (стандартен вход) опцията „-P“ изисква локалът да е с еднобайтово кодиране или UTF-8 Двоичният файл „%s“ напасва
 Пример: %s -i 'hello world' menu.h main.c

Избор на вида регулярен израз и интерпретация:
 Обща помощ за програмите на GNU: <http://www.gnu.org/gethelp/>
 Неправилна препратка към съвпадение Неправилно име на клас знаци Неправилен знак за подредба Неправилно съдържание в „\{\}“ Неправилен предхождащ регулярен израз Неправилен край на диапазон Неправилен регулярен израз Паметта свърши Mike Haertel Няма съвпадения Липсва предхождащ регулярен израз Стандартно ШАБЛОНът е основен регулярен израз.
 Пакетирано от %s
 Пакетирано от %s (%s)
 Ранен край на регулярен израз Регулярният израз е прекалено голям Докладвайте грешки в „%s“ на адрес: %s
 Търсене на текст, напасващ с ШАБЛОНа във всеки зададен ФАЙЛ или от стандартния вход.
 Успех Обратно наклонена черта в края Вижте „%s --help“ за повече информация.
 Неизвестна системна грешка „(“ или „\(“ без еш „)“ или „\)“ без еш „\{“ без еш Употреба: %s [ОПЦИЯ]… ШАБЛОН [ФАЙЛ]…
 Възможните аргументи са: Когато ФАЙЛът е „-“ се чете стандартният вход.  Без ФАЙЛ се чете текущата
директория „.“.  Ако са зададени по-малко от два ФАЙЛа, се предполага „-h“.
Изходният код на grep е 0 при поне едно съвпадение и 1 във всички останали
случаи.  Ако не е зададена опцията „-q“ и възникне грешка, изходният код е 2.
 Създадено от %s и %s.
 Създадено от %s, %s, %s,
%s, %s, %s, %s,
%s, %s и др.
 Създадено от %s, %s, %s,
%s, %s, %s, %s,
%s и %s.
 Създадено от %s, %s, %s,
%s, %s, %s, %s
и %s.
 Създадено от %s, %s, %s,
%s, %s, %s и %s.
 Създадено от %s, %s, %s,
%s, %s и %s.
 Създадено от %s, %s, %s,
%s и %s.
 Създадено от %s, %s, %s
и %s.
 Създадено от %s, %s и %s.
 Създадено от %s.
 „ аргументът „%s“ на опцията „%s“ не е еднозначен синтаксисът на класовете от знаци е „[[:space:]]“, а не „[:space:]“ зададените изрази за съвпадение са в конфликт максималният брой връщания при рекурсия на „PCRE“ е превишен максималният размер на реда за „PCRE“ е превишен паметта за стека за изпълнение на шаблоните за „PCRE“ свърши неуспешно заделяне на памет за стека за изпълнение на шаблоните за „PCRE“ не може да се върне към първоначалната работна директория входният файл „%s“ е и изходен входните данни са прекалено големи, за да бъдат преброени вътрешна грешка на „PCRE“: %d вътрешна грешка, която не трябва да възниква — молим да я докладвате вътрешна грешка, която не трябва да възниква — молим да я докладвате неправилен аргумент „%3$s“ за опцията „%1$s%2$s“ аргументът „%s“ на опцията „%s“ е неправилен неправилен клас за знаци неправилно съдържание в „\{\}“ неправилен размер на контекста неправилен израз „%s“ неправилен максимален брой неправилен суфикс в аргумента „%3$s“ за опцията „%1$s%2$s“ неуспешно изпълнение на „lseek“ паметта е изчерпана не е зададен синтаксис и др., вижте <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS> зацикляне при рекурсивна обработка на директориите прекалено голям регулярен израз поддръжката на опцията „-P“ липсва в текущата команда, която е компилирана с
опцията „--disable-perl-regexp“. опцията „-P“ поддържа само един шаблон не може да се запише коя е текущата работна директория „(“ без еш „)“ без еш „[“ без еш незавършена екранираща последователност чрез „\“ непознат вид двоичен файл неизвестен метод за обработка на специалните файлове предупреждение: %s: %s предупреждение: променливата „GREP_OPTIONS“ е остаряла. Ползвайте синоним на
обвивката или скрипт грешка при запис 