��    ;      �  O   �        �   	  c   �  �     a   �  K   �  �   D  '  A     i	     �	  *   �	  �  �	  -   �  &   �     �  .     )   E  )   o  -   �  I   �               >  "   L      o  &   �  -   �  -   �          3  #   C  6   g     �     �     �     �     �  &     O   +  -   {     �     �  #   �  "   �  %     "   4  %   W     }     �     �     �     �     �  5   �     3     G     [     r     �  e  �  �   	  l   �  �   �  m   �  H      �   I  -  E     s     �  0   �    �  /   �  /   &      V  +   w  ,   �  -   �  1   �  W   0     �      �     �  2   �  &   �  /   #  &   S  ,   z     �     �  (   �  @     '   F  *   n     �  '   �  &   �  -   �  W     5   w     �     �  #   �  $   �  '     $   E  '   j  6   �     �     �     �           &   8   -      f      z      �       �      �      7   6   )      -   &                     (   *   8                      1   ;         "   
          $           9   4                              3          +   2          5              /                     :   !                    0   #   %   	      ,   '                .              --allow-unassigned   Toggle IDNA AllowUnassigned flag (default off)
      --usestd3asciirules  Toggle IDNA UseSTD3ASCIIRules flag (default off)
       --debug              Print debugging information
      --quiet              Silent operation
       --no-tld             Don't check string for TLD specific rules
                             Only for --idna-to-ascii and --idna-to-unicode
   -h, --help               Print help and exit
  -V, --version            Print version and exit
   -n, --nfkc               Normalize string according to Unicode v3.2 NFKC
   -p, --profile=STRING     Use specified stringprep profile instead
                             Valid stringprep profiles: `Nameprep',
                             `iSCSI', `Nodeprep', `Resourceprep', 
                             `trace', `SASLprep'
   -s, --stringprep         Prepare string according to nameprep profile
  -d, --punycode-decode    Decode Punycode
  -e, --punycode-encode    Encode Punycode
  -a, --idna-to-ascii      Convert to ACE according to IDNA (default mode)
  -u, --idna-to-unicode    Convert from ACE according to IDNA
 Cannot allocate memory Charset `%s'.
 Code points prohibited by top-level domain Command line interface to the internationalized domain name library.

All strings are expected to be encoded in the preferred charset used
by your locale.  Use `--debug' to find out what this charset is.  You
can override the charset used by setting environment variable CHARSET.

