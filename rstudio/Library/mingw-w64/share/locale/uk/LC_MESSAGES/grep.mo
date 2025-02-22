��    t      �  �   \      �	  �   �	  �   �
  �   l  �  d     4  /  I    y  �  �  Q  P  �  �  k  6  G  �     �  0   �     /     L  ,   h     �  ,   �  ,   �  '     -   5      c  (   �  (   �     �     �       q        �     �  *   �     �  Q   �  ?   4     t     �     �     �  $   �               .     ?     L     U  :   t     �     �  #   �     �       3   *     ^     f  &   y     �     �     �     �     �  (        .    C     P  ;   g  3   �  /   �  +      '   3   #   [            �      �      �      �   4   �      !  "   >!  !   a!     �!  0   �!  -   �!      �!     "     8"     P"  $   _"     �"     �"     �"     �"     �"     
#     #  $   /#     T#     a#     r#  >   �#     �#     �#  P   �#  ,   J$  *   w$     �$     �$     �$  '   �$     �$     %     %     6%  B   F%     �%  �  �%  �  K'  �  �(  �  �*  �  I,  @   (0  �  i0  �  �2  �  �4  �  C8  �  �:  �  X=    @  )   *B  F   TB  ?   �B  7   �B  i   C  ;   }C  \   �C  i   D  L   �D  j   �D  >   8E  M   wE  N   �E  1   F  1   FF     xF  �   {F     PG  ?   SG  k   �G  A   �G  �   AH  �   �H  8   {I  ;   �I  8   �I  &   )J  N   PJ  <   �J  5   �J      K     3K     @K  R   VK  ]   �K     L     "L  O   BL  >   �L  D   �L  �   M  
   �M  7   �M  W   �M  0   3N  C   dN  C   �N  I   �N  :   6O  N   qO  5   �O  i  �O     `R  @   yR  4   �R  1   �R  ,   !S  (   NS  $   wS      �S     �S     �S     �S  3   �S  �   %T  P   �T  V   U  K   bU  $   �U  \   �U  h   0V  \   �V  C   �V  *   :W  !   eW  i   �W  7   �W  /   )X  0   YX  &   �X  G   �X  9   �X  <   3Y  E   pY     �Y      �Y  &   �Y  D   Z  O   XZ  >   �Z  }   �Z  [   e[  S   �[  )   \  )   ?\  )   i\  y   �\  3   ]  9   A]  H   {]      �]  �   �]     �^         S   K   %       P           '   O   F       ?       q       V   i   N   !   e   &       $                                M   ;   D   +   @            Z   -                 m   E             t       j   7      R   9         f   =   b   n   0   <      C   ,       
                  d       o      (   1   J               T   ^   	   ]          c       A      L   :   Y   W             B      h   "   )       8   4   H   `          I   G   k   >   [      .   2           3       X                 \   U   #   p         g   a   6   s       /   r              l       _   *           5       Q    
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
 Unknown system error Unmatched ( or \( Unmatched ) or \) Unmatched [, [^, [:, [., or [= Unmatched \{ Usage: %s [OPTION]... PATTERN [FILE]...
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
 ` ambiguous argument %s for %s character class syntax is [[:space:]], not [:space:] conflicting matchers specified exceeded PCRE's backtracking limit exceeded PCRE's line length limit exhausted PCRE JIT stack failed to allocate memory for the PCRE JIT stack failed to return to initial working directory input file %s is also the output input is too large to count internal PCRE error: %d internal error internal error (should never happen) invalid %s%s argument '%s' invalid argument %s for %s invalid character class invalid content of \{\} invalid context length argument invalid matcher %s invalid max count invalid suffix in %s%s argument '%s' lseek failed memory exhausted no syntax specified others, see <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS> recursive directory loop regular expression too big support for the -P option is not compiled into this --disable-perl-regexp binary the -P option only supports a single pattern unable to record current working directory unbalanced ( unbalanced ) unbalanced [ unescaped ^ or $ not supported with -Pz unfinished \ escape unknown binary-files type unknown devices method warning: %s: %s warning: GREP_OPTIONS is deprecated; please use an alias or script write error Project-Id-Version: grep-2.23.7
Report-Msgid-Bugs-To: bug-grep@gnu.org
POT-Creation-Date: 2016-03-10 21:38-0800
PO-Revision-Date: 2016-03-04 14:18+0200
Last-Translator: Yuri Chornoivan <yurchor@ukr.net>
Language-Team: Ukrainian <translation-team-uk@lists.sourceforge.net>
Language: uk
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=1; plural=0;
X-Generator: Lokalize 1.5
 
Керування контекстом:
  -B, --before-context=ЧИСЛО показати ЧИСЛО рядків перед рядком з відповідником
  -A, --after-context=ЧИСЛО  показати ЧИСЛО рядків після рядка з відповідником
  -C, --context=ЧИСЛО        показати ЧИСЛО рядків контексту виведених даних
 
Умови ліцензування викладено у GPLv3+: GNU GPL версії 3 або новішій, <http://gnu.org/licenses/gpl.html>
Це вільне програмне забезпечення: ви можете вільно змінювати і поширювати його.
Вам не надається ЖОДНИХ ГАРАНТІЙ, окрім гарантій передбачених законодавством.
 
Інше:
  -s, --no-messages         придушити повідомлення про помилки
  -v, --invert-match        вибирати рядки без збіжностей
  -V, --version             показати дані щодо версії і завершити роботу
      --help                показати ці довідкові дані і завершити роботу
 
Керування виведенням даних:
  -m, --max-count=ЧИСЛО     зупинитися після виявлення кількості відповідників, що дорівнює ЧИСЛУ
  -b, --byte-offset         показувати позиції у байтах разом з виведеними рядками
  -n, --line-number         показувати номери рядків разом з виведеними рядками
      --line-buffered       спорожняти буфер після виведення кожного рядка
  -H, --with-filename       показувати для кожного відповідника назву файла
  -h, --no-filename         не показувати назв файлів у виведених даних
      --label=МІТКА         показувати МІТКУ замість назви файла для стандартного джерела вхідних даних
 
Повідомляйте про вади на адресу: %s
       --include=ШАБЛОН_НАЗВИ  шукати лише у файлах, назви яких відповідають виразу ШАБЛОН_НАЗВИ
      --exclude=ШАБЛОН_НАЗВИ  не шукати у файлах і каталогах, назви яких відповідають виразу ШАБЛОН_НАЗВИ
      --exclude-from=ФАЙЛ     пропустити файли, назви яких відповідають будь-якому з шаблонів з ФАЙЛа
      --exclude-dir=ШАБЛОН    пропустити каталоги, назви яких відповідають ШАБЛОНу.
   -E, --extended-regexp     ШАБЛОН є розширеним формальним виразом (ERE)
  -F, --fixed-strings       ШАБЛОН є набором рядків, розділених символом нового рядка
  -G, --basic-regexp        ШАБЛОН є звичайним формальним виразом (BRE)
  -P, --perl-regexp         ШАБЛОН є формальним виразом Perl
   -I                        те саме, що і --binary-files=without-match
  -d, --directories=ДІЯ     визначити спосіб обробки каталогів;
                            ДІЄЮ може бути `read' (прочитати), `recurse'
                            (обробити рекурсивно) або `skip' (пропустити)
  -D, --devices=ДІЯ         визначити спосіб обробки файлів пристроїв, FIFO
                            та сокетів;
                            ДІЄЮ може бути `read' (прочитати) або `skip'
                            (пропустити)
  -r, --recursive           те саме, що і --directories=recurse
  -R, --dereference-recursive  подібне, але з переходом за всіма символічними
                            посиланнями
   -L, --files-without-match показати назви лише тих файлів, у яких не виявлено відповідників
  -l, --files-with-matches  показати назви лише тих файлів, у яких виявлено відповідники
  -c, --count               показувати лише вказану кількість рядків-відповідників на ФАЙЛ
  -T, --initial-tab         вирівнювати результати табуляцією (якщо потрібно)
  -Z, --null                вивести байти 0 після назви ФАЙЛа
   -ЧИСЛО                     те саме, що і --context=ЧИСЛО
      --color[=ДЕ],
      --colour[=ДЕ]          використовувати маркери для позначення
                             рядків з відповідниками
                             ДЕ може приймати значення "always", "never" чи "auto".
  -U, --binary               не вилучати символи CR на кінці рядка (MSDOS/Windows)
  -u, --unix-byte-offsets    вказувати позицію без врахування символів
                             CR (MSDOS/Windows)

   -e, --regexp=ШАБЛОН       використовувати ШАБЛОН для встановлення відповідності
  -f, --file=ФАЙЛ           взяти ШАБЛОН із ФАЙЛа
  -i, --ignore-case         ігнорувати регістр літер
  -w, --word-regexp         використовувати ШАБЛОН лише для пошуку цілих слів
  -x, --line-regexp         використовувати ШАБЛОН лише для пошуку цілих рядків
  -z, --null-data           рядки даних закінчуються байтом "0", а не символом
                            кінця рядка (\n)
   -o, --only-matching       показувати лише частину рядка, яка збігається з ШАБЛОНом
  -q, --quiet, --silent     придушити виведення всіх звичайних даних
      --binary-files=ТИП    припускати, що всі бінарні файли належать до ТИПу;
                            ТИПом може бути `binary', `text' або `without-match'
  -a, --text                те саме, що і --binary-files=text
 Домашня сторінка %s: <%s>
 Домашня сторінка %s: <http://www.gnu.org/software/%s/>
 %s%s, аргумент «%s» є занадто об'ємним %s: некоректний параметр — «%c»
 %s: додавання аргументів до параметра «%c%s» не передбачено
 %s: параметр «%s» не є однозначним
 %s: параметр «%s» не є однозначним. Можливі варіанти: %s: додавання аргументів до параметра «--%s» не передбачено
 %s: до параметра «--%s» слід додати аргумент
 %s: додавання аргументів до параметра «-W %s» не передбачено
 %s: параметр «-W %s» не є однозначним
 %s: до параметра «-W %s» слід додати аргумент
 %s: до параметра слід додати аргумент — «%c»
 %s: невідомий параметр «%c%s»
 %s: невідомий параметр «--%s»
 » «egrep» відповідає команді «grep -E». «fgrep» — «grep -F».
Безпосередній виклик команд «egrep» та «fgrep» використовувати не варто.
 © (стандартне джерело вхідних даних) у -P передбачено підтримку лише однобайтових локалей та UTF-8 Двійковий файл %s містить збіжність
 Приклад: %s -i 'hello world' menu.h main.c

Вибір за формальними виразами і інтерпретація:
 Загальна довідкова інформація щодо використання програмного забезпечення GNU: <http://www.gnu.org/gethelp/>
 Некоректне зворотне посилання Некоректна назва класу символів Некоректний символ порівняння Некоректний вміст \{\} Помилка у попередньому формальному виразі Некоректне завершення діапазону Помилка у формальному виразі Пам'ять вичерпано Mike Haertel Не знайдено Не виявлено попереднього формального виразу ШАБЛОНом, типово, є звичайний формальний вираз (BRE).
 Пакування — %s
 Пакування — %s (%s)
 Неочікуване завершення формального виразу Занадто об'ємний формальний вираз Про вади у %s повідомляйте на адресу %s
 Шукати ШАБЛОН у кожному ФАЙЛі або стандартному джерелі вхідних даних.
 Успіх Кінцевий символ похилої риски Віддайте команду «%s --help», щоб дізнатися більше.
 Невідома системна помилка Неврівноважена послідовність ( або \( Неврівноважена послідовність ) або \) Незавершена послідовність [, [^, [:, [. або [= Неврівноважена послідовність \{ Використання: %s [ПАРАМЕТР]... ШАБЛОН [ФАЙЛ]...
 Список коректних аргументів: Якщо не вказано ФАЙЛом є -, читати дані зі стандартного джерела вхідних
даних. Якщо не вказано ФАЙЛ, читати ., якщо ж вказано параметр -r і -, якщо
його не вказано. Якщо вказано менше ніж два ФАЙЛи, буде використано -h.
Код завершення 0 — якщо було виявлено відповідники, 1 — коли їх нема,
2 — якщо сталася помилка і не було використано параметр -q.
 Автори: %s і %s.
 Автори: %s, %s, %s,
%s, %s, %s, %s,
%s, %s та інші.
 Автори: %s, %s, %s,
%s, %s, %s, %s,
%s і %s.
 Автори: %s, %s, %s,
%s, %s, %s, %s,
і %s.
 Автори: %s, %s, %s,
%s, %s, %s і %s.
 Автори: %s, %s, %s,
%s, %s і %s.
 Автори: %s, %s, %s,
%s і %s.
 Автори: %s, %s, %s
і %s.
 Автори: %s, %s і %s.
 Автор — %s.
 « неоднозначний аргумент, %s, %s синтаксичну конструкцію класу символів слід визначати так: [[:space:]], а не так: [:space:] задані умови відповідності є суперечливими перевищено обмеження на зворотне стеження у PCRE перевищено обмеження на довжину рядка PCRE вичерпано стек JIT PCRE не вдалося отримати область пам’яті під стек JIT PCRE не вдалося повернутись до початкового робочого каталогу файл вхідних даних %s є також файлом вихідних даних вхідні дані занадто довгі для обліку внутрішня помилка PCRE: %d внутрішня помилка внутрішня помилка (такої помилки не повинно було статися) некоректний аргумент %s%s — «%s» некоректний аргумент, %s, %s некоректний клас символів некоректний вміст \{\} помилковий аргумент довжини контексту некоректний вираз порівняння %s помилкова максимальна кількість некоректний суфікс у аргументі %s%s «%s» помилка lseek пам'ять вичерпано не вказано синтаксис інші, див. <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS> зациклення рекурсивного проходу каталогів занадто об'ємний формальний вираз цей виконуваний файл зібрано без підтримки параметра -P (--disable-perl-regexp) аргументом параметра -P може бути лише один шаблон не вдалося зберегти поточний робочий каталог неврівноважена дужка ( неврівноважена дужка ) неврівноважена дужка [ підтримки неекранованих ^ чи $ при використанні з -Pz не передбачено незавершена \-послідовність невідомий тип двійкових файлів невідомий спосіб обробки для пристроїв попередження: %s: %s попередження: GREP_OPTIONS вважається застарілою; будь ласка, скористайтеся альтернативною змінною або скриптом помилка запису 