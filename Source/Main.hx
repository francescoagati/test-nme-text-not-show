package;

import motion.Actuate;
import openfl.display.Sprite;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.Lib;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.events.KeyboardEvent;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import Slides.ListSlides;

class Main extends Sprite {
	var inited:Bool;
	var messageField:TextField;
	var slides:Slides;

	/* ENTRY POINT */

	function resize(e) {
		if (!inited) init();
		// else (resize or orientation change)
	}

	function init() {
		if (inited) return;
		inited = true;

		var bitmapData = Assets.getBitmapData ("assets/haxe.png");
		var bitmap = new Bitmap (bitmapData);



		bitmap.width = 400;
		bitmap.height = 400;
		bitmap.x = 0;
		bitmap.y = 50; //(stage.height - bitmap.height) / 2;
		bitmap.alpha = .5;


		Actuate.tween (bitmap, 3, { alpha: 1,y:-560 }).repeat().reflect();

		slides = new Slides();


			var messageFormat:TextFormat = new TextFormat("Verdana", 24, 0xffffff, true);
			messageFormat.align = TextFormatAlign.LEFT;

			messageField = new TextField();

			messageField.width = 800;
			messageField.height = 200;
			messageField.x = 100;
			messageField.y = 150; //(stage.height - messageField.height) / 2;

			messageField.defaultTextFormat = messageFormat;
			messageField.selectable = false;
			messageField.text = "HAXE\nTHE CROSS PLATFORM TOOLKIT";

			addChild(bitmap);
			addChild(messageField);




		stage.addEventListener(KeyboardEvent.KEY_DOWN,onKeyDown);

	}

	/* SETUP */

	public function new() {
		super();
		addEventListener(Event.ADDED_TO_STAGE, added);


		//this.graphics.beginFill(0xf0f0f0);
		//this.graphics.drawRect(0, 0, 15, 100);
		//this.graphics.endFill();

		//this.graphics.beginFill(0x00ff00);
		//this.graphics.drawCircle(100, 100, 100);
		//this.graphics.endFill();




		//Actuate.tween (messageField, 1, { alpha: 1 });


	}

	function onKeyDown(evt:KeyboardEvent):Void {
		//messageField.text = '${evt.keyCode}'
		messageField.text = switch (evt.keyCode) {
			case 40: slides.next();
			case 38: slides.prev();
			case _:slides.get();
		}
	}


	function added(e) {
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}

	public static function main() {

		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());

	}
}