To process a string that starts with `-', for example `-foo', use `--'
to signal the end of parameters, as in `idn --quiet -a -- -foo'.

Mandatory arguments to long options are mandatory for short options too.
 Conflicting bidirectional properties in input Error in stringprep profile definition Flag conflict with profile Forbidden leading or trailing minus sign (`-') Forbidden unassigned code points in input Input already contain ACE prefix (`xn--') Input does not start with ACE prefix (`xn--') Internationalized Domain Name (IDN) convert STRINGS, or standard input.

 Invalid input Malformed bidirectional string Missing input No top-level domain found in input Non-digit/letter/hyphen in input Output would be too large or too small Output would exceed the buffer space provided Prohibited bidirectional code points in input Prohibited code points in input Punycode failed String not idempotent under ToASCII String not idempotent under Unicode NFKC normalization String preparation failed String size limit exceeded Success System dlopen failed System iconv failed Try `%s --help' for more information.
 Type each input string on a line by itself, terminated by a newline character.
 Unicode normalization failed (internal error) Unknown error Unknown profile Usage: %s [OPTION]... [STRINGS]...
 could not convert from %s to UTF-8 could not convert from UCS-4 to UTF-8 could not convert from UTF-8 to %s could not convert from UTF-8 to UCS-4 could not do NFKC normalization idna_to_ascii_4z: %s idna_to_unicode_8z4z (TLD): %s idna_to_unicode_8z4z: %s input error malloc only one of -s, -e, -d, -a, -u or -n can be specified punycode_decode: %s punycode_encode: %s stringprep_profile: %s tld_check_4z (position %lu): %s tld_check_4z: %s Project-Id-Version: libidn 1.21
Report-Msgid-Bugs-To: bug-libidn@gnu.org
POT-Creation-Date: 2015-08-01 15:20+0200
PO-Revision-Date: 2011-12-05 17:30+0000
Last-Translator: Marco Colombo <m.colombo@ed.ac.uk>
Language-Team: Italian <tp@lists.linux.it>
Language: it
MIME-Version: 1.0
Content-Type: text/plain; charset=iso-8859-1
Content-Transfer-Encoding: 8bit
       --allow-unassigned   Attiva l'opzione IDNA AllowUnassigned
      --usestd3asciirules  Attiva l'opzione IDNA UseSTD3ASCIIRules
       --debug              Stampa le informazioni di debug
      --quiet              Opera silenziosamente
       --no-tld             Non controllare le regole per TLD nelle stringhe
                             Solo per --idna-to-ascii e --idna-to-unicode
   -h, --help               Stampa questo aiuto ed esce
  -V, --version            Stampa la versione ed esce
   -n, --nfkc               Normalizza la stringa come Unicode v3.2 NFKC
   -p, --profile=STRINGA    Usa il profilo stringprep indicato
                             Validi profili stringprep sono: `Nameprep',
                             `iSCSI', `Nodeprep', `Resourceprep', 
                             `trace', `SASLprep'
   -s, --stringprep         Prepara la stringa secondo il profilo nameprep
  -d, --punycode-decode    Decodifica Punycode
  -e, --punycode-encode    Codifica Punycode
  -a, --idna-to-ascii      Converti in ACE secondo IDNA (modalit� predefinita)
  -u, --idna-to-unicode    Converti da ACE secondo IDNA
 Impossibile allocare memoria Set di caratteri "%s".
 Codepoints proibiti dal dominio di primo livello Interfaccia per la libreria di nomi di dominio internazionalizzati.

Si assume che tutte le stringhe siano codificate nel set di caratteri
della localizzazione in uso. Usare "--debug" per scoprire quale sia tale set.
Il set di caratteri in uso pu� essere cambiato impostando la variabile
d'ambiente CHARSET.

Per elaborare una stringa cha comincia con "-", per esempio "-foo", usare "--"
per segnalare la fine dei parametri, come in "idn --quiet -a -- -foo".

Gli argomenti obbligatori per le opzioni lunghe lo sono anche per quelle corte.
 Propriet� bidirezionali in conflitto nell'input Errore nella definizione del profilo stringprep Flag in conflitto con il profilo Segno meno ("-") iniziale o finale proibito Codepoints non assegnati proibiti nell'input L'input contiene gi� il prefisso ACE ("xn--") L'input non comincia con il prefisso ACE ("xn--") Converte STRINGHE (o lo standard input) in nomi di dominio internazionalizzato (IDN).

 Input non valido Stringa bidirezionale malformata Input mancante Nessun dominio di primo livello trovato nell'input Non-numero/lettera/trattino nell'input L'output sarebbe troppo grande o troppo piccolo L'output eccederebbe il buffer fornito Codepoints bidirezionali proibiti nell'input Codepoints proibiti nell'input Punycode non riuscito La stringa non � idempotente per ToASCII La stringa non � idempotente per la normalizzazione Unicode NFKC Preparazione della stringa non riuscita Limite di grandezza della stringa superato Successo Chiamata di sistema dlopen non riuscita Chiamata di sistema iconv non riuscita Usare "%s --help" per maggiori informazioni.
 Scrivere ogni stringa di input in una riga a s�, terminata da un carattere di newline.
 Normalizzazione Unicode non riuscita (errore interno) Errore sconosciuto Profilo sconosciuto Uso: %s [OPZIONI]... [STRINGHE]...
 impossibile convertire da %s a UTF-8 impossibile convertire da UCS-4 a UTF-8 impossibile convertire da UTF-8 a %s impossibile convertire da UTF-8 a UCS-4 impossibile effettuare la normalizzazione Unicode NFKC idna_to_ascii_4z: %s idna_to_unicode_8z4z (TLD): %s idna_to_unicode_8z4z: %s errore di input malloc pu� essere indicato solo uno tra -s, -e, -d, -a, -u e -n punycode_decode: %s punycode_encode: %s stringprep_profile: %s tld_check_4z (posizione %lu): %s tld_check_4z: %s 