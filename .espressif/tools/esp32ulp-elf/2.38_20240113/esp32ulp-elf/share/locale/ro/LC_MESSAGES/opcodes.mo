��    [      �     �      �     �  [   �     '     4     @     N     h  	   �     �  	   �     �     �     �     �  (   	     ;	     Q	     p	     �	     �	     �	  &   �	  *   �	     (
  
   @
  D   K
  C   �
  +   �
  &         '  "   A  !   d     �  )   �     �     �  %   �  /        N     f     �     �  +   �     �     �  #     7   4  !   l  !   �  5   �  "   �  +   	     5     E  "   `     �     �     �     �  %   �  &        E     Y     m  !   y  ;   �     �  +   �  /   !     Q  &   p  2   �  2   �  2   �  ,   0     ]  )   w     �     �     �  5   �  -   -  ;   [  /   �  	   �     �     �     �           "  R  ;     �  ^   �     �     �     	  "     "   >     a      n     �  &   �     �     �      �  *        9  )   R  &   |  %   �  $   �     �  9     .   >     m  
   �  I   �  F   �  *     $   H  -   m  ;   �  2   �     
  5   #  !   Y     {  /   �  E   �     	  #   )     M     i  B   �  .   �     �  '     >   B  (   �  &   �  ;   �  	     /        G     V  7   u  2   �  2   �  *     !   >  )   `  (   �     �  #   �  
   �        :     *   Z  /   �  3   �  "   �  '      ?   4   <   t   ?   �   6   �      (!  (   A!     j!  (   �!     �!  D   �!  6   "  R   I"  4   �"     �"     �"     �"     #  $   %#     J#        B   P   Q       .       =   K      S   ?   J   (   	   )   $   E   8   9   L   %           1   2                  M                :       T      #   ,       U       5          0           "      4                           A   R           !   Y   X      V       [         I       ;      O       7       
          N      @           '          -      F   D   &   >           H            Z   /   3              <   C          *      +   W   6                       G       
 
The following ARM specific disassembler options are supported for use with
the -M switch:
 $<undefined> %s: Error:  %s: Warning:  (DP) offset out of range. (SP) offset out of range. (unknown) *unknown operands type: %d* *unknown* 21-bit offset out of range <function code %d> <illegal precision> <internal disassembler error> <internal error in opcode table: %s %s>
 <unknown register %d> Attempt to find bit index of 0 Bad immediate expression Bad register in postincrement Bad register in preincrement Bad register name Byte address required. - must be even. Don't know how to specify # dependency %s
 Don't understand 0x%x 
 Hmmmm 0x%x IC note %d for opcode %s (IC:%s) conflicts with resource %s note %d
 IC note %d in opcode %s (IC:%s) conflicts with resource %s note %d
 IC:%s [%s] has no terminals or sub-classes
 IC:%s has no terminals or sub-classes
 Label conflicts with `Rx' Label conflicts with register name No relocation for small immediate Operand is not a symbol Small operand was not an immediate number Syntax error: No trailing ')' Unknown error %d
 W keyword invalid in FR operand slot. attempt to set y bit when using + or - modifier bad instruction `%.50s' bad instruction `%.50s...' branch operand unaligned branch to odd offset branch value not in range and to odd offset branch value out of range can't find %s for reading
 can't find ia64-ic.tbl for reading
 cgen_parse_address returned a symbol. Literal required. class %s is defined but not used
 displacement value is not aligned displacement value is not in range and is not aligned displacement value is out of range don't know how to specify %% dependency %s
 illegal bitmask illegal use of parentheses immediate value cannot be register immediate value is out of range immediate value out of range index register in load range invalid conditional option invalid register for stack adjustment invalid register operand when updating jump hint unaligned junk at end of line missing `)' missing mnemonic in syntax string most recent format '%s'
appears more restrictive than '%s'
 multiple note %s not handled
 no insns mapped directly to terminal IC %s
 no insns mapped directly to terminal IC %s [%s] offset(IP) is not a valid form opcode %s has no class (ops %d %d %d)
 operand out of range (%ld not between %ld and %ld) operand out of range (%ld not between %ld and %lu) operand out of range (%lu not between %lu and %lu) operand out of range (not between 1 and 255) overlapping field %s->%s
 overwriting note %d with note %d (IC:%s)
 parse_addr16: invalid opindex. register number must be even rsrc %s (%s) has no regs
 source and target register operands must be different syntax error (expected char `%c', found `%c') syntax error (expected char `%c', found end of instruction) unable to change directory to "%s", errno = %s
 undefined unknown unknown	0x%04lx unknown constraint `%c' unrecognized form of instruction unrecognized instruction Project-Id-Version: opcodes 2.37.90
Report-Msgid-Bugs-To: https://sourceware.org/bugzilla/
POT-Creation-Date: 2022-01-22 12:21+0000
PO-Revision-Date: 2022-01-23 16:53+0100
Last-Translator: Remus-Gabriel Chelu <remusgabriel.chelu@disroot.org>
Language-Team: Romanian <translation-team-ro@lists.sourceforge.net>
Language: ro
MIME-Version: 1.0
Content-Type: text/plain; charset=UTF-8
Content-Transfer-Encoding: 8bit
X-Bugs: Report translation errors to the Language-Team address.
Plural-Forms: nplurals=3; plural=(n==1 ? 0 : (n==0 || (n%100 > 0 && n%100 < 20)) ? 1 : 2);
X-Generator: Poedit 2.3.1
 
 
Opțiunile ARM de dezasamblor specifice următoare sunt permise cu folosirea
switch-ului -M:
 $<nedefinit> %s: Eroare:  %s: Avertisment:  (DP) offset în afara intervalului (SP) offset în afara intervalului (necunoscut) *tip necunoscut de operanzi: %d* *necunoscut(ă)* offsetul 21 bit în afara intervalului <cod funcție %d> <precizie ilegală> <eroare internă de dezasamblor> <eroare internă în tabel opcode: %s %s>
 <registru necunoscut %d> Se încearcă găsirea bitului index de 0 Expresie directă(immediate) greșită Registru greșit în postincrementare Registru greșit în preincrementare Nume registru greșit Se necesită adresă byte. -trebuie să fie pară (even). nu știu cum se specifică dependințele # %s
 Nu înțeleg 0x%x 
 Hmmmm 0x%x Nota IC %d pentru opcode %s (IC:%s) e în conflict cu resursa %s nota %d
 Nota IC %d din opcode %s (IC:%s) e în conflict cu resursa %s nota %d
 IC:%s [%s] nu are terminale sau sublclase
 IC:%s nu are terminale sau subclase
 Eticheta(label) se află în conflict cu `Rx' Eticheta(label) se află în conflict cu numele de registru Nici o relocare pentru mai mic directă(immediate) Operandul nu este simbol Operandul redus nu a fost un număr direct(immediate) Eroare de sintaxă:Nu există ')' Eroare necunoscută %d
 Cuvânt cheie W invalidv în slotul operand FR. se încearcă setarea bitului y în folosirea modificatorilor + sau - instrucțiune greșită `%.50s' instrucțiune greșită ``%.50s...' ramură operand nealiniată ramură(branch) la offset impar valoare ramură(branch) în afara intervalului și la offset impar valoare ramură(branch) în afara intervalului nu pot găsi %s pentru citire
 nu pot găsi ia64-ic.tbl pentru citire
 cgen_parse_address a returnat un simbol. Se necesită literal. clasa %s este definită dar nefolosită
 valoarea deplasării nu este aliniată valoarea deplasării în afara intervalului și nealiniată deplasare nu știu cum se specifică dependințele %% %s
 bitmask ilegal Folosire ilegală de paranteze valoarea directă(immediate) nu poate fi înregistrată valoare directă(immediate) în afara intervalului valoare directă(immediate) în afara intervalului registru index în interval de încărcare opțiune condițională invalidă registru invalid pentru modificare stivă registru de operand invalid în updatare sugestie salt(jump) nealiniat resturi(junk) la sfârșit de linie `)' lipsă mnemonică lipsă în sintaxă cel mai recent format %s 
pare mai restrictiv decât '%s'
 notele multiple %s nerezolvabile(handled)
 nici un insns mapat direct la terminalul IC %s
 nici un insns mapat direct la terminalul IC %s [%s] offsetul(IP) nu are formă validă opcode %s nu are clasă (ops %d %d %d)
 operand în afara intervalului (%ld nu este între %ld și %ld) operand în afara limitelor (%ld nu este între %ld și %lu) operand în afara intervalului (%lu nu este între %lu și %lu) operand în afara limitelor (nu este între 0 și 255) câmp suprapus %s -> %s
 suprascriere nota %d cu nota %d (IC:%s)
 parse_addr16: opindex invalid. numărul registrului trebuie să fie par rsrc %s (%s) nu areo regs
 operanzii regiștri sursă și destinație trebuie să fie diferiți eroare de sintaxă ( se aștepta %c', s-a primit `%c') eroare de sintaxă (s-a așteptat char `%c' s-a primit sfârșit de instrucțiune) nu am putut schimba directorul în "%s", errno = %s
 nedefinit(ă) necunoscut(ă) necunoscut(ă)	0x%04lx constrângere necunoscută `%c' formă de instrucțiune necunoscută instrucțiune necunoscută 