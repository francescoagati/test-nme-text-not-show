package nme;

#if (waxe && !nme)
import wx.Assets;
import wx.AssetInfo;
import wx.AssetType;
#else
import nme.Assets;
import nme.AssetInfo;
import nme.AssetType;
#end

class AssetData
{
   public static function create():Void
   {
      var info = Assets.info;

      
      
      info.set("assets/serif.woff", new AssetInfo("assets/serif.woff",AssetType.BINARY,false,"nme.Assets_serif_woff"));
      info.set("assets/serif.eot", new AssetInfo("assets/serif.eot",AssetType.BINARY,false,"nme.Assets_serif_eot"));
      info.set("assets/haxe.png", new AssetInfo("assets/haxe.png",AssetType.IMAGE,false,"nme.Assets_haxe_png"));
      info.set("assets/serif.svg", new AssetInfo("assets/serif.svg",AssetType.TEXT,false,"nme.Assets_serif_svg"));
      info.set("assets/serif.ttf", new AssetInfo("assets/serif.ttf",AssetType.FONT,false,"nme.Assets_serif_ttf"));
      
   }
}

#if flash
class Assets_serif_woff extends nme.utils.ByteArray { }
class Assets_serif_eot extends nme.utils.ByteArray { }
class Assets_haxe_png extends flash.display.BitmapData { public function new()super(0,0); }
class Assets_serif_svg extends nme.utils.ByteArray { }
class Assets_serif_ttf extends flash.text.Font { }

#end


