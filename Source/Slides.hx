typedef ListSlides = Array<String>;

@:forward abstract AListSlides(ListSlides) from ListSlides to ListSlides {
   public inline function new(list:ListSlides) this = list;
   @:op(A << B) public inline function addSlide(slide:String) this.push(slide);
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
        Classi,interface,metodi statici...
      ";

      slides << "
        SINTASSI C LIKE
        Sintassi simile a c+,java,javascript...
      ";

      slides << "
        OOP
        Modello a oggetti simile a java
        Classi,interface,metodi statici...
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
        EXTERNS
        permettono di mappare librerie esterne
        con il type system
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
        Estende gli oggetti a compile time
        senza bisogno di ereditarietà
      ";

      slides << "
        INLINE
        inlining di funzioni e costruttori
        permette maggiori prestazioni
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


    }

}
