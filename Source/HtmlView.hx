import cocktail.api.CocktailView;
import openfl.display.Sprite;
import openfl.events.Event;

class HtmlView extends Sprite {
  public var cv:CocktailView;

  function added(e) {

    x = 100;
    y = 200;
    width = 800;
    height = 800;


    cv = new CocktailView();

    cv.loadHTML('
      <html><head></head><body><div id="container"></div></body></html>
    ');


    addChild(cv.root);


  }

  public function new() {
    super();
    addEventListener(Event.ADDED_TO_STAGE, added);

/*
    var circle:Sprite = new Sprite();
    circle.graphics.beginFill(0x990000);
    circle.graphics.drawCircle(50, 50, 50);
    circle.graphics.endFill();
    addChild(circle);
*/
  }

}
