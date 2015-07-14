using StringTools;
typedef ListSlides = Array<String>;

@:forward abstract AListSlides(ListSlides) from ListSlides to ListSlides {
   public inline function new(list:ListSlides) this = list;
   @:op(A << B) public inline function addSlide(slide:String) {
     //var rg =  ~/\s+/gi;
     this.push(slide.trim());
  }
}

class Slides {
    var index:Int;
    public static var slides:AListSlides;


    static function __init__() {
      populateSlides();
    }


    public function new() {
      index = 0;
    }

    public function next() {
      if (index <= slides.length -1 ) ++index; else index = slides.length -1;
      return get();
    }


    public function prev() {
      if (index >= 0) --index; else index = 0;
      return get();
    }


    public function get() {
      return slides[index];
    }

    public static function populateSlides() {
      slides = [];

      slides << "
HAXE
THE CROSS LANGUAGE TOOLKIT
      ";

      slides << "
Creato nel 2005
da
Nicolas Canasse
      ";

      slides << "
OOP
Modello a oggetto simile a java
Classi, interface, metodi statici...
      ";

      slides << "
SINTASSI C LIKE
Sintassi simile a c+, java, javascript...
      ";


      slides << "
CLOSURE
Funzioni anonime e closure
      ";

      slides << "
STRING INTERPOLATION
come in php
'$x + $y'
      ";


      slides << "
STRICTLY TYPED
Type System statico
con Type Inference
      ";

      slides << "
DYNAMICS
oggetti dinamici
senza type checking
      ";

      slides << "
Untyped
blocchi di codice in cui
il type checking è disabilitato
      ";




      slides << "
EXTERNS
permettono di mappare librerie esterne
con il type system
      ";

      slides << "
Magic variables
comandi che permettono di aprire finestre
dove poter inserire codice nativo
      ";

      slides << "
TYPES
supporta tipi
tramite typedef (simile alle strutture in c)
e tipi anonimi
      ";

      slides << "
ABSTRACT TYPES
Definizione di tipi astratti
esistenti solo a compile type
      ";


      slides << "
ABSTRACT TYPES
Operator Overloading, Array Access,
Method forwarding, Implicit Cast
      ";



      slides << "
STATIC ESTENSION
Estende oggetti e classi a compile time
senza bisogno di ereditarietà
      ";

      slides << "
INLINE
inlining di funzioni e costruttori
permette maggiori prestazioni
      ";


      slides << "
ENUM (Algebrical Data Type)
Enumeration con e senza parametri
      ";

      slides << "
GENERICS
Permette di generare codice per ogni
singolo generic definito
      ";

      slides << "
Pattern Matching
su enum,array e tipi
(type checking compile time)
      ";


      slides << "
MACRO SYSTEM
Permette di generare codice
a compile time
utile per scrivere dsl
      ";

      slides << "
MACRO SYSTEM
si integra con il type system
il compilatore controlla
la validità del codice
      ";


      slides << "
MACRO SYSTEM AUTOBUILD
manipolano le classi dinamicamente
aggiungendo e modificand metodi
      ";

      slides << "
MACRO SYSTEM GENERICS BUILD
creazione di nuovi tipi e classi
tramite le macro
      ";

      slides << "
MACRO REIFICATION
scrittura di macro con \"templating\"
simili a lisp macro
      ";

      slides << "
MACRO REIFICATION
pattern matching con reification
simili a pattern based macros di SCHEME
      ";

      slides << "
METADATA
Simile alle annotations java
      ";


      slides << "
METADATA MACRO
processate dalle macro
non vengono esportate a runtime
      ";

      slides << "
FLAG SYSTEM
Permette di definire dei flag di compilazione
da utilizare tramite un macro linguaggio
simili a preprocessori c
      ";


      slides << "
STATIC ANALYZER
analizza il codice per incrementarne
le prestazioni
      ";


      slides << "
BUILD SYSTEM
basato su file permette di creare
piu' build e di lanciare comandi
dopo la compilazione
      ";


      slides << "
STANDARD CORE LIBRARY
Simili a core java e javascript
      ";

      slides << "
XML e JSON
nella core library
      ";

      slides << "
REMOTING
RPC per comunicazione simile a SOAP
      ";

      slides << "
REMOTING PROXY
Crea proxy sincroni e asincroni
di una classe
      ";

      slides << "
SPOD
ORM SQL con type checking
e macro DSL per query
      ";

      slides << "
WEB DISPATCHER
Url router con validazione uri
con type system
      ";


      slides << "
REFLECTION
Per ispezionare a runtime gli oggetti
      ";

      slides << "
HSCRIPT
interprete haxe in haxe (subset)
utile per debuggare codice a runtime
senza ricompilare
      ";


      slides << "
SERIALIZER
Serializer con mantenimento
informazioni sui tipi
      ";


      slides << "
NEKO
la VM in cui viene eseguito
il codice Haxe compilato
in byte code
      ";

      slides << "
NEKO
utile per eseguirlo serve side
oppure....
      ";

      slides << "
HAXE
Può compilare anche in....
      ";

      slides << "
1. NEKO
      ";

      slides << "
2. JAVASCRIPT
      ";

      slides << "
3. FLASH
      ";

      slides << "
4. PHP
      ";
      slides << "
5. C++
      ";

       slides << "
6. JAVA
       ";

       slides << "
7. C#
       ";

       slides << "
8. PYTHON
       ";

       slides << "
9. LUA (experimental)
       ";

       slides <<  "
10. RUBY (experimental)
       ";
       slides <<  "
11. SWIFT (work in progress...)
       ";

       slides << "
HAXE
permette di scrivere codice
client side,server side e
mobile/desktop nativo
       ";


       slides <<  "
HAXE
Utilizzato soprattutto
per scrivere giochi compilati
in HTML5, FLASH e
MOBILE/DESKTOP/CONSOLE
       ";


       slides <<  "
NME
porting della Flash Api
su nativo c++
IOS/ANDROID/WMOBILE/LINUX/MAC
ANDROID e IOS View
       ";



       slides <<  "
OPENFL
fork di NME (compatibili)
con backend modulari
NME + HTML5 + CONSOLE
       ";


       slides <<  "
STABLEXUI/HAXEUI/JIVE
UI framework per openfl
uso di XML per definire interfacce
       ";

       slides <<  "
STABLEXUI/HAXEUI/JIVE
XML e codice possono essere
processati a runtime (fast reload)
o a compiletime con macro system
       ";

       slides <<  "
HAXEFIXEL/HAXEPUNK
Framework per creare giochi
con OPENFL
       ";

       slides <<  "
FLAMBLE
Framework per creare giochi
con adobe air
       ";


       slides <<  "
HAXELIB
comand per gestire le librerie
e le dipendenze
come npm,rubygems,...
       ";

       slides <<  "
try.haxe.org
sito per testare online haxe
(macro bloccate per security)
       ";


    }

}
