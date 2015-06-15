(function (console, $hx_exports) { "use strict";
$hx_exports.openfl = $hx_exports.openfl || {};
$hx_exports.lime = $hx_exports.lime || {};
var $hxClasses = {},$estr = function() { return js_Boot.__string_rec(this,''); };
function $extend(from, fields) {
	function Inherit() {} Inherit.prototype = from; var proto = new Inherit();
	for (var name in fields) proto[name] = fields[name];
	if( fields.toString !== Object.prototype.toString ) proto.toString = fields.toString;
	return proto;
}
var ApplicationMain = function() { };
$hxClasses["ApplicationMain"] = ApplicationMain;
ApplicationMain.__name__ = true;
ApplicationMain.config = null;
ApplicationMain.preloader = null;
ApplicationMain.create = function() {
	var app = new lime_app_Application();
	app.create(ApplicationMain.config);
	openfl_Lib.application = app;
	var stage = new openfl_display_Stage(app.windows[0].__width,app.windows[0].__height,ApplicationMain.config.background);
	stage.addChild(openfl_Lib.current);
	app.addModule(stage);
	var display = new NMEPreloader();
	ApplicationMain.preloader = new openfl_display_Preloader(display);
	ApplicationMain.preloader.onComplete = ApplicationMain.init;
	ApplicationMain.preloader.create(ApplicationMain.config);
	var urls = [];
	var types = [];
	urls.push("assets/haxe.png");
	types.push("IMAGE");
	if(ApplicationMain.config.assetsPrefix != null) {
		var _g1 = 0;
		var _g = urls.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(types[i] != "FONT") urls[i] = ApplicationMain.config.assetsPrefix + urls[i];
		}
	}
	ApplicationMain.preloader.load(urls,types);
	var result = app.exec();
};
ApplicationMain.init = function() {
	var loaded = 0;
	var total = 0;
	var library_onLoad = function(__) {
		loaded++;
		if(loaded == total) ApplicationMain.start();
	};
	ApplicationMain.preloader = null;
	if(loaded == total) ApplicationMain.start();
};
ApplicationMain.main = function() {
	ApplicationMain.config = { antialiasing : 0, background : 0, borderless : false, company : "Company Name", depthBuffer : false, file : "Project", fps : 60, fullscreen : false, hardware : true, height : 600, orientation : "", packageName : "com.sample.project", resizable : true, stencilBuffer : true, title : "Project", version : "1.0.0", vsync : false, width : 800};
};
ApplicationMain.start = function() {
	var hasMain = false;
	var entryPoint = Type.resolveClass("Main");
	var _g = 0;
	var _g1 = Type.getClassFields(entryPoint);
	while(_g < _g1.length) {
		var methodName = _g1[_g];
		++_g;
		if(methodName == "main") {
			hasMain = true;
			break;
		}
	}
	lime_Assets.initialize();
	if(hasMain) Reflect.callMethod(entryPoint,Reflect.field(entryPoint,"main"),[]); else {
		var instance = Type.createInstance(DocumentClass,[]);
	}
	openfl_Lib.current.stage.dispatchEvent(new openfl_events_Event(openfl_events_Event.RESIZE,false,false));
};
var openfl_events_IEventDispatcher = function() { };
$hxClasses["openfl.events.IEventDispatcher"] = openfl_events_IEventDispatcher;
openfl_events_IEventDispatcher.__name__ = true;
var openfl_events_EventDispatcher = function(target) {
	if(target != null) this.__targetDispatcher = target;
};
$hxClasses["openfl.events.EventDispatcher"] = openfl_events_EventDispatcher;
openfl_events_EventDispatcher.__name__ = true;
openfl_events_EventDispatcher.__interfaces__ = [openfl_events_IEventDispatcher];
openfl_events_EventDispatcher.__sortByPriority = function(l1,l2) {
	if(l1.priority == l2.priority) return 0; else if(l1.priority > l2.priority) return -1; else return 1;
};
openfl_events_EventDispatcher.prototype = {
	addEventListener: function(type,listener,useCapture,priority,useWeakReference) {
		if(useWeakReference == null) useWeakReference = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		if(this.__eventMap == null) {
			this.__dispatching = new haxe_ds_StringMap();
			this.__eventMap = new haxe_ds_StringMap();
			this.__newEventMap = new haxe_ds_StringMap();
		}
		if(!this.__eventMap.exists(type)) {
			var list = [];
			list.push(new openfl_events__$EventDispatcher_Listener(listener,useCapture,priority));
			this.__eventMap.set(type,list);
		} else {
			var list1;
			if(this.__dispatching.get(type) == true) {
				if(!this.__newEventMap.exists(type)) {
					var _this = this.__eventMap.get(type);
					list1 = _this.slice();
					this.__newEventMap.set(type,list1);
				} else list1 = this.__newEventMap.get(type);
			} else list1 = this.__eventMap.get(type);
			var _g1 = 0;
			var _g = list1.length;
			while(_g1 < _g) {
				var i = _g1++;
				if(Reflect.compareMethods(list1[i].callback,listener)) return;
			}
			list1.push(new openfl_events__$EventDispatcher_Listener(listener,useCapture,priority));
			list1.sort(openfl_events_EventDispatcher.__sortByPriority);
		}
	}
	,dispatchEvent: function(event) {
		if(this.__eventMap == null || event == null) return false;
		var type = event.type;
		var list = this.__eventMap.get(type);
		if(list == null) return false;
		this.__dispatching.set(type,true);
		if(event.target == null) {
			if(this.__targetDispatcher != null) event.target = this.__targetDispatcher; else event.target = this;
		}
		event.currentTarget = this;
		var capture = event.eventPhase == openfl_events_EventPhase.CAPTURING_PHASE;
		var index = 0;
		var listener;
		while(index < list.length) {
			listener = list[index];
			if(listener.useCapture == capture) {
				listener.callback(event);
				if(event.__isCancelledNow) break;
			}
			if(listener == list[index]) index++;
		}
		if(this.__newEventMap != null && this.__newEventMap.exists(type)) {
			var list1 = this.__newEventMap.get(type);
			if(list1.length > 0) this.__eventMap.set(type,list1); else this.__eventMap.remove(type);
			if(!this.__eventMap.iterator().hasNext()) {
				this.__eventMap = null;
				this.__newEventMap = null;
			}
			this.__newEventMap.remove(type);
		}
		this.__dispatching.set(event.type,false);
		return true;
	}
	,hasEventListener: function(type) {
		if(this.__eventMap == null) return false;
		return this.__eventMap.exists(type);
	}
	,removeEventListener: function(type,listener,capture) {
		if(capture == null) capture = false;
		if(this.__eventMap == null) return;
		var list = this.__eventMap.get(type);
		if(list == null) return;
		if(this.__dispatching.get(type) == true) {
			if(!this.__newEventMap.exists(type)) {
				var _this = this.__eventMap.get(type);
				list = _this.slice();
				this.__newEventMap.set(type,list);
			} else list = this.__newEventMap.get(type);
		}
		var _g1 = 0;
		var _g = list.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(list[i].match(listener,capture)) {
				list.splice(i,1);
				break;
			}
		}
		if(list.length == 0) this.__eventMap.remove(type);
		if(!this.__eventMap.iterator().hasNext()) {
			this.__eventMap = null;
			this.__newEventMap = null;
		}
	}
	,__class__: openfl_events_EventDispatcher
};
var openfl_display_IBitmapDrawable = function() { };
$hxClasses["openfl.display.IBitmapDrawable"] = openfl_display_IBitmapDrawable;
openfl_display_IBitmapDrawable.__name__ = true;
var openfl_display_DisplayObject = function() {
	this.__maskCached = false;
	openfl_events_EventDispatcher.call(this);
	this.__alpha = 1;
	this.__rotation = 0;
	this.__scaleX = 1;
	this.__scaleY = 1;
	this.__visible = true;
	this.__x = 0;
	this.__y = 0;
	this.__worldAlpha = 1;
	this.__worldTransform = new openfl_geom_Matrix();
	this.__rotationCache = 0;
	this.__rotationSine = 0;
	this.__rotationCosine = 1;
	this.__worldColorTransform = new openfl_geom_ColorTransform();
	this.set_name("instance" + ++openfl_display_DisplayObject.__instanceCount);
};
$hxClasses["openfl.display.DisplayObject"] = openfl_display_DisplayObject;
openfl_display_DisplayObject.__name__ = true;
openfl_display_DisplayObject.__interfaces__ = [openfl_display_IBitmapDrawable];
openfl_display_DisplayObject.__super__ = openfl_events_EventDispatcher;
openfl_display_DisplayObject.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	dispatchEvent: function(event) {
		var result = openfl_events_EventDispatcher.prototype.dispatchEvent.call(this,event);
		if(event.__isCancelled) return true;
		if(event.bubbles && this.parent != null && this.parent != this) {
			event.eventPhase = openfl_events_EventPhase.BUBBLING_PHASE;
			if(event.target == null) event.target = this;
			this.parent.dispatchEvent(event);
		}
		return result;
	}
	,getBounds: function(targetCoordinateSpace) {
		var matrix = this.__getTransform();
		if(targetCoordinateSpace != null) {
			matrix = new openfl_geom_Matrix(matrix.a,matrix.b,matrix.c,matrix.d,matrix.tx,matrix.ty);
			matrix.concat(targetCoordinateSpace.__worldTransform.clone().invert());
		}
		var bounds = new openfl_geom_Rectangle();
		this.__getBounds(bounds,matrix);
		return bounds;
	}
	,globalToLocal: function(pos) {
		return this.__getTransform().clone().invert().transformPoint(pos);
	}
	,__broadcast: function(event,notifyChilden) {
		if(this.__eventMap != null && this.hasEventListener(event.type)) {
			var result = openfl_events_EventDispatcher.prototype.dispatchEvent.call(this,event);
			if(event.__isCancelled) return true;
			return result;
		}
		return false;
	}
	,__getBounds: function(rect,matrix) {
		if(this.__graphics != null) this.__graphics.__getBounds(rect,matrix);
	}
	,__getCursor: function() {
		return null;
	}
	,__getInteractive: function(stack) {
		return false;
	}
	,__getTransform: function() {
		if(this.__transformDirty || openfl_display_DisplayObject.__worldTransformDirty > 0) {
			var list = [];
			var current = this;
			var transformDirty = this.__transformDirty;
			if(this.parent == null) {
				if(transformDirty) this.__update(true,false);
			} else while(current.parent != null) {
				list.push(current);
				current = current.parent;
				if(current.__transformDirty) transformDirty = true;
			}
			if(transformDirty) {
				var i = list.length;
				while(--i >= 0) list[i].__update(true,false);
			}
		}
		return this.__worldTransform;
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(this.__graphics != null) {
			if(this.get_visible() && this.__graphics.__hitTest(x,y,shapeFlag,this.__getTransform())) {
				if(!interactiveOnly) stack.push(this);
				return true;
			}
		}
		return false;
	}
	,__renderCairo: function(renderSession) {
		if(this.__graphics != null) openfl__$internal_renderer_cairo_CairoShape.render(this,renderSession);
	}
	,__renderCairoMask: function(renderSession) {
		if(this.__graphics != null) openfl__$internal_renderer_cairo_CairoGraphics.renderMask(this.__graphics,renderSession);
	}
	,__renderCanvas: function(renderSession) {
		if(this.__graphics != null) openfl__$internal_renderer_canvas_CanvasShape.render(this,renderSession);
	}
	,__renderCanvasMask: function(renderSession) {
		if(this.__graphics != null) openfl__$internal_renderer_canvas_CanvasGraphics.renderMask(this.__graphics,renderSession);
	}
	,__renderDOM: function(renderSession) {
		if(this.__graphics != null) openfl__$internal_renderer_dom_DOMShape.render(this,renderSession);
	}
	,__renderGL: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		if(this.__graphics != null) {
			if(this.__graphics.__hardware) openfl__$internal_renderer_opengl_utils_GraphicsRenderer.render(this,renderSession); else {
				openfl__$internal_renderer_canvas_CanvasGraphics.render(this.__graphics,renderSession);
				openfl__$internal_renderer_opengl_GLRenderer.renderBitmap(this,renderSession);
			}
		}
	}
	,__setStageReference: function(stage) {
		if(this.stage != stage) {
			if(this.stage != null) this.dispatchEvent(new openfl_events_Event(openfl_events_Event.REMOVED_FROM_STAGE,false,false));
			this.stage = stage;
			if(stage != null) this.dispatchEvent(new openfl_events_Event(openfl_events_Event.ADDED_TO_STAGE,false,false));
		}
	}
	,__setRenderDirty: function() {
		if(!this.__renderDirty) {
			this.__renderDirty = true;
			openfl_display_DisplayObject.__worldRenderDirty++;
		}
	}
	,__update: function(transformOnly,updateChildren,maskGraphics) {
		this.__renderable = this.get_visible() && this.get_scaleX() != 0 && this.get_scaleY() != 0 && !this.__isMask;
		if(this.get_rotation() != this.__rotationCache) {
			this.__rotationCache = this.get_rotation();
			var radians = this.get_rotation() * (Math.PI / 180);
			this.__rotationSine = Math.sin(radians);
			this.__rotationCosine = Math.cos(radians);
		}
		var sr = this.get_scrollRect();
		if(this.parent != null) {
			var parentTransform = this.parent.__worldTransform;
			var a00 = this.__rotationCosine * this.get_scaleX();
			var a01 = this.__rotationSine * this.get_scaleX();
			var a10 = -this.__rotationSine * this.get_scaleY();
			var a11 = this.__rotationCosine * this.get_scaleY();
			var b00 = parentTransform.a;
			var b01 = parentTransform.b;
			var b10 = parentTransform.c;
			var b11 = parentTransform.d;
			if(this.__worldTransform == null) this.__worldTransform = new openfl_geom_Matrix();
			this.__worldTransform.a = a00 * b00 + a01 * b10;
			this.__worldTransform.b = a00 * b01 + a01 * b11;
			this.__worldTransform.c = a10 * b00 + a11 * b10;
			this.__worldTransform.d = a10 * b01 + a11 * b11;
			this.__worldTransform.tx = this.get_x() * b00 + this.get_y() * b10 + parentTransform.tx;
			this.__worldTransform.ty = this.get_x() * b01 + this.get_y() * b11 + parentTransform.ty;
			if(sr != null) {
				if(this.__worldTransform.a != 1 || this.__worldTransform.b != 0 || this.__worldTransform.c != 0 || this.__worldTransform.d != 1) sr = sr.transform(this.__worldTransform);
				this.__worldTransform.tx = (this.get_x() - sr.x) * b00 + (this.get_y() - sr.y) * b10 + parentTransform.tx;
				this.__worldTransform.ty = (this.get_x() - sr.x) * b01 + (this.get_y() - sr.y) * b11 + parentTransform.ty;
			}
			if(this.__isMask) this.__maskCached = false;
		} else {
			this.__worldTransform.a = this.__rotationCosine * this.get_scaleX();
			this.__worldTransform.c = -this.__rotationSine * this.get_scaleY();
			this.__worldTransform.b = this.__rotationSine * this.get_scaleX();
			this.__worldTransform.d = this.__rotationCosine * this.get_scaleY();
			this.__worldTransform.tx = this.get_x();
			this.__worldTransform.ty = this.get_y();
			if(sr != null) {
				if(this.__worldTransform.a != 1 || this.__worldTransform.b != 0 || this.__worldTransform.c != 0 || this.__worldTransform.d != 1) sr = sr.transform(this.__worldTransform);
				this.__worldTransform.tx = this.get_x() - this.get_scrollRect().x;
				this.__worldTransform.ty = this.get_y() - this.get_scrollRect().y;
			}
		}
		if(updateChildren && this.__transformDirty) {
			this.__transformDirty = false;
			openfl_display_DisplayObject.__worldTransformDirty--;
		}
		if(!transformOnly && this.__mask != null && !this.__mask.__maskCached) {
			if(this.__maskGraphics == null) this.__maskGraphics = new openfl_display_Graphics();
			this.__maskGraphics.clear();
			this.__mask.__update(true,true,this.__maskGraphics);
			this.__mask.__maskCached = true;
		}
		if(maskGraphics != null) this.__updateMask(maskGraphics);
		if(!transformOnly) {
			if(!this.__worldColorTransform.__equals(this.get_transform().get_colorTransform())) this.__worldColorTransform = this.get_transform().get_colorTransform().__clone();
			if(this.parent != null) {
				this.__worldAlpha = this.get_alpha() * this.parent.__worldAlpha;
				this.__worldColorTransform.__combine(this.parent.__worldColorTransform);
				if(this.blendMode == null || this.blendMode == openfl_display_BlendMode.NORMAL) this.__blendMode = this.parent.__blendMode;
			} else this.__worldAlpha = this.get_alpha();
			if(updateChildren && this.__renderDirty) this.__renderDirty = false;
		}
	}
	,__updateChildren: function(transformOnly) {
		this.__renderable = this.get_visible() && this.get_scaleX() != 0 && this.get_scaleY() != 0 && !this.__isMask;
		if(!this.__renderable && !this.__isMask) return;
		this.__worldAlpha = this.get_alpha();
		if(this.__transformDirty) {
			this.__transformDirty = false;
			openfl_display_DisplayObject.__worldTransformDirty--;
		}
	}
	,__updateMask: function(maskGraphics) {
		if(this.__graphics != null) {
			maskGraphics.__commands.push(openfl_display_DrawCommand.OverrideMatrix(this.__worldTransform));
			maskGraphics.__commands = maskGraphics.__commands.concat(this.__graphics.__commands);
			maskGraphics.set___dirty(true);
			maskGraphics.__visible = true;
			if(maskGraphics.__bounds == null) maskGraphics.__bounds = new openfl_geom_Rectangle();
			this.__graphics.__getBounds(maskGraphics.__bounds,openfl_geom_Matrix.__identity);
		}
	}
	,get_alpha: function() {
		return this.__alpha;
	}
	,set_alpha: function(value) {
		if(value != this.__alpha) {
			if(!this.__renderDirty) {
				this.__renderDirty = true;
				openfl_display_DisplayObject.__worldRenderDirty++;
			}
		}
		return this.__alpha = value;
	}
	,get_filters: function() {
		if(this.__filters == null) return []; else return this.__filters.slice();
	}
	,set_filters: function(value) {
		return value;
	}
	,set_name: function(value) {
		return this.__name = value;
	}
	,get_rotation: function() {
		return this.__rotation;
	}
	,get_scaleX: function() {
		return this.__scaleX;
	}
	,set_scaleX: function(value) {
		if(value != this.__scaleX) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__scaleX = value;
	}
	,get_scaleY: function() {
		return this.__scaleY;
	}
	,set_scaleY: function(value) {
		if(this.__scaleY != value) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__scaleY = value;
	}
	,get_scrollRect: function() {
		if(this.__scrollRect == null) return null;
		return this.__scrollRect.clone();
	}
	,get_transform: function() {
		if(this.__transform == null) this.__transform = new openfl_geom_Transform(this);
		return this.__transform;
	}
	,get_visible: function() {
		return this.__visible;
	}
	,get_x: function() {
		return this.__x;
	}
	,set_x: function(value) {
		if(value != this.__x) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__x = value;
	}
	,get_y: function() {
		return this.__y;
	}
	,set_y: function(value) {
		if(value != this.__y) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__y = value;
	}
	,__class__: openfl_display_DisplayObject
	,__properties__: {set_y:"set_y",get_y:"get_y",set_x:"set_x",get_x:"get_x",get_visible:"get_visible",get_transform:"get_transform",get_scrollRect:"get_scrollRect",set_scaleY:"set_scaleY",get_scaleY:"get_scaleY",set_scaleX:"set_scaleX",get_scaleX:"get_scaleX",get_rotation:"get_rotation",set_name:"set_name",set_filters:"set_filters",get_filters:"get_filters",set_alpha:"set_alpha",get_alpha:"get_alpha"}
});
var openfl_display_InteractiveObject = function() {
	openfl_display_DisplayObject.call(this);
	this.doubleClickEnabled = false;
	this.mouseEnabled = true;
	this.needsSoftKeyboard = false;
	this.tabEnabled = true;
	this.tabIndex = -1;
};
$hxClasses["openfl.display.InteractiveObject"] = openfl_display_InteractiveObject;
openfl_display_InteractiveObject.__name__ = true;
openfl_display_InteractiveObject.__super__ = openfl_display_DisplayObject;
openfl_display_InteractiveObject.prototype = $extend(openfl_display_DisplayObject.prototype,{
	__getInteractive: function(stack) {
		if(stack != null) {
			stack.push(this);
			if(this.parent != null) this.parent.__getInteractive(stack);
		}
		return true;
	}
	,__class__: openfl_display_InteractiveObject
});
var openfl_display_DisplayObjectContainer = function() {
	openfl_display_InteractiveObject.call(this);
	this.mouseChildren = true;
	this.__children = [];
	this.__removedChildren = [];
};
$hxClasses["openfl.display.DisplayObjectContainer"] = openfl_display_DisplayObjectContainer;
openfl_display_DisplayObjectContainer.__name__ = true;
openfl_display_DisplayObjectContainer.__super__ = openfl_display_InteractiveObject;
openfl_display_DisplayObjectContainer.prototype = $extend(openfl_display_InteractiveObject.prototype,{
	addChild: function(child) {
		if(child != null) {
			if(child.parent != null) child.parent.removeChild(child);
			this.__children.push(child);
			child.parent = this;
			if(this.stage != null) child.__setStageReference(this.stage);
			if(!child.__transformDirty) {
				child.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
			if(!child.__renderDirty) {
				child.__renderDirty = true;
				openfl_display_DisplayObject.__worldRenderDirty++;
			}
			var event = new openfl_events_Event(openfl_events_Event.ADDED,true);
			event.target = child;
			child.dispatchEvent(event);
		}
		return child;
	}
	,removeChild: function(child) {
		if(child != null && child.parent == this) {
			if(this.stage != null) child.__setStageReference(null);
			child.parent = null;
			HxOverrides.remove(this.__children,child);
			this.__removedChildren.push(child);
			if(!child.__transformDirty) {
				child.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
			if(!child.__renderDirty) {
				child.__renderDirty = true;
				openfl_display_DisplayObject.__worldRenderDirty++;
			}
			child.dispatchEvent(new openfl_events_Event(openfl_events_Event.REMOVED,true));
		}
		return child;
	}
	,__broadcast: function(event,notifyChilden) {
		if(event.target == null) event.target = this;
		var result = openfl_display_InteractiveObject.prototype.__broadcast.call(this,event,notifyChilden);
		if(!event.__isCancelled && notifyChilden) {
			var _g = 0;
			var _g1 = this.__children;
			while(_g < _g1.length) {
				var child = _g1[_g];
				++_g;
				child.__broadcast(event,true);
				if(event.__isCancelled) return true;
			}
		}
		return result;
	}
	,__getBounds: function(rect,matrix) {
		openfl_display_InteractiveObject.prototype.__getBounds.call(this,rect,matrix);
		if(this.__children.length == 0) return;
		var matrixCache = null;
		if(matrix != null) {
			matrixCache = this.__worldTransform;
			this.__worldTransform = matrix;
			this.__updateChildren(true);
		}
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			if(!child.__renderable) continue;
			child.__getBounds(rect,child.__worldTransform);
		}
		if(matrix != null) {
			this.__worldTransform = matrixCache;
			this.__updateChildren(true);
		}
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || interactiveOnly && !this.mouseEnabled) return false;
		if(this.get_scrollRect() != null && !this.get_scrollRect().containsPoint(this.globalToLocal(new openfl_geom_Point(x,y)))) return false;
		var i = this.__children.length;
		if(interactiveOnly) {
			if(stack == null || !this.mouseChildren) {
				while(--i >= 0) if(this.__children[i].__hitTest(x,y,shapeFlag,null,true)) {
					if(stack != null) stack.push(this);
					return true;
				}
			} else if(stack != null) {
				var length = stack.length;
				var interactive = false;
				var hitTest = false;
				while(--i >= 0) {
					interactive = this.__children[i].__getInteractive(null);
					if(interactive || !hitTest) {
						if(this.__children[i].__hitTest(x,y,shapeFlag,stack,true)) {
							hitTest = true;
							if(interactive) break;
						}
					}
				}
				if(hitTest) {
					stack.splice(length,0,this);
					return true;
				}
			}
		} else while(--i >= 0) this.__children[i].__hitTest(x,y,shapeFlag,stack,false);
		return false;
	}
	,__renderCairo: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		openfl_display_InteractiveObject.prototype.__renderCairo.call(this,renderSession);
		if(this.get_scrollRect() != null) renderSession.maskManager.pushRect(this.get_scrollRect(),this.__worldTransform);
		if(this.__mask != null) renderSession.maskManager.pushMask(this.__mask);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderCairo(renderSession);
		}
		this.__removedChildren = [];
		if(this.__mask != null) renderSession.maskManager.popMask();
		if(this.get_scrollRect() != null) renderSession.maskManager.popMask();
	}
	,__renderCairoMask: function(renderSession) {
		if(this.__graphics != null) openfl__$internal_renderer_cairo_CairoGraphics.renderMask(this.__graphics,renderSession);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderCairoMask(renderSession);
		}
	}
	,__renderCanvas: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		openfl_display_InteractiveObject.prototype.__renderCanvas.call(this,renderSession);
		if(this.get_scrollRect() != null) renderSession.maskManager.pushRect(this.get_scrollRect(),this.__worldTransform);
		if(this.__mask != null) renderSession.maskManager.pushMask(this.__mask);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderCanvas(renderSession);
		}
		this.__removedChildren = [];
		if(this.__mask != null) renderSession.maskManager.popMask();
		if(this.get_scrollRect() != null) renderSession.maskManager.popMask();
	}
	,__renderCanvasMask: function(renderSession) {
		if(this.__graphics != null) openfl__$internal_renderer_canvas_CanvasGraphics.renderMask(this.__graphics,renderSession);
		var bounds = new openfl_geom_Rectangle();
		this.__getTransform();
		this.__getBounds(bounds,new openfl_geom_Matrix());
		renderSession.context.rect(0,0,bounds.width,bounds.height);
	}
	,__renderDOM: function(renderSession) {
		openfl_display_InteractiveObject.prototype.__renderDOM.call(this,renderSession);
		if(this.__mask != null) renderSession.maskManager.pushMask(this.__mask);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderDOM(renderSession);
		}
		var _g2 = 0;
		var _g11 = this.__removedChildren;
		while(_g2 < _g11.length) {
			var orphan = _g11[_g2];
			++_g2;
			if(orphan.stage == null) orphan.__renderDOM(renderSession);
		}
		this.__removedChildren = [];
		if(this.__mask != null) renderSession.maskManager.popMask();
	}
	,__renderGL: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		if(this.get_scrollRect() != null) {
			renderSession.spriteBatch.stop();
			var m = this.__worldTransform.clone();
			var clip = this.get_scrollRect().transform(m);
			clip.y = renderSession.renderer.height - clip.y - clip.height;
			renderSession.spriteBatch.start(clip);
		}
		var masked = this.__mask != null && this.__maskGraphics != null && this.__maskGraphics.__commands.length > 0;
		if(masked) {
			renderSession.spriteBatch.stop();
			renderSession.maskManager.pushMask(this);
			renderSession.spriteBatch.start();
		}
		openfl_display_InteractiveObject.prototype.__renderGL.call(this,renderSession);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderGL(renderSession);
		}
		if(masked) {
			renderSession.spriteBatch.stop();
			renderSession.maskManager.popMask();
			renderSession.spriteBatch.start();
		}
		if(this.get_scrollRect() != null) {
			renderSession.spriteBatch.stop();
			renderSession.spriteBatch.start();
		}
		this.__removedChildren = [];
	}
	,__setStageReference: function(stage) {
		if(this.stage != stage) {
			if(this.stage != null) this.dispatchEvent(new openfl_events_Event(openfl_events_Event.REMOVED_FROM_STAGE,false,false));
			this.stage = stage;
			if(stage != null) this.dispatchEvent(new openfl_events_Event(openfl_events_Event.ADDED_TO_STAGE,false,false));
			if(this.__children != null) {
				var _g = 0;
				var _g1 = this.__children;
				while(_g < _g1.length) {
					var child = _g1[_g];
					++_g;
					child.__setStageReference(stage);
				}
			}
		}
	}
	,__update: function(transformOnly,updateChildren,maskGraphics) {
		openfl_display_InteractiveObject.prototype.__update.call(this,transformOnly,updateChildren,maskGraphics);
		if(!this.__renderable && !this.__isMask) return;
		if(updateChildren) {
			var _g = 0;
			var _g1 = this.__children;
			while(_g < _g1.length) {
				var child = _g1[_g];
				++_g;
				child.__update(transformOnly,true,maskGraphics);
			}
		}
	}
	,__updateChildren: function(transformOnly) {
		openfl_display_InteractiveObject.prototype.__updateChildren.call(this,transformOnly);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__update(transformOnly,true);
		}
	}
	,__class__: openfl_display_DisplayObjectContainer
});
var openfl_display_Sprite = function() {
	openfl_display_DisplayObjectContainer.call(this);
	this.buttonMode = false;
	this.useHandCursor = true;
	this.loaderInfo = openfl_display_LoaderInfo.create(null);
};
$hxClasses["openfl.display.Sprite"] = openfl_display_Sprite;
openfl_display_Sprite.__name__ = true;
openfl_display_Sprite.__super__ = openfl_display_DisplayObjectContainer;
openfl_display_Sprite.prototype = $extend(openfl_display_DisplayObjectContainer.prototype,{
	__getCursor: function() {
		if(this.buttonMode && this.useHandCursor) return lime_ui_MouseCursor.POINTER; else return null;
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || interactiveOnly && !this.mouseEnabled) return false;
		var length = 0;
		if(stack != null) length = stack.length;
		if(openfl_display_DisplayObjectContainer.prototype.__hitTest.call(this,x,y,shapeFlag,stack,interactiveOnly)) return interactiveOnly; else if(this.__graphics != null && this.__graphics.__hitTest(x,y,shapeFlag,this.__getTransform())) {
			if(stack != null) stack.push(this);
			return true;
		}
		return false;
	}
	,get_graphics: function() {
		if(this.__graphics == null) {
			this.__graphics = new openfl_display_Graphics();
			this.__graphics.__owner = this;
		}
		return this.__graphics;
	}
	,__class__: openfl_display_Sprite
	,__properties__: $extend(openfl_display_DisplayObjectContainer.prototype.__properties__,{get_graphics:"get_graphics"})
});
var Main = function() {
	openfl_display_Sprite.call(this);
	this.addEventListener(openfl_events_Event.ADDED_TO_STAGE,$bind(this,this.added));
};
$hxClasses["Main"] = Main;
Main.__name__ = true;
Main.__super__ = openfl_display_Sprite;
Main.prototype = $extend(openfl_display_Sprite.prototype,{
	resize: function(e) {
		if(!this.inited) this.init();
	}
	,init: function() {
		if(this.inited) return;
		this.inited = true;
		var bitmapData = openfl_Assets.getBitmapData("assets/haxe.png");
		var bitmap = new openfl_display_Bitmap(bitmapData);
		bitmap.set_width(400);
		bitmap.set_height(400);
		bitmap.set_x(0);
		bitmap.set_y(50);
		bitmap.set_alpha(.5);
		motion_Actuate.tween(bitmap,3,{ alpha : 1, y : -560}).repeat().reflect();
		this.slides = new Slides();
		var messageFormat = new openfl_text_TextFormat("Verdana",24,16777215,true);
		messageFormat.align = openfl_text_TextFormatAlign.LEFT;
		this.messageField = new openfl_text_TextField();
		this.messageField.set_width(800);
		this.messageField.set_height(200);
		this.messageField.set_x(100);
		this.messageField.set_y(150);
		this.messageField.set_defaultTextFormat(messageFormat);
		this.messageField.set_selectable(false);
		this.messageField.set_text("HAXE\nTHE CROSS PLATFORM TOOLKIT");
		this.addChild(bitmap);
		this.addChild(this.messageField);
		this.stage.addEventListener(openfl_events_KeyboardEvent.KEY_DOWN,$bind(this,this.onKeyDown));
	}
	,onKeyDown: function(evt) {
		this.messageField.set_text((function($this) {
			var $r;
			var _g = evt.keyCode;
			$r = (function($this) {
				var $r;
				switch(_g) {
				case 40:
					$r = $this.slides.next();
					break;
				case 38:
					$r = $this.slides.prev();
					break;
				default:
					$r = $this.slides.get();
				}
				return $r;
			}($this));
			return $r;
		}(this)));
	}
	,added: function(e) {
		this.removeEventListener(openfl_events_Event.ADDED_TO_STAGE,$bind(this,this.added));
		this.stage.addEventListener(openfl_events_Event.RESIZE,$bind(this,this.resize));
		this.init();
	}
	,__class__: Main
});
var DocumentClass = function() {
	openfl_Lib.current.addChild(this);
	Main.call(this);
	this.dispatchEvent(new openfl_events_Event(openfl_events_Event.ADDED_TO_STAGE,false,false));
};
$hxClasses["DocumentClass"] = DocumentClass;
DocumentClass.__name__ = true;
DocumentClass.__super__ = Main;
DocumentClass.prototype = $extend(Main.prototype,{
	__class__: DocumentClass
});
var lime_AssetLibrary = function() {
};
$hxClasses["lime.AssetLibrary"] = lime_AssetLibrary;
lime_AssetLibrary.__name__ = true;
lime_AssetLibrary.prototype = {
	exists: function(id,type) {
		return false;
	}
	,getImage: function(id) {
		return null;
	}
	,isLocal: function(id,type) {
		return true;
	}
	,__class__: lime_AssetLibrary
};
var DefaultAssetLibrary = function() {
	this.type = new haxe_ds_StringMap();
	this.path = new haxe_ds_StringMap();
	lime_AssetLibrary.call(this);
	var id;
	id = "assets/haxe.png";
	this.path.set(id,id);
	this.type.set(id,"IMAGE");
	var assetsPrefix = ApplicationMain.config.assetsPrefix;
	if(assetsPrefix != null) {
		var $it0 = this.path.keys();
		while( $it0.hasNext() ) {
			var k = $it0.next();
			var value = assetsPrefix + this.path.get(k);
			this.path.set(k,value);
		}
	}
};
$hxClasses["DefaultAssetLibrary"] = DefaultAssetLibrary;
DefaultAssetLibrary.__name__ = true;
DefaultAssetLibrary.__super__ = lime_AssetLibrary;
DefaultAssetLibrary.prototype = $extend(lime_AssetLibrary.prototype,{
	exists: function(id,type) {
		var requestedType;
		if(type != null) requestedType = js_Boot.__cast(type , String); else requestedType = null;
		var assetType = this.type.get(id);
		if(assetType != null) {
			if(assetType == requestedType || (requestedType == "SOUND" || requestedType == "MUSIC") && (assetType == "MUSIC" || assetType == "SOUND")) return true;
			if(requestedType == "BINARY" || requestedType == null || assetType == "BINARY" && requestedType == "TEXT") return true;
		}
		return false;
	}
	,getImage: function(id) {
		return lime_graphics_Image.fromImageElement((function($this) {
			var $r;
			var key = $this.path.get(id);
			$r = lime_app_Preloader.images.get(key);
			return $r;
		}(this)));
	}
	,isLocal: function(id,type) {
		var requestedType;
		if(type != null) requestedType = js_Boot.__cast(type , String); else requestedType = null;
		return true;
	}
	,__class__: DefaultAssetLibrary
});
var EReg = function(r,opt) {
	opt = opt.split("u").join("");
	this.r = new RegExp(r,opt);
};
$hxClasses["EReg"] = EReg;
EReg.__name__ = true;
EReg.prototype = {
	match: function(s) {
		if(this.r.global) this.r.lastIndex = 0;
		this.r.m = this.r.exec(s);
		this.r.s = s;
		return this.r.m != null;
	}
	,replace: function(s,by) {
		return s.replace(this.r,by);
	}
	,__class__: EReg
};
var HxOverrides = function() { };
$hxClasses["HxOverrides"] = HxOverrides;
HxOverrides.__name__ = true;
HxOverrides.cca = function(s,index) {
	var x = s.charCodeAt(index);
	if(x != x) return undefined;
	return x;
};
HxOverrides.substr = function(s,pos,len) {
	if(pos != null && pos != 0 && len != null && len < 0) return "";
	if(len == null) len = s.length;
	if(pos < 0) {
		pos = s.length + pos;
		if(pos < 0) pos = 0;
	} else if(len < 0) len = s.length + len - pos;
	return s.substr(pos,len);
};
HxOverrides.indexOf = function(a,obj,i) {
	var len = a.length;
	if(i < 0) {
		i += len;
		if(i < 0) i = 0;
	}
	while(i < len) {
		if(a[i] === obj) return i;
		i++;
	}
	return -1;
};
HxOverrides.remove = function(a,obj) {
	var i = HxOverrides.indexOf(a,obj,0);
	if(i == -1) return false;
	a.splice(i,1);
	return true;
};
HxOverrides.iter = function(a) {
	return { cur : 0, arr : a, hasNext : function() {
		return this.cur < this.arr.length;
	}, next : function() {
		return this.arr[this.cur++];
	}};
};
var Lambda = function() { };
$hxClasses["Lambda"] = Lambda;
Lambda.__name__ = true;
Lambda.has = function(it,elt) {
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var x = $it0.next();
		if(x == elt) return true;
	}
	return false;
};
Lambda.count = function(it,pred) {
	var n = 0;
	if(pred == null) {
		var $it0 = $iterator(it)();
		while( $it0.hasNext() ) {
			var _ = $it0.next();
			n++;
		}
	} else {
		var $it1 = $iterator(it)();
		while( $it1.hasNext() ) {
			var x = $it1.next();
			if(pred(x)) n++;
		}
	}
	return n;
};
Math.__name__ = true;
var NMEPreloader = function() {
	openfl_display_Sprite.call(this);
	var backgroundColor = this.getBackgroundColor();
	var r = backgroundColor >> 16 & 255;
	var g = backgroundColor >> 8 & 255;
	var b = backgroundColor & 255;
	var perceivedLuminosity = 0.299 * r + 0.587 * g + 0.114 * b;
	var color = 0;
	if(perceivedLuminosity < 70) color = 16777215;
	var x = 30;
	var height = 7;
	var y = this.getHeight() / 2 - height / 2;
	var width = this.getWidth() - x * 2;
	var padding = 2;
	this.outline = new openfl_display_Sprite();
	this.outline.get_graphics().beginFill(color,0.07);
	this.outline.get_graphics().drawRect(0,0,width,height);
	this.outline.set_x(x);
	this.outline.set_y(y);
	this.addChild(this.outline);
	this.progress = new openfl_display_Sprite();
	this.progress.get_graphics().beginFill(color,0.35);
	this.progress.get_graphics().drawRect(0,0,width - padding * 2,height - padding * 2);
	this.progress.set_x(x + padding);
	this.progress.set_y(y + padding);
	this.progress.set_scaleX(0);
	this.addChild(this.progress);
};
$hxClasses["NMEPreloader"] = NMEPreloader;
NMEPreloader.__name__ = true;
NMEPreloader.__super__ = openfl_display_Sprite;
NMEPreloader.prototype = $extend(openfl_display_Sprite.prototype,{
	getBackgroundColor: function() {
		return 0;
	}
	,getHeight: function() {
		var height = 600;
		if(height > 0) return height; else return openfl_Lib.current.stage.stageHeight;
	}
	,getWidth: function() {
		var width = 800;
		if(width > 0) return width; else return openfl_Lib.current.stage.stageWidth;
	}
	,onInit: function() {
	}
	,onLoaded: function() {
		this.dispatchEvent(new openfl_events_Event(openfl_events_Event.COMPLETE));
	}
	,onUpdate: function(bytesLoaded,bytesTotal) {
		var percentLoaded = bytesLoaded / bytesTotal;
		if(percentLoaded > 1) percentLoaded = 1;
		this.progress.set_scaleX(percentLoaded);
	}
	,__class__: NMEPreloader
});
var Reflect = function() { };
$hxClasses["Reflect"] = Reflect;
Reflect.__name__ = true;
Reflect.hasField = function(o,field) {
	return Object.prototype.hasOwnProperty.call(o,field);
};
Reflect.field = function(o,field) {
	try {
		return o[field];
	} catch( e ) {
		if (e instanceof js__$Boot_HaxeError) e = e.val;
		return null;
	}
};
Reflect.setField = function(o,field,value) {
	o[field] = value;
};
Reflect.getProperty = function(o,field) {
	var tmp;
	if(o == null) return null; else if(o.__properties__ && (tmp = o.__properties__["get_" + field])) return o[tmp](); else return o[field];
};
Reflect.setProperty = function(o,field,value) {
	var tmp;
	if(o.__properties__ && (tmp = o.__properties__["set_" + field])) o[tmp](value); else o[field] = value;
};
Reflect.callMethod = function(o,func,args) {
	return func.apply(o,args);
};
Reflect.fields = function(o) {
	var a = [];
	if(o != null) {
		var hasOwnProperty = Object.prototype.hasOwnProperty;
		for( var f in o ) {
		if(f != "__id__" && f != "hx__closures__" && hasOwnProperty.call(o,f)) a.push(f);
		}
	}
	return a;
};
Reflect.isFunction = function(f) {
	return typeof(f) == "function" && !(f.__name__ || f.__ename__);
};
Reflect.compare = function(a,b) {
	if(a == b) return 0; else if(a > b) return 1; else return -1;
};
Reflect.compareMethods = function(f1,f2) {
	if(f1 == f2) return true;
	if(!Reflect.isFunction(f1) || !Reflect.isFunction(f2)) return false;
	return f1.scope == f2.scope && f1.method == f2.method && f1.method != null;
};
Reflect.isEnumValue = function(v) {
	return v != null && v.__enum__ != null;
};
var StringTools = function() { };
$hxClasses["StringTools"] = StringTools;
StringTools.__name__ = true;
StringTools.urlEncode = function(s) {
	return encodeURIComponent(s);
};
StringTools.startsWith = function(s,start) {
	return s.length >= start.length && HxOverrides.substr(s,0,start.length) == start;
};
StringTools.isSpace = function(s,pos) {
	var c = HxOverrides.cca(s,pos);
	return c > 8 && c < 14 || c == 32;
};
StringTools.ltrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,r)) r++;
	if(r > 0) return HxOverrides.substr(s,r,l - r); else return s;
};
StringTools.rtrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,l - r - 1)) r++;
	if(r > 0) return HxOverrides.substr(s,0,l - r); else return s;
};
StringTools.trim = function(s) {
	return StringTools.ltrim(StringTools.rtrim(s));
};
StringTools.replace = function(s,sub,by) {
	return s.split(sub).join(by);
};
StringTools.hex = function(n,digits) {
	var s = "";
	var hexChars = "0123456789ABCDEF";
	do {
		s = hexChars.charAt(n & 15) + s;
		n >>>= 4;
	} while(n > 0);
	if(digits != null) while(s.length < digits) s = "0" + s;
	return s;
};
var Slides = function() {
	this.index = 0;
};
$hxClasses["Slides"] = Slides;
Slides.__name__ = true;
Slides.slides = null;
Slides.populateSlides = function() {
	Slides.slides = [];
	Slides.slides.push(StringTools.trim("\nHAXE\nTHE CROSS LANGUAGE TOOLKIT\n      "));
	Slides.slides.push(StringTools.trim("\nCreato nel 2005\nda\nNicolas Canasse\n      "));
	Slides.slides.push(StringTools.trim("\nOOP\nModello a oggetto simile a java\nClassi,interface,metodi statici...\n      "));
	Slides.slides.push(StringTools.trim("\nSINTASSI C LIKE\nSintassi simile a c+,java,javascript...\n      "));
	Slides.slides.push(StringTools.trim("\nOOP\nModello a oggetti simile a java\nClassi,interface,metodi statici...\n      "));
	Slides.slides.push(StringTools.trim("\nCLOSURE\nFunzioni anonime e closure\n      "));
	Slides.slides.push(StringTools.trim("\nSTRING INTERPOLATION\ncome in php\n'$x + $y'\n      "));
	Slides.slides.push(StringTools.trim("\nSTRICTLY TYPED\nType System statico\ncon Type Inference\n      "));
	Slides.slides.push(StringTools.trim("\nDYNAMICS\noggetti dinamici\nsenza type checking\n      "));
	Slides.slides.push(StringTools.trim("\nEXTERNS\npermettono di mappare librerie esterne\ncon il type system\n      "));
	Slides.slides.push(StringTools.trim("\nTYPES\nsupporta tipi\ntramite typedef (simile alle strutture in c)\ne tipi anonimi\n      "));
	Slides.slides.push(StringTools.trim("\nABSTRACT TYPES\nDefinizione di tipi astratti\nesistenti solo a compile type\n      "));
	Slides.slides.push(StringTools.trim("\nABSTRACT TYPES\nOperator Overloading, Array Access,\nMethod forwarding, Implicit Cast\n      "));
	Slides.slides.push(StringTools.trim("\nSTATIC ESTENSION\nEstende gli oggetti a compile time\nsenza bisogno di ereditarietà\n      "));
	Slides.slides.push(StringTools.trim("\nINLINE\ninlining di funzioni e costruttori\npermette maggiori prestazioni\n      "));
	Slides.slides.push(StringTools.trim("\nMACRO SYSTEM\nPermette di generare codice\na compile time\nutile per scrivere dsl\n      "));
	Slides.slides.push(StringTools.trim("\nMACRO SYSTEM\nsi integra con il type system\nil compilatore controlla\nla validità del codice\n      "));
	Slides.slides.push(StringTools.trim("\nSTANDARD CORE LIBRARY\nSimili a core java e javascript\n      "));
	Slides.slides.push(StringTools.trim("\nXML e JSON\nnella core library\n      "));
	Slides.slides.push(StringTools.trim("\nREMOTING \nRPC per comunicazione simile a SOAP\n      "));
	Slides.slides.push(StringTools.trim("\nREFLECTION\nPer ispezionare a runtime gli oggetti\n      "));
	Slides.slides.push(StringTools.trim("\nMETADATA\nSimile alle annotations java\n      "));
	Slides.slides.push(StringTools.trim("\nNEKO\nla VM in cui viene eseguito\nil codice Haxe compilato\nin byte code\n      "));
	Slides.slides.push(StringTools.trim("\nNEKO\nutile per eseguirlo serve side\noppure....\n      "));
	Slides.slides.push(StringTools.trim("\nHAXE\nPuò compilare anche in....\n      "));
	Slides.slides.push(StringTools.trim("\n1. NEKO\n      "));
	Slides.slides.push(StringTools.trim("\n2. JAVASCRIPT\n      "));
	Slides.slides.push(StringTools.trim("\n3. FLASH\n      "));
	Slides.slides.push(StringTools.trim("\n4. PHP\n      "));
	Slides.slides.push(StringTools.trim("\n5. C++\n      "));
	Slides.slides.push(StringTools.trim("\n6. JAVA\n       "));
	Slides.slides.push(StringTools.trim("\n7. C#\n       "));
	Slides.slides.push(StringTools.trim("\n8. PYTHON\n       "));
	Slides.slides.push(StringTools.trim("\n9. LUA (experimental)\n       "));
	Slides.slides.push(StringTools.trim("\n10. RUBY (experimental)\n       "));
	Slides.slides.push(StringTools.trim("\n11. SWIFT (work in progress...)\n       "));
	Slides.slides.push(StringTools.trim("\nHAXE\npermette di scrivere codice\nclient side,server side e\nmobile/desktop nativo\n       "));
	Slides.slides.push(StringTools.trim("\nHAXE\nUtilizzato soprattutto\nper scrivere giochi compilati\nin HTML5, FLASH e\nMOBILE/DESKTOP/CONSOLE\n       "));
};
Slides.prototype = {
	next: function() {
		if(this.index <= Slides.slides.length - 1) ++this.index; else this.index = Slides.slides.length - 1;
		return this.get();
	}
	,prev: function() {
		if(this.index >= 0) --this.index; else this.index = 0;
		return this.get();
	}
	,get: function() {
		return Slides.slides[this.index];
	}
	,__class__: Slides
};
var Std = function() { };
$hxClasses["Std"] = Std;
Std.__name__ = true;
Std.string = function(s) {
	return js_Boot.__string_rec(s,"");
};
Std["int"] = function(x) {
	return x | 0;
};
Std.parseInt = function(x) {
	var v = parseInt(x,10);
	if(v == 0 && (HxOverrides.cca(x,1) == 120 || HxOverrides.cca(x,1) == 88)) v = parseInt(x);
	if(isNaN(v)) return null;
	return v;
};
var Type = function() { };
$hxClasses["Type"] = Type;
Type.__name__ = true;
Type.resolveClass = function(name) {
	var cl = $hxClasses[name];
	if(cl == null || !cl.__name__) return null;
	return cl;
};
Type.resolveEnum = function(name) {
	var e = $hxClasses[name];
	if(e == null || !e.__ename__) return null;
	return e;
};
Type.createInstance = function(cl,args) {
	var _g = args.length;
	switch(_g) {
	case 0:
		return new cl();
	case 1:
		return new cl(args[0]);
	case 2:
		return new cl(args[0],args[1]);
	case 3:
		return new cl(args[0],args[1],args[2]);
	case 4:
		return new cl(args[0],args[1],args[2],args[3]);
	case 5:
		return new cl(args[0],args[1],args[2],args[3],args[4]);
	case 6:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5]);
	case 7:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6]);
	case 8:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]);
	default:
		throw new js__$Boot_HaxeError("Too many arguments");
	}
	return null;
};
Type.getClassFields = function(c) {
	var a = Reflect.fields(c);
	HxOverrides.remove(a,"__name__");
	HxOverrides.remove(a,"__interfaces__");
	HxOverrides.remove(a,"__properties__");
	HxOverrides.remove(a,"__super__");
	HxOverrides.remove(a,"__meta__");
	HxOverrides.remove(a,"prototype");
	return a;
};
var haxe_IMap = function() { };
$hxClasses["haxe.IMap"] = haxe_IMap;
haxe_IMap.__name__ = true;
var haxe__$Int64__$_$_$Int64 = function(high,low) {
	this.high = high;
	this.low = low;
};
$hxClasses["haxe._Int64.___Int64"] = haxe__$Int64__$_$_$Int64;
haxe__$Int64__$_$_$Int64.__name__ = true;
haxe__$Int64__$_$_$Int64.prototype = {
	__class__: haxe__$Int64__$_$_$Int64
};
var haxe_Timer = function(time_ms) {
	var me = this;
	this.id = setInterval(function() {
		me.run();
	},time_ms);
};
$hxClasses["haxe.Timer"] = haxe_Timer;
haxe_Timer.__name__ = true;
haxe_Timer.delay = function(f,time_ms) {
	var t = new haxe_Timer(time_ms);
	t.run = function() {
		t.stop();
		f();
	};
	return t;
};
haxe_Timer.prototype = {
	stop: function() {
		if(this.id == null) return;
		clearInterval(this.id);
		this.id = null;
	}
	,run: function() {
	}
	,__class__: haxe_Timer
};
var haxe_Utf8 = function() { };
$hxClasses["haxe.Utf8"] = haxe_Utf8;
haxe_Utf8.__name__ = true;
haxe_Utf8.charCodeAt = function(s,index) {
	return HxOverrides.cca(s,index);
};
var haxe_ds_BalancedTree = function() {
};
$hxClasses["haxe.ds.BalancedTree"] = haxe_ds_BalancedTree;
haxe_ds_BalancedTree.__name__ = true;
haxe_ds_BalancedTree.prototype = {
	set: function(key,value) {
		this.root = this.setLoop(key,value,this.root);
	}
	,get: function(key) {
		var node = this.root;
		while(node != null) {
			var c = this.compare(key,node.key);
			if(c == 0) return node.value;
			if(c < 0) node = node.left; else node = node.right;
		}
		return null;
	}
	,setLoop: function(k,v,node) {
		if(node == null) return new haxe_ds_TreeNode(null,k,v,null);
		var c = this.compare(k,node.key);
		if(c == 0) return new haxe_ds_TreeNode(node.left,k,v,node.right,node == null?0:node._height); else if(c < 0) {
			var nl = this.setLoop(k,v,node.left);
			return this.balance(nl,node.key,node.value,node.right);
		} else {
			var nr = this.setLoop(k,v,node.right);
			return this.balance(node.left,node.key,node.value,nr);
		}
	}
	,balance: function(l,k,v,r) {
		var hl;
		if(l == null) hl = 0; else hl = l._height;
		var hr;
		if(r == null) hr = 0; else hr = r._height;
		if(hl > hr + 2) {
			if((function($this) {
				var $r;
				var _this = l.left;
				$r = _this == null?0:_this._height;
				return $r;
			}(this)) >= (function($this) {
				var $r;
				var _this1 = l.right;
				$r = _this1 == null?0:_this1._height;
				return $r;
			}(this))) return new haxe_ds_TreeNode(l.left,l.key,l.value,new haxe_ds_TreeNode(l.right,k,v,r)); else return new haxe_ds_TreeNode(new haxe_ds_TreeNode(l.left,l.key,l.value,l.right.left),l.right.key,l.right.value,new haxe_ds_TreeNode(l.right.right,k,v,r));
		} else if(hr > hl + 2) {
			if((function($this) {
				var $r;
				var _this2 = r.right;
				$r = _this2 == null?0:_this2._height;
				return $r;
			}(this)) > (function($this) {
				var $r;
				var _this3 = r.left;
				$r = _this3 == null?0:_this3._height;
				return $r;
			}(this))) return new haxe_ds_TreeNode(new haxe_ds_TreeNode(l,k,v,r.left),r.key,r.value,r.right); else return new haxe_ds_TreeNode(new haxe_ds_TreeNode(l,k,v,r.left.left),r.left.key,r.left.value,new haxe_ds_TreeNode(r.left.right,r.key,r.value,r.right));
		} else return new haxe_ds_TreeNode(l,k,v,r,(hl > hr?hl:hr) + 1);
	}
	,compare: function(k1,k2) {
		return Reflect.compare(k1,k2);
	}
	,__class__: haxe_ds_BalancedTree
};
var haxe_ds_TreeNode = function(l,k,v,r,h) {
	if(h == null) h = -1;
	this.left = l;
	this.key = k;
	this.value = v;
	this.right = r;
	if(h == -1) this._height = ((function($this) {
		var $r;
		var _this = $this.left;
		$r = _this == null?0:_this._height;
		return $r;
	}(this)) > (function($this) {
		var $r;
		var _this1 = $this.right;
		$r = _this1 == null?0:_this1._height;
		return $r;
	}(this))?(function($this) {
		var $r;
		var _this2 = $this.left;
		$r = _this2 == null?0:_this2._height;
		return $r;
	}(this)):(function($this) {
		var $r;
		var _this3 = $this.right;
		$r = _this3 == null?0:_this3._height;
		return $r;
	}(this))) + 1; else this._height = h;
};
$hxClasses["haxe.ds.TreeNode"] = haxe_ds_TreeNode;
haxe_ds_TreeNode.__name__ = true;
haxe_ds_TreeNode.prototype = {
	__class__: haxe_ds_TreeNode
};
var haxe_ds_EnumValueMap = function() {
	haxe_ds_BalancedTree.call(this);
};
$hxClasses["haxe.ds.EnumValueMap"] = haxe_ds_EnumValueMap;
haxe_ds_EnumValueMap.__name__ = true;
haxe_ds_EnumValueMap.__interfaces__ = [haxe_IMap];
haxe_ds_EnumValueMap.__super__ = haxe_ds_BalancedTree;
haxe_ds_EnumValueMap.prototype = $extend(haxe_ds_BalancedTree.prototype,{
	compare: function(k1,k2) {
		var d = k1[1] - k2[1];
		if(d != 0) return d;
		var p1 = k1.slice(2);
		var p2 = k2.slice(2);
		if(p1.length == 0 && p2.length == 0) return 0;
		return this.compareArgs(p1,p2);
	}
	,compareArgs: function(a1,a2) {
		var ld = a1.length - a2.length;
		if(ld != 0) return ld;
		var _g1 = 0;
		var _g = a1.length;
		while(_g1 < _g) {
			var i = _g1++;
			var d = this.compareArg(a1[i],a2[i]);
			if(d != 0) return d;
		}
		return 0;
	}
	,compareArg: function(v1,v2) {
		if(Reflect.isEnumValue(v1) && Reflect.isEnumValue(v2)) return this.compare(v1,v2); else if((v1 instanceof Array) && v1.__enum__ == null && ((v2 instanceof Array) && v2.__enum__ == null)) return this.compareArgs(v1,v2); else return Reflect.compare(v1,v2);
	}
	,__class__: haxe_ds_EnumValueMap
});
var haxe_ds_IntMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.IntMap"] = haxe_ds_IntMap;
haxe_ds_IntMap.__name__ = true;
haxe_ds_IntMap.__interfaces__ = [haxe_IMap];
haxe_ds_IntMap.prototype = {
	__class__: haxe_ds_IntMap
};
var haxe_ds_ObjectMap = function() {
	this.h = { };
	this.h.__keys__ = { };
};
$hxClasses["haxe.ds.ObjectMap"] = haxe_ds_ObjectMap;
haxe_ds_ObjectMap.__name__ = true;
haxe_ds_ObjectMap.__interfaces__ = [haxe_IMap];
haxe_ds_ObjectMap.prototype = {
	set: function(key,value) {
		var id = key.__id__ || (key.__id__ = ++haxe_ds_ObjectMap.count);
		this.h[id] = value;
		this.h.__keys__[id] = key;
	}
	,remove: function(key) {
		var id = key.__id__;
		if(this.h.__keys__[id] == null) return false;
		delete(this.h[id]);
		delete(this.h.__keys__[id]);
		return true;
	}
	,keys: function() {
		var a = [];
		for( var key in this.h.__keys__ ) {
		if(this.h.hasOwnProperty(key)) a.push(this.h.__keys__[key]);
		}
		return HxOverrides.iter(a);
	}
	,iterator: function() {
		return { ref : this.h, it : this.keys(), hasNext : function() {
			return this.it.hasNext();
		}, next : function() {
			var i = this.it.next();
			return this.ref[i.__id__];
		}};
	}
	,__class__: haxe_ds_ObjectMap
};
var haxe_ds__$StringMap_StringMapIterator = function(map,keys) {
	this.map = map;
	this.keys = keys;
	this.index = 0;
	this.count = keys.length;
};
$hxClasses["haxe.ds._StringMap.StringMapIterator"] = haxe_ds__$StringMap_StringMapIterator;
haxe_ds__$StringMap_StringMapIterator.__name__ = true;
haxe_ds__$StringMap_StringMapIterator.prototype = {
	hasNext: function() {
		return this.index < this.count;
	}
	,next: function() {
		return this.map.get(this.keys[this.index++]);
	}
	,__class__: haxe_ds__$StringMap_StringMapIterator
};
var haxe_ds_StringMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.StringMap"] = haxe_ds_StringMap;
haxe_ds_StringMap.__name__ = true;
haxe_ds_StringMap.__interfaces__ = [haxe_IMap];
haxe_ds_StringMap.prototype = {
	set: function(key,value) {
		if(__map_reserved[key] != null) this.setReserved(key,value); else this.h[key] = value;
	}
	,get: function(key) {
		if(__map_reserved[key] != null) return this.getReserved(key);
		return this.h[key];
	}
	,exists: function(key) {
		if(__map_reserved[key] != null) return this.existsReserved(key);
		return this.h.hasOwnProperty(key);
	}
	,setReserved: function(key,value) {
		if(this.rh == null) this.rh = { };
		this.rh["$" + key] = value;
	}
	,getReserved: function(key) {
		if(this.rh == null) return null; else return this.rh["$" + key];
	}
	,existsReserved: function(key) {
		if(this.rh == null) return false;
		return this.rh.hasOwnProperty("$" + key);
	}
	,remove: function(key) {
		if(__map_reserved[key] != null) {
			key = "$" + key;
			if(this.rh == null || !this.rh.hasOwnProperty(key)) return false;
			delete(this.rh[key]);
			return true;
		} else {
			if(!this.h.hasOwnProperty(key)) return false;
			delete(this.h[key]);
			return true;
		}
	}
	,keys: function() {
		var _this = this.arrayKeys();
		return HxOverrides.iter(_this);
	}
	,arrayKeys: function() {
		var out = [];
		for( var key in this.h ) {
		if(this.h.hasOwnProperty(key)) out.push(key);
		}
		if(this.rh != null) {
			for( var key in this.rh ) {
			if(key.charCodeAt(0) == 36) out.push(key.substr(1));
			}
		}
		return out;
	}
	,iterator: function() {
		return new haxe_ds__$StringMap_StringMapIterator(this,this.arrayKeys());
	}
	,__class__: haxe_ds_StringMap
};
var haxe_ds__$Vector_Vector_$Impl_$ = {};
$hxClasses["haxe.ds._Vector.Vector_Impl_"] = haxe_ds__$Vector_Vector_$Impl_$;
haxe_ds__$Vector_Vector_$Impl_$.__name__ = true;
haxe_ds__$Vector_Vector_$Impl_$.blit = function(src,srcPos,dest,destPos,len) {
	var _g = 0;
	while(_g < len) {
		var i = _g++;
		dest[destPos + i] = src[srcPos + i];
	}
};
var haxe_io_Eof = function() { };
$hxClasses["haxe.io.Eof"] = haxe_io_Eof;
haxe_io_Eof.__name__ = true;
haxe_io_Eof.prototype = {
	toString: function() {
		return "Eof";
	}
	,__class__: haxe_io_Eof
};
var haxe_io_Error = $hxClasses["haxe.io.Error"] = { __ename__ : true, __constructs__ : ["Blocked","Overflow","OutsideBounds","Custom"] };
haxe_io_Error.Blocked = ["Blocked",0];
haxe_io_Error.Blocked.toString = $estr;
haxe_io_Error.Blocked.__enum__ = haxe_io_Error;
haxe_io_Error.Overflow = ["Overflow",1];
haxe_io_Error.Overflow.toString = $estr;
haxe_io_Error.Overflow.__enum__ = haxe_io_Error;
haxe_io_Error.OutsideBounds = ["OutsideBounds",2];
haxe_io_Error.OutsideBounds.toString = $estr;
haxe_io_Error.OutsideBounds.__enum__ = haxe_io_Error;
haxe_io_Error.Custom = function(e) { var $x = ["Custom",3,e]; $x.__enum__ = haxe_io_Error; $x.toString = $estr; return $x; };
var haxe_io_FPHelper = function() { };
$hxClasses["haxe.io.FPHelper"] = haxe_io_FPHelper;
haxe_io_FPHelper.__name__ = true;
haxe_io_FPHelper.i32ToFloat = function(i) {
	var sign = 1 - (i >>> 31 << 1);
	var exp = i >>> 23 & 255;
	var sig = i & 8388607;
	if(sig == 0 && exp == 0) return 0.0;
	return sign * (1 + Math.pow(2,-23) * sig) * Math.pow(2,exp - 127);
};
haxe_io_FPHelper.floatToI32 = function(f) {
	if(f == 0) return 0;
	var af;
	if(f < 0) af = -f; else af = f;
	var exp = Math.floor(Math.log(af) / 0.6931471805599453);
	if(exp < -127) exp = -127; else if(exp > 128) exp = 128;
	var sig = Math.round((af / Math.pow(2,exp) - 1) * 8388608) & 8388607;
	return (f < 0?-2147483648:0) | exp + 127 << 23 | sig;
};
haxe_io_FPHelper.i64ToDouble = function(low,high) {
	var sign = 1 - (high >>> 31 << 1);
	var exp = (high >> 20 & 2047) - 1023;
	var sig = (high & 1048575) * 4294967296. + (low >>> 31) * 2147483648. + (low & 2147483647);
	if(sig == 0 && exp == -1023) return 0.0;
	return sign * (1.0 + Math.pow(2,-52) * sig) * Math.pow(2,exp);
};
haxe_io_FPHelper.doubleToI64 = function(v) {
	var i64 = haxe_io_FPHelper.i64tmp;
	if(v == 0) {
		i64.low = 0;
		i64.high = 0;
	} else {
		var av;
		if(v < 0) av = -v; else av = v;
		var exp = Math.floor(Math.log(av) / 0.6931471805599453);
		var sig;
		var v1 = (av / Math.pow(2,exp) - 1) * 4503599627370496.;
		sig = Math.round(v1);
		var sig_l = sig | 0;
		var sig_h = sig / 4294967296.0 | 0;
		i64.low = sig_l;
		i64.high = (v < 0?-2147483648:0) | exp + 1023 << 20 | sig_h;
	}
	return i64;
};
var haxe_io_Path = function(path) {
	switch(path) {
	case ".":case "..":
		this.dir = path;
		this.file = "";
		return;
	}
	var c1 = path.lastIndexOf("/");
	var c2 = path.lastIndexOf("\\");
	if(c1 < c2) {
		this.dir = HxOverrides.substr(path,0,c2);
		path = HxOverrides.substr(path,c2 + 1,null);
		this.backslash = true;
	} else if(c2 < c1) {
		this.dir = HxOverrides.substr(path,0,c1);
		path = HxOverrides.substr(path,c1 + 1,null);
	} else this.dir = null;
	var cp = path.lastIndexOf(".");
	if(cp != -1) {
		this.ext = HxOverrides.substr(path,cp + 1,null);
		this.file = HxOverrides.substr(path,0,cp);
	} else {
		this.ext = null;
		this.file = path;
	}
};
$hxClasses["haxe.io.Path"] = haxe_io_Path;
haxe_io_Path.__name__ = true;
haxe_io_Path.withoutExtension = function(path) {
	var s = new haxe_io_Path(path);
	s.ext = null;
	return s.toString();
};
haxe_io_Path.prototype = {
	toString: function() {
		return (this.dir == null?"":this.dir + (this.backslash?"\\":"/")) + this.file + (this.ext == null?"":"." + this.ext);
	}
	,__class__: haxe_io_Path
};
var js__$Boot_HaxeError = function(val) {
	Error.call(this);
	this.val = val;
	if(Object.prototype.hasOwnProperty.call(val,"name")) this.name = Reflect.field(val,"name"); else this.name = "Error";
	if(Object.prototype.hasOwnProperty.call(val,"message")) this.message = Reflect.field(val,"message"); else this.message = Std.string(val);
	if(Error.captureStackTrace) Error.captureStackTrace(this,js__$Boot_HaxeError);
};
$hxClasses["js._Boot.HaxeError"] = js__$Boot_HaxeError;
js__$Boot_HaxeError.__name__ = true;
js__$Boot_HaxeError.__super__ = Error;
js__$Boot_HaxeError.prototype = $extend(Error.prototype,{
	__class__: js__$Boot_HaxeError
});
var js_Boot = function() { };
$hxClasses["js.Boot"] = js_Boot;
js_Boot.__name__ = true;
js_Boot.getClass = function(o) {
	if((o instanceof Array) && o.__enum__ == null) return Array; else {
		var cl = o.__class__;
		if(cl != null) return cl;
		var name = js_Boot.__nativeClassName(o);
		if(name != null) return js_Boot.__resolveNativeClass(name);
		return null;
	}
};
js_Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ || o.__ename__)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__) {
				if(o.length == 2) return o[0];
				var str2 = o[0] + "(";
				s += "\t";
				var _g1 = 2;
				var _g = o.length;
				while(_g1 < _g) {
					var i1 = _g1++;
					if(i1 != 2) str2 += "," + js_Boot.__string_rec(o[i1],s); else str2 += js_Boot.__string_rec(o[i1],s);
				}
				return str2 + ")";
			}
			var l = o.length;
			var i;
			var str1 = "[";
			s += "\t";
			var _g2 = 0;
			while(_g2 < l) {
				var i2 = _g2++;
				str1 += (i2 > 0?",":"") + js_Boot.__string_rec(o[i2],s);
			}
			str1 += "]";
			return str1;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			return "???";
		}
		if(tostr != null && tostr != Object.toString && typeof(tostr) == "function") {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str = "{\n";
		s += "\t";
		var hasp = o.hasOwnProperty != null;
		for( var k in o ) {
		if(hasp && !o.hasOwnProperty(k)) {
			continue;
		}
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__" || k == "__properties__") {
			continue;
		}
		if(str.length != 2) str += ", \n";
		str += s + k + " : " + js_Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str += "\n" + s + "}";
		return str;
	case "function":
		return "<function>";
	case "string":
		return o;
	default:
		return String(o);
	}
};
js_Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0;
		var _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js_Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js_Boot.__interfLoop(cc.__super__,cl);
};
js_Boot.__instanceof = function(o,cl) {
	if(cl == null) return false;
	switch(cl) {
	case Int:
		return (o|0) === o;
	case Float:
		return typeof(o) == "number";
	case Bool:
		return typeof(o) == "boolean";
	case String:
		return typeof(o) == "string";
	case Array:
		return (o instanceof Array) && o.__enum__ == null;
	case Dynamic:
		return true;
	default:
		if(o != null) {
			if(typeof(cl) == "function") {
				if(o instanceof cl) return true;
				if(js_Boot.__interfLoop(js_Boot.getClass(o),cl)) return true;
			} else if(typeof(cl) == "object" && js_Boot.__isNativeObj(cl)) {
				if(o instanceof cl) return true;
			}
		} else return false;
		if(cl == Class && o.__name__ != null) return true;
		if(cl == Enum && o.__ename__ != null) return true;
		return o.__enum__ == cl;
	}
};
js_Boot.__cast = function(o,t) {
	if(js_Boot.__instanceof(o,t)) return o; else throw new js__$Boot_HaxeError("Cannot cast " + Std.string(o) + " to " + Std.string(t));
};
js_Boot.__nativeClassName = function(o) {
	var name = js_Boot.__toStr.call(o).slice(8,-1);
	if(name == "Object" || name == "Function" || name == "Math" || name == "JSON") return null;
	return name;
};
js_Boot.__isNativeObj = function(o) {
	return js_Boot.__nativeClassName(o) != null;
};
js_Boot.__resolveNativeClass = function(name) {
	return (Function("return typeof " + name + " != \"undefined\" ? " + name + " : null"))();
};
var js_html_compat_ArrayBuffer = function(a) {
	if((a instanceof Array) && a.__enum__ == null) {
		this.a = a;
		this.byteLength = a.length;
	} else {
		var len = a;
		this.a = [];
		var _g = 0;
		while(_g < len) {
			var i = _g++;
			this.a[i] = 0;
		}
		this.byteLength = len;
	}
};
$hxClasses["js.html.compat.ArrayBuffer"] = js_html_compat_ArrayBuffer;
js_html_compat_ArrayBuffer.__name__ = true;
js_html_compat_ArrayBuffer.sliceImpl = function(begin,end) {
	var u = new Uint8Array(this,begin,end == null?null:end - begin);
	var result = new ArrayBuffer(u.byteLength);
	var resultArray = new Uint8Array(result);
	resultArray.set(u);
	return result;
};
js_html_compat_ArrayBuffer.prototype = {
	slice: function(begin,end) {
		return new js_html_compat_ArrayBuffer(this.a.slice(begin,end));
	}
	,__class__: js_html_compat_ArrayBuffer
};
var js_html_compat_DataView = function(buffer,byteOffset,byteLength) {
	this.buf = buffer;
	if(byteOffset == null) this.offset = 0; else this.offset = byteOffset;
	if(byteLength == null) this.length = buffer.byteLength - this.offset; else this.length = byteLength;
	if(this.offset < 0 || this.length < 0 || this.offset + this.length > buffer.byteLength) throw new js__$Boot_HaxeError(haxe_io_Error.OutsideBounds);
};
$hxClasses["js.html.compat.DataView"] = js_html_compat_DataView;
js_html_compat_DataView.__name__ = true;
js_html_compat_DataView.prototype = {
	getInt8: function(byteOffset) {
		var v = this.buf.a[this.offset + byteOffset];
		if(v >= 128) return v - 256; else return v;
	}
	,getUint8: function(byteOffset) {
		return this.buf.a[this.offset + byteOffset];
	}
	,getInt16: function(byteOffset,littleEndian) {
		var v = this.getUint16(byteOffset,littleEndian);
		if(v >= 32768) return v - 65536; else return v;
	}
	,getUint16: function(byteOffset,littleEndian) {
		if(littleEndian) return this.buf.a[this.offset + byteOffset] | this.buf.a[this.offset + byteOffset + 1] << 8; else return this.buf.a[this.offset + byteOffset] << 8 | this.buf.a[this.offset + byteOffset + 1];
	}
	,getInt32: function(byteOffset,littleEndian) {
		var p = this.offset + byteOffset;
		var a = this.buf.a[p++];
		var b = this.buf.a[p++];
		var c = this.buf.a[p++];
		var d = this.buf.a[p++];
		if(littleEndian) return a | b << 8 | c << 16 | d << 24; else return d | c << 8 | b << 16 | a << 24;
	}
	,getUint32: function(byteOffset,littleEndian) {
		var v = this.getInt32(byteOffset,littleEndian);
		if(v < 0) return v + 4294967296.; else return v;
	}
	,getFloat32: function(byteOffset,littleEndian) {
		return haxe_io_FPHelper.i32ToFloat(this.getInt32(byteOffset,littleEndian));
	}
	,getFloat64: function(byteOffset,littleEndian) {
		var a = this.getInt32(byteOffset,littleEndian);
		var b = this.getInt32(byteOffset + 4,littleEndian);
		return haxe_io_FPHelper.i64ToDouble(littleEndian?a:b,littleEndian?b:a);
	}
	,setInt8: function(byteOffset,value) {
		if(value < 0) this.buf.a[byteOffset + this.offset] = value + 128 & 255; else this.buf.a[byteOffset + this.offset] = value & 255;
	}
	,setUint8: function(byteOffset,value) {
		this.buf.a[byteOffset + this.offset] = value & 255;
	}
	,setInt16: function(byteOffset,value,littleEndian) {
		this.setUint16(byteOffset,value < 0?value + 65536:value,littleEndian);
	}
	,setUint16: function(byteOffset,value,littleEndian) {
		var p = byteOffset + this.offset;
		if(littleEndian) {
			this.buf.a[p] = value & 255;
			this.buf.a[p++] = value >> 8 & 255;
		} else {
			this.buf.a[p++] = value >> 8 & 255;
			this.buf.a[p] = value & 255;
		}
	}
	,setInt32: function(byteOffset,value,littleEndian) {
		this.setUint32(byteOffset,value,littleEndian);
	}
	,setUint32: function(byteOffset,value,littleEndian) {
		var p = byteOffset + this.offset;
		if(littleEndian) {
			this.buf.a[p++] = value & 255;
			this.buf.a[p++] = value >> 8 & 255;
			this.buf.a[p++] = value >> 16 & 255;
			this.buf.a[p++] = value >>> 24;
		} else {
			this.buf.a[p++] = value >>> 24;
			this.buf.a[p++] = value >> 16 & 255;
			this.buf.a[p++] = value >> 8 & 255;
			this.buf.a[p++] = value & 255;
		}
	}
	,setFloat32: function(byteOffset,value,littleEndian) {
		this.setUint32(byteOffset,haxe_io_FPHelper.floatToI32(value),littleEndian);
	}
	,setFloat64: function(byteOffset,value,littleEndian) {
		var i64 = haxe_io_FPHelper.doubleToI64(value);
		if(littleEndian) {
			this.setUint32(byteOffset,i64.low);
			this.setUint32(byteOffset,i64.high);
		} else {
			this.setUint32(byteOffset,i64.high);
			this.setUint32(byteOffset,i64.low);
		}
	}
	,__class__: js_html_compat_DataView
};
var js_html_compat_Uint8Array = function() { };
$hxClasses["js.html.compat.Uint8Array"] = js_html_compat_Uint8Array;
js_html_compat_Uint8Array.__name__ = true;
js_html_compat_Uint8Array._new = function(arg1,offset,length) {
	var arr;
	if(typeof(arg1) == "number") {
		arr = [];
		var _g = 0;
		while(_g < arg1) {
			var i = _g++;
			arr[i] = 0;
		}
		arr.byteLength = arr.length;
		arr.byteOffset = 0;
		arr.buffer = new js_html_compat_ArrayBuffer(arr);
	} else if(js_Boot.__instanceof(arg1,js_html_compat_ArrayBuffer)) {
		var buffer = arg1;
		if(offset == null) offset = 0;
		if(length == null) length = buffer.byteLength - offset;
		if(offset == 0) arr = buffer.a; else arr = buffer.a.slice(offset,offset + length);
		arr.byteLength = arr.length;
		arr.byteOffset = offset;
		arr.buffer = buffer;
	} else if((arg1 instanceof Array) && arg1.__enum__ == null) {
		arr = arg1.slice();
		arr.byteLength = arr.length;
		arr.byteOffset = 0;
		arr.buffer = new js_html_compat_ArrayBuffer(arr);
	} else throw new js__$Boot_HaxeError("TODO " + Std.string(arg1));
	arr.subarray = js_html_compat_Uint8Array._subarray;
	arr.set = js_html_compat_Uint8Array._set;
	return arr;
};
js_html_compat_Uint8Array._set = function(arg,offset) {
	var t = this;
	if(js_Boot.__instanceof(arg.buffer,js_html_compat_ArrayBuffer)) {
		var a = arg;
		if(arg.byteLength + offset > t.byteLength) throw new js__$Boot_HaxeError("set() outside of range");
		var _g1 = 0;
		var _g = arg.byteLength;
		while(_g1 < _g) {
			var i = _g1++;
			t[i + offset] = a[i];
		}
	} else if((arg instanceof Array) && arg.__enum__ == null) {
		var a1 = arg;
		if(a1.length + offset > t.byteLength) throw new js__$Boot_HaxeError("set() outside of range");
		var _g11 = 0;
		var _g2 = a1.length;
		while(_g11 < _g2) {
			var i1 = _g11++;
			t[i1 + offset] = a1[i1];
		}
	} else throw new js__$Boot_HaxeError("TODO");
};
js_html_compat_Uint8Array._subarray = function(start,end) {
	var t = this;
	var a = js_html_compat_Uint8Array._new(t.slice(start,end));
	a.byteOffset = start;
	return a;
};
var lime_AssetCache = function() {
	this.enabled = true;
	this.audio = new haxe_ds_StringMap();
	this.font = new haxe_ds_StringMap();
	this.image = new haxe_ds_StringMap();
};
$hxClasses["lime.AssetCache"] = lime_AssetCache;
lime_AssetCache.__name__ = true;
lime_AssetCache.prototype = {
	clear: function(prefix) {
		if(prefix == null) {
			this.audio = new haxe_ds_StringMap();
			this.font = new haxe_ds_StringMap();
			this.image = new haxe_ds_StringMap();
		} else {
			var keys = this.audio.keys();
			while( keys.hasNext() ) {
				var key = keys.next();
				if(StringTools.startsWith(key,prefix)) this.audio.remove(key);
			}
			var keys1 = this.font.keys();
			while( keys1.hasNext() ) {
				var key1 = keys1.next();
				if(StringTools.startsWith(key1,prefix)) this.font.remove(key1);
			}
			var keys2 = this.image.keys();
			while( keys2.hasNext() ) {
				var key2 = keys2.next();
				if(StringTools.startsWith(key2,prefix)) this.image.remove(key2);
			}
		}
	}
	,__class__: lime_AssetCache
};
var lime_Assets = function() { };
$hxClasses["lime.Assets"] = lime_Assets;
lime_Assets.__name__ = true;
lime_Assets.getImage = function(id,useCache) {
	if(useCache == null) useCache = true;
	lime_Assets.initialize();
	if(useCache && lime_Assets.cache.enabled && lime_Assets.cache.image.exists(id)) {
		var image = lime_Assets.cache.image.get(id);
		if(lime_Assets.isValidImage(image)) return image;
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = lime_Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,"IMAGE")) {
			if(library.isLocal(symbolName,"IMAGE")) {
				var image1 = library.getImage(symbolName);
				if(useCache && lime_Assets.cache.enabled) lime_Assets.cache.image.set(id,image1);
				return image1;
			} else console.log("[Assets] Image asset \"" + id + "\" exists, but only asynchronously");
		} else console.log("[Assets] There is no Image asset with an ID of \"" + id + "\"");
	} else console.log("[Assets] There is no asset library named \"" + libraryName + "\"");
	return null;
};
lime_Assets.getLibrary = function(name) {
	if(name == null || name == "") name = "default";
	return lime_Assets.libraries.get(name);
};
lime_Assets.initialize = function() {
	if(!lime_Assets.initialized) {
		lime_Assets.registerLibrary("default",new DefaultAssetLibrary());
		lime_Assets.initialized = true;
	}
};
lime_Assets.isValidImage = function(buffer) {
	return true;
};
lime_Assets.registerLibrary = function(name,library) {
	if(lime_Assets.libraries.exists(name)) lime_Assets.unloadLibrary(name);
	if(library != null) library.eventCallback = lime_Assets.library_onEvent;
	lime_Assets.libraries.set(name,library);
};
lime_Assets.unloadLibrary = function(name) {
	lime_Assets.initialize();
	var library = lime_Assets.libraries.get(name);
	if(library != null) {
		lime_Assets.cache.clear(name + ":");
		library.eventCallback = null;
	}
	lime_Assets.libraries.remove(name);
};
lime_Assets.library_onEvent = function(library,type) {
	if(type == "change") lime_Assets.cache.clear();
};
var lime__$backend_html5_HTML5Application = function(parent) {
	this.parent = parent;
	this.currentUpdate = 0;
	this.lastUpdate = 0;
	this.nextUpdate = 0;
	this.framePeriod = -1;
	lime_audio_AudioManager.init();
};
$hxClasses["lime._backend.html5.HTML5Application"] = lime__$backend_html5_HTML5Application;
lime__$backend_html5_HTML5Application.__name__ = true;
lime__$backend_html5_HTML5Application.prototype = {
	convertKeyCode: function(keyCode) {
		if(keyCode >= 65 && keyCode <= 90) return keyCode + 32;
		switch(keyCode) {
		case 16:
			return 1073742049;
		case 17:
			return 1073742048;
		case 18:
			return 1073742050;
		case 20:
			return 1073741881;
		case 144:
			return 1073741907;
		case 37:
			return 1073741904;
		case 38:
			return 1073741906;
		case 39:
			return 1073741903;
		case 40:
			return 1073741905;
		case 45:
			return 1073741897;
		case 46:
			return 127;
		case 36:
			return 1073741898;
		case 35:
			return 1073741901;
		case 33:
			return 1073741899;
		case 34:
			return 1073741902;
		case 112:
			return 1073741882;
		case 113:
			return 1073741883;
		case 114:
			return 1073741884;
		case 115:
			return 1073741885;
		case 116:
			return 1073741886;
		case 117:
			return 1073741887;
		case 118:
			return 1073741888;
		case 119:
			return 1073741889;
		case 120:
			return 1073741890;
		case 121:
			return 1073741891;
		case 122:
			return 1073741892;
		case 123:
			return 1073741893;
		}
		return keyCode;
	}
	,create: function(config) {
		this.parent.config = config;
		if(config != null) {
			var $window = new lime_ui_Window(config);
			var renderer = new lime_graphics_Renderer($window);
			this.parent.addWindow($window);
			this.parent.addRenderer(renderer);
			this.parent.init(renderer.context);
		}
	}
	,exec: function() {
		window.addEventListener("keydown",$bind(this,this.handleKeyEvent),false);
		window.addEventListener("keyup",$bind(this,this.handleKeyEvent),false);
		window.addEventListener("focus",$bind(this,this.handleWindowEvent),false);
		window.addEventListener("blur",$bind(this,this.handleWindowEvent),false);
		window.addEventListener("resize",$bind(this,this.handleWindowEvent),false);
		window.addEventListener("beforeunload",$bind(this,this.handleWindowEvent),false);
		
			var lastTime = 0;
			var vendors = ['ms', 'moz', 'webkit', 'o'];
			for(var x = 0; x < vendors.length && !window.requestAnimationFrame; ++x) {
				window.requestAnimationFrame = window[vendors[x]+'RequestAnimationFrame'];
				window.cancelAnimationFrame = window[vendors[x]+'CancelAnimationFrame'] 
										   || window[vendors[x]+'CancelRequestAnimationFrame'];
			}
			
			if (!window.requestAnimationFrame)
				window.requestAnimationFrame = function(callback, element) {
					var currTime = new Date().getTime();
					var timeToCall = Math.max(0, 16 - (currTime - lastTime));
					var id = window.setTimeout(function() { callback(currTime + timeToCall); }, 
					  timeToCall);
					lastTime = currTime + timeToCall;
					return id;
				};
			
			if (!window.cancelAnimationFrame)
				window.cancelAnimationFrame = function(id) {
					clearTimeout(id);
				};
			
			window.requestAnimFrame = window.requestAnimationFrame;
		;
		this.lastUpdate = new Date().getTime();
		this.handleUpdateEvent();
		return 0;
	}
	,handleKeyEvent: function(event) {
		if(this.parent.windows[0] != null) {
			var keyCode = this.convertKeyCode(event.keyCode != null?event.keyCode:event.which);
			var modifier;
			modifier = (event.shiftKey?3:0) | (event.ctrlKey?192:0) | (event.altKey?768:0) | (event.metaKey?3072:0);
			if(event.type == "keydown") {
				var listeners = this.parent.windows[0].onKeyDown.listeners;
				var repeat = this.parent.windows[0].onKeyDown.repeat;
				var length = listeners.length;
				var i = 0;
				while(i < length) {
					listeners[i](keyCode,modifier);
					if(!repeat[i]) {
						this.parent.windows[0].onKeyDown.remove(listeners[i]);
						length--;
					} else i++;
				}
				if(this.parent.windows[0].backend.getEnableTextEvents()) {
					var listeners1 = this.parent.windows[0].onTextInput.listeners;
					var repeat1 = this.parent.windows[0].onTextInput.repeat;
					var length1 = listeners1.length;
					var i1 = 0;
					while(i1 < length1) {
						listeners1[i1](String.fromCharCode(event.keyCode));
						if(!repeat1[i1]) {
							this.parent.windows[0].onTextInput.remove(listeners1[i1]);
							length1--;
						} else i1++;
					}
				}
			} else {
				var listeners2 = this.parent.windows[0].onKeyUp.listeners;
				var repeat2 = this.parent.windows[0].onKeyUp.repeat;
				var length2 = listeners2.length;
				var i2 = 0;
				while(i2 < length2) {
					listeners2[i2](keyCode,modifier);
					if(!repeat2[i2]) {
						this.parent.windows[0].onKeyUp.remove(listeners2[i2]);
						length2--;
					} else i2++;
				}
			}
		}
	}
	,handleUpdateEvent: function(__) {
		this.currentUpdate = new Date().getTime();
		if(this.currentUpdate >= this.nextUpdate) {
			this.deltaTime = this.currentUpdate - this.lastUpdate;
			var listeners = this.parent.onUpdate.listeners;
			var repeat = this.parent.onUpdate.repeat;
			var length = listeners.length;
			var i = 0;
			while(i < length) {
				listeners[i](this.deltaTime | 0);
				if(!repeat[i]) {
					this.parent.onUpdate.remove(listeners[i]);
					length--;
				} else i++;
			}
			if(this.parent.renderers[0] != null) {
				var listeners1 = this.parent.renderers[0].onRender.listeners;
				var repeat1 = this.parent.renderers[0].onRender.repeat;
				var length1 = listeners1.length;
				var i1 = 0;
				while(i1 < length1) {
					listeners1[i1](this.parent.renderers[0].context);
					if(!repeat1[i1]) {
						this.parent.renderers[0].onRender.remove(listeners1[i1]);
						length1--;
					} else i1++;
				}
				this.parent.renderers[0].flip();
			}
			if(this.framePeriod < 0) {
				this.nextUpdate = this.currentUpdate;
				this.nextUpdate = this.currentUpdate;
			} else this.nextUpdate = this.currentUpdate + this.framePeriod;
			this.lastUpdate = this.currentUpdate;
		}
		window.requestAnimationFrame($bind(this,this.handleUpdateEvent));
	}
	,handleWindowEvent: function(event) {
		if(this.parent.windows[0] != null) {
			var _g = event.type;
			switch(_g) {
			case "focus":
				var listeners = this.parent.windows[0].onWindowFocusIn.listeners;
				var repeat = this.parent.windows[0].onWindowFocusIn.repeat;
				var length = listeners.length;
				var i = 0;
				while(i < length) {
					listeners[i]();
					if(!repeat[i]) {
						this.parent.windows[0].onWindowFocusIn.remove(listeners[i]);
						length--;
					} else i++;
				}
				var listeners1 = this.parent.windows[0].onWindowActivate.listeners;
				var repeat1 = this.parent.windows[0].onWindowActivate.repeat;
				var length1 = listeners1.length;
				var i1 = 0;
				while(i1 < length1) {
					listeners1[i1]();
					if(!repeat1[i1]) {
						this.parent.windows[0].onWindowActivate.remove(listeners1[i1]);
						length1--;
					} else i1++;
				}
				break;
			case "blur":
				var listeners2 = this.parent.windows[0].onWindowFocusOut.listeners;
				var repeat2 = this.parent.windows[0].onWindowFocusOut.repeat;
				var length2 = listeners2.length;
				var i2 = 0;
				while(i2 < length2) {
					listeners2[i2]();
					if(!repeat2[i2]) {
						this.parent.windows[0].onWindowFocusOut.remove(listeners2[i2]);
						length2--;
					} else i2++;
				}
				var listeners3 = this.parent.windows[0].onWindowDeactivate.listeners;
				var repeat3 = this.parent.windows[0].onWindowDeactivate.repeat;
				var length3 = listeners3.length;
				var i3 = 0;
				while(i3 < length3) {
					listeners3[i3]();
					if(!repeat3[i3]) {
						this.parent.windows[0].onWindowDeactivate.remove(listeners3[i3]);
						length3--;
					} else i3++;
				}
				break;
			case "resize":
				var cacheWidth = this.parent.windows[0].__width;
				var cacheHeight = this.parent.windows[0].__height;
				this.parent.windows[0].backend.handleResize();
				if(this.parent.windows[0].__width != cacheWidth || this.parent.windows[0].__height != cacheHeight) {
					var listeners4 = this.parent.windows[0].onWindowResize.listeners;
					var repeat4 = this.parent.windows[0].onWindowResize.repeat;
					var length4 = listeners4.length;
					var i4 = 0;
					while(i4 < length4) {
						listeners4[i4](this.parent.windows[0].__width,this.parent.windows[0].__height);
						if(!repeat4[i4]) {
							this.parent.windows[0].onWindowResize.remove(listeners4[i4]);
							length4--;
						} else i4++;
					}
				}
				break;
			case "beforeunload":
				var listeners5 = this.parent.windows[0].onWindowClose.listeners;
				var repeat5 = this.parent.windows[0].onWindowClose.repeat;
				var length5 = listeners5.length;
				var i5 = 0;
				while(i5 < length5) {
					listeners5[i5]();
					if(!repeat5[i5]) {
						this.parent.windows[0].onWindowClose.remove(listeners5[i5]);
						length5--;
					} else i5++;
				}
				break;
			}
		}
	}
	,__class__: lime__$backend_html5_HTML5Application
};
var lime__$backend_html5_HTML5Mouse = function() { };
$hxClasses["lime._backend.html5.HTML5Mouse"] = lime__$backend_html5_HTML5Mouse;
lime__$backend_html5_HTML5Mouse.__name__ = true;
lime__$backend_html5_HTML5Mouse.__cursor = null;
lime__$backend_html5_HTML5Mouse.__hidden = null;
lime__$backend_html5_HTML5Mouse.set_cursor = function(value) {
	if(lime__$backend_html5_HTML5Mouse.__cursor != value) {
		if(!lime__$backend_html5_HTML5Mouse.__hidden) {
			var _g = 0;
			var _g1 = lime_app_Application.current.windows;
			while(_g < _g1.length) {
				var $window = _g1[_g];
				++_g;
				switch(value[1]) {
				case 0:
					$window.backend.element.style.cursor = "default";
					break;
				case 1:
					$window.backend.element.style.cursor = "crosshair";
					break;
				case 3:
					$window.backend.element.style.cursor = "move";
					break;
				case 4:
					$window.backend.element.style.cursor = "pointer";
					break;
				case 5:
					$window.backend.element.style.cursor = "nesw-resize";
					break;
				case 6:
					$window.backend.element.style.cursor = "ns-resize";
					break;
				case 7:
					$window.backend.element.style.cursor = "nwse-resize";
					break;
				case 8:
					$window.backend.element.style.cursor = "ew-resize";
					break;
				case 9:
					$window.backend.element.style.cursor = "text";
					break;
				case 10:
					$window.backend.element.style.cursor = "wait";
					break;
				case 11:
					$window.backend.element.style.cursor = "wait";
					break;
				default:
					$window.backend.element.style.cursor = "auto";
				}
			}
		}
		lime__$backend_html5_HTML5Mouse.__cursor = value;
	}
	return lime__$backend_html5_HTML5Mouse.__cursor;
};
var lime__$backend_html5_HTML5Renderer = function(parent) {
	this.parent = parent;
};
$hxClasses["lime._backend.html5.HTML5Renderer"] = lime__$backend_html5_HTML5Renderer;
lime__$backend_html5_HTML5Renderer.__name__ = true;
lime__$backend_html5_HTML5Renderer.prototype = {
	create: function() {
		this.createContext();
		{
			var _g = this.parent.context;
			switch(_g[1]) {
			case 0:
				this.parent.window.backend.canvas.addEventListener("webglcontextlost",$bind(this,this.handleEvent),false);
				this.parent.window.backend.canvas.addEventListener("webglcontextrestored",$bind(this,this.handleEvent),false);
				break;
			default:
			}
		}
	}
	,createContext: function() {
		if(this.parent.window.backend.div != null) this.parent.context = lime_graphics_RenderContext.DOM(this.parent.window.backend.div); else if(this.parent.window.backend.canvas != null) {
			var webgl = null;
			if(webgl == null) this.parent.context = lime_graphics_RenderContext.CANVAS(this.parent.window.backend.canvas.getContext("2d")); else {
				lime_graphics_opengl_GL.context = webgl;
				this.parent.context = lime_graphics_RenderContext.OPENGL(lime_graphics_opengl_GL.context);
			}
		}
	}
	,flip: function() {
	}
	,handleEvent: function(event) {
		var _g = event.type;
		switch(_g) {
		case "webglcontextlost":
			event.preventDefault();
			this.parent.context = null;
			var listeners = this.parent.onRenderContextLost.listeners;
			var repeat = this.parent.onRenderContextLost.repeat;
			var length = listeners.length;
			var i = 0;
			while(i < length) {
				listeners[i]();
				if(!repeat[i]) {
					this.parent.onRenderContextLost.remove(listeners[i]);
					length--;
				} else i++;
			}
			break;
		case "webglcontextrestored":
			this.createContext();
			var listeners1 = this.parent.onRenderContextRestored.listeners;
			var repeat1 = this.parent.onRenderContextRestored.repeat;
			var length1 = listeners1.length;
			var i1 = 0;
			while(i1 < length1) {
				listeners1[i1](this.parent.context);
				if(!repeat1[i1]) {
					this.parent.onRenderContextRestored.remove(listeners1[i1]);
					length1--;
				} else i1++;
			}
			break;
		default:
		}
	}
	,__class__: lime__$backend_html5_HTML5Renderer
};
var lime__$backend_html5_HTML5Window = function(parent) {
	this.parent = parent;
	if(parent.config != null && Object.prototype.hasOwnProperty.call(parent.config,"element")) this.element = parent.config.element;
};
$hxClasses["lime._backend.html5.HTML5Window"] = lime__$backend_html5_HTML5Window;
lime__$backend_html5_HTML5Window.__name__ = true;
lime__$backend_html5_HTML5Window.prototype = {
	create: function(application) {
		this.setWidth = this.parent.__width;
		this.setHeight = this.parent.__height;
		if(js_Boot.__instanceof(this.element,HTMLCanvasElement)) this.canvas = this.element; else this.canvas = window.document.createElement("canvas");
		if(this.canvas != null) {
			var style = this.canvas.style;
			style.setProperty("-webkit-transform","translateZ(0)",null);
			style.setProperty("transform","translateZ(0)",null);
		} else if(this.div != null) {
			var style1 = this.div.style;
			style1.setProperty("-webkit-transform","translate3D(0,0,0)",null);
			style1.setProperty("transform","translate3D(0,0,0)",null);
			style1.position = "relative";
			style1.overflow = "hidden";
			style1.setProperty("-webkit-user-select","none",null);
			style1.setProperty("-moz-user-select","none",null);
			style1.setProperty("-ms-user-select","none",null);
			style1.setProperty("-o-user-select","none",null);
		}
		if(this.parent.__width == 0 && this.parent.__height == 0) {
			if(this.element != null) {
				this.parent.set_width(this.element.clientWidth);
				this.parent.set_height(this.element.clientHeight);
			} else {
				this.parent.set_width(window.innerWidth);
				this.parent.set_height(window.innerHeight);
			}
			this.parent.set_fullscreen(true);
		}
		if(this.canvas != null) {
			this.canvas.width = this.parent.__width;
			this.canvas.height = this.parent.__height;
		} else {
			this.div.style.width = this.parent.__width + "px";
			this.div.style.height = this.parent.__height + "px";
		}
		this.handleResize();
		if(this.element != null) {
			if(this.canvas != null) {
				if(this.element != this.canvas) this.element.appendChild(this.canvas);
			} else this.element.appendChild(this.div);
			var events = ["mousedown","mouseenter","mouseleave","mousemove","mouseup","wheel"];
			var _g = 0;
			while(_g < events.length) {
				var event = events[_g];
				++_g;
				this.element.addEventListener(event,$bind(this,this.handleMouseEvent),true);
			}
			window.document.addEventListener("dragstart",function(e) {
				if(e.target.nodeName.toLowerCase() == "img") {
					e.preventDefault();
					return false;
				}
				return true;
			},false);
			this.element.addEventListener("touchstart",$bind(this,this.handleTouchEvent),true);
			this.element.addEventListener("touchmove",$bind(this,this.handleTouchEvent),true);
			this.element.addEventListener("touchend",$bind(this,this.handleTouchEvent),true);
		}
	}
	,getEnableTextEvents: function() {
		return this.enableTextEvents;
	}
	,handleMouseEvent: function(event) {
		var x = 0.0;
		var y = 0.0;
		if(event.type != "wheel") {
			if(this.element != null) {
				if(this.canvas != null) {
					var rect = this.canvas.getBoundingClientRect();
					x = (event.clientX - rect.left) * (this.parent.__width / rect.width);
					y = (event.clientY - rect.top) * (this.parent.__height / rect.height);
				} else if(this.div != null) {
					var rect1 = this.div.getBoundingClientRect();
					x = event.clientX - rect1.left;
					y = event.clientY - rect1.top;
				} else {
					var rect2 = this.element.getBoundingClientRect();
					x = (event.clientX - rect2.left) * (this.parent.__width / rect2.width);
					y = (event.clientY - rect2.top) * (this.parent.__height / rect2.height);
				}
			} else {
				x = event.clientX;
				y = event.clientY;
			}
			var _g = event.type;
			switch(_g) {
			case "mousedown":
				var listeners = this.parent.onMouseDown.listeners;
				var repeat = this.parent.onMouseDown.repeat;
				var length = listeners.length;
				var i = 0;
				while(i < length) {
					listeners[i](x,y,event.button);
					if(!repeat[i]) {
						this.parent.onMouseDown.remove(listeners[i]);
						length--;
					} else i++;
				}
				break;
			case "mouseenter":
				var listeners1 = this.parent.onWindowEnter.listeners;
				var repeat1 = this.parent.onWindowEnter.repeat;
				var length1 = listeners1.length;
				var i1 = 0;
				while(i1 < length1) {
					listeners1[i1]();
					if(!repeat1[i1]) {
						this.parent.onWindowEnter.remove(listeners1[i1]);
						length1--;
					} else i1++;
				}
				break;
			case "mouseleave":
				var listeners2 = this.parent.onWindowLeave.listeners;
				var repeat2 = this.parent.onWindowLeave.repeat;
				var length2 = listeners2.length;
				var i2 = 0;
				while(i2 < length2) {
					listeners2[i2]();
					if(!repeat2[i2]) {
						this.parent.onWindowLeave.remove(listeners2[i2]);
						length2--;
					} else i2++;
				}
				break;
			case "mouseup":
				var listeners3 = this.parent.onMouseUp.listeners;
				var repeat3 = this.parent.onMouseUp.repeat;
				var length3 = listeners3.length;
				var i3 = 0;
				while(i3 < length3) {
					listeners3[i3](x,y,event.button);
					if(!repeat3[i3]) {
						this.parent.onMouseUp.remove(listeners3[i3]);
						length3--;
					} else i3++;
				}
				break;
			case "mousemove":
				var listeners4 = this.parent.onMouseMove.listeners;
				var repeat4 = this.parent.onMouseMove.repeat;
				var length4 = listeners4.length;
				var i4 = 0;
				while(i4 < length4) {
					listeners4[i4](x,y);
					if(!repeat4[i4]) {
						this.parent.onMouseMove.remove(listeners4[i4]);
						length4--;
					} else i4++;
				}
				break;
			default:
			}
		} else {
			var listeners5 = this.parent.onMouseWheel.listeners;
			var repeat5 = this.parent.onMouseWheel.repeat;
			var length5 = listeners5.length;
			var i5 = 0;
			while(i5 < length5) {
				listeners5[i5](event.deltaX,-event.deltaY);
				if(!repeat5[i5]) {
					this.parent.onMouseWheel.remove(listeners5[i5]);
					length5--;
				} else i5++;
			}
		}
	}
	,handleResize: function() {
		var stretch = this.parent.__fullscreen || this.setWidth == 0 && this.setHeight == 0;
		if(this.element != null && (this.div == null || this.div != null && stretch)) {
			if(stretch) {
				if(this.parent.__width != this.element.clientWidth || this.parent.__height != this.element.clientHeight) {
					this.parent.set_width(this.element.clientWidth);
					this.parent.set_height(this.element.clientHeight);
					if(this.canvas != null) {
						if(this.element != this.canvas) {
							this.canvas.width = this.element.clientWidth;
							this.canvas.height = this.element.clientHeight;
						}
					} else {
						this.div.style.width = this.element.clientWidth + "px";
						this.div.style.height = this.element.clientHeight + "px";
					}
				}
			} else {
				var scaleX = this.element.clientWidth / this.setWidth;
				var scaleY = this.element.clientHeight / this.setHeight;
				var currentRatio = scaleX / scaleY;
				var targetRatio = Math.min(scaleX,scaleY);
				if(this.canvas != null) {
					if(this.element != this.canvas) {
						this.canvas.style.width = this.setWidth * targetRatio + "px";
						this.canvas.style.height = this.setHeight * targetRatio + "px";
						this.canvas.style.marginLeft = (this.element.clientWidth - this.setWidth * targetRatio) / 2 + "px";
						this.canvas.style.marginTop = (this.element.clientHeight - this.setHeight * targetRatio) / 2 + "px";
					}
				} else {
					this.div.style.width = this.setWidth * targetRatio + "px";
					this.div.style.height = this.setHeight * targetRatio + "px";
					this.div.style.marginLeft = (this.element.clientWidth - this.setWidth * targetRatio) / 2 + "px";
					this.div.style.marginTop = (this.element.clientHeight - this.setHeight * targetRatio) / 2 + "px";
				}
			}
		}
	}
	,handleTouchEvent: function(event) {
		event.preventDefault();
		var touch = event.changedTouches[0];
		var id = touch.identifier;
		var x = 0.0;
		var y = 0.0;
		if(this.element != null) {
			if(this.canvas != null) {
				var rect = this.canvas.getBoundingClientRect();
				x = (touch.clientX - rect.left) * (this.parent.__width / rect.width);
				y = (touch.clientY - rect.top) * (this.parent.__height / rect.height);
			} else if(this.div != null) {
				var rect1 = this.div.getBoundingClientRect();
				x = touch.clientX - rect1.left;
				y = touch.clientY - rect1.top;
			} else {
				var rect2 = this.element.getBoundingClientRect();
				x = (touch.clientX - rect2.left) * (this.parent.__width / rect2.width);
				y = (touch.clientY - rect2.top) * (this.parent.__height / rect2.height);
			}
		} else {
			x = touch.clientX;
			y = touch.clientY;
		}
		var _g = event.type;
		switch(_g) {
		case "touchstart":
			var listeners = this.parent.onTouchStart.listeners;
			var repeat = this.parent.onTouchStart.repeat;
			var length = listeners.length;
			var i = 0;
			while(i < length) {
				listeners[i](x,y,id);
				if(!repeat[i]) {
					this.parent.onTouchStart.remove(listeners[i]);
					length--;
				} else i++;
			}
			break;
		case "touchmove":
			var listeners1 = this.parent.onTouchMove.listeners;
			var repeat1 = this.parent.onTouchMove.repeat;
			var length1 = listeners1.length;
			var i1 = 0;
			while(i1 < length1) {
				listeners1[i1](x,y,id);
				if(!repeat1[i1]) {
					this.parent.onTouchMove.remove(listeners1[i1]);
					length1--;
				} else i1++;
			}
			break;
		case "touchend":
			var listeners2 = this.parent.onTouchEnd.listeners;
			var repeat2 = this.parent.onTouchEnd.repeat;
			var length2 = listeners2.length;
			var i2 = 0;
			while(i2 < length2) {
				listeners2[i2](x,y,id);
				if(!repeat2[i2]) {
					this.parent.onTouchEnd.remove(listeners2[i2]);
					length2--;
				} else i2++;
			}
			break;
		default:
		}
	}
	,resize: function(width,height) {
	}
	,setFullscreen: function(value) {
		return false;
	}
	,__class__: lime__$backend_html5_HTML5Window
};
var lime_app_IModule = function() { };
$hxClasses["lime.app.IModule"] = lime_app_IModule;
lime_app_IModule.__name__ = true;
lime_app_IModule.prototype = {
	__class__: lime_app_IModule
};
var lime_app_Module = function() {
};
$hxClasses["lime.app.Module"] = lime_app_Module;
lime_app_Module.__name__ = true;
lime_app_Module.__interfaces__ = [lime_app_IModule];
lime_app_Module.prototype = {
	init: function(context) {
	}
	,onGamepadAxisMove: function(gamepad,axis,value) {
	}
	,onGamepadButtonDown: function(gamepad,button) {
	}
	,onGamepadButtonUp: function(gamepad,button) {
	}
	,onGamepadConnect: function(gamepad) {
	}
	,onGamepadDisconnect: function(gamepad) {
	}
	,onKeyDown: function(keyCode,modifier) {
	}
	,onKeyUp: function(keyCode,modifier) {
	}
	,onMouseDown: function(x,y,button) {
	}
	,onMouseMove: function(x,y) {
	}
	,onMouseMoveRelative: function(x,y) {
	}
	,onMouseUp: function(x,y,button) {
	}
	,onMouseWheel: function(deltaX,deltaY) {
	}
	,onRenderContextLost: function() {
	}
	,onRenderContextRestored: function(context) {
	}
	,onTextEdit: function(text,start,length) {
	}
	,onTextInput: function(text) {
	}
	,onTouchEnd: function(x,y,id) {
	}
	,onTouchMove: function(x,y,id) {
	}
	,onTouchStart: function(x,y,id) {
	}
	,onWindowActivate: function() {
	}
	,onWindowClose: function() {
	}
	,onWindowDeactivate: function() {
	}
	,onWindowEnter: function() {
	}
	,onWindowFocusIn: function() {
	}
	,onWindowFocusOut: function() {
	}
	,onWindowFullscreen: function() {
	}
	,onWindowLeave: function() {
	}
	,onWindowMinimize: function() {
	}
	,onWindowMove: function(x,y) {
	}
	,onWindowResize: function(width,height) {
	}
	,onWindowRestore: function() {
	}
	,render: function(context) {
	}
	,update: function(deltaTime) {
	}
	,__class__: lime_app_Module
};
var lime_app_Application = function() {
	this.onUpdate = new lime_app_Event();
	lime_app_Module.call(this);
	if(lime_app_Application.current == null) lime_app_Application.current = this;
	this.modules = [];
	this.renderers = [];
	this.windows = [];
	this.backend = new lime__$backend_html5_HTML5Application(this);
	this.onUpdate.add($bind(this,this.update));
};
$hxClasses["lime.app.Application"] = lime_app_Application;
lime_app_Application.__name__ = true;
lime_app_Application.current = null;
lime_app_Application.__super__ = lime_app_Module;
lime_app_Application.prototype = $extend(lime_app_Module.prototype,{
	addModule: function(module) {
		this.modules.push(module);
		if(this.initialized && this.renderers[0] != null) module.init(this.renderers[0].context);
	}
	,addRenderer: function(renderer) {
		renderer.onRender.add($bind(this,this.render));
		renderer.onRenderContextLost.add($bind(this,this.onRenderContextLost));
		renderer.onRenderContextRestored.add($bind(this,this.onRenderContextRestored));
		this.renderers.push(renderer);
	}
	,addWindow: function(window) {
		this.windows.push(window);
		window.onGamepadAxisMove.add($bind(this,this.onGamepadAxisMove));
		window.onGamepadButtonDown.add($bind(this,this.onGamepadButtonDown));
		window.onGamepadButtonUp.add($bind(this,this.onGamepadButtonUp));
		window.onGamepadConnect.add($bind(this,this.onGamepadConnect));
		window.onGamepadDisconnect.add($bind(this,this.onGamepadDisconnect));
		window.onKeyDown.add($bind(this,this.onKeyDown));
		window.onKeyUp.add($bind(this,this.onKeyUp));
		window.onMouseDown.add($bind(this,this.onMouseDown));
		window.onMouseMove.add($bind(this,this.onMouseMove));
		window.onMouseMoveRelative.add($bind(this,this.onMouseMoveRelative));
		window.onMouseUp.add($bind(this,this.onMouseUp));
		window.onMouseWheel.add($bind(this,this.onMouseWheel));
		window.onTextEdit.add($bind(this,this.onTextEdit));
		window.onTextInput.add($bind(this,this.onTextInput));
		window.onTouchStart.add($bind(this,this.onTouchStart));
		window.onTouchMove.add($bind(this,this.onTouchMove));
		window.onTouchEnd.add($bind(this,this.onTouchEnd));
		window.onWindowActivate.add($bind(this,this.onWindowActivate));
		window.onWindowClose.add($bind(this,this.onWindowClose));
		window.onWindowDeactivate.add($bind(this,this.onWindowDeactivate));
		window.onWindowEnter.add($bind(this,this.onWindowEnter));
		window.onWindowFocusIn.add($bind(this,this.onWindowFocusIn));
		window.onWindowFocusOut.add($bind(this,this.onWindowFocusOut));
		window.onWindowFullscreen.add($bind(this,this.onWindowFullscreen));
		window.onWindowLeave.add($bind(this,this.onWindowLeave));
		window.onWindowMinimize.add($bind(this,this.onWindowMinimize));
		window.onWindowMove.add($bind(this,this.onWindowMove));
		window.onWindowResize.add($bind(this,this.onWindowResize));
		window.onWindowRestore.add($bind(this,this.onWindowRestore));
		window.create(this);
	}
	,create: function(config) {
		this.backend.create(config);
	}
	,exec: function() {
		lime_app_Application.current = this;
		return this.backend.exec();
	}
	,init: function(context) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.init(context);
		}
		this.initialized = true;
	}
	,onGamepadAxisMove: function(gamepad,axis,value) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onGamepadAxisMove(gamepad,axis,value);
		}
	}
	,onGamepadButtonDown: function(gamepad,button) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onGamepadButtonDown(gamepad,button);
		}
	}
	,onGamepadButtonUp: function(gamepad,button) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onGamepadButtonUp(gamepad,button);
		}
	}
	,onGamepadConnect: function(gamepad) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onGamepadConnect(gamepad);
		}
	}
	,onGamepadDisconnect: function(gamepad) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onGamepadDisconnect(gamepad);
		}
	}
	,onKeyDown: function(keyCode,modifier) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onKeyDown(keyCode,modifier);
		}
	}
	,onKeyUp: function(keyCode,modifier) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onKeyUp(keyCode,modifier);
		}
	}
	,onMouseDown: function(x,y,button) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onMouseDown(x,y,button);
		}
	}
	,onMouseMove: function(x,y) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onMouseMove(x,y);
		}
	}
	,onMouseMoveRelative: function(x,y) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onMouseMoveRelative(x,y);
		}
	}
	,onMouseUp: function(x,y,button) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onMouseUp(x,y,button);
		}
	}
	,onMouseWheel: function(deltaX,deltaY) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onMouseWheel(deltaX,deltaY);
		}
	}
	,onRenderContextLost: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onRenderContextLost();
		}
	}
	,onRenderContextRestored: function(context) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onRenderContextRestored(context);
		}
	}
	,onTextEdit: function(text,start,length) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onTextEdit(text,start,length);
		}
	}
	,onTextInput: function(text) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onTextInput(text);
		}
	}
	,onTouchEnd: function(x,y,id) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onTouchEnd(x,y,id);
		}
	}
	,onTouchMove: function(x,y,id) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onTouchMove(x,y,id);
		}
	}
	,onTouchStart: function(x,y,id) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onTouchStart(x,y,id);
		}
	}
	,onWindowActivate: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowActivate();
		}
	}
	,onWindowClose: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowClose();
		}
	}
	,onWindowDeactivate: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowDeactivate();
		}
	}
	,onWindowEnter: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowEnter();
		}
	}
	,onWindowFocusIn: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowFocusIn();
		}
	}
	,onWindowFocusOut: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowFocusOut();
		}
	}
	,onWindowFullscreen: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowFullscreen();
		}
	}
	,onWindowLeave: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowLeave();
		}
	}
	,onWindowMinimize: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowMinimize();
		}
	}
	,onWindowMove: function(x,y) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowMove(x,y);
		}
	}
	,onWindowResize: function(width,height) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowResize(width,height);
		}
	}
	,onWindowRestore: function() {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.onWindowRestore();
		}
	}
	,render: function(context) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.render(context);
		}
	}
	,update: function(deltaTime) {
		var _g = 0;
		var _g1 = this.modules;
		while(_g < _g1.length) {
			var module = _g1[_g];
			++_g;
			module.update(deltaTime);
		}
	}
	,__class__: lime_app_Application
});
var lime_app_Event = function() {
	this.listeners = [];
	this.priorities = [];
	this.repeat = [];
};
$hxClasses["lime.app.Event"] = lime_app_Event;
lime_app_Event.__name__ = true;
lime_app_Event.prototype = {
	add: function(listener,once,priority) {
		if(priority == null) priority = 0;
		if(once == null) once = false;
		var _g1 = 0;
		var _g = this.priorities.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(priority > this.priorities[i]) {
				this.listeners.splice(i,0,listener);
				this.priorities.splice(i,0,priority);
				this.repeat.splice(i,0,!once);
				return;
			}
		}
		this.listeners.push(listener);
		this.priorities.push(priority);
		this.repeat.push(!once);
	}
	,remove: function(listener) {
		var index = HxOverrides.indexOf(this.listeners,listener,0);
		if(index > -1) {
			this.listeners.splice(index,1);
			this.priorities.splice(index,1);
			this.repeat.splice(index,1);
		}
	}
	,__class__: lime_app_Event
};
var lime_app_Preloader = function() {
	this.total = 0;
	this.loaded = 0;
};
$hxClasses["lime.app.Preloader"] = lime_app_Preloader;
lime_app_Preloader.__name__ = true;
lime_app_Preloader.prototype = {
	create: function(config) {
	}
	,load: function(urls,types) {
		var url = null;
		var _g1 = 0;
		var _g = urls.length;
		while(_g1 < _g) {
			var i = _g1++;
			url = urls[i];
			var _g2 = types[i];
			switch(_g2) {
			case "IMAGE":
				var image = new Image();
				lime_app_Preloader.images.set(url,image);
				image.onload = $bind(this,this.image_onLoad);
				image.src = url;
				this.total++;
				break;
			case "BINARY":
				var loader = new lime_net_URLLoader();
				loader.set_dataFormat(lime_net_URLLoaderDataFormat.BINARY);
				lime_app_Preloader.loaders.set(url,loader);
				this.total++;
				break;
			case "TEXT":
				var loader1 = new lime_net_URLLoader();
				lime_app_Preloader.loaders.set(url,loader1);
				this.total++;
				break;
			case "FONT":
				this.total++;
				this.loadFont(url);
				break;
			default:
			}
		}
		var $it0 = lime_app_Preloader.loaders.keys();
		while( $it0.hasNext() ) {
			var url1 = $it0.next();
			var loader2 = lime_app_Preloader.loaders.get(url1);
			loader2.onComplete.add($bind(this,this.loader_onComplete));
			loader2.load(new lime_net_URLRequest(url1));
		}
		if(this.total == 0) this.start();
	}
	,loadFont: function(font) {
		var _g = this;
		if(window.document.fonts && ($_=window.document.fonts,$bind($_,$_.load))) window.document.fonts.load("1em '" + font + "'").then(function(_) {
			_g.loaded++;
			_g.update(_g.loaded,_g.total);
			if(_g.loaded == _g.total) _g.start();
		}); else {
			var node = window.document.createElement("span");
			node.innerHTML = "giItT1WQy@!-/#";
			var style = node.style;
			style.position = "absolute";
			style.left = "-10000px";
			style.top = "-10000px";
			style.fontSize = "300px";
			style.fontFamily = "sans-serif";
			style.fontVariant = "normal";
			style.fontStyle = "normal";
			style.fontWeight = "normal";
			style.letterSpacing = "0";
			window.document.body.appendChild(node);
			var width = node.offsetWidth;
			style.fontFamily = "'" + font + "', sans-serif";
			var interval = null;
			var found = false;
			var checkFont = function() {
				if(node.offsetWidth != width) {
					if(!found) {
						found = true;
						return false;
					}
					_g.loaded++;
					if(interval != null) window.clearInterval(interval);
					node.parentNode.removeChild(node);
					node = null;
					_g.update(_g.loaded,_g.total);
					if(_g.loaded == _g.total) _g.start();
					return true;
				}
				return false;
			};
			if(!checkFont()) interval = window.setInterval(checkFont,50);
		}
	}
	,start: function() {
		if(this.onComplete != null) this.onComplete();
	}
	,update: function(loaded,total) {
	}
	,image_onLoad: function(_) {
		this.loaded++;
		this.update(this.loaded,this.total);
		if(this.loaded == this.total) this.start();
	}
	,loader_onComplete: function(loader) {
		this.loaded++;
		this.update(this.loaded,this.total);
		if(this.loaded == this.total) this.start();
	}
	,__class__: lime_app_Preloader
};
var lime_audio_ALAudioContext = function() { };
$hxClasses["lime.audio.ALAudioContext"] = lime_audio_ALAudioContext;
lime_audio_ALAudioContext.__name__ = true;
var lime_audio_ALCAudioContext = function() { };
$hxClasses["lime.audio.ALCAudioContext"] = lime_audio_ALCAudioContext;
lime_audio_ALCAudioContext.__name__ = true;
var lime_audio_AudioBuffer = function() { };
$hxClasses["lime.audio.AudioBuffer"] = lime_audio_AudioBuffer;
lime_audio_AudioBuffer.__name__ = true;
var lime_audio_AudioContext = $hxClasses["lime.audio.AudioContext"] = { __ename__ : true, __constructs__ : ["OPENAL","HTML5","WEB","FLASH","CUSTOM"] };
lime_audio_AudioContext.OPENAL = function(alc,al) { var $x = ["OPENAL",0,alc,al]; $x.__enum__ = lime_audio_AudioContext; $x.toString = $estr; return $x; };
lime_audio_AudioContext.HTML5 = function(context) { var $x = ["HTML5",1,context]; $x.__enum__ = lime_audio_AudioContext; $x.toString = $estr; return $x; };
lime_audio_AudioContext.WEB = function(context) { var $x = ["WEB",2,context]; $x.__enum__ = lime_audio_AudioContext; $x.toString = $estr; return $x; };
lime_audio_AudioContext.FLASH = function(context) { var $x = ["FLASH",3,context]; $x.__enum__ = lime_audio_AudioContext; $x.toString = $estr; return $x; };
lime_audio_AudioContext.CUSTOM = function(data) { var $x = ["CUSTOM",4,data]; $x.__enum__ = lime_audio_AudioContext; $x.toString = $estr; return $x; };
var lime_audio_AudioManager = function() { };
$hxClasses["lime.audio.AudioManager"] = lime_audio_AudioManager;
lime_audio_AudioManager.__name__ = true;
lime_audio_AudioManager.context = null;
lime_audio_AudioManager.init = function(context) {
	if(lime_audio_AudioManager.context == null) {
		if(context == null) try {
			window.AudioContext = window.AudioContext || window.webkitAudioContext;;
			lime_audio_AudioManager.context = lime_audio_AudioContext.WEB(new AudioContext ());
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			lime_audio_AudioManager.context = lime_audio_AudioContext.HTML5(new lime_audio_HTML5AudioContext());
		} else lime_audio_AudioManager.context = context;
	}
};
var lime_audio_FlashAudioContext = function() { };
$hxClasses["lime.audio.FlashAudioContext"] = lime_audio_FlashAudioContext;
lime_audio_FlashAudioContext.__name__ = true;
var lime_audio_HTML5AudioContext = function() {
};
$hxClasses["lime.audio.HTML5AudioContext"] = lime_audio_HTML5AudioContext;
lime_audio_HTML5AudioContext.__name__ = true;
lime_audio_HTML5AudioContext.prototype = {
	__class__: lime_audio_HTML5AudioContext
};
var lime_graphics_ConsoleRenderContext = function() { };
$hxClasses["lime.graphics.ConsoleRenderContext"] = lime_graphics_ConsoleRenderContext;
lime_graphics_ConsoleRenderContext.__name__ = true;
var lime_graphics_FlashRenderContext = function() { };
$hxClasses["lime.graphics.FlashRenderContext"] = lime_graphics_FlashRenderContext;
lime_graphics_FlashRenderContext.__name__ = true;
var lime_graphics_Image = function(buffer,offsetX,offsetY,width,height,color,type) {
	if(height == null) height = -1;
	if(width == null) width = -1;
	if(offsetY == null) offsetY = 0;
	if(offsetX == null) offsetX = 0;
	this.offsetX = offsetX;
	this.offsetY = offsetY;
	this.width = width;
	this.height = height;
	if(type == null) {
		if(lime_app_Application.current != null && lime_app_Application.current.renderers[0] != null) {
			var _g = lime_app_Application.current.renderers[0].context;
			switch(_g[1]) {
			case 2:case 1:
				this.type = lime_graphics_ImageType.CANVAS;
				break;
			case 3:
				this.type = lime_graphics_ImageType.FLASH;
				break;
			default:
				this.type = lime_graphics_ImageType.DATA;
			}
		} else this.type = lime_graphics_ImageType.DATA;
	} else this.type = type;
	if(buffer == null) {
		if(width > 0 && height > 0) {
			var _g1 = this.type;
			switch(_g1[1]) {
			case 0:
				this.buffer = new lime_graphics_ImageBuffer(null,width,height);
				lime_graphics_utils_ImageCanvasUtil.createCanvas(this,width,height);
				if(color != null) this.fillRect(new lime_math_Rectangle(0,0,width,height),color);
				break;
			case 1:
				this.buffer = new lime_graphics_ImageBuffer(new Uint8Array(width * height * 4),width,height);
				if(color != null) this.fillRect(new lime_math_Rectangle(0,0,width,height),color);
				break;
			case 2:
				break;
			default:
			}
		}
	} else this.__fromImageBuffer(buffer);
};
$hxClasses["lime.graphics.Image"] = lime_graphics_Image;
lime_graphics_Image.__name__ = true;
lime_graphics_Image.fromCanvas = function(canvas) {
	if(canvas == null) return null;
	var buffer = new lime_graphics_ImageBuffer(null,canvas.width,canvas.height);
	buffer.set_src(canvas);
	return new lime_graphics_Image(buffer);
};
lime_graphics_Image.fromImageElement = function(image) {
	if(image == null) return null;
	var buffer = new lime_graphics_ImageBuffer(null,image.width,image.height);
	buffer.set_src(image);
	return new lime_graphics_Image(buffer);
};
lime_graphics_Image.prototype = {
	clone: function() {
		var image = new lime_graphics_Image(this.buffer.clone(),this.offsetX,this.offsetY,this.width,this.height,null,this.type);
		return image;
	}
	,copyChannel: function(sourceImage,sourceRect,destPoint,sourceChannel,destChannel) {
		sourceRect = this.__clipRect(sourceRect);
		if(this.buffer == null || sourceRect == null) return;
		if(destChannel == lime_graphics_ImageChannel.ALPHA && !this.get_transparent()) return;
		if(sourceRect.width <= 0 || sourceRect.height <= 0) return;
		if(sourceRect.x + sourceRect.width > sourceImage.width) sourceRect.width = sourceImage.width - sourceRect.x;
		if(sourceRect.y + sourceRect.height > sourceImage.height) sourceRect.height = sourceImage.height - sourceRect.y;
		var _g = this.type;
		switch(_g[1]) {
		case 0:
			lime_graphics_utils_ImageCanvasUtil.copyChannel(this,sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
			break;
		case 1:
			lime_graphics_utils_ImageCanvasUtil.convertToData(this);
			lime_graphics_utils_ImageDataUtil.copyChannel(this,sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
			break;
		case 2:
			var srcChannel;
			switch(sourceChannel[1]) {
			case 0:
				srcChannel = 1;
				break;
			case 1:
				srcChannel = 2;
				break;
			case 2:
				srcChannel = 4;
				break;
			case 3:
				srcChannel = 8;
				break;
			}
			var dstChannel;
			switch(destChannel[1]) {
			case 0:
				dstChannel = 1;
				break;
			case 1:
				dstChannel = 2;
				break;
			case 2:
				dstChannel = 4;
				break;
			case 3:
				dstChannel = 8;
				break;
			}
			sourceRect.offset(sourceImage.offsetX,sourceImage.offsetY);
			destPoint.offset(this.offsetX,this.offsetY);
			this.buffer.__srcBitmapData.copyChannel(sourceImage.buffer.get_src(),sourceRect.__toFlashRectangle(),destPoint.__toFlashPoint(),srcChannel,dstChannel);
			break;
		default:
		}
	}
	,fillRect: function(rect,color,format) {
		rect = this.__clipRect(rect);
		if(this.buffer == null || rect == null) return;
		var _g = this.type;
		switch(_g[1]) {
		case 0:
			lime_graphics_utils_ImageCanvasUtil.fillRect(this,rect,color,format);
			break;
		case 1:
			lime_graphics_utils_ImageCanvasUtil.convertToData(this);
			lime_graphics_utils_ImageDataUtil.fillRect(this,rect,color,format);
			break;
		case 2:
			rect.offset(this.offsetX,this.offsetY);
			if(format == null || format == 0) color = (color & 255) << 24 | color >> 8;
			this.buffer.__srcBitmapData.fillRect(rect.__toFlashRectangle(),color);
			break;
		default:
		}
	}
	,__clipRect: function(r) {
		if(r == null) return null;
		if(r.x < 0) {
			r.width -= -r.x;
			r.x = 0;
			if(r.x + r.width <= 0) return null;
		}
		if(r.y < 0) {
			r.height -= -r.y;
			r.y = 0;
			if(r.y + r.height <= 0) return null;
		}
		if(r.x + r.width >= this.width) {
			r.width -= r.x + r.width - this.width;
			if(r.width <= 0) return null;
		}
		if(r.y + r.height >= this.height) {
			r.height -= r.y + r.height - this.height;
			if(r.height <= 0) return null;
		}
		return r;
	}
	,__fromImageBuffer: function(buffer) {
		this.buffer = buffer;
		if(buffer != null) {
			if(this.width == -1) this.width = buffer.width;
			if(this.height == -1) this.height = buffer.height;
		}
	}
	,get_data: function() {
		if(this.buffer.data == null && this.buffer.width > 0 && this.buffer.height > 0) {
			lime_graphics_utils_ImageCanvasUtil.convertToCanvas(this);
			lime_graphics_utils_ImageCanvasUtil.sync(this);
			lime_graphics_utils_ImageCanvasUtil.createImageData(this);
		}
		return this.buffer.data;
	}
	,get_format: function() {
		return this.buffer.format;
	}
	,set_format: function(value) {
		if(this.buffer.format != value) {
			var _g = this.type;
			switch(_g[1]) {
			case 1:
				lime_graphics_utils_ImageDataUtil.setFormat(this,value);
				break;
			default:
			}
		}
		return this.buffer.format = value;
	}
	,get_powerOfTwo: function() {
		return this.buffer.width != 0 && (this.buffer.width & ~this.buffer.width + 1) == this.buffer.width && (this.buffer.height != 0 && (this.buffer.height & ~this.buffer.height + 1) == this.buffer.height);
	}
	,get_premultiplied: function() {
		return this.buffer.premultiplied;
	}
	,set_premultiplied: function(value) {
		if(value && !this.buffer.premultiplied) {
			var _g = this.type;
			switch(_g[1]) {
			case 1:
				lime_graphics_utils_ImageCanvasUtil.convertToData(this);
				lime_graphics_utils_ImageDataUtil.multiplyAlpha(this);
				break;
			default:
			}
		} else if(!value && this.buffer.premultiplied) {
			var _g1 = this.type;
			switch(_g1[1]) {
			case 1:
				lime_graphics_utils_ImageCanvasUtil.convertToData(this);
				lime_graphics_utils_ImageDataUtil.unmultiplyAlpha(this);
				break;
			default:
			}
		}
		return value;
	}
	,get_src: function() {
		return this.buffer.get_src();
	}
	,get_transparent: function() {
		if(this.buffer == null) return false;
		return this.buffer.transparent;
	}
	,set_transparent: function(value) {
		if(this.buffer == null) return false;
		return this.buffer.transparent = value;
	}
	,__class__: lime_graphics_Image
	,__properties__: {set_transparent:"set_transparent",get_transparent:"get_transparent",get_src:"get_src",set_premultiplied:"set_premultiplied",get_premultiplied:"get_premultiplied",get_powerOfTwo:"get_powerOfTwo",set_format:"set_format",get_format:"get_format",get_data:"get_data"}
};
var lime_graphics_ImageBuffer = function(data,width,height,bitsPerPixel,format) {
	if(bitsPerPixel == null) bitsPerPixel = 4;
	if(height == null) height = 0;
	if(width == null) width = 0;
	this.data = data;
	this.width = width;
	this.height = height;
	this.bitsPerPixel = bitsPerPixel;
	if(format == null) this.format = 0; else this.format = format;
	this.transparent = true;
};
$hxClasses["lime.graphics.ImageBuffer"] = lime_graphics_ImageBuffer;
lime_graphics_ImageBuffer.__name__ = true;
lime_graphics_ImageBuffer.prototype = {
	clone: function() {
		var buffer = new lime_graphics_ImageBuffer(this.data,this.width,this.height,this.bitsPerPixel);
		if(this.data != null) {
			buffer.data = new Uint8Array(this.data.byteLength);
			var copy = new Uint8Array(this.data);
			buffer.data.set(copy);
		} else if(this.__srcImageData != null) {
			buffer.__srcCanvas = window.document.createElement("canvas");
			buffer.__srcContext = buffer.__srcCanvas.getContext("2d");
			buffer.__srcCanvas.width = this.__srcImageData.width;
			buffer.__srcCanvas.height = this.__srcImageData.height;
			buffer.__srcImageData = buffer.__srcContext.createImageData(this.__srcImageData.width,this.__srcImageData.height);
			var copy1 = new Uint8ClampedArray(this.__srcImageData.data);
			buffer.__srcImageData.data.set(copy1);
		} else if(this.__srcCanvas != null) {
			buffer.__srcCanvas = window.document.createElement("canvas");
			buffer.__srcContext = buffer.__srcCanvas.getContext("2d");
			buffer.__srcCanvas.width = this.__srcCanvas.width;
			buffer.__srcCanvas.height = this.__srcCanvas.height;
			buffer.__srcContext.drawImage(this.__srcCanvas,0,0);
		} else buffer.__srcImage = this.__srcImage;
		buffer.premultiplied = this.premultiplied;
		buffer.transparent = this.transparent;
		return buffer;
	}
	,get_src: function() {
		if(this.__srcImage != null) return this.__srcImage;
		return this.__srcCanvas;
	}
	,set_src: function(value) {
		if(js_Boot.__instanceof(value,Image)) this.__srcImage = value; else if(js_Boot.__instanceof(value,HTMLCanvasElement)) {
			this.__srcCanvas = value;
			this.__srcContext = this.__srcCanvas.getContext("2d");
		}
		return value;
	}
	,__class__: lime_graphics_ImageBuffer
	,__properties__: {set_src:"set_src",get_src:"get_src"}
};
var lime_graphics_ImageChannel = $hxClasses["lime.graphics.ImageChannel"] = { __ename__ : true, __constructs__ : ["RED","GREEN","BLUE","ALPHA"] };
lime_graphics_ImageChannel.RED = ["RED",0];
lime_graphics_ImageChannel.RED.toString = $estr;
lime_graphics_ImageChannel.RED.__enum__ = lime_graphics_ImageChannel;
lime_graphics_ImageChannel.GREEN = ["GREEN",1];
lime_graphics_ImageChannel.GREEN.toString = $estr;
lime_graphics_ImageChannel.GREEN.__enum__ = lime_graphics_ImageChannel;
lime_graphics_ImageChannel.BLUE = ["BLUE",2];
lime_graphics_ImageChannel.BLUE.toString = $estr;
lime_graphics_ImageChannel.BLUE.__enum__ = lime_graphics_ImageChannel;
lime_graphics_ImageChannel.ALPHA = ["ALPHA",3];
lime_graphics_ImageChannel.ALPHA.toString = $estr;
lime_graphics_ImageChannel.ALPHA.__enum__ = lime_graphics_ImageChannel;
var lime_graphics_ImageType = $hxClasses["lime.graphics.ImageType"] = { __ename__ : true, __constructs__ : ["CANVAS","DATA","FLASH","CUSTOM"] };
lime_graphics_ImageType.CANVAS = ["CANVAS",0];
lime_graphics_ImageType.CANVAS.toString = $estr;
lime_graphics_ImageType.CANVAS.__enum__ = lime_graphics_ImageType;
lime_graphics_ImageType.DATA = ["DATA",1];
lime_graphics_ImageType.DATA.toString = $estr;
lime_graphics_ImageType.DATA.__enum__ = lime_graphics_ImageType;
lime_graphics_ImageType.FLASH = ["FLASH",2];
lime_graphics_ImageType.FLASH.toString = $estr;
lime_graphics_ImageType.FLASH.__enum__ = lime_graphics_ImageType;
lime_graphics_ImageType.CUSTOM = ["CUSTOM",3];
lime_graphics_ImageType.CUSTOM.toString = $estr;
lime_graphics_ImageType.CUSTOM.__enum__ = lime_graphics_ImageType;
var lime_graphics_RenderContext = $hxClasses["lime.graphics.RenderContext"] = { __ename__ : true, __constructs__ : ["OPENGL","CANVAS","DOM","FLASH","CAIRO","CONSOLE","CUSTOM","NONE"] };
lime_graphics_RenderContext.OPENGL = function(gl) { var $x = ["OPENGL",0,gl]; $x.__enum__ = lime_graphics_RenderContext; $x.toString = $estr; return $x; };
lime_graphics_RenderContext.CANVAS = function(context) { var $x = ["CANVAS",1,context]; $x.__enum__ = lime_graphics_RenderContext; $x.toString = $estr; return $x; };
lime_graphics_RenderContext.DOM = function(element) { var $x = ["DOM",2,element]; $x.__enum__ = lime_graphics_RenderContext; $x.toString = $estr; return $x; };
lime_graphics_RenderContext.FLASH = function(stage) { var $x = ["FLASH",3,stage]; $x.__enum__ = lime_graphics_RenderContext; $x.toString = $estr; return $x; };
lime_graphics_RenderContext.CAIRO = function(cairo) { var $x = ["CAIRO",4,cairo]; $x.__enum__ = lime_graphics_RenderContext; $x.toString = $estr; return $x; };
lime_graphics_RenderContext.CONSOLE = function(context) { var $x = ["CONSOLE",5,context]; $x.__enum__ = lime_graphics_RenderContext; $x.toString = $estr; return $x; };
lime_graphics_RenderContext.CUSTOM = function(data) { var $x = ["CUSTOM",6,data]; $x.__enum__ = lime_graphics_RenderContext; $x.toString = $estr; return $x; };
lime_graphics_RenderContext.NONE = ["NONE",7];
lime_graphics_RenderContext.NONE.toString = $estr;
lime_graphics_RenderContext.NONE.__enum__ = lime_graphics_RenderContext;
var lime_graphics_Renderer = function(window) {
	this.onRender = new lime_app_Event();
	this.onRenderContextRestored = new lime_app_Event();
	this.onRenderContextLost = new lime_app_Event();
	this.window = window;
	this.backend = new lime__$backend_html5_HTML5Renderer(this);
	this.window.currentRenderer = this;
};
$hxClasses["lime.graphics.Renderer"] = lime_graphics_Renderer;
lime_graphics_Renderer.__name__ = true;
lime_graphics_Renderer.prototype = {
	create: function() {
		this.backend.create();
	}
	,flip: function() {
		this.backend.flip();
	}
	,__class__: lime_graphics_Renderer
};
var lime_graphics_cairo_Cairo = function() { };
$hxClasses["lime.graphics.cairo.Cairo"] = lime_graphics_cairo_Cairo;
lime_graphics_cairo_Cairo.__name__ = true;
lime_graphics_cairo_Cairo.prototype = {
	arc: function(xc,yc,radius,angle1,angle2) {
	}
	,clip: function() {
	}
	,curveTo: function(x1,y1,x2,y2,x3,y3) {
	}
	,fill: function() {
	}
	,identityMatrix: function() {
	}
	,lineTo: function(x,y) {
	}
	,moveTo: function(x,y) {
	}
	,newPath: function() {
	}
	,paint: function() {
	}
	,paintWithAlpha: function(alpha) {
	}
	,popGroupToSource: function() {
	}
	,pushGroup: function() {
	}
	,rectangle: function(x,y,width,height) {
	}
	,restore: function() {
	}
	,save: function() {
	}
	,setSourceRGB: function(r,g,b) {
	}
	,setSourceSurface: function(surface,x,y) {
	}
	,get_currentPoint: function() {
		return null;
	}
	,get_hasCurrentPoint: function() {
		return false;
	}
	,set_matrix: function(value) {
		return value;
	}
	,__class__: lime_graphics_cairo_Cairo
	,__properties__: {set_matrix:"set_matrix",get_hasCurrentPoint:"get_hasCurrentPoint",get_currentPoint:"get_currentPoint"}
};
var lime_graphics_cairo__$CairoSurface_CairoSurface_$Impl_$ = {};
$hxClasses["lime.graphics.cairo._CairoSurface.CairoSurface_Impl_"] = lime_graphics_cairo__$CairoSurface_CairoSurface_$Impl_$;
lime_graphics_cairo__$CairoSurface_CairoSurface_$Impl_$.__name__ = true;
lime_graphics_cairo__$CairoSurface_CairoSurface_$Impl_$.destroy = function(this1) {
};
lime_graphics_cairo__$CairoSurface_CairoSurface_$Impl_$.fromImage = function(image) {
	return null;
};
var lime_graphics_opengl_GL = function() { };
$hxClasses["lime.graphics.opengl.GL"] = lime_graphics_opengl_GL;
lime_graphics_opengl_GL.__name__ = true;
lime_graphics_opengl_GL.context = null;
var lime_graphics_utils_ImageCanvasUtil = function() { };
$hxClasses["lime.graphics.utils.ImageCanvasUtil"] = lime_graphics_utils_ImageCanvasUtil;
lime_graphics_utils_ImageCanvasUtil.__name__ = true;
lime_graphics_utils_ImageCanvasUtil.convertToCanvas = function(image) {
	var buffer = image.buffer;
	if(buffer.__srcImage != null) {
		if(buffer.__srcCanvas == null) {
			lime_graphics_utils_ImageCanvasUtil.createCanvas(image,buffer.__srcImage.width,buffer.__srcImage.height);
			buffer.__srcContext.drawImage(buffer.__srcImage,0,0);
		}
		buffer.__srcImage = null;
	}
};
lime_graphics_utils_ImageCanvasUtil.convertToData = function(image) {
	if(image.buffer.data == null) {
		lime_graphics_utils_ImageCanvasUtil.convertToCanvas(image);
		lime_graphics_utils_ImageCanvasUtil.sync(image);
		lime_graphics_utils_ImageCanvasUtil.createImageData(image);
		image.buffer.__srcCanvas = null;
		image.buffer.__srcContext = null;
	}
};
lime_graphics_utils_ImageCanvasUtil.copyChannel = function(image,sourceImage,sourceRect,destPoint,sourceChannel,destChannel) {
	lime_graphics_utils_ImageCanvasUtil.convertToCanvas(sourceImage);
	lime_graphics_utils_ImageCanvasUtil.createImageData(sourceImage);
	lime_graphics_utils_ImageCanvasUtil.convertToCanvas(image);
	lime_graphics_utils_ImageCanvasUtil.createImageData(image);
	lime_graphics_utils_ImageDataUtil.copyChannel(image,sourceImage,sourceRect,destPoint,sourceChannel,destChannel);
};
lime_graphics_utils_ImageCanvasUtil.createCanvas = function(image,width,height) {
	var buffer = image.buffer;
	if(buffer.__srcCanvas == null) {
		buffer.__srcCanvas = window.document.createElement("canvas");
		buffer.__srcCanvas.width = width;
		buffer.__srcCanvas.height = height;
		if(!image.get_transparent()) {
			if(!image.get_transparent()) buffer.__srcCanvas.setAttribute("moz-opaque","true");
			buffer.__srcContext = buffer.__srcCanvas.getContext ("2d", { alpha: false });
		} else buffer.__srcContext = buffer.__srcCanvas.getContext("2d");
		buffer.__srcContext.mozImageSmoothingEnabled = false;
		buffer.__srcContext.webkitImageSmoothingEnabled = false;
		buffer.__srcContext.imageSmoothingEnabled = false;
	}
};
lime_graphics_utils_ImageCanvasUtil.createImageData = function(image) {
	var buffer = image.buffer;
	if(buffer.data == null) {
		buffer.__srcImageData = buffer.__srcContext.getImageData(0,0,buffer.width,buffer.height);
		buffer.data = new Uint8Array(buffer.__srcImageData.data.buffer);
	}
};
lime_graphics_utils_ImageCanvasUtil.fillRect = function(image,rect,color,format) {
	lime_graphics_utils_ImageCanvasUtil.convertToCanvas(image);
	lime_graphics_utils_ImageCanvasUtil.sync(image);
	if(rect.x == 0 && rect.y == 0 && rect.width == image.width && rect.height == image.height) {
		if(image.get_transparent() && (color & 255) == 0) {
			image.buffer.__srcCanvas.width = image.buffer.width;
			return;
		}
	}
	var r;
	var g;
	var b;
	var a;
	if(format == 1) {
		r = color >> 16 & 255;
		g = color >> 8 & 255;
		b = color & 255;
		if(image.get_transparent()) a = color >> 24 & 255; else a = 255;
	} else {
		r = color >> 24 & 255;
		g = color >> 16 & 255;
		b = color >> 8 & 255;
		if(image.get_transparent()) a = color & 255; else a = 255;
	}
	image.buffer.__srcContext.fillStyle = "rgba(" + r + ", " + g + ", " + b + ", " + a / 255 + ")";
	image.buffer.__srcContext.fillRect(rect.x + image.offsetX,rect.y + image.offsetY,rect.width + image.offsetX,rect.height + image.offsetY);
};
lime_graphics_utils_ImageCanvasUtil.sync = function(image) {
	if(image.dirty && image.type != lime_graphics_ImageType.DATA) {
		image.buffer.__srcContext.putImageData(image.buffer.__srcImageData,0,0);
		image.buffer.data = null;
		image.dirty = false;
	}
};
var lime_graphics_utils_ImageDataUtil = function() { };
$hxClasses["lime.graphics.utils.ImageDataUtil"] = lime_graphics_utils_ImageDataUtil;
lime_graphics_utils_ImageDataUtil.__name__ = true;
lime_graphics_utils_ImageDataUtil.__alpha16 = null;
lime_graphics_utils_ImageDataUtil.__clamp = null;
lime_graphics_utils_ImageDataUtil.copyChannel = function(image,sourceImage,sourceRect,destPoint,sourceChannel,destChannel) {
	var destIdx;
	switch(destChannel[1]) {
	case 0:
		destIdx = 0;
		break;
	case 1:
		destIdx = 1;
		break;
	case 2:
		destIdx = 2;
		break;
	case 3:
		destIdx = 3;
		break;
	}
	var srcIdx;
	switch(sourceChannel[1]) {
	case 0:
		srcIdx = 0;
		break;
	case 1:
		srcIdx = 1;
		break;
	case 2:
		srcIdx = 2;
		break;
	case 3:
		srcIdx = 3;
		break;
	}
	var srcData = sourceImage.buffer.data;
	var destData = image.buffer.data;
	if(srcData == null || destData == null) return;
	var srcStride = sourceImage.buffer.width * 4 | 0;
	var srcPosition = (sourceRect.x + sourceImage.offsetX) * 4 + srcStride * (sourceRect.y + sourceImage.offsetY) + srcIdx | 0;
	var srcRowOffset = srcStride - (4 * (sourceRect.width + sourceImage.offsetX) | 0);
	var srcRowEnd = 4 * (sourceRect.x + sourceImage.offsetX + sourceRect.width) | 0;
	var srcData1 = sourceImage.buffer.data;
	var destStride = image.buffer.width * 4 | 0;
	var destPosition = (destPoint.x + image.offsetX) * 4 + destStride * (destPoint.y + image.offsetY) + destIdx | 0;
	var destRowOffset = destStride - (4 * (sourceRect.width + image.offsetX) | 0);
	var destRowEnd = 4 * (destPoint.x + image.offsetX + sourceRect.width) | 0;
	var destData1 = image.buffer.data;
	var length = sourceRect.width * sourceRect.height | 0;
	var _g = 0;
	while(_g < length) {
		var i = _g++;
		destData1[destPosition] = srcData1[srcPosition];
		srcPosition += 4;
		destPosition += 4;
		if(srcPosition % srcStride > srcRowEnd) srcPosition += srcRowOffset;
		if(destPosition % destStride > destRowEnd) destPosition += destRowOffset;
	}
	image.dirty = true;
};
lime_graphics_utils_ImageDataUtil.fillRect = function(image,rect,color,format) {
	var r;
	var g;
	var b;
	var a;
	if(format == 1) {
		if(image.get_transparent()) a = color >> 24 & 255; else a = 255;
		r = color >> 16 & 255;
		g = color >> 8 & 255;
		b = color & 255;
	} else {
		r = color >> 24 & 255;
		g = color >> 16 & 255;
		b = color >> 8 & 255;
		if(image.get_transparent()) a = color & 255; else a = 255;
	}
	var rgba = r | g << 8 | b << 16 | a << 24;
	var data = image.buffer.data;
	if(data == null) return;
	if(rect.width == image.buffer.width && rect.height == image.buffer.height && rect.x == 0 && rect.y == 0 && image.offsetX == 0 && image.offsetY == 0) {
		var length = image.buffer.width * image.buffer.height;
		var j = 0;
		var _g = 0;
		while(_g < length) {
			var i = _g++;
			j = i * 4;
			data[j] = r;
			data[j + 1] = g;
			data[j + 2] = b;
			data[j + 3] = a;
		}
	} else {
		var stride = image.buffer.width * 4;
		var offset;
		var rowStart = rect.y + image.offsetY | 0;
		var rowEnd = Std["int"](rect.get_bottom() + image.offsetY);
		var columnStart = rect.x + image.offsetX | 0;
		var columnEnd = Std["int"](rect.get_right() + image.offsetX);
		var _g1 = rowStart;
		while(_g1 < rowEnd) {
			var row = _g1++;
			var _g11 = columnStart;
			while(_g11 < columnEnd) {
				var column = _g11++;
				offset = row * stride + column * 4;
				data[offset] = r;
				data[offset + 1] = g;
				data[offset + 2] = b;
				data[offset + 3] = a;
			}
		}
	}
	image.dirty = true;
};
lime_graphics_utils_ImageDataUtil.multiplyAlpha = function(image) {
	var data = image.buffer.data;
	if(data == null || !image.buffer.transparent) return;
	var index;
	var a16;
	var length = data.length / 4 | 0;
	var _g = 0;
	while(_g < length) {
		var i = _g++;
		index = i * 4;
		a16 = lime_graphics_utils_ImageDataUtil.__alpha16[data[index + 3]];
		data[index] = data[index] * a16 >> 16;
		data[index + 1] = data[index + 1] * a16 >> 16;
		data[index + 2] = data[index + 2] * a16 >> 16;
	}
	image.buffer.premultiplied = true;
	image.dirty = true;
};
lime_graphics_utils_ImageDataUtil.setFormat = function(image,format) {
	var data = image.buffer.data;
	if(data == null) return;
	var index;
	var a16;
	var length = data.length / 4 | 0;
	var r1;
	var g1;
	var b1;
	var a1;
	var r2;
	var g2;
	var b2;
	var a2;
	var r;
	var g;
	var b;
	var a;
	var _g = image.get_format();
	switch(_g) {
	case 0:
		r1 = 0;
		g1 = 1;
		b1 = 2;
		a1 = 3;
		break;
	case 1:
		r1 = 1;
		g1 = 2;
		b1 = 3;
		a1 = 0;
		break;
	case 2:
		r1 = 2;
		g1 = 1;
		b1 = 0;
		a1 = 3;
		break;
	}
	switch(format) {
	case 0:
		r2 = 0;
		g2 = 1;
		b2 = 2;
		a2 = 3;
		break;
	case 1:
		r2 = 1;
		g2 = 2;
		b2 = 3;
		a2 = 0;
		break;
	case 2:
		r2 = 2;
		g2 = 1;
		b2 = 0;
		a2 = 3;
		break;
	}
	var _g1 = 0;
	while(_g1 < length) {
		var i = _g1++;
		index = i * 4;
		r = data[index + r1];
		g = data[index + g1];
		b = data[index + b1];
		a = data[index + a1];
		data[index + r2] = r;
		data[index + g2] = g;
		data[index + b2] = b;
		data[index + a2] = a;
	}
	image.buffer.format = format;
	image.dirty = true;
};
lime_graphics_utils_ImageDataUtil.unmultiplyAlpha = function(image) {
	var data = image.buffer.data;
	if(data == null) return;
	var index;
	var a;
	var unmultiply;
	var length = data.length / 4 | 0;
	var _g = 0;
	while(_g < length) {
		var i = _g++;
		index = i * 4;
		a = data[index + 3];
		if(a != 0) {
			unmultiply = 255.0 / a;
			data[index] = lime_graphics_utils_ImageDataUtil.__clamp[data[index] * unmultiply | 0];
			data[index + 1] = lime_graphics_utils_ImageDataUtil.__clamp[data[index + 1] * unmultiply | 0];
			data[index + 2] = lime_graphics_utils_ImageDataUtil.__clamp[data[index + 2] * unmultiply | 0];
		}
	}
	image.buffer.premultiplied = false;
	image.dirty = true;
};
var lime_math_Matrix3 = function(a,b,c,d,tx,ty) {
	if(ty == null) ty = 0;
	if(tx == null) tx = 0;
	if(d == null) d = 1;
	if(c == null) c = 0;
	if(b == null) b = 0;
	if(a == null) a = 1;
	this.a = a;
	this.b = b;
	this.c = c;
	this.d = d;
	this.tx = tx;
	this.ty = ty;
};
$hxClasses["lime.math.Matrix3"] = lime_math_Matrix3;
lime_math_Matrix3.__name__ = true;
lime_math_Matrix3.prototype = {
	__class__: lime_math_Matrix3
};
var lime_math_Rectangle = function(x,y,width,height) {
	if(height == null) height = 0;
	if(width == null) width = 0;
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
	this.width = width;
	this.height = height;
};
$hxClasses["lime.math.Rectangle"] = lime_math_Rectangle;
lime_math_Rectangle.__name__ = true;
lime_math_Rectangle.prototype = {
	offset: function(dx,dy) {
		this.x += dx;
		this.y += dy;
	}
	,__toFlashRectangle: function() {
		return null;
	}
	,get_bottom: function() {
		return this.y + this.height;
	}
	,get_right: function() {
		return this.x + this.width;
	}
	,__class__: lime_math_Rectangle
	,__properties__: {get_right:"get_right",get_bottom:"get_bottom"}
};
var lime_math_Vector2 = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
};
$hxClasses["lime.math.Vector2"] = lime_math_Vector2;
lime_math_Vector2.__name__ = true;
lime_math_Vector2.prototype = {
	offset: function(dx,dy) {
		this.x += dx;
		this.y += dy;
	}
	,__toFlashPoint: function() {
		return null;
	}
	,__class__: lime_math_Vector2
};
var lime_math_Vector4 = function() { };
$hxClasses["lime.math.Vector4"] = lime_math_Vector4;
lime_math_Vector4.__name__ = true;
var lime_net_URLLoader = function(request) {
	this.onSecurityError = new lime_app_Event();
	this.onProgress = new lime_app_Event();
	this.onOpen = new lime_app_Event();
	this.onIOError = new lime_app_Event();
	this.onHTTPStatus = new lime_app_Event();
	this.onComplete = new lime_app_Event();
	this.bytesLoaded = 0;
	this.bytesTotal = 0;
	this.set_dataFormat(lime_net_URLLoaderDataFormat.TEXT);
	if(request != null) this.load(request);
};
$hxClasses["lime.net.URLLoader"] = lime_net_URLLoader;
lime_net_URLLoader.__name__ = true;
lime_net_URLLoader.prototype = {
	getData: function() {
		return null;
	}
	,load: function(request) {
		this.requestUrl(request.url,request.method,request.data,request.formatRequestHeaders());
	}
	,registerEvents: function(subject) {
		var _g = this;
		var self = this;
		if(typeof XMLHttpRequestProgressEvent != "undefined") subject.addEventListener("progress",$bind(this,this.__onProgress),false);
		subject.onreadystatechange = function() {
			if(subject.readyState != 4) return;
			var s;
			try {
				s = subject.status;
			} catch( e ) {
				if (e instanceof js__$Boot_HaxeError) e = e.val;
				s = null;
			}
			if(s == undefined) s = null;
			if(s != null) {
				var listeners = self.onHTTPStatus.listeners;
				var repeat = self.onHTTPStatus.repeat;
				var length = listeners.length;
				var i = 0;
				while(i < length) {
					listeners[i](_g,s);
					if(!repeat[i]) {
						self.onHTTPStatus.remove(listeners[i]);
						length--;
					} else i++;
				}
			}
			if(s != null && s >= 200 && s < 400) self.__onData(subject.response); else if(s == null) {
				var listeners1 = self.onIOError.listeners;
				var repeat1 = self.onIOError.repeat;
				var length1 = listeners1.length;
				var i1 = 0;
				while(i1 < length1) {
					listeners1[i1](_g,"Failed to connect or resolve host");
					if(!repeat1[i1]) {
						self.onIOError.remove(listeners1[i1]);
						length1--;
					} else i1++;
				}
			} else if(s == 12029) {
				var listeners2 = self.onIOError.listeners;
				var repeat2 = self.onIOError.repeat;
				var length2 = listeners2.length;
				var i2 = 0;
				while(i2 < length2) {
					listeners2[i2](_g,"Failed to connect to host");
					if(!repeat2[i2]) {
						self.onIOError.remove(listeners2[i2]);
						length2--;
					} else i2++;
				}
			} else if(s == 12007) {
				var listeners3 = self.onIOError.listeners;
				var repeat3 = self.onIOError.repeat;
				var length3 = listeners3.length;
				var i3 = 0;
				while(i3 < length3) {
					listeners3[i3](_g,"Unknown host");
					if(!repeat3[i3]) {
						self.onIOError.remove(listeners3[i3]);
						length3--;
					} else i3++;
				}
			} else if(s == 0) {
				var listeners4 = self.onIOError.listeners;
				var repeat4 = self.onIOError.repeat;
				var length4 = listeners4.length;
				var i4 = 0;
				while(i4 < length4) {
					listeners4[i4](_g,"Unable to make request (may be blocked due to cross-domain permissions)");
					if(!repeat4[i4]) {
						self.onIOError.remove(listeners4[i4]);
						length4--;
					} else i4++;
				}
				var listeners5 = self.onSecurityError.listeners;
				var repeat5 = self.onSecurityError.repeat;
				var length5 = listeners5.length;
				var i5 = 0;
				while(i5 < length5) {
					listeners5[i5](_g,"Unable to make request (may be blocked due to cross-domain permissions)");
					if(!repeat5[i5]) {
						self.onSecurityError.remove(listeners5[i5]);
						length5--;
					} else i5++;
				}
			} else {
				var listeners6 = self.onIOError.listeners;
				var repeat6 = self.onIOError.repeat;
				var length6 = listeners6.length;
				var i6 = 0;
				while(i6 < length6) {
					listeners6[i6](_g,"Http Error #" + subject.status);
					if(!repeat6[i6]) {
						self.onIOError.remove(listeners6[i6]);
						length6--;
					} else i6++;
				}
			}
		};
	}
	,requestUrl: function(url,method,data,requestHeaders) {
		var xmlHttpRequest = new XMLHttpRequest();
		this.registerEvents(xmlHttpRequest);
		var uri = "";
		if(js_Boot.__instanceof(data,lime_utils_ByteArray)) {
			var data1 = data;
			var _g = this.dataFormat;
			switch(_g[1]) {
			case 0:
				uri = data1.data.buffer;
				break;
			default:
				uri = data1.readUTFBytes(data1.length);
			}
		} else if(js_Boot.__instanceof(data,lime_net_URLVariables)) {
			var data2 = data;
			var _g1 = 0;
			var _g11 = Reflect.fields(data2);
			while(_g1 < _g11.length) {
				var p = _g11[_g1];
				++_g1;
				if(uri.length != 0) uri += "&";
				uri += encodeURIComponent(p) + "=" + StringTools.urlEncode(Reflect.field(data2,p));
			}
		} else if(data != null) uri = data.toString();
		try {
			if(method == "GET" && uri != null && uri != "") {
				var question = url.split("?").length <= 1;
				xmlHttpRequest.open("GET",url + (question?"?":"&") + Std.string(uri),true);
				uri = "";
			} else xmlHttpRequest.open(js_Boot.__cast(method , String),url,true);
		} catch( e ) {
			if (e instanceof js__$Boot_HaxeError) e = e.val;
			var listeners = this.onIOError.listeners;
			var repeat = this.onIOError.repeat;
			var length = listeners.length;
			var i = 0;
			while(i < length) {
				listeners[i](this,e.toString());
				if(!repeat[i]) {
					this.onIOError.remove(listeners[i]);
					length--;
				} else i++;
			}
			return;
		}
		var _g2 = this.dataFormat;
		switch(_g2[1]) {
		case 0:
			xmlHttpRequest.responseType = "arraybuffer";
			break;
		default:
		}
		var _g3 = 0;
		while(_g3 < requestHeaders.length) {
			var header = requestHeaders[_g3];
			++_g3;
			xmlHttpRequest.setRequestHeader(header.name,header.value);
		}
		xmlHttpRequest.send(uri);
		var listeners1 = this.onOpen.listeners;
		var repeat1 = this.onOpen.repeat;
		var length1 = listeners1.length;
		var i1 = 0;
		while(i1 < length1) {
			listeners1[i1](this);
			if(!repeat1[i1]) {
				this.onOpen.remove(listeners1[i1]);
				length1--;
			} else i1++;
		}
		this.getData = function() {
			if(xmlHttpRequest.response != null) return xmlHttpRequest.response; else return xmlHttpRequest.responseText;
		};
	}
	,__onData: function(_) {
		var content = this.getData();
		var _g = this.dataFormat;
		switch(_g[1]) {
		case 0:
			this.data = lime_utils_ByteArray.__ofBuffer(content);
			break;
		default:
			this.data = Std.string(content);
		}
		var listeners = this.onComplete.listeners;
		var repeat = this.onComplete.repeat;
		var length = listeners.length;
		var i = 0;
		while(i < length) {
			listeners[i](this);
			if(!repeat[i]) {
				this.onComplete.remove(listeners[i]);
				length--;
			} else i++;
		}
	}
	,__onProgress: function(event) {
		this.bytesLoaded = event.loaded;
		this.bytesTotal = event.total;
		var listeners = this.onProgress.listeners;
		var repeat = this.onProgress.repeat;
		var length = listeners.length;
		var i = 0;
		while(i < length) {
			listeners[i](this,this.bytesLoaded,this.bytesTotal);
			if(!repeat[i]) {
				this.onProgress.remove(listeners[i]);
				length--;
			} else i++;
		}
	}
	,set_dataFormat: function(inputVal) {
		if(inputVal == lime_net_URLLoaderDataFormat.BINARY && !Reflect.hasField(window,"ArrayBuffer")) this.dataFormat = lime_net_URLLoaderDataFormat.TEXT; else this.dataFormat = inputVal;
		return this.dataFormat;
	}
	,__class__: lime_net_URLLoader
	,__properties__: {set_dataFormat:"set_dataFormat"}
};
var lime_net_URLLoaderDataFormat = $hxClasses["lime.net.URLLoaderDataFormat"] = { __ename__ : true, __constructs__ : ["BINARY","TEXT","VARIABLES"] };
lime_net_URLLoaderDataFormat.BINARY = ["BINARY",0];
lime_net_URLLoaderDataFormat.BINARY.toString = $estr;
lime_net_URLLoaderDataFormat.BINARY.__enum__ = lime_net_URLLoaderDataFormat;
lime_net_URLLoaderDataFormat.TEXT = ["TEXT",1];
lime_net_URLLoaderDataFormat.TEXT.toString = $estr;
lime_net_URLLoaderDataFormat.TEXT.__enum__ = lime_net_URLLoaderDataFormat;
lime_net_URLLoaderDataFormat.VARIABLES = ["VARIABLES",2];
lime_net_URLLoaderDataFormat.VARIABLES.toString = $estr;
lime_net_URLLoaderDataFormat.VARIABLES.__enum__ = lime_net_URLLoaderDataFormat;
var lime_net_URLRequest = function(inURL) {
	if(inURL != null) this.url = inURL;
	this.requestHeaders = [];
	this.method = "GET";
	this.contentType = null;
};
$hxClasses["lime.net.URLRequest"] = lime_net_URLRequest;
lime_net_URLRequest.__name__ = true;
lime_net_URLRequest.prototype = {
	formatRequestHeaders: function() {
		var res = this.requestHeaders;
		if(res == null) res = [];
		if(this.method == "GET" || this.data == null) return res;
		if(typeof(this.data) == "string" || js_Boot.__instanceof(this.data,lime_utils_ByteArray)) {
			res = res.slice();
			res.push(new lime_net_URLRequestHeader("Content-Type",this.contentType != null?this.contentType:"application/x-www-form-urlencoded"));
		}
		return res;
	}
	,__class__: lime_net_URLRequest
};
var lime_net_URLRequestHeader = function(name,value) {
	if(value == null) value = "";
	if(name == null) name = "";
	this.name = name;
	this.value = value;
};
$hxClasses["lime.net.URLRequestHeader"] = lime_net_URLRequestHeader;
lime_net_URLRequestHeader.__name__ = true;
lime_net_URLRequestHeader.prototype = {
	__class__: lime_net_URLRequestHeader
};
var lime_net_URLVariables = function() { };
$hxClasses["lime.net.URLVariables"] = lime_net_URLVariables;
lime_net_URLVariables.__name__ = true;
var lime_system_System = function() { };
$hxClasses["lime.system.System"] = lime_system_System;
lime_system_System.__name__ = true;
lime_system_System.embed = $hx_exports.lime.embed = function(element,width,height,background,assetsPrefix) {
	var htmlElement = null;
	if(typeof(element) == "string") htmlElement = window.document.getElementById(js_Boot.__cast(element , String)); else if(element == null) htmlElement = window.document.createElement("div"); else htmlElement = element;
	var color = null;
	if(background != null) {
		background = StringTools.replace(background,"#","");
		if(background.indexOf("0x") > -1) color = Std.parseInt(background); else color = Std.parseInt("0x" + background);
	}
	if(width == null) width = 0;
	if(height == null) height = 0;
	ApplicationMain.config.background = color;
	ApplicationMain.config.element = htmlElement;
	ApplicationMain.config.width = width;
	ApplicationMain.config.height = height;
	ApplicationMain.config.assetsPrefix = assetsPrefix;
	ApplicationMain.create();
};
lime_system_System.getTimer = function() {
	return new Date().getTime();
};
var lime_text_Font = function() { };
$hxClasses["lime.text.Font"] = lime_text_Font;
lime_text_Font.__name__ = true;
var lime_ui_Gamepad = function() { };
$hxClasses["lime.ui.Gamepad"] = lime_ui_Gamepad;
lime_ui_Gamepad.__name__ = true;
lime_ui_Gamepad.prototype = {
	__class__: lime_ui_Gamepad
};
var lime_ui__$KeyModifier_KeyModifier_$Impl_$ = {};
$hxClasses["lime.ui._KeyModifier.KeyModifier_Impl_"] = lime_ui__$KeyModifier_KeyModifier_$Impl_$;
lime_ui__$KeyModifier_KeyModifier_$Impl_$.__name__ = true;
lime_ui__$KeyModifier_KeyModifier_$Impl_$.__properties__ = {get_shiftKey:"get_shiftKey",get_metaKey:"get_metaKey",get_ctrlKey:"get_ctrlKey",get_altKey:"get_altKey"}
lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_altKey = function(this1) {
	return (this1 & 256) > 0 || (this1 & 512) > 0;
};
lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_ctrlKey = function(this1) {
	return (this1 & 64) > 0 || (this1 & 128) > 0;
};
lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_metaKey = function(this1) {
	return (this1 & 1024) > 0 || (this1 & 2048) > 0;
};
lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_shiftKey = function(this1) {
	return (this1 & 1) > 0 || (this1 & 2) > 0;
};
var lime_ui_Mouse = function() { };
$hxClasses["lime.ui.Mouse"] = lime_ui_Mouse;
lime_ui_Mouse.__name__ = true;
lime_ui_Mouse.__properties__ = {set_cursor:"set_cursor"}
lime_ui_Mouse.set_cursor = function(value) {
	return lime__$backend_html5_HTML5Mouse.set_cursor(value);
};
var lime_ui_MouseCursor = $hxClasses["lime.ui.MouseCursor"] = { __ename__ : true, __constructs__ : ["ARROW","CROSSHAIR","DEFAULT","MOVE","POINTER","RESIZE_NESW","RESIZE_NS","RESIZE_NWSE","RESIZE_WE","TEXT","WAIT","WAIT_ARROW","CUSTOM"] };
lime_ui_MouseCursor.ARROW = ["ARROW",0];
lime_ui_MouseCursor.ARROW.toString = $estr;
lime_ui_MouseCursor.ARROW.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.CROSSHAIR = ["CROSSHAIR",1];
lime_ui_MouseCursor.CROSSHAIR.toString = $estr;
lime_ui_MouseCursor.CROSSHAIR.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.DEFAULT = ["DEFAULT",2];
lime_ui_MouseCursor.DEFAULT.toString = $estr;
lime_ui_MouseCursor.DEFAULT.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.MOVE = ["MOVE",3];
lime_ui_MouseCursor.MOVE.toString = $estr;
lime_ui_MouseCursor.MOVE.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.POINTER = ["POINTER",4];
lime_ui_MouseCursor.POINTER.toString = $estr;
lime_ui_MouseCursor.POINTER.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.RESIZE_NESW = ["RESIZE_NESW",5];
lime_ui_MouseCursor.RESIZE_NESW.toString = $estr;
lime_ui_MouseCursor.RESIZE_NESW.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.RESIZE_NS = ["RESIZE_NS",6];
lime_ui_MouseCursor.RESIZE_NS.toString = $estr;
lime_ui_MouseCursor.RESIZE_NS.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.RESIZE_NWSE = ["RESIZE_NWSE",7];
lime_ui_MouseCursor.RESIZE_NWSE.toString = $estr;
lime_ui_MouseCursor.RESIZE_NWSE.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.RESIZE_WE = ["RESIZE_WE",8];
lime_ui_MouseCursor.RESIZE_WE.toString = $estr;
lime_ui_MouseCursor.RESIZE_WE.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.TEXT = ["TEXT",9];
lime_ui_MouseCursor.TEXT.toString = $estr;
lime_ui_MouseCursor.TEXT.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.WAIT = ["WAIT",10];
lime_ui_MouseCursor.WAIT.toString = $estr;
lime_ui_MouseCursor.WAIT.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.WAIT_ARROW = ["WAIT_ARROW",11];
lime_ui_MouseCursor.WAIT_ARROW.toString = $estr;
lime_ui_MouseCursor.WAIT_ARROW.__enum__ = lime_ui_MouseCursor;
lime_ui_MouseCursor.CUSTOM = ["CUSTOM",12];
lime_ui_MouseCursor.CUSTOM.toString = $estr;
lime_ui_MouseCursor.CUSTOM.__enum__ = lime_ui_MouseCursor;
var lime_ui_Window = function(config) {
	this.onWindowRestore = new lime_app_Event();
	this.onWindowResize = new lime_app_Event();
	this.onWindowMove = new lime_app_Event();
	this.onWindowMinimize = new lime_app_Event();
	this.onWindowLeave = new lime_app_Event();
	this.onWindowFullscreen = new lime_app_Event();
	this.onWindowFocusOut = new lime_app_Event();
	this.onWindowFocusIn = new lime_app_Event();
	this.onWindowEnter = new lime_app_Event();
	this.onWindowDeactivate = new lime_app_Event();
	this.onWindowClose = new lime_app_Event();
	this.onWindowActivate = new lime_app_Event();
	this.onTouchStart = new lime_app_Event();
	this.onTouchMove = new lime_app_Event();
	this.onTouchEnd = new lime_app_Event();
	this.onTextInput = new lime_app_Event();
	this.onTextEdit = new lime_app_Event();
	this.onMouseWheel = new lime_app_Event();
	this.onMouseUp = new lime_app_Event();
	this.onMouseMoveRelative = new lime_app_Event();
	this.onMouseMove = new lime_app_Event();
	this.onMouseDown = new lime_app_Event();
	this.onKeyUp = new lime_app_Event();
	this.onKeyDown = new lime_app_Event();
	this.onGamepadDisconnect = new lime_app_Event();
	this.onGamepadConnect = new lime_app_Event();
	this.onGamepadButtonUp = new lime_app_Event();
	this.onGamepadButtonDown = new lime_app_Event();
	this.onGamepadAxisMove = new lime_app_Event();
	this.config = config;
	this.__width = 0;
	this.__height = 0;
	this.__fullscreen = false;
	this.__x = 0;
	this.__y = 0;
	if(config != null) {
		if(Object.prototype.hasOwnProperty.call(config,"width")) this.__width = config.width;
		if(Object.prototype.hasOwnProperty.call(config,"height")) this.__height = config.height;
		if(Object.prototype.hasOwnProperty.call(config,"fullscreen")) this.__fullscreen = config.fullscreen;
	}
	this.backend = new lime__$backend_html5_HTML5Window(this);
};
$hxClasses["lime.ui.Window"] = lime_ui_Window;
lime_ui_Window.__name__ = true;
lime_ui_Window.prototype = {
	create: function(application) {
		this.backend.create(application);
		if(this.currentRenderer != null) this.currentRenderer.create();
	}
	,resize: function(width,height) {
		this.backend.resize(width,height);
		this.__width = width;
		this.__height = height;
	}
	,set_fullscreen: function(value) {
		return this.__fullscreen = this.backend.setFullscreen(value);
	}
	,set_height: function(value) {
		this.resize(this.__width,value);
		return this.__height;
	}
	,set_width: function(value) {
		this.resize(value,this.__height);
		return this.__width;
	}
	,__class__: lime_ui_Window
	,__properties__: {set_width:"set_width",set_height:"set_height",set_fullscreen:"set_fullscreen"}
};
var lime_utils_ByteArray = function(size) {
	if(size == null) size = 0;
	this.allocated = 0;
	this.position = 0;
	this.length = 0;
	if(size > 0) this.allocated = size;
	this.___resizeBuffer(this.allocated);
	this.set_length(this.allocated);
};
$hxClasses["lime.utils.ByteArray"] = lime_utils_ByteArray;
lime_utils_ByteArray.__name__ = true;
lime_utils_ByteArray.__ofBuffer = function(buffer) {
	var bytes = new lime_utils_ByteArray();
	bytes.set_length(bytes.allocated = buffer.byteLength);
	bytes.data = new DataView(buffer);
	bytes.byteView = new Uint8Array(buffer);
	return bytes;
};
lime_utils_ByteArray.prototype = {
	readUTFBytes: function(len) {
		var value = "";
		var max = this.position + len;
		while(this.position < max) {
			var data = this.data;
			var c = data.getUint8(this.position++);
			if(c < 128) {
				if(c == 0) break;
				value += String.fromCharCode(c);
			} else if(c < 224) value += String.fromCharCode((c & 63) << 6 | data.getUint8(this.position++) & 127); else if(c < 240) {
				var c2 = data.getUint8(this.position++);
				value += String.fromCharCode((c & 31) << 12 | (c2 & 127) << 6 | data.getUint8(this.position++) & 127);
			} else {
				var c21 = data.getUint8(this.position++);
				var c3 = data.getUint8(this.position++);
				value += String.fromCharCode((c & 15) << 18 | (c21 & 127) << 12 | c3 << 6 & 127 | data.getUint8(this.position++) & 127);
			}
		}
		return value;
	}
	,__get: function(pos) {
		return this.data.getInt8(pos);
	}
	,___resizeBuffer: function(len) {
		var oldByteView = this.byteView;
		var newByteView = new Uint8Array(len);
		if(oldByteView != null) {
			if(oldByteView.length <= len) newByteView.set(oldByteView); else newByteView.set(oldByteView.subarray(0,len));
		}
		this.byteView = newByteView;
		this.data = new DataView(newByteView.buffer);
	}
	,__set: function(pos,v) {
		this.data.setUint8(pos,v);
	}
	,set_length: function(value) {
		if(this.allocated < value) this.___resizeBuffer(this.allocated = Std["int"](Math.max(value,this.allocated * 2))); else if(this.allocated > value * 2) this.___resizeBuffer(this.allocated = value);
		this.length = value;
		return value;
	}
	,__class__: lime_utils_ByteArray
	,__properties__: {set_length:"set_length"}
};
var motion_actuators_IGenericActuator = function() { };
$hxClasses["motion.actuators.IGenericActuator"] = motion_actuators_IGenericActuator;
motion_actuators_IGenericActuator.__name__ = true;
motion_actuators_IGenericActuator.prototype = {
	__class__: motion_actuators_IGenericActuator
};
var motion_actuators_GenericActuator = function(target,duration,properties) {
	this._autoVisible = true;
	this._delay = 0;
	this._reflect = false;
	this._repeat = 0;
	this._reverse = false;
	this._smartRotation = false;
	this._snapping = false;
	this.special = false;
	this.target = target;
	this.properties = properties;
	this.duration = duration;
	this._ease = motion_Actuate.defaultEase;
};
$hxClasses["motion.actuators.GenericActuator"] = motion_actuators_GenericActuator;
motion_actuators_GenericActuator.__name__ = true;
motion_actuators_GenericActuator.__interfaces__ = [motion_actuators_IGenericActuator];
motion_actuators_GenericActuator.prototype = {
	apply: function() {
		var _g = 0;
		var _g1 = Reflect.fields(this.properties);
		while(_g < _g1.length) {
			var i = _g1[_g];
			++_g;
			if(Object.prototype.hasOwnProperty.call(this.target,i)) Reflect.setField(this.target,i,Reflect.field(this.properties,i)); else Reflect.setProperty(this.target,i,Reflect.field(this.properties,i));
		}
	}
	,autoVisible: function(value) {
		if(value == null) value = true;
		this._autoVisible = value;
		return this;
	}
	,callMethod: function(method,params) {
		if(params == null) params = [];
		return Reflect.callMethod(method,method,params);
	}
	,change: function() {
		if(this._onUpdate != null) this.callMethod(this._onUpdate,this._onUpdateParams);
	}
	,complete: function(sendEvent) {
		if(sendEvent == null) sendEvent = true;
		if(sendEvent) {
			this.change();
			if(this._onComplete != null) this.callMethod(this._onComplete,this._onCompleteParams);
		}
		motion_Actuate.unload(this);
	}
	,delay: function(duration) {
		this._delay = duration;
		return this;
	}
	,ease: function(easing) {
		this._ease = easing;
		return this;
	}
	,move: function() {
	}
	,onComplete: function(handler,parameters) {
		this._onComplete = handler;
		if(parameters == null) this._onCompleteParams = []; else this._onCompleteParams = parameters;
		if(this.duration == 0) this.complete();
		return this;
	}
	,onRepeat: function(handler,parameters) {
		this._onRepeat = handler;
		if(parameters == null) this._onRepeatParams = []; else this._onRepeatParams = parameters;
		return this;
	}
	,onUpdate: function(handler,parameters) {
		this._onUpdate = handler;
		if(parameters == null) this._onUpdateParams = []; else this._onUpdateParams = parameters;
		return this;
	}
	,onPause: function(handler,parameters) {
		this._onPause = handler;
		if(parameters == null) this._onPauseParams = []; else this._onPauseParams = parameters;
		return this;
	}
	,onResume: function(handler,parameters) {
		this._onResume = handler;
		if(parameters == null) this._onResumeParams = []; else this._onResumeParams = parameters;
		return this;
	}
	,pause: function() {
		if(this._onPause != null) this.callMethod(this._onPause,this._onPauseParams);
	}
	,reflect: function(value) {
		if(value == null) value = true;
		this._reflect = value;
		this.special = true;
		return this;
	}
	,repeat: function(times) {
		if(times == null) times = -1;
		this._repeat = times;
		return this;
	}
	,resume: function() {
		if(this._onResume != null) this.callMethod(this._onResume,this._onResumeParams);
	}
	,reverse: function(value) {
		if(value == null) value = true;
		this._reverse = value;
		this.special = true;
		return this;
	}
	,smartRotation: function(value) {
		if(value == null) value = true;
		this._smartRotation = value;
		this.special = true;
		return this;
	}
	,snapping: function(value) {
		if(value == null) value = true;
		this._snapping = value;
		this.special = true;
		return this;
	}
	,stop: function(properties,complete,sendEvent) {
	}
	,__class__: motion_actuators_GenericActuator
};
var motion_actuators_SimpleActuator = function(target,duration,properties) {
	this.active = true;
	this.propertyDetails = [];
	this.sendChange = false;
	this.paused = false;
	this.cacheVisible = false;
	this.initialized = false;
	this.setVisible = false;
	this.toggleVisible = false;
	this.startTime = openfl_Lib.getTimer() / 1000;
	motion_actuators_GenericActuator.call(this,target,duration,properties);
	if(!motion_actuators_SimpleActuator.addedEvent) {
		motion_actuators_SimpleActuator.addedEvent = true;
		openfl_Lib.current.stage.addEventListener(openfl_events_Event.ENTER_FRAME,motion_actuators_SimpleActuator.stage_onEnterFrame);
	}
};
$hxClasses["motion.actuators.SimpleActuator"] = motion_actuators_SimpleActuator;
motion_actuators_SimpleActuator.__name__ = true;
motion_actuators_SimpleActuator.stage_onEnterFrame = function(event) {
	var currentTime = openfl_Lib.getTimer() / 1000;
	var actuator;
	var j = 0;
	var cleanup = false;
	var _g1 = 0;
	var _g = motion_actuators_SimpleActuator.actuatorsLength;
	while(_g1 < _g) {
		var i = _g1++;
		actuator = motion_actuators_SimpleActuator.actuators[j];
		if(actuator != null && actuator.active) {
			if(currentTime >= actuator.timeOffset) actuator.update(currentTime);
			j++;
		} else {
			motion_actuators_SimpleActuator.actuators.splice(j,1);
			--motion_actuators_SimpleActuator.actuatorsLength;
		}
	}
};
motion_actuators_SimpleActuator.__super__ = motion_actuators_GenericActuator;
motion_actuators_SimpleActuator.prototype = $extend(motion_actuators_GenericActuator.prototype,{
	setField_openfl_geom_Transform: function(target,propertyName,value) {
		if(Object.prototype.hasOwnProperty.call(target,propertyName)) target[propertyName] = value; else Reflect.setProperty(target,propertyName,value);
	}
	,setField_motion_actuators_TransformActuator_T: function(target,propertyName,value) {
		if(Object.prototype.hasOwnProperty.call(target,propertyName)) target[propertyName] = value; else Reflect.setProperty(target,propertyName,value);
	}
	,setField_motion_actuators_MotionPathActuator_T: function(target,propertyName,value) {
		if(Object.prototype.hasOwnProperty.call(target,propertyName)) target[propertyName] = value; else Reflect.setProperty(target,propertyName,value);
	}
	,setField_openfl_display_DisplayObject: function(target,propertyName,value) {
		if(Object.prototype.hasOwnProperty.call(target,propertyName)) target[propertyName] = value; else Reflect.setProperty(target,propertyName,value);
	}
	,setField_motion_actuators_SimpleActuator_T: function(target,propertyName,value) {
		if(Object.prototype.hasOwnProperty.call(target,propertyName)) target[propertyName] = value; else Reflect.setProperty(target,propertyName,value);
	}
	,autoVisible: function(value) {
		if(value == null) value = true;
		this._autoVisible = value;
		if(!value) {
			this.toggleVisible = false;
			if(this.setVisible) this.setField_motion_actuators_SimpleActuator_T(this.target,"visible",this.cacheVisible);
		}
		return this;
	}
	,delay: function(duration) {
		this._delay = duration;
		this.timeOffset = this.startTime + duration;
		return this;
	}
	,getField: function(target,propertyName) {
		var value = null;
		if(Object.prototype.hasOwnProperty.call(target,propertyName)) value = Reflect.field(target,propertyName); else value = Reflect.getProperty(target,propertyName);
		return value;
	}
	,initialize: function() {
		var details;
		var start;
		var _g = 0;
		var _g1 = Reflect.fields(this.properties);
		while(_g < _g1.length) {
			var i = _g1[_g];
			++_g;
			var isField = true;
			if(Object.prototype.hasOwnProperty.call(this.target,i) && !(this.target.__properties__ && this.target.__properties__["set_" + i])) start = Reflect.field(this.target,i); else {
				isField = false;
				start = Reflect.getProperty(this.target,i);
			}
			if(typeof(start) == "number") {
				var value = this.getField(this.properties,i);
				if(start == null) start = 0;
				if(value == null) value = 0;
				details = new motion_actuators_PropertyDetails(this.target,i,start,value - start,isField);
				this.propertyDetails.push(details);
			}
		}
		this.detailsLength = this.propertyDetails.length;
		this.initialized = true;
	}
	,move: function() {
		this.toggleVisible = Object.prototype.hasOwnProperty.call(this.properties,"alpha") && js_Boot.__instanceof(this.target,openfl_display_DisplayObject);
		if(this.toggleVisible && this.properties.alpha != 0 && !this.getField(this.target,"visible")) {
			this.setVisible = true;
			this.cacheVisible = this.getField(this.target,"visible");
			this.setField_motion_actuators_SimpleActuator_T(this.target,"visible",true);
		}
		this.timeOffset = this.startTime;
		motion_actuators_SimpleActuator.actuators.push(this);
		++motion_actuators_SimpleActuator.actuatorsLength;
	}
	,onUpdate: function(handler,parameters) {
		this._onUpdate = handler;
		if(parameters == null) this._onUpdateParams = []; else this._onUpdateParams = parameters;
		this.sendChange = true;
		return this;
	}
	,pause: function() {
		if(!this.paused) {
			this.paused = true;
			motion_actuators_GenericActuator.prototype.pause.call(this);
			this.pauseTime = openfl_Lib.getTimer();
		}
	}
	,resume: function() {
		if(this.paused) {
			this.paused = false;
			this.timeOffset += (openfl_Lib.getTimer() - this.pauseTime) / 1000;
			motion_actuators_GenericActuator.prototype.resume.call(this);
		}
	}
	,setProperty: function(details,value) {
		if(details.isField) details.target[details.propertyName] = value; else Reflect.setProperty(details.target,details.propertyName,value);
	}
	,stop: function(properties,complete,sendEvent) {
		if(this.active) {
			if(properties == null) {
				this.active = false;
				if(complete) this.apply();
				this.complete(sendEvent);
				return;
			}
			var _g = 0;
			var _g1 = Reflect.fields(properties);
			while(_g < _g1.length) {
				var i = _g1[_g];
				++_g;
				if(Object.prototype.hasOwnProperty.call(this.properties,i)) {
					this.active = false;
					if(complete) this.apply();
					this.complete(sendEvent);
					return;
				}
			}
		}
	}
	,update: function(currentTime) {
		if(!this.paused) {
			var details;
			var easing;
			var i;
			var tweenPosition = (currentTime - this.timeOffset) / this.duration;
			if(tweenPosition > 1) tweenPosition = 1;
			if(!this.initialized) this.initialize();
			if(!this.special) {
				easing = this._ease.calculate(tweenPosition);
				var _g1 = 0;
				var _g = this.detailsLength;
				while(_g1 < _g) {
					var i1 = _g1++;
					details = this.propertyDetails[i1];
					this.setProperty(details,details.start + details.change * easing);
				}
			} else {
				if(!this._reverse) easing = this._ease.calculate(tweenPosition); else easing = this._ease.calculate(1 - tweenPosition);
				var endValue;
				var _g11 = 0;
				var _g2 = this.detailsLength;
				while(_g11 < _g2) {
					var i2 = _g11++;
					details = this.propertyDetails[i2];
					if(this._smartRotation && (details.propertyName == "rotation" || details.propertyName == "rotationX" || details.propertyName == "rotationY" || details.propertyName == "rotationZ")) {
						var rotation = details.change % 360;
						if(rotation > 180) rotation -= 360; else if(rotation < -180) rotation += 360;
						endValue = details.start + rotation * easing;
					} else endValue = details.start + details.change * easing;
					if(!this._snapping) {
						if(details.isField) details.target[details.propertyName] = endValue; else Reflect.setProperty(details.target,details.propertyName,endValue);
					} else this.setProperty(details,Math.round(endValue));
				}
			}
			if(tweenPosition == 1) {
				if(this._repeat == 0) {
					this.active = false;
					if(this.toggleVisible && this.getField(this.target,"alpha") == 0) this.setField_motion_actuators_SimpleActuator_T(this.target,"visible",false);
					this.complete(true);
					return;
				} else {
					if(this._onRepeat != null) this.callMethod(this._onRepeat,this._onRepeatParams);
					if(this._reflect) this._reverse = !this._reverse;
					this.startTime = currentTime;
					this.timeOffset = this.startTime + this._delay;
					if(this._repeat > 0) this._repeat--;
				}
			}
			if(this.sendChange) this.change();
		}
	}
	,__class__: motion_actuators_SimpleActuator
});
var motion_easing_Expo = function() { };
$hxClasses["motion.easing.Expo"] = motion_easing_Expo;
motion_easing_Expo.__name__ = true;
motion_easing_Expo.__properties__ = {get_easeOut:"get_easeOut"}
motion_easing_Expo.get_easeOut = function() {
	return new motion_easing_ExpoEaseOut();
};
var motion_easing_IEasing = function() { };
$hxClasses["motion.easing.IEasing"] = motion_easing_IEasing;
motion_easing_IEasing.__name__ = true;
motion_easing_IEasing.prototype = {
	__class__: motion_easing_IEasing
};
var motion_easing_ExpoEaseOut = function() {
};
$hxClasses["motion.easing.ExpoEaseOut"] = motion_easing_ExpoEaseOut;
motion_easing_ExpoEaseOut.__name__ = true;
motion_easing_ExpoEaseOut.__interfaces__ = [motion_easing_IEasing];
motion_easing_ExpoEaseOut.prototype = {
	calculate: function(k) {
		if(k == 1) return 1; else return 1 - Math.pow(2,-10 * k);
	}
	,__class__: motion_easing_ExpoEaseOut
};
var motion_Actuate = function() { };
$hxClasses["motion.Actuate"] = motion_Actuate;
motion_Actuate.__name__ = true;
motion_Actuate.apply = function(target,properties,customActuator) {
	motion_Actuate.stop(target,properties);
	if(customActuator == null) customActuator = motion_Actuate.defaultActuator;
	var actuator = Type.createInstance(customActuator,[target,0,properties]);
	actuator.apply();
	return actuator;
};
motion_Actuate.getLibrary = function(target,allowCreation) {
	if(allowCreation == null) allowCreation = true;
	if(!(motion_Actuate.targetLibraries.h.__keys__[target.__id__] != null) && allowCreation) motion_Actuate.targetLibraries.set(target,[]);
	return motion_Actuate.targetLibraries.h[target.__id__];
};
motion_Actuate.stop = function(target,properties,complete,sendEvent) {
	if(sendEvent == null) sendEvent = true;
	if(complete == null) complete = false;
	if(target != null) {
		if(js_Boot.__instanceof(target,motion_actuators_IGenericActuator)) {
			var actuator = target;
			actuator.stop(null,complete,sendEvent);
		} else {
			var library = motion_Actuate.getLibrary(target,false);
			if(library != null) {
				if(typeof(properties) == "string") {
					var temp = { };
					Reflect.setField(temp,properties,null);
					properties = temp;
				} else if((properties instanceof Array) && properties.__enum__ == null) {
					var temp1 = { };
					var _g = 0;
					var _g1;
					_g1 = js_Boot.__cast(properties , Array);
					while(_g < _g1.length) {
						var property = _g1[_g];
						++_g;
						Reflect.setField(temp1,property,null);
					}
					properties = temp1;
				}
				var i = library.length - 1;
				while(i >= 0) {
					library[i].stop(properties,complete,sendEvent);
					i--;
				}
			}
		}
	}
};
motion_Actuate.tween = function(target,duration,properties,overwrite,customActuator) {
	if(overwrite == null) overwrite = true;
	if(target != null) {
		if(duration > 0) {
			if(customActuator == null) customActuator = motion_Actuate.defaultActuator;
			var actuator = Type.createInstance(customActuator,[target,duration,properties]);
			var library = motion_Actuate.getLibrary(actuator.target);
			if(overwrite) {
				var i = library.length - 1;
				while(i >= 0) {
					library[i].stop(actuator.properties,false,false);
					i--;
				}
				library = motion_Actuate.getLibrary(actuator.target);
			}
			library.push(actuator);
			actuator.move();
			return actuator;
		} else return motion_Actuate.apply(target,properties,customActuator);
	}
	return null;
};
motion_Actuate.unload = function(actuator) {
	var target = actuator.target;
	if(motion_Actuate.targetLibraries.h.__keys__[target.__id__] != null) {
		HxOverrides.remove(motion_Actuate.targetLibraries.h[target.__id__],actuator);
		if(motion_Actuate.targetLibraries.h[target.__id__].length == 0) motion_Actuate.targetLibraries.remove(target);
	}
};
var motion_IComponentPath = function() { };
$hxClasses["motion.IComponentPath"] = motion_IComponentPath;
motion_IComponentPath.__name__ = true;
motion_IComponentPath.prototype = {
	__class__: motion_IComponentPath
	,__properties__: {get_end:"get_end"}
};
var motion_actuators_FilterActuator = function(target,duration,properties) {
	this.filterIndex = -1;
	motion_actuators_SimpleActuator.call(this,target,duration,properties);
	if(js_Boot.__instanceof(properties.filter,Class)) {
		this.filterClass = properties.filter;
		if(target.get_filters().length == 0) target.set_filters([Type.createInstance(this.filterClass,[])]);
		var _g = 0;
		var _g1 = target.get_filters();
		while(_g < _g1.length) {
			var filter = _g1[_g];
			++_g;
			if(js_Boot.__instanceof(filter,this.filterClass)) this.filter = filter;
		}
	} else {
		this.filterIndex = properties.filter;
		this.filter = target.get_filters()[this.filterIndex];
	}
};
$hxClasses["motion.actuators.FilterActuator"] = motion_actuators_FilterActuator;
motion_actuators_FilterActuator.__name__ = true;
motion_actuators_FilterActuator.__super__ = motion_actuators_SimpleActuator;
motion_actuators_FilterActuator.prototype = $extend(motion_actuators_SimpleActuator.prototype,{
	apply: function() {
		var _g = 0;
		var _g1 = Reflect.fields(this.properties);
		while(_g < _g1.length) {
			var propertyName = _g1[_g];
			++_g;
			if(propertyName != "filter") Reflect.setField(this.filter,propertyName,Reflect.field(this.properties,propertyName));
		}
		var filters = this.getField(this.target,"filters");
		Reflect.setField(filters,this.properties.filter,this.filter);
		this.setField_openfl_display_DisplayObject(this.target,"filters",filters);
	}
	,initialize: function() {
		var details;
		var start;
		var _g = 0;
		var _g1 = Reflect.fields(this.properties);
		while(_g < _g1.length) {
			var propertyName = _g1[_g];
			++_g;
			if(propertyName != "filter") {
				start = this.getField(this.filter,propertyName);
				details = new motion_actuators_PropertyDetails(this.filter,propertyName,start,Reflect.field(this.properties,propertyName) - start);
				this.propertyDetails.push(details);
			}
		}
		this.detailsLength = this.propertyDetails.length;
		this.initialized = true;
	}
	,update: function(currentTime) {
		motion_actuators_SimpleActuator.prototype.update.call(this,currentTime);
		var filters = this.target.get_filters();
		if(this.filterIndex > -1) Reflect.setField(filters,this.properties.filter,this.filter); else {
			var _g1 = 0;
			var _g = filters.length;
			while(_g1 < _g) {
				var i = _g1++;
				if(js_Boot.__instanceof(filters[i],this.filterClass)) filters[i] = this.filter;
			}
		}
		this.setField_openfl_display_DisplayObject(this.target,"filters",filters);
	}
	,__class__: motion_actuators_FilterActuator
});
var motion_actuators_MethodActuator = function(target,duration,properties) {
	this.currentParameters = [];
	this.tweenProperties = { };
	motion_actuators_SimpleActuator.call(this,target,duration,properties);
	if(!Object.prototype.hasOwnProperty.call(properties,"start")) this.properties.start = [];
	if(!Object.prototype.hasOwnProperty.call(properties,"end")) this.properties.end = this.properties.start;
	var _g1 = 0;
	var _g = this.properties.start.length;
	while(_g1 < _g) {
		var i = _g1++;
		this.currentParameters.push(this.properties.start[i]);
	}
};
$hxClasses["motion.actuators.MethodActuator"] = motion_actuators_MethodActuator;
motion_actuators_MethodActuator.__name__ = true;
motion_actuators_MethodActuator.__super__ = motion_actuators_SimpleActuator;
motion_actuators_MethodActuator.prototype = $extend(motion_actuators_SimpleActuator.prototype,{
	apply: function() {
		this.callMethod(this.target,this.properties.end);
	}
	,complete: function(sendEvent) {
		if(sendEvent == null) sendEvent = true;
		var _g1 = 0;
		var _g = this.properties.start.length;
		while(_g1 < _g) {
			var i = _g1++;
			this.currentParameters[i] = Reflect.field(this.tweenProperties,"param" + i);
		}
		this.callMethod(this.target,this.currentParameters);
		motion_actuators_SimpleActuator.prototype.complete.call(this,sendEvent);
	}
	,initialize: function() {
		var details;
		var propertyName;
		var start;
		var _g1 = 0;
		var _g = this.properties.start.length;
		while(_g1 < _g) {
			var i = _g1++;
			propertyName = "param" + i;
			start = this.properties.start[i];
			this.tweenProperties[propertyName] = start;
			if(typeof(start) == "number" || ((start | 0) === start)) {
				details = new motion_actuators_PropertyDetails(this.tweenProperties,propertyName,start,this.properties.end[i] - start);
				this.propertyDetails.push(details);
			}
		}
		this.detailsLength = this.propertyDetails.length;
		this.initialized = true;
	}
	,update: function(currentTime) {
		motion_actuators_SimpleActuator.prototype.update.call(this,currentTime);
		if(this.active && !this.paused) {
			var _g1 = 0;
			var _g = this.properties.start.length;
			while(_g1 < _g) {
				var i = _g1++;
				this.currentParameters[i] = Reflect.field(this.tweenProperties,"param" + i);
			}
			this.callMethod(this.target,this.currentParameters);
		}
	}
	,__class__: motion_actuators_MethodActuator
});
var motion_actuators_MotionPathActuator = function(target,duration,properties) {
	motion_actuators_SimpleActuator.call(this,target,duration,properties);
};
$hxClasses["motion.actuators.MotionPathActuator"] = motion_actuators_MotionPathActuator;
motion_actuators_MotionPathActuator.__name__ = true;
motion_actuators_MotionPathActuator.__super__ = motion_actuators_SimpleActuator;
motion_actuators_MotionPathActuator.prototype = $extend(motion_actuators_SimpleActuator.prototype,{
	apply: function() {
		var _g = 0;
		var _g1 = Reflect.fields(this.properties);
		while(_g < _g1.length) {
			var propertyName = _g1[_g];
			++_g;
			if(Object.prototype.hasOwnProperty.call(this.target,propertyName)) Reflect.setField(this.target,propertyName,(js_Boot.__cast(Reflect.field(this.properties,propertyName) , motion_IComponentPath)).get_end()); else Reflect.setProperty(this.target,propertyName,(js_Boot.__cast(Reflect.field(this.properties,propertyName) , motion_IComponentPath)).get_end());
		}
	}
	,initialize: function() {
		var details;
		var path;
		var _g = 0;
		var _g1 = Reflect.fields(this.properties);
		while(_g < _g1.length) {
			var propertyName = _g1[_g];
			++_g;
			path = js_Boot.__cast(Reflect.field(this.properties,propertyName) , motion_IComponentPath);
			if(path != null) {
				var isField = true;
				if(Object.prototype.hasOwnProperty.call(this.target,propertyName)) path.start = Reflect.field(this.target,propertyName); else {
					isField = false;
					path.start = Reflect.getProperty(this.target,propertyName);
				}
				details = new motion_actuators_PropertyPathDetails(this.target,propertyName,path,isField);
				this.propertyDetails.push(details);
			}
		}
		this.detailsLength = this.propertyDetails.length;
		this.initialized = true;
	}
	,update: function(currentTime) {
		if(!this.paused) {
			var details;
			var easing;
			var tweenPosition = (currentTime - this.timeOffset) / this.duration;
			if(tweenPosition > 1) tweenPosition = 1;
			if(!this.initialized) this.initialize();
			if(!this.special) {
				easing = this._ease.calculate(tweenPosition);
				var _g = 0;
				var _g1 = this.propertyDetails;
				while(_g < _g1.length) {
					var details1 = _g1[_g];
					++_g;
					if(details1.isField) Reflect.setField(details1.target,details1.propertyName,(js_Boot.__cast(details1 , motion_actuators_PropertyPathDetails)).path.calculate(easing)); else Reflect.setProperty(details1.target,details1.propertyName,(js_Boot.__cast(details1 , motion_actuators_PropertyPathDetails)).path.calculate(easing));
				}
			} else {
				if(!this._reverse) easing = this._ease.calculate(tweenPosition); else easing = this._ease.calculate(1 - tweenPosition);
				var endValue;
				var _g2 = 0;
				var _g11 = this.propertyDetails;
				while(_g2 < _g11.length) {
					var details2 = _g11[_g2];
					++_g2;
					if(!this._snapping) {
						if(details2.isField) Reflect.setField(details2.target,details2.propertyName,(js_Boot.__cast(details2 , motion_actuators_PropertyPathDetails)).path.calculate(easing)); else Reflect.setProperty(details2.target,details2.propertyName,(js_Boot.__cast(details2 , motion_actuators_PropertyPathDetails)).path.calculate(easing));
					} else if(details2.isField) Reflect.setField(details2.target,details2.propertyName,Math.round((js_Boot.__cast(details2 , motion_actuators_PropertyPathDetails)).path.calculate(easing))); else Reflect.setProperty(details2.target,details2.propertyName,Math.round((js_Boot.__cast(details2 , motion_actuators_PropertyPathDetails)).path.calculate(easing)));
				}
			}
			if(tweenPosition == 1) {
				if(this._repeat == 0) {
					this.active = false;
					if(this.toggleVisible && this.getField(this.target,"alpha") == 0) this.setField_motion_actuators_MotionPathActuator_T(this.target,"visible",false);
					this.complete(true);
					return;
				} else {
					if(this._onRepeat != null) this.callMethod(this._onRepeat,this._onRepeatParams);
					if(this._reflect) this._reverse = !this._reverse;
					this.startTime = currentTime;
					this.timeOffset = this.startTime + this._delay;
					if(this._repeat > 0) this._repeat--;
				}
			}
			if(this.sendChange) this.change();
		}
	}
	,__class__: motion_actuators_MotionPathActuator
});
var motion_actuators_PropertyDetails = function(target,propertyName,start,change,isField) {
	if(isField == null) isField = true;
	this.target = target;
	this.propertyName = propertyName;
	this.start = start;
	this.change = change;
	this.isField = isField;
};
$hxClasses["motion.actuators.PropertyDetails"] = motion_actuators_PropertyDetails;
motion_actuators_PropertyDetails.__name__ = true;
motion_actuators_PropertyDetails.prototype = {
	__class__: motion_actuators_PropertyDetails
};
var motion_actuators_PropertyPathDetails = function(target,propertyName,path,isField) {
	if(isField == null) isField = true;
	motion_actuators_PropertyDetails.call(this,target,propertyName,0,0,isField);
	this.path = path;
};
$hxClasses["motion.actuators.PropertyPathDetails"] = motion_actuators_PropertyPathDetails;
motion_actuators_PropertyPathDetails.__name__ = true;
motion_actuators_PropertyPathDetails.__super__ = motion_actuators_PropertyDetails;
motion_actuators_PropertyPathDetails.prototype = $extend(motion_actuators_PropertyDetails.prototype,{
	__class__: motion_actuators_PropertyPathDetails
});
var motion_actuators_TransformActuator = function(target,duration,properties) {
	motion_actuators_SimpleActuator.call(this,target,duration,properties);
};
$hxClasses["motion.actuators.TransformActuator"] = motion_actuators_TransformActuator;
motion_actuators_TransformActuator.__name__ = true;
motion_actuators_TransformActuator.__super__ = motion_actuators_SimpleActuator;
motion_actuators_TransformActuator.prototype = $extend(motion_actuators_SimpleActuator.prototype,{
	apply: function() {
		this.initialize();
		if(this.endColorTransform != null) {
			var transform = this.getField(this.target,"transform");
			this.setField_openfl_geom_Transform(transform,"colorTransform",this.endColorTransform);
		}
		if(this.endSoundTransform != null) this.setField_motion_actuators_TransformActuator_T(this.target,"soundTransform",this.endSoundTransform);
	}
	,initialize: function() {
		if(Object.prototype.hasOwnProperty.call(this.properties,"colorValue") && js_Boot.__instanceof(this.target,openfl_display_DisplayObject)) this.initializeColor();
		if(Object.prototype.hasOwnProperty.call(this.properties,"soundVolume") || Object.prototype.hasOwnProperty.call(this.properties,"soundPan")) this.initializeSound();
		this.detailsLength = this.propertyDetails.length;
		this.initialized = true;
	}
	,initializeColor: function() {
		this.endColorTransform = new openfl_geom_ColorTransform();
		var color = this.properties.colorValue;
		var strength = this.properties.colorStrength;
		if(strength < 1) {
			var multiplier;
			var offset;
			if(strength < 0.5) {
				multiplier = 1;
				offset = strength * 2;
			} else {
				multiplier = 1 - (strength - 0.5) * 2;
				offset = 1;
			}
			this.endColorTransform.redMultiplier = multiplier;
			this.endColorTransform.greenMultiplier = multiplier;
			this.endColorTransform.blueMultiplier = multiplier;
			this.endColorTransform.redOffset = offset * (color >> 16 & 255);
			this.endColorTransform.greenOffset = offset * (color >> 8 & 255);
			this.endColorTransform.blueOffset = offset * (color & 255);
		} else {
			this.endColorTransform.redMultiplier = 0;
			this.endColorTransform.greenMultiplier = 0;
			this.endColorTransform.blueMultiplier = 0;
			this.endColorTransform.redOffset = color >> 16 & 255;
			this.endColorTransform.greenOffset = color >> 8 & 255;
			this.endColorTransform.blueOffset = color & 255;
		}
		var propertyNames = ["redMultiplier","greenMultiplier","blueMultiplier","redOffset","greenOffset","blueOffset"];
		if(Object.prototype.hasOwnProperty.call(this.properties,"colorAlpha")) {
			this.endColorTransform.alphaMultiplier = this.properties.colorAlpha;
			propertyNames.push("alphaMultiplier");
		} else this.endColorTransform.alphaMultiplier = this.getField(this.target,"alpha");
		var transform = this.getField(this.target,"transform");
		var begin = this.getField(transform,"colorTransform");
		this.tweenColorTransform = new openfl_geom_ColorTransform();
		var details;
		var start;
		var _g = 0;
		while(_g < propertyNames.length) {
			var propertyName = propertyNames[_g];
			++_g;
			start = this.getField(begin,propertyName);
			details = new motion_actuators_PropertyDetails(this.tweenColorTransform,propertyName,start,this.getField(this.endColorTransform,propertyName) - start);
			this.propertyDetails.push(details);
		}
	}
	,initializeSound: function() {
		if(this.getField(this.target,"soundTransform") == null) this.setField_motion_actuators_TransformActuator_T(this.target,"soundTransform",new openfl_media_SoundTransform());
		var start = this.getField(this.target,"soundTransform");
		this.endSoundTransform = this.getField(this.target,"soundTransform");
		this.tweenSoundTransform = new openfl_media_SoundTransform();
		if(Object.prototype.hasOwnProperty.call(this.properties,"soundVolume")) {
			this.endSoundTransform.volume = this.properties.soundVolume;
			this.propertyDetails.push(new motion_actuators_PropertyDetails(this.tweenSoundTransform,"volume",start.volume,this.endSoundTransform.volume - start.volume));
		}
		if(Object.prototype.hasOwnProperty.call(this.properties,"soundPan")) {
			this.endSoundTransform.pan = this.properties.soundPan;
			this.propertyDetails.push(new motion_actuators_PropertyDetails(this.tweenSoundTransform,"pan",start.pan,this.endSoundTransform.pan - start.pan));
		}
	}
	,update: function(currentTime) {
		motion_actuators_SimpleActuator.prototype.update.call(this,currentTime);
		if(this.endColorTransform != null) {
			var transform = this.getField(this.target,"transform");
			this.setField_openfl_geom_Transform(transform,"colorTransform",this.tweenColorTransform);
		}
		if(this.endSoundTransform != null) this.setField_motion_actuators_TransformActuator_T(this.target,"soundTransform",this.tweenSoundTransform);
	}
	,__class__: motion_actuators_TransformActuator
});
var openfl_IAssetCache = function() { };
$hxClasses["openfl.IAssetCache"] = openfl_IAssetCache;
openfl_IAssetCache.__name__ = true;
openfl_IAssetCache.prototype = {
	__class__: openfl_IAssetCache
	,__properties__: {get_enabled:"get_enabled"}
};
var openfl_AssetCache = function() {
	this.__enabled = true;
	this.bitmapData = new haxe_ds_StringMap();
	this.font = new haxe_ds_StringMap();
	this.sound = new haxe_ds_StringMap();
};
$hxClasses["openfl.AssetCache"] = openfl_AssetCache;
openfl_AssetCache.__name__ = true;
openfl_AssetCache.__interfaces__ = [openfl_IAssetCache];
openfl_AssetCache.prototype = {
	getBitmapData: function(id) {
		return this.bitmapData.get(id);
	}
	,hasBitmapData: function(id) {
		return this.bitmapData.exists(id);
	}
	,setBitmapData: function(id,bitmapData) {
		this.bitmapData.set(id,bitmapData);
	}
	,get_enabled: function() {
		return this.__enabled;
	}
	,__class__: openfl_AssetCache
	,__properties__: {get_enabled:"get_enabled"}
};
var openfl_Assets = function() { };
$hxClasses["openfl.Assets"] = openfl_Assets;
openfl_Assets.__name__ = true;
openfl_Assets.getBitmapData = function(id,useCache) {
	if(useCache == null) useCache = true;
	if(useCache && openfl_Assets.cache.get_enabled() && openfl_Assets.cache.hasBitmapData(id)) {
		var bitmapData = openfl_Assets.cache.getBitmapData(id);
		if(openfl_Assets.isValidBitmapData(bitmapData)) return bitmapData;
	}
	var image = lime_Assets.getImage(id,false);
	if(image != null) {
		var bitmapData1 = openfl_display_BitmapData.fromImage(image);
		if(useCache && openfl_Assets.cache.get_enabled()) openfl_Assets.cache.setBitmapData(id,bitmapData1);
		return bitmapData1;
	}
	return null;
};
openfl_Assets.isValidBitmapData = function(bitmapData) {
	return bitmapData != null && bitmapData.__image != null;
	return true;
};
var openfl_display_MovieClip = function() {
	openfl_display_Sprite.call(this);
	this.__currentFrame = 0;
	this.__currentLabels = [];
	this.__totalFrames = 0;
	this.enabled = true;
};
$hxClasses["openfl.display.MovieClip"] = openfl_display_MovieClip;
openfl_display_MovieClip.__name__ = true;
openfl_display_MovieClip.__super__ = openfl_display_Sprite;
openfl_display_MovieClip.prototype = $extend(openfl_display_Sprite.prototype,{
	__class__: openfl_display_MovieClip
});
var openfl_display_LoaderInfo = function() {
	openfl_events_EventDispatcher.call(this);
	this.applicationDomain = openfl_system_ApplicationDomain.currentDomain;
	this.bytesLoaded = 0;
	this.bytesTotal = 0;
	this.childAllowsParent = true;
	this.parameters = { };
};
$hxClasses["openfl.display.LoaderInfo"] = openfl_display_LoaderInfo;
openfl_display_LoaderInfo.__name__ = true;
openfl_display_LoaderInfo.create = function(loader) {
	var loaderInfo = new openfl_display_LoaderInfo();
	loaderInfo.uncaughtErrorEvents = new openfl_events_UncaughtErrorEvents();
	if(loader != null) loaderInfo.loader = loader; else loaderInfo.url = openfl_display_LoaderInfo.__rootURL;
	return loaderInfo;
};
openfl_display_LoaderInfo.__super__ = openfl_events_EventDispatcher;
openfl_display_LoaderInfo.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	__class__: openfl_display_LoaderInfo
});
var openfl_system_ApplicationDomain = function(parentDomain) {
	if(parentDomain != null) this.parentDomain = parentDomain; else this.parentDomain = openfl_system_ApplicationDomain.currentDomain;
};
$hxClasses["openfl.system.ApplicationDomain"] = openfl_system_ApplicationDomain;
openfl_system_ApplicationDomain.__name__ = true;
openfl_system_ApplicationDomain.prototype = {
	__class__: openfl_system_ApplicationDomain
};
var openfl_events_UncaughtErrorEvents = function(target) {
	openfl_events_EventDispatcher.call(this,target);
};
$hxClasses["openfl.events.UncaughtErrorEvents"] = openfl_events_UncaughtErrorEvents;
openfl_events_UncaughtErrorEvents.__name__ = true;
openfl_events_UncaughtErrorEvents.__super__ = openfl_events_EventDispatcher;
openfl_events_UncaughtErrorEvents.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	__class__: openfl_events_UncaughtErrorEvents
});
var openfl_geom_Matrix = function(a,b,c,d,tx,ty) {
	if(ty == null) ty = 0;
	if(tx == null) tx = 0;
	if(d == null) d = 1;
	if(c == null) c = 0;
	if(b == null) b = 0;
	if(a == null) a = 1;
	this.a = a;
	this.b = b;
	this.c = c;
	this.d = d;
	this.tx = tx;
	this.ty = ty;
	this.__array = new Float32Array([a,b,c,d,tx,ty,0,0,1]);
};
$hxClasses["openfl.geom.Matrix"] = openfl_geom_Matrix;
openfl_geom_Matrix.__name__ = true;
openfl_geom_Matrix.prototype = {
	clone: function() {
		return new openfl_geom_Matrix(this.a,this.b,this.c,this.d,this.tx,this.ty);
	}
	,concat: function(m) {
		var a1 = this.a * m.a + this.b * m.c;
		this.b = this.a * m.b + this.b * m.d;
		this.a = a1;
		var c1 = this.c * m.a + this.d * m.c;
		this.d = this.c * m.b + this.d * m.d;
		this.c = c1;
		var tx1 = this.tx * m.a + this.ty * m.c + m.tx;
		this.ty = this.tx * m.b + this.ty * m.d + m.ty;
		this.tx = tx1;
	}
	,identity: function() {
		this.a = 1;
		this.b = 0;
		this.c = 0;
		this.d = 1;
		this.tx = 0;
		this.ty = 0;
	}
	,invert: function() {
		var norm = this.a * this.d - this.b * this.c;
		if(norm == 0) {
			this.a = this.b = this.c = this.d = 0;
			this.tx = -this.tx;
			this.ty = -this.ty;
		} else {
			norm = 1.0 / norm;
			var a1 = this.d * norm;
			this.d = this.a * norm;
			this.a = a1;
			this.b *= -norm;
			this.c *= -norm;
			var tx1 = -this.a * this.tx - this.c * this.ty;
			this.ty = -this.b * this.tx - this.d * this.ty;
			this.tx = tx1;
		}
		return this;
	}
	,mult: function(m) {
		var result = new openfl_geom_Matrix();
		result.a = this.a * m.a + this.b * m.c;
		result.b = this.a * m.b + this.b * m.d;
		result.c = this.c * m.a + this.d * m.c;
		result.d = this.c * m.b + this.d * m.d;
		result.tx = this.tx * m.a + this.ty * m.c + m.tx;
		result.ty = this.tx * m.b + this.ty * m.d + m.ty;
		return result;
	}
	,scale: function(sx,sy) {
		this.a *= sx;
		this.b *= sy;
		this.c *= sx;
		this.d *= sy;
		this.tx *= sx;
		this.ty *= sy;
	}
	,to3DString: function(roundPixels) {
		if(roundPixels == null) roundPixels = false;
		if(roundPixels) return "matrix3d(" + this.a + ", " + this.b + ", " + "0, 0, " + this.c + ", " + this.d + ", " + "0, 0, 0, 0, 1, 0, " + (this.tx | 0) + ", " + (this.ty | 0) + ", 0, 1)"; else return "matrix3d(" + this.a + ", " + this.b + ", " + "0, 0, " + this.c + ", " + this.d + ", " + "0, 0, 0, 0, 1, 0, " + this.tx + ", " + this.ty + ", 0, 1)";
	}
	,transformPoint: function(pos) {
		return new openfl_geom_Point(pos.x * this.a + pos.y * this.c + this.tx,pos.x * this.b + pos.y * this.d + this.ty);
	}
	,translate: function(dx,dy) {
		var m = new openfl_geom_Matrix();
		m.tx = dx;
		m.ty = dy;
		this.concat(m);
	}
	,toArray: function(transpose) {
		if(transpose == null) transpose = false;
		if(transpose) {
			this.__array[0] = this.a;
			this.__array[1] = this.b;
			this.__array[2] = 0;
			this.__array[3] = this.c;
			this.__array[4] = this.d;
			this.__array[5] = 0;
			this.__array[6] = this.tx;
			this.__array[7] = this.ty;
			this.__array[8] = 1;
		} else {
			this.__array[0] = this.a;
			this.__array[1] = this.c;
			this.__array[2] = this.tx;
			this.__array[3] = this.b;
			this.__array[4] = this.d;
			this.__array[5] = this.ty;
			this.__array[6] = 0;
			this.__array[7] = 0;
			this.__array[8] = 1;
		}
		return this.__array;
	}
	,__toMatrix3: function() {
		return new lime_math_Matrix3(this.a,this.b,this.c,this.d,this.tx,this.ty);
	}
	,__class__: openfl_geom_Matrix
};
var openfl_geom_ColorTransform = function(redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier,redOffset,greenOffset,blueOffset,alphaOffset) {
	if(alphaOffset == null) alphaOffset = 0;
	if(blueOffset == null) blueOffset = 0;
	if(greenOffset == null) greenOffset = 0;
	if(redOffset == null) redOffset = 0;
	if(alphaMultiplier == null) alphaMultiplier = 1;
	if(blueMultiplier == null) blueMultiplier = 1;
	if(greenMultiplier == null) greenMultiplier = 1;
	if(redMultiplier == null) redMultiplier = 1;
	this.redMultiplier = redMultiplier;
	this.greenMultiplier = greenMultiplier;
	this.blueMultiplier = blueMultiplier;
	this.alphaMultiplier = alphaMultiplier;
	this.redOffset = redOffset;
	this.greenOffset = greenOffset;
	this.blueOffset = blueOffset;
	this.alphaOffset = alphaOffset;
};
$hxClasses["openfl.geom.ColorTransform"] = openfl_geom_ColorTransform;
openfl_geom_ColorTransform.__name__ = true;
openfl_geom_ColorTransform.prototype = {
	__combine: function(ct) {
		this.redMultiplier *= ct.redMultiplier;
		this.greenMultiplier *= ct.greenMultiplier;
		this.blueMultiplier *= ct.blueMultiplier;
		this.alphaMultiplier *= ct.alphaMultiplier;
		this.redOffset += ct.redOffset;
		this.greenOffset += ct.greenOffset;
		this.blueOffset += ct.blueOffset;
		this.alphaOffset += ct.alphaOffset;
	}
	,__equals: function(ct,skipAlphaMultiplier) {
		if(skipAlphaMultiplier == null) skipAlphaMultiplier = false;
		return ct != null && this.redMultiplier == ct.redMultiplier && this.greenMultiplier == ct.greenMultiplier && this.blueMultiplier == ct.blueMultiplier && (skipAlphaMultiplier || this.alphaMultiplier == ct.alphaMultiplier) && this.redOffset == ct.redOffset && this.greenOffset == ct.greenOffset && this.blueOffset == ct.blueOffset && this.alphaOffset == ct.alphaOffset;
	}
	,__clone: function() {
		return new openfl_geom_ColorTransform(this.redMultiplier,this.greenMultiplier,this.blueMultiplier,this.alphaMultiplier,this.redOffset,this.greenOffset,this.blueOffset,this.alphaOffset);
	}
	,__class__: openfl_geom_ColorTransform
};
var openfl_Lib = function() { };
$hxClasses["openfl.Lib"] = openfl_Lib;
openfl_Lib.__name__ = true;
openfl_Lib.application = null;
openfl_Lib.embed = $hx_exports.openfl.embed = function(elementName,width,height,background,assetsPrefix) {
	lime_system_System.embed(elementName,width,height,background,assetsPrefix);
};
openfl_Lib.getTimer = function() {
	return lime_system_System.getTimer();
};
openfl_Lib.notImplemented = function(api) {
	if(!openfl_Lib.__sentWarnings.exists(api)) {
		openfl_Lib.__sentWarnings.set(api,true);
		console.log("Warning: " + api + " is not implemented");
	}
};
var openfl_VectorData = function() {
	this.length = 0;
};
$hxClasses["openfl.VectorData"] = openfl_VectorData;
openfl_VectorData.__name__ = true;
openfl_VectorData.prototype = {
	__class__: openfl_VectorData
};
var openfl__$internal_renderer_AbstractMaskManager = function(renderSession) {
	this.renderSession = renderSession;
};
$hxClasses["openfl._internal.renderer.AbstractMaskManager"] = openfl__$internal_renderer_AbstractMaskManager;
openfl__$internal_renderer_AbstractMaskManager.__name__ = true;
openfl__$internal_renderer_AbstractMaskManager.prototype = {
	pushMask: function(mask) {
	}
	,pushRect: function(rect,transform) {
	}
	,popMask: function() {
	}
	,__class__: openfl__$internal_renderer_AbstractMaskManager
};
var openfl__$internal_renderer_AbstractRenderer = function(width,height) {
	this.width = width;
	this.height = height;
};
$hxClasses["openfl._internal.renderer.AbstractRenderer"] = openfl__$internal_renderer_AbstractRenderer;
openfl__$internal_renderer_AbstractRenderer.__name__ = true;
openfl__$internal_renderer_AbstractRenderer.prototype = {
	render: function(stage) {
	}
	,resize: function(width,height) {
	}
	,__class__: openfl__$internal_renderer_AbstractRenderer
};
var openfl__$internal_renderer_RenderSession = function() {
};
$hxClasses["openfl._internal.renderer.RenderSession"] = openfl__$internal_renderer_RenderSession;
openfl__$internal_renderer_RenderSession.__name__ = true;
openfl__$internal_renderer_RenderSession.prototype = {
	__class__: openfl__$internal_renderer_RenderSession
};
var openfl__$internal_renderer_cairo_CairoBitmap = function() { };
$hxClasses["openfl._internal.renderer.cairo.CairoBitmap"] = openfl__$internal_renderer_cairo_CairoBitmap;
openfl__$internal_renderer_cairo_CairoBitmap.__name__ = true;
openfl__$internal_renderer_cairo_CairoBitmap.render = function(bitmap,renderSession) {
	if(!bitmap.__renderable || bitmap.__worldAlpha <= 0) return;
	var cairo = renderSession.cairo;
	if(bitmap.bitmapData != null && bitmap.bitmapData.__isValid) {
		if(bitmap.__mask != null) renderSession.maskManager.pushMask(bitmap.__mask);
		var transform = bitmap.__worldTransform;
		var scrollRect = bitmap.get_scrollRect();
		if(renderSession.roundPixels) {
			var matrix = transform.__toMatrix3();
			matrix.tx = Math.round(matrix.tx);
			matrix.ty = Math.round(matrix.ty);
			cairo.set_matrix(matrix);
		} else cairo.set_matrix(transform.__toMatrix3());
		var surface = bitmap.bitmapData.getSurface();
		if(surface != null) {
			cairo.setSourceSurface(surface,0,0);
			if(scrollRect != null) {
				cairo.pushGroup();
				cairo.setSourceSurface(surface,0,0);
				cairo.newPath();
				cairo.rectangle(scrollRect.x,scrollRect.y,scrollRect.width,scrollRect.height);
				cairo.fill();
				cairo.popGroupToSource();
			}
			if(bitmap.__worldAlpha == 1) cairo.paint(); else cairo.paintWithAlpha(bitmap.__worldAlpha);
		}
		if(bitmap.__mask != null) renderSession.maskManager.popMask();
	}
};
var openfl__$internal_renderer_cairo_CairoGraphics = function() { };
$hxClasses["openfl._internal.renderer.cairo.CairoGraphics"] = openfl__$internal_renderer_cairo_CairoGraphics;
openfl__$internal_renderer_cairo_CairoGraphics.__name__ = true;
openfl__$internal_renderer_cairo_CairoGraphics.cairo = null;
openfl__$internal_renderer_cairo_CairoGraphics.drawRoundRect = function(x,y,width,height,rx,ry) {
	if(ry == -1) ry = rx;
	rx *= 0.5;
	ry *= 0.5;
	if(rx > width / 2) rx = width / 2;
	if(ry > height / 2) ry = height / 2;
	var xe = x + width;
	var ye = y + height;
	var cx1 = -rx + rx * openfl__$internal_renderer_cairo_CairoGraphics.SIN45;
	var cx2 = -rx + rx * openfl__$internal_renderer_cairo_CairoGraphics.TAN22;
	var cy1 = -ry + ry * openfl__$internal_renderer_cairo_CairoGraphics.SIN45;
	var cy2 = -ry + ry * openfl__$internal_renderer_cairo_CairoGraphics.TAN22;
	openfl__$internal_renderer_cairo_CairoGraphics.cairo.moveTo(xe,ye - ry);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(xe,ye + cy2,xe + cx1,ye + cy1);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(xe + cx2,ye,xe - rx,ye);
	openfl__$internal_renderer_cairo_CairoGraphics.cairo.lineTo(x + rx,ye);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(x - cx2,ye,x - cx1,ye + cy1);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(x,ye + cy2,x,ye - ry);
	openfl__$internal_renderer_cairo_CairoGraphics.cairo.lineTo(x,y + ry);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(x,y - cy2,x - cx1,y - cy1);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(x - cx2,y,x + rx,y);
	openfl__$internal_renderer_cairo_CairoGraphics.cairo.lineTo(xe - rx,y);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(xe + cx2,y,xe + cx1,y - cy1);
	openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(xe,y - cy2,xe,y + ry);
	openfl__$internal_renderer_cairo_CairoGraphics.cairo.lineTo(xe,ye - ry);
};
openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo = function(cx,cy,x,y) {
	var current = null;
	if(!openfl__$internal_renderer_cairo_CairoGraphics.cairo.get_hasCurrentPoint()) {
		openfl__$internal_renderer_cairo_CairoGraphics.cairo.moveTo(cx,cy);
		current = new lime_math_Vector2(cx,cy);
	} else current = openfl__$internal_renderer_cairo_CairoGraphics.cairo.get_currentPoint();
	var cx1 = current.x + 0.66666666666666663 * (cx - current.x);
	var cy1 = current.y + 0.66666666666666663 * (cy - current.y);
	var cx2 = x + 0.66666666666666663 * (cx - x);
	var cy2 = y + 0.66666666666666663 * (cy - y);
	openfl__$internal_renderer_cairo_CairoGraphics.cairo.curveTo(cx1,cy1,cx2,cy2,x,y);
};
openfl__$internal_renderer_cairo_CairoGraphics.renderMask = function(graphics,renderSession) {
	if(graphics.__commands.length != 0) {
		var cairo = renderSession.cairo;
		var positionX = 0.0;
		var positionY = 0.0;
		var offsetX = 0;
		var offsetY = 0;
		var _g = 0;
		var _g1 = graphics.__commands;
		while(_g < _g1.length) {
			var command = _g1[_g];
			++_g;
			switch(command[1]) {
			case 3:
				var y = command[7];
				var x = command[6];
				var cy2 = command[5];
				var cy1 = command[4];
				var cx2 = command[3];
				var cx1 = command[2];
				cairo.curveTo(cx1 - offsetX,cy1 - offsetY,cx2 - offsetX,cy2 - offsetY,x - offsetX,y - offsetY);
				positionX = x;
				positionY = y;
				break;
			case 4:
				var y1 = command[5];
				var x1 = command[4];
				var cy = command[3];
				var cx = command[2];
				openfl__$internal_renderer_cairo_CairoGraphics.quadraticCurveTo(cx - offsetX,cy - offsetY,x1 - offsetX,y1 - offsetY);
				positionX = x1;
				positionY = y1;
				break;
			case 5:
				var radius = command[4];
				var y2 = command[3];
				var x2 = command[2];
				cairo.arc(x2 - offsetX,y2 - offsetY,radius,0,Math.PI * 2);
				break;
			case 6:
				var height = command[5];
				var width = command[4];
				var y3 = command[3];
				var x3 = command[2];
				x3 -= offsetX;
				y3 -= offsetY;
				var kappa = .5522848;
				var ox = width / 2 * kappa;
				var oy = height / 2 * kappa;
				var xe = x3 + width;
				var ye = y3 + height;
				var xm = x3 + width / 2;
				var ym = y3 + height / 2;
				cairo.moveTo(x3,ym);
				cairo.curveTo(x3,ym - oy,xm - ox,y3,xm,y3);
				cairo.curveTo(xm + ox,y3,xe,ym - oy,xe,ym);
				cairo.curveTo(xe,ym + oy,xm + ox,ye,xm,ye);
				cairo.curveTo(xm - ox,ye,x3,ym + oy,x3,ym);
				break;
			case 7:
				var height1 = command[5];
				var width1 = command[4];
				var y4 = command[3];
				var x4 = command[2];
				cairo.rectangle(x4 - offsetX,y4 - offsetY,width1,height1);
				break;
			case 8:
				var ry = command[7];
				var rx = command[6];
				var height2 = command[5];
				var width2 = command[4];
				var y5 = command[3];
				var x5 = command[2];
				openfl__$internal_renderer_cairo_CairoGraphics.drawRoundRect(x5 - offsetX,y5 - offsetY,width2,height2,rx,ry);
				break;
			case 15:
				var y6 = command[3];
				var x6 = command[2];
				cairo.lineTo(x6 - offsetX,y6 - offsetY);
				positionX = x6;
				positionY = y6;
				break;
			case 16:
				var y7 = command[3];
				var x7 = command[2];
				cairo.moveTo(x7 - offsetX,y7 - offsetY);
				positionX = x7;
				positionY = y7;
				break;
			default:
			}
		}
	}
};
var openfl__$internal_renderer_cairo_CairoMaskManager = function(renderSession) {
	openfl__$internal_renderer_AbstractMaskManager.call(this,renderSession);
};
$hxClasses["openfl._internal.renderer.cairo.CairoMaskManager"] = openfl__$internal_renderer_cairo_CairoMaskManager;
openfl__$internal_renderer_cairo_CairoMaskManager.__name__ = true;
openfl__$internal_renderer_cairo_CairoMaskManager.__super__ = openfl__$internal_renderer_AbstractMaskManager;
openfl__$internal_renderer_cairo_CairoMaskManager.prototype = $extend(openfl__$internal_renderer_AbstractMaskManager.prototype,{
	pushMask: function(mask) {
		var cairo = this.renderSession.cairo;
		cairo.save();
		var transform = mask.__getTransform();
		cairo.set_matrix(transform.__toMatrix3());
		cairo.newPath();
		mask.__renderCairoMask(this.renderSession);
		cairo.clip();
	}
	,pushRect: function(rect,transform) {
		var cairo = this.renderSession.cairo;
		cairo.save();
		cairo.set_matrix(new lime_math_Matrix3(transform.a,transform.c,transform.b,transform.d,transform.tx,transform.ty));
		cairo.newPath();
		cairo.rectangle(rect.x,rect.y,rect.width,rect.height);
		cairo.clip();
	}
	,popMask: function() {
		this.renderSession.cairo.restore();
	}
	,__class__: openfl__$internal_renderer_cairo_CairoMaskManager
});
var openfl__$internal_renderer_cairo_CairoRenderer = function(width,height,cairo) {
	openfl__$internal_renderer_AbstractRenderer.call(this,width,height);
	this.cairo = cairo;
	this.renderSession = new openfl__$internal_renderer_RenderSession();
	this.renderSession.cairo = cairo;
	this.renderSession.roundPixels = true;
	this.renderSession.renderer = this;
	this.renderSession.maskManager = new openfl__$internal_renderer_cairo_CairoMaskManager(this.renderSession);
};
$hxClasses["openfl._internal.renderer.cairo.CairoRenderer"] = openfl__$internal_renderer_cairo_CairoRenderer;
openfl__$internal_renderer_cairo_CairoRenderer.__name__ = true;
openfl__$internal_renderer_cairo_CairoRenderer.__super__ = openfl__$internal_renderer_AbstractRenderer;
openfl__$internal_renderer_cairo_CairoRenderer.prototype = $extend(openfl__$internal_renderer_AbstractRenderer.prototype,{
	render: function(stage) {
		this.cairo.identityMatrix();
		if(stage.__clearBeforeRender) {
			this.cairo.setSourceRGB(stage.__colorSplit[0],stage.__colorSplit[1],stage.__colorSplit[2]);
			this.cairo.paint();
		}
		stage.__renderCairo(this.renderSession);
	}
	,__class__: openfl__$internal_renderer_cairo_CairoRenderer
});
var openfl__$internal_renderer_cairo_CairoShape = function() { };
$hxClasses["openfl._internal.renderer.cairo.CairoShape"] = openfl__$internal_renderer_cairo_CairoShape;
openfl__$internal_renderer_cairo_CairoShape.__name__ = true;
openfl__$internal_renderer_cairo_CairoShape.render = function(shape,renderSession) {
};
var openfl__$internal_renderer_cairo_CairoTextField = function() { };
$hxClasses["openfl._internal.renderer.cairo.CairoTextField"] = openfl__$internal_renderer_cairo_CairoTextField;
openfl__$internal_renderer_cairo_CairoTextField.__name__ = true;
openfl__$internal_renderer_cairo_CairoTextField.render = function(textField,renderSession) {
};
var openfl__$internal_renderer_canvas_CanvasBitmap = function() { };
$hxClasses["openfl._internal.renderer.canvas.CanvasBitmap"] = openfl__$internal_renderer_canvas_CanvasBitmap;
openfl__$internal_renderer_canvas_CanvasBitmap.__name__ = true;
openfl__$internal_renderer_canvas_CanvasBitmap.render = function(bitmap,renderSession) {
	if(!bitmap.__renderable || bitmap.__worldAlpha <= 0) return;
	var context = renderSession.context;
	if(bitmap.bitmapData != null && bitmap.bitmapData.__isValid) {
		if(bitmap.__mask != null) renderSession.maskManager.pushMask(bitmap.__mask);
		bitmap.bitmapData.__sync();
		context.globalAlpha = bitmap.__worldAlpha;
		var transform = bitmap.__worldTransform;
		var scrollRect = bitmap.get_scrollRect();
		if(renderSession.roundPixels) context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx | 0,transform.ty | 0); else context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx,transform.ty);
		if(!bitmap.smoothing) {
			context.mozImageSmoothingEnabled = false;
			context.webkitImageSmoothingEnabled = false;
			context.imageSmoothingEnabled = false;
		}
		if(scrollRect == null) context.drawImage(bitmap.bitmapData.__image.get_src(),0,0); else context.drawImage(bitmap.bitmapData.__image.get_src(),scrollRect.x,scrollRect.y,scrollRect.width,scrollRect.height,scrollRect.x,scrollRect.y,scrollRect.width,scrollRect.height);
		if(!bitmap.smoothing) {
			context.mozImageSmoothingEnabled = true;
			context.webkitImageSmoothingEnabled = true;
			context.imageSmoothingEnabled = true;
		}
		if(bitmap.__mask != null) renderSession.maskManager.popMask();
	}
};
var openfl__$internal_renderer_canvas_CanvasGraphics = function() { };
$hxClasses["openfl._internal.renderer.canvas.CanvasGraphics"] = openfl__$internal_renderer_canvas_CanvasGraphics;
openfl__$internal_renderer_canvas_CanvasGraphics.__name__ = true;
openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill = null;
openfl__$internal_renderer_canvas_CanvasGraphics.bitmapRepeat = null;
openfl__$internal_renderer_canvas_CanvasGraphics.bounds = null;
openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands = null;
openfl__$internal_renderer_canvas_CanvasGraphics.graphics = null;
openfl__$internal_renderer_canvas_CanvasGraphics.hasFill = null;
openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke = null;
openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix = null;
openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix = null;
openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands = null;
openfl__$internal_renderer_canvas_CanvasGraphics.context = null;
openfl__$internal_renderer_canvas_CanvasGraphics.createBitmapFill = function(bitmap,bitmapRepeat) {
	bitmap.__sync();
	return openfl__$internal_renderer_canvas_CanvasGraphics.context.createPattern(bitmap.__image.get_src(),bitmapRepeat?"repeat":"no-repeat");
	return null;
};
openfl__$internal_renderer_canvas_CanvasGraphics.createTempPatternCanvas = function(bitmap,repeat,width,height) {
	var canvas = window.document.createElement("canvas");
	var context = canvas.getContext("2d");
	canvas.width = width;
	canvas.height = height;
	context.fillStyle = context.createPattern(bitmap.__image.get_src(),repeat?"repeat":"no-repeat");
	context.beginPath();
	context.moveTo(0,0);
	context.lineTo(0,height);
	context.lineTo(width,height);
	context.lineTo(width,0);
	context.lineTo(0,0);
	context.closePath();
	context.fill();
	return canvas;
};
openfl__$internal_renderer_canvas_CanvasGraphics.endFill = function() {
	openfl__$internal_renderer_canvas_CanvasGraphics.context.beginPath();
	openfl__$internal_renderer_canvas_CanvasGraphics.playCommands(openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands,false);
	openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands = [];
};
openfl__$internal_renderer_canvas_CanvasGraphics.endStroke = function() {
	openfl__$internal_renderer_canvas_CanvasGraphics.context.beginPath();
	openfl__$internal_renderer_canvas_CanvasGraphics.playCommands(openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands,true);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.closePath();
	openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands = [];
};
openfl__$internal_renderer_canvas_CanvasGraphics.closePath = function() {
	if(openfl__$internal_renderer_canvas_CanvasGraphics.context.strokeStyle == null) return;
	openfl__$internal_renderer_canvas_CanvasGraphics.context.closePath();
	openfl__$internal_renderer_canvas_CanvasGraphics.context.stroke();
	openfl__$internal_renderer_canvas_CanvasGraphics.context.beginPath();
};
openfl__$internal_renderer_canvas_CanvasGraphics.drawRoundRect = function(x,y,width,height,rx,ry) {
	if(ry == -1) ry = rx;
	rx *= 0.5;
	ry *= 0.5;
	if(rx > width / 2) rx = width / 2;
	if(ry > height / 2) ry = height / 2;
	var xe = x + width;
	var ye = y + height;
	var cx1 = -rx + rx * openfl__$internal_renderer_canvas_CanvasGraphics.SIN45;
	var cx2 = -rx + rx * openfl__$internal_renderer_canvas_CanvasGraphics.TAN22;
	var cy1 = -ry + ry * openfl__$internal_renderer_canvas_CanvasGraphics.SIN45;
	var cy2 = -ry + ry * openfl__$internal_renderer_canvas_CanvasGraphics.TAN22;
	openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(xe,ye - ry);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(xe,ye + cy2,xe + cx1,ye + cy1);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(xe + cx2,ye,xe - rx,ye);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(x + rx,ye);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(x - cx2,ye,x - cx1,ye + cy1);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(x,ye + cy2,x,ye - ry);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(x,y + ry);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(x,y - cy2,x - cx1,y - cy1);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(x - cx2,y,x + rx,y);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(xe - rx,y);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(xe + cx2,y,xe + cx1,y - cy1);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(xe,y - cy2,xe,y + ry);
	openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(xe,ye - ry);
};
openfl__$internal_renderer_canvas_CanvasGraphics.normalizeUVT = function(uvt,skipT) {
	if(skipT == null) skipT = false;
	var max = -Infinity;
	var tmp = -Infinity;
	var len = uvt.length;
	var _g1 = 1;
	var _g = len + 1;
	while(_g1 < _g) {
		var t = _g1++;
		if(skipT && t % 3 == 0) continue;
		tmp = uvt.data[t - 1];
		if(max < tmp) max = tmp;
	}
	var result;
	var this1;
	this1 = new openfl_VectorData();
	var this2;
	this2 = new Array(0);
	this1.data = this2;
	this1.length = 0;
	this1.fixed = false;
	result = this1;
	var _g11 = 1;
	var _g2 = len + 1;
	while(_g11 < _g2) {
		var t1 = _g11++;
		if(skipT && t1 % 3 == 0) continue;
		if(!result.fixed) {
			result.length++;
			if(result.data.length < result.length) {
				var data;
				var this3;
				this3 = new Array(result.data.length + 10);
				data = this3;
				haxe_ds__$Vector_Vector_$Impl_$.blit(result.data,0,data,0,result.data.length);
				result.data = data;
			}
			result.data[result.length - 1] = uvt.data[t1 - 1] / max;
		}
		result.length;
	}
	return { max : max, uvt : result};
};
openfl__$internal_renderer_canvas_CanvasGraphics.playCommands = function(commands,stroke) {
	if(stroke == null) stroke = false;
	openfl__$internal_renderer_canvas_CanvasGraphics.bounds = openfl__$internal_renderer_canvas_CanvasGraphics.graphics.__bounds;
	var offsetX = openfl__$internal_renderer_canvas_CanvasGraphics.bounds.x;
	var offsetY = openfl__$internal_renderer_canvas_CanvasGraphics.bounds.y;
	var positionX = 0.0;
	var positionY = 0.0;
	var closeGap = false;
	var startX = 0.0;
	var startY = 0.0;
	var _g = 0;
	while(_g < commands.length) {
		var command = commands[_g];
		++_g;
		switch(command[1]) {
		case 3:
			var y = command[7];
			var x = command[6];
			var cy2 = command[5];
			var cx2 = command[4];
			var cy1 = command[3];
			var cx1 = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.context.bezierCurveTo(cx1 - offsetX,cy1 - offsetY,cx2 - offsetX,cy2 - offsetY,x - offsetX,y - offsetY);
			break;
		case 4:
			var y1 = command[5];
			var x1 = command[4];
			var cy = command[3];
			var cx = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.context.quadraticCurveTo(cx - offsetX,cy - offsetY,x1 - offsetX,y1 - offsetY);
			break;
		case 5:
			var radius = command[4];
			var y2 = command[3];
			var x2 = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(x2 - offsetX + radius,y2 - offsetY);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.arc(x2 - offsetX,y2 - offsetY,radius,0,Math.PI * 2,true);
			break;
		case 6:
			var height = command[5];
			var width = command[4];
			var y3 = command[3];
			var x3 = command[2];
			x3 -= offsetX;
			y3 -= offsetY;
			var kappa = .5522848;
			var ox = width / 2 * kappa;
			var oy = height / 2 * kappa;
			var xe = x3 + width;
			var ye = y3 + height;
			var xm = x3 + width / 2;
			var ym = y3 + height / 2;
			openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(x3,ym);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.bezierCurveTo(x3,ym - oy,xm - ox,y3,xm,y3);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.bezierCurveTo(xm + ox,y3,xe,ym - oy,xe,ym);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.bezierCurveTo(xe,ym + oy,xm + ox,ye,xm,ye);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.bezierCurveTo(xm - ox,ye,x3,ym + oy,x3,ym);
			break;
		case 8:
			var ry = command[7];
			var rx = command[6];
			var height1 = command[5];
			var width1 = command[4];
			var y4 = command[3];
			var x4 = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.drawRoundRect(x4 - offsetX,y4 - offsetY,width1,height1,rx,ry);
			break;
		case 15:
			var y5 = command[3];
			var x5 = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(x5 - offsetX,y5 - offsetY);
			positionX = x5;
			positionY = y5;
			break;
		case 16:
			var y6 = command[3];
			var x6 = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(x6 - offsetX,y6 - offsetY);
			positionX = x6;
			positionY = y6;
			closeGap = true;
			startX = x6;
			startY = y6;
			break;
		case 12:
			var miterLimit = command[9];
			var joints = command[8];
			var caps = command[7];
			var scaleMode = command[6];
			var pixelHinting = command[5];
			var alpha = command[4];
			var color = command[3];
			var thickness = command[2];
			if(stroke && openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke) {
				openfl__$internal_renderer_canvas_CanvasGraphics.context.closePath();
				openfl__$internal_renderer_canvas_CanvasGraphics.context.stroke();
				openfl__$internal_renderer_canvas_CanvasGraphics.context.beginPath();
			}
			openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(positionX - offsetX,positionY - offsetY);
			if(thickness == null) openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke = false; else {
				openfl__$internal_renderer_canvas_CanvasGraphics.context.lineWidth = thickness;
				if(joints == null) openfl__$internal_renderer_canvas_CanvasGraphics.context.lineJoin = "round"; else openfl__$internal_renderer_canvas_CanvasGraphics.context.lineJoin = Std.string(joints).toLowerCase();
				if(caps == null) openfl__$internal_renderer_canvas_CanvasGraphics.context.lineCap = "round"; else switch(caps[1]) {
				case 0:
					openfl__$internal_renderer_canvas_CanvasGraphics.context.lineCap = "butt";
					break;
				default:
					openfl__$internal_renderer_canvas_CanvasGraphics.context.lineCap = Std.string(caps).toLowerCase();
				}
				if(miterLimit == null) openfl__$internal_renderer_canvas_CanvasGraphics.context.miterLimit = 3; else openfl__$internal_renderer_canvas_CanvasGraphics.context.miterLimit = miterLimit;
				if(alpha == 1 || alpha == null) if(color == null) openfl__$internal_renderer_canvas_CanvasGraphics.context.strokeStyle = "#000000"; else openfl__$internal_renderer_canvas_CanvasGraphics.context.strokeStyle = "#" + StringTools.hex(color & 16777215,6); else {
					var r = (color & 16711680) >>> 16;
					var g = (color & 65280) >>> 8;
					var b = color & 255;
					if(color == null) openfl__$internal_renderer_canvas_CanvasGraphics.context.strokeStyle = "#000000"; else openfl__$internal_renderer_canvas_CanvasGraphics.context.strokeStyle = "rgba(" + r + ", " + g + ", " + b + ", " + alpha + ")";
				}
				openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke = true;
			}
			break;
		case 14:
			var focalPointRatio = command[9];
			var interpolationMethod = command[8];
			var spreadMethod = command[7];
			var matrix = command[6];
			var ratios = command[5];
			var alphas = command[4];
			var colors = command[3];
			var type = command[2];
			if(stroke && openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke) openfl__$internal_renderer_canvas_CanvasGraphics.closePath();
			openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(positionX - offsetX,positionY - offsetY);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.strokeStyle = openfl__$internal_renderer_canvas_CanvasGraphics.createGradientPattern(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio);
			openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke = true;
			break;
		case 13:
			var smooth = command[5];
			var repeat = command[4];
			var matrix1 = command[3];
			var bitmap = command[2];
			if(stroke && openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke) openfl__$internal_renderer_canvas_CanvasGraphics.closePath();
			openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(positionX - offsetX,positionY - offsetY);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.strokeStyle = openfl__$internal_renderer_canvas_CanvasGraphics.createBitmapFill(bitmap,repeat);
			openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke = true;
			break;
		case 0:
			var smooth1 = command[5];
			var repeat1 = command[4];
			var matrix2 = command[3];
			var bitmap1 = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.context.fillStyle = openfl__$internal_renderer_canvas_CanvasGraphics.createBitmapFill(bitmap1,true);
			openfl__$internal_renderer_canvas_CanvasGraphics.hasFill = true;
			if(matrix2 != null) {
				openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix = matrix2;
				openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix = new openfl_geom_Matrix(matrix2.a,matrix2.b,matrix2.c,matrix2.d,matrix2.tx,matrix2.ty);
				openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.invert();
			} else {
				openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix = null;
				openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix = null;
			}
			break;
		case 1:
			var alpha1 = command[3];
			var rgb = command[2];
			if(alpha1 < 0.005) openfl__$internal_renderer_canvas_CanvasGraphics.hasFill = false; else {
				if(alpha1 == 1) openfl__$internal_renderer_canvas_CanvasGraphics.context.fillStyle = "#" + StringTools.hex(rgb,6); else {
					var r1 = (rgb & 16711680) >>> 16;
					var g1 = (rgb & 65280) >>> 8;
					var b1 = rgb & 255;
					openfl__$internal_renderer_canvas_CanvasGraphics.context.fillStyle = "rgba(" + r1 + ", " + g1 + ", " + b1 + ", " + alpha1 + ")";
				}
				openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill = null;
				openfl__$internal_renderer_canvas_CanvasGraphics.hasFill = true;
			}
			break;
		case 2:
			var focalPointRatio1 = command[9];
			var interpolationMethod1 = command[8];
			var spreadMethod1 = command[7];
			var matrix3 = command[6];
			var ratios1 = command[5];
			var alphas1 = command[4];
			var colors1 = command[3];
			var type1 = command[2];
			openfl__$internal_renderer_canvas_CanvasGraphics.context.fillStyle = openfl__$internal_renderer_canvas_CanvasGraphics.createGradientPattern(type1,colors1,alphas1,ratios1,matrix3,spreadMethod1,interpolationMethod1,focalPointRatio1);
			openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill = null;
			openfl__$internal_renderer_canvas_CanvasGraphics.hasFill = true;
			break;
		case 7:
			var height2 = command[5];
			var width2 = command[4];
			var y7 = command[3];
			var x7 = command[2];
			var optimizationUsed = false;
			if(openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill != null) {
				var st = 0;
				var sr = 0;
				var sb = 0;
				var sl = 0;
				var canOptimizeMatrix = true;
				if(openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix != null) {
					if(openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.b != 0 || openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.c != 0) canOptimizeMatrix = false; else {
						var stl = openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.transformPoint(new openfl_geom_Point(x7,y7));
						var sbr = openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.transformPoint(new openfl_geom_Point(x7 + width2,y7 + height2));
						st = stl.y;
						sl = stl.x;
						sb = sbr.y;
						sr = sbr.x;
					}
				} else {
					st = y7;
					sl = x7;
					sb = y7 + height2;
					sr = x7 + width2;
				}
				if(canOptimizeMatrix && st >= 0 && sl >= 0 && sr <= openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill.width && sb <= openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill.height) {
					optimizationUsed = true;
					openfl__$internal_renderer_canvas_CanvasGraphics.context.drawImage(openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill.__image.get_src(),sl,st,sr - sl,sb - st,x7 - offsetX,y7 - offsetY,width2,height2);
				}
			}
			if(!optimizationUsed) openfl__$internal_renderer_canvas_CanvasGraphics.context.rect(x7 - offsetX,y7 - offsetY,width2,height2);
			break;
		default:
		}
	}
	if(stroke && openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke) {
		if(openfl__$internal_renderer_canvas_CanvasGraphics.hasFill && closeGap) openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(startX - offsetX,startY - offsetY);
		openfl__$internal_renderer_canvas_CanvasGraphics.context.stroke();
	}
	if(!stroke) {
		if(openfl__$internal_renderer_canvas_CanvasGraphics.hasFill || openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill != null) {
			openfl__$internal_renderer_canvas_CanvasGraphics.context.translate(-openfl__$internal_renderer_canvas_CanvasGraphics.bounds.x,-openfl__$internal_renderer_canvas_CanvasGraphics.bounds.y);
			if(openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix != null) {
				openfl__$internal_renderer_canvas_CanvasGraphics.context.transform(openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.a,openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.b,openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.c,openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.d,openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.tx,openfl__$internal_renderer_canvas_CanvasGraphics.pendingMatrix.ty);
				openfl__$internal_renderer_canvas_CanvasGraphics.context.fill();
				openfl__$internal_renderer_canvas_CanvasGraphics.context.transform(openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.a,openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.b,openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.c,openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.d,openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.tx,openfl__$internal_renderer_canvas_CanvasGraphics.inversePendingMatrix.ty);
			} else openfl__$internal_renderer_canvas_CanvasGraphics.context.fill();
			openfl__$internal_renderer_canvas_CanvasGraphics.context.translate(openfl__$internal_renderer_canvas_CanvasGraphics.bounds.x,openfl__$internal_renderer_canvas_CanvasGraphics.bounds.y);
			openfl__$internal_renderer_canvas_CanvasGraphics.context.closePath();
		}
	}
};
openfl__$internal_renderer_canvas_CanvasGraphics.createGradientPattern = function(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio) {
	var gradientFill = null;
	switch(type[1]) {
	case 0:
		if(matrix == null) matrix = new openfl_geom_Matrix();
		var point = matrix.transformPoint(new openfl_geom_Point(1638.4,0));
		gradientFill = openfl__$internal_renderer_canvas_CanvasGraphics.context.createRadialGradient(matrix.tx,matrix.ty,0,matrix.tx,matrix.ty,(point.x - matrix.tx) / 2);
		break;
	case 1:
		var matrix1;
		if(matrix != null) matrix1 = new openfl_geom_Matrix(matrix.a,matrix.b,matrix.c,matrix.d,matrix.tx,matrix.ty); else matrix1 = new openfl_geom_Matrix();
		var point1 = matrix1.transformPoint(new openfl_geom_Point(-819.2,0));
		var point2 = matrix1.transformPoint(new openfl_geom_Point(819.2,0));
		gradientFill = openfl__$internal_renderer_canvas_CanvasGraphics.context.createLinearGradient(point1.x,point1.y,point2.x,point2.y);
		break;
	}
	var _g1 = 0;
	var _g = colors.length;
	while(_g1 < _g) {
		var i = _g1++;
		var rgb = colors[i];
		var alpha = alphas[i];
		var r = (rgb & 16711680) >>> 16;
		var g = (rgb & 65280) >>> 8;
		var b = rgb & 255;
		var ratio = ratios[i] / 255;
		if(ratio < 0) ratio = 0;
		if(ratio > 1) ratio = 1;
		gradientFill.addColorStop(ratio,"rgba(" + r + ", " + g + ", " + b + ", " + alpha + ")");
	}
	return gradientFill;
};
openfl__$internal_renderer_canvas_CanvasGraphics.render = function(graphics,renderSession) {
	if(graphics.__dirty) {
		openfl__$internal_renderer_canvas_CanvasGraphics.graphics = graphics;
		openfl__$internal_renderer_canvas_CanvasGraphics.bounds = graphics.__bounds;
		if(!graphics.__visible || graphics.__commands.length == 0 || openfl__$internal_renderer_canvas_CanvasGraphics.bounds == null || openfl__$internal_renderer_canvas_CanvasGraphics.bounds.width == 0 || openfl__$internal_renderer_canvas_CanvasGraphics.bounds.height == 0) {
			graphics.__canvas = null;
			graphics.__context = null;
			graphics.__bitmap = null;
		} else {
			if(graphics.__canvas == null) {
				graphics.__canvas = window.document.createElement("canvas");
				graphics.__context = graphics.__canvas.getContext("2d");
			}
			openfl__$internal_renderer_canvas_CanvasGraphics.context = graphics.__context;
			graphics.__canvas.width = Math.ceil(openfl__$internal_renderer_canvas_CanvasGraphics.bounds.width);
			graphics.__canvas.height = Math.ceil(openfl__$internal_renderer_canvas_CanvasGraphics.bounds.height);
			var offsetX = openfl__$internal_renderer_canvas_CanvasGraphics.bounds.x;
			var offsetY = openfl__$internal_renderer_canvas_CanvasGraphics.bounds.y;
			openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands = [];
			openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands = [];
			openfl__$internal_renderer_canvas_CanvasGraphics.hasFill = false;
			openfl__$internal_renderer_canvas_CanvasGraphics.hasStroke = false;
			openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill = null;
			openfl__$internal_renderer_canvas_CanvasGraphics.bitmapRepeat = false;
			var _g = 0;
			var _g1 = graphics.__commands;
			try {
				while(_g < _g1.length) {
					var command = _g1[_g];
					++_g;
					switch(command[1]) {
					case 3:case 4:case 15:case 16:
						openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands.push(command);
						openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands.push(command);
						break;
					case 11:
						openfl__$internal_renderer_canvas_CanvasGraphics.endFill();
						openfl__$internal_renderer_canvas_CanvasGraphics.endStroke();
						openfl__$internal_renderer_canvas_CanvasGraphics.hasFill = false;
						openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill = null;
						break;
					case 12:case 14:case 13:
						openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands.push(command);
						break;
					case 0:case 1:case 2:
						openfl__$internal_renderer_canvas_CanvasGraphics.endFill();
						openfl__$internal_renderer_canvas_CanvasGraphics.endStroke();
						openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands.push(command);
						openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands.push(command);
						break;
					case 5:case 6:case 7:case 8:
						openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands.push(command);
						openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands.push(command);
						break;
					case 10:
						var culling = command[5];
						var uvtData = command[4];
						var indices = command[3];
						var vertices = command[2];
						openfl__$internal_renderer_canvas_CanvasGraphics.endFill();
						openfl__$internal_renderer_canvas_CanvasGraphics.endStroke();
						var v = vertices;
						var ind = indices;
						var uvt = uvtData;
						var pattern = null;
						var colorFill = openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill == null;
						if(colorFill && uvt != null) throw "__break__";
						if(!colorFill) {
							if(uvtData == null) {
								var this1;
								this1 = new openfl_VectorData();
								var this2;
								this2 = new Array(0);
								this1.data = this2;
								this1.length = 0;
								this1.fixed = false;
								uvtData = this1;
								var _g3 = 0;
								var _g2 = v.length / 2 | 0;
								while(_g3 < _g2) {
									var i1 = _g3++;
									if(!uvtData.fixed) {
										uvtData.length++;
										if(uvtData.data.length < uvtData.length) {
											var data;
											var this3;
											this3 = new Array(uvtData.data.length + 10);
											data = this3;
											haxe_ds__$Vector_Vector_$Impl_$.blit(uvtData.data,0,data,0,uvtData.data.length);
											uvtData.data = data;
										}
										uvtData.data[uvtData.length - 1] = v.data[i1 * 2] / openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill.width;
									}
									uvtData.length;
									if(!uvtData.fixed) {
										uvtData.length++;
										if(uvtData.data.length < uvtData.length) {
											var data1;
											var this4;
											this4 = new Array(uvtData.data.length + 10);
											data1 = this4;
											haxe_ds__$Vector_Vector_$Impl_$.blit(uvtData.data,0,data1,0,uvtData.data.length);
											uvtData.data = data1;
										}
										uvtData.data[uvtData.length - 1] = v.data[i1 * 2 + 1] / openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill.height;
									}
									uvtData.length;
								}
							}
							var skipT = uvtData.length != v.length;
							var normalizedUVT = openfl__$internal_renderer_canvas_CanvasGraphics.normalizeUVT(uvtData,skipT);
							var maxUVT = normalizedUVT.max;
							uvt = normalizedUVT.uvt;
							if(maxUVT > 1) pattern = openfl__$internal_renderer_canvas_CanvasGraphics.createTempPatternCanvas(openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill,openfl__$internal_renderer_canvas_CanvasGraphics.bitmapRepeat,openfl__$internal_renderer_canvas_CanvasGraphics.bounds.width | 0,openfl__$internal_renderer_canvas_CanvasGraphics.bounds.height | 0); else pattern = openfl__$internal_renderer_canvas_CanvasGraphics.createTempPatternCanvas(openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill,openfl__$internal_renderer_canvas_CanvasGraphics.bitmapRepeat,openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill.width,openfl__$internal_renderer_canvas_CanvasGraphics.bitmapFill.height);
						}
						var i = 0;
						var l = ind.length;
						var a;
						var b;
						var c;
						var iax;
						var iay;
						var ibx;
						var iby;
						var icx;
						var icy;
						var x1;
						var y1;
						var x2;
						var y2;
						var x3;
						var y3;
						var uvx1;
						var uvy1;
						var uvx2;
						var uvy2;
						var uvx3;
						var uvy3;
						var denom;
						var t1;
						var t2;
						var t3;
						var t4;
						var dx;
						var dy;
						while(i < l) {
							a = i;
							b = i + 1;
							c = i + 2;
							iax = ind.data[a] * 2;
							iay = ind.data[a] * 2 + 1;
							ibx = ind.data[b] * 2;
							iby = ind.data[b] * 2 + 1;
							icx = ind.data[c] * 2;
							icy = ind.data[c] * 2 + 1;
							x1 = v.data[iax];
							y1 = v.data[iay];
							x2 = v.data[ibx];
							y2 = v.data[iby];
							x3 = v.data[icx];
							y3 = v.data[icy];
							switch(culling[1]) {
							case 2:
								if(!((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1) < 0)) {
									i += 3;
									continue;
								}
								break;
							case 0:
								if((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1) < 0) {
									i += 3;
									continue;
								}
								break;
							default:
							}
							if(colorFill) {
								openfl__$internal_renderer_canvas_CanvasGraphics.context.beginPath();
								openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(x1,y1);
								openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(x2,y2);
								openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(x3,y3);
								openfl__$internal_renderer_canvas_CanvasGraphics.context.closePath();
								openfl__$internal_renderer_canvas_CanvasGraphics.context.fill();
								i += 3;
								continue;
							}
							openfl__$internal_renderer_canvas_CanvasGraphics.context.save();
							openfl__$internal_renderer_canvas_CanvasGraphics.context.beginPath();
							openfl__$internal_renderer_canvas_CanvasGraphics.context.moveTo(x1,y1);
							openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(x2,y2);
							openfl__$internal_renderer_canvas_CanvasGraphics.context.lineTo(x3,y3);
							openfl__$internal_renderer_canvas_CanvasGraphics.context.closePath();
							openfl__$internal_renderer_canvas_CanvasGraphics.context.clip();
							uvx1 = uvt.data[iax] * pattern.width;
							uvx2 = uvt.data[ibx] * pattern.width;
							uvx3 = uvt.data[icx] * pattern.width;
							uvy1 = uvt.data[iay] * pattern.height;
							uvy2 = uvt.data[iby] * pattern.height;
							uvy3 = uvt.data[icy] * pattern.height;
							denom = uvx1 * (uvy3 - uvy2) - uvx2 * uvy3 + uvx3 * uvy2 + (uvx2 - uvx3) * uvy1;
							if(denom == 0) {
								i += 3;
								continue;
							}
							t1 = -(uvy1 * (x3 - x2) - uvy2 * x3 + uvy3 * x2 + (uvy2 - uvy3) * x1) / denom;
							t2 = (uvy2 * y3 + uvy1 * (y2 - y3) - uvy3 * y2 + (uvy3 - uvy2) * y1) / denom;
							t3 = (uvx1 * (x3 - x2) - uvx2 * x3 + uvx3 * x2 + (uvx2 - uvx3) * x1) / denom;
							t4 = -(uvx2 * y3 + uvx1 * (y2 - y3) - uvx3 * y2 + (uvx3 - uvx2) * y1) / denom;
							dx = (uvx1 * (uvy3 * x2 - uvy2 * x3) + uvy1 * (uvx2 * x3 - uvx3 * x2) + (uvx3 * uvy2 - uvx2 * uvy3) * x1) / denom;
							dy = (uvx1 * (uvy3 * y2 - uvy2 * y3) + uvy1 * (uvx2 * y3 - uvx3 * y2) + (uvx3 * uvy2 - uvx2 * uvy3) * y1) / denom;
							openfl__$internal_renderer_canvas_CanvasGraphics.context.transform(t1,t2,t3,t4,dx,dy);
							openfl__$internal_renderer_canvas_CanvasGraphics.context.drawImage(pattern,0,0);
							openfl__$internal_renderer_canvas_CanvasGraphics.context.restore();
							i += 3;
						}
						break;
					case 9:
						var count = command[6];
						var flags = command[5];
						var smooth = command[4];
						var tileData = command[3];
						var sheet = command[2];
						var useScale = (flags & 1) > 0;
						var useRotation = (flags & 2) > 0;
						var useTransform = (flags & 16) > 0;
						var useRGB = (flags & 4) > 0;
						var useAlpha = (flags & 8) > 0;
						var useRect = (flags & 32) > 0;
						var useOrigin = (flags & 64) > 0;
						var useBlendAdd = (flags & 65536) > 0;
						if(useTransform) {
							useScale = false;
							useRotation = false;
						}
						var scaleIndex = 0;
						var rotationIndex = 0;
						var rgbIndex = 0;
						var alphaIndex = 0;
						var transformIndex = 0;
						var numValues = 3;
						if(useRect) if(useOrigin) numValues = 8; else numValues = 6;
						if(useScale) {
							scaleIndex = numValues;
							numValues++;
						}
						if(useRotation) {
							rotationIndex = numValues;
							numValues++;
						}
						if(useTransform) {
							transformIndex = numValues;
							numValues += 4;
						}
						if(useRGB) {
							rgbIndex = numValues;
							numValues += 3;
						}
						if(useAlpha) {
							alphaIndex = numValues;
							numValues++;
						}
						var totalCount = tileData.length;
						if(count >= 0 && totalCount > count) totalCount = count;
						var itemCount = totalCount / numValues | 0;
						var index = 0;
						var rect = null;
						var center = null;
						var previousTileID = -1;
						var surface;
						sheet.__bitmap.__sync();
						surface = sheet.__bitmap.__image.get_src();
						if(useBlendAdd) openfl__$internal_renderer_canvas_CanvasGraphics.context.globalCompositeOperation = "lighter";
						while(index < totalCount) {
							var tileID;
							if(!useRect) tileID = tileData[index + 2] | 0; else tileID = -1;
							if(!useRect && tileID != previousTileID) {
								rect = sheet.__tileRects[tileID];
								center = sheet.__centerPoints[tileID];
								previousTileID = tileID;
							} else if(useRect) {
								rect = sheet.__rectTile;
								rect.setTo(tileData[index + 2],tileData[index + 3],tileData[index + 4],tileData[index + 5]);
								center = sheet.__point;
								if(useOrigin) {
									center.x = tileData[index + 6];
									center.y = tileData[index + 7];
								} else {
									center.x = 0;
									center.y = 0;
								}
							}
							if(rect != null && rect.width > 0 && rect.height > 0 && center != null) {
								openfl__$internal_renderer_canvas_CanvasGraphics.context.save();
								openfl__$internal_renderer_canvas_CanvasGraphics.context.translate(tileData[index],tileData[index + 1]);
								if(useRotation) openfl__$internal_renderer_canvas_CanvasGraphics.context.rotate(tileData[index + rotationIndex]);
								var scale = 1.0;
								if(useScale) scale = tileData[index + scaleIndex];
								if(useTransform) openfl__$internal_renderer_canvas_CanvasGraphics.context.transform(tileData[index + transformIndex],tileData[index + transformIndex + 1],tileData[index + transformIndex + 2],tileData[index + transformIndex + 3],0,0);
								if(useAlpha) openfl__$internal_renderer_canvas_CanvasGraphics.context.globalAlpha = tileData[index + alphaIndex];
								openfl__$internal_renderer_canvas_CanvasGraphics.context.drawImage(surface,rect.x,rect.y,rect.width,rect.height,-center.x * scale,-center.y * scale,rect.width * scale,rect.height * scale);
								openfl__$internal_renderer_canvas_CanvasGraphics.context.restore();
							}
							index += numValues;
						}
						if(useBlendAdd) openfl__$internal_renderer_canvas_CanvasGraphics.context.globalCompositeOperation = "source-over";
						break;
					default:
						openfl_Lib.notImplemented("CanvasGraphics");
					}
				}
			} catch( e ) { if( e != "__break__" ) throw e; }
			if(openfl__$internal_renderer_canvas_CanvasGraphics.fillCommands.length > 0) openfl__$internal_renderer_canvas_CanvasGraphics.endFill();
			if(openfl__$internal_renderer_canvas_CanvasGraphics.strokeCommands.length > 0) openfl__$internal_renderer_canvas_CanvasGraphics.endStroke();
			graphics.__bitmap = openfl_display_BitmapData.fromCanvas(graphics.__canvas);
		}
		graphics.set___dirty(false);
	}
};
openfl__$internal_renderer_canvas_CanvasGraphics.renderMask = function(graphics,renderSession) {
	if(graphics.__commands.length != 0) {
		var context = renderSession.context;
		var positionX = 0.0;
		var positionY = 0.0;
		var offsetX = 0;
		var offsetY = 0;
		var _g = 0;
		var _g1 = graphics.__commands;
		while(_g < _g1.length) {
			var command = _g1[_g];
			++_g;
			switch(command[1]) {
			case 3:
				var y = command[7];
				var x = command[6];
				var cy2 = command[5];
				var cy1 = command[4];
				var cx2 = command[3];
				var cx1 = command[2];
				context.bezierCurveTo(cx1 - offsetX,cy1 - offsetY,cx2 - offsetX,cy2 - offsetY,x - offsetX,y - offsetY);
				positionX = x;
				positionY = y;
				break;
			case 4:
				var y1 = command[5];
				var x1 = command[4];
				var cy = command[3];
				var cx = command[2];
				context.quadraticCurveTo(cx - offsetX,cy - offsetY,x1 - offsetX,y1 - offsetY);
				positionX = x1;
				positionY = y1;
				break;
			case 5:
				var radius = command[4];
				var y2 = command[3];
				var x2 = command[2];
				context.arc(x2 - offsetX,y2 - offsetY,radius,0,Math.PI * 2,true);
				break;
			case 6:
				var height = command[5];
				var width = command[4];
				var y3 = command[3];
				var x3 = command[2];
				x3 -= offsetX;
				y3 -= offsetY;
				var kappa = .5522848;
				var ox = width / 2 * kappa;
				var oy = height / 2 * kappa;
				var xe = x3 + width;
				var ye = y3 + height;
				var xm = x3 + width / 2;
				var ym = y3 + height / 2;
				context.moveTo(x3,ym);
				context.bezierCurveTo(x3,ym - oy,xm - ox,y3,xm,y3);
				context.bezierCurveTo(xm + ox,y3,xe,ym - oy,xe,ym);
				context.bezierCurveTo(xe,ym + oy,xm + ox,ye,xm,ye);
				context.bezierCurveTo(xm - ox,ye,x3,ym + oy,x3,ym);
				break;
			case 7:
				var height1 = command[5];
				var width1 = command[4];
				var y4 = command[3];
				var x4 = command[2];
				context.rect(x4 - offsetX,y4 - offsetY,width1,height1);
				break;
			case 8:
				var ry = command[7];
				var rx = command[6];
				var height2 = command[5];
				var width2 = command[4];
				var y5 = command[3];
				var x5 = command[2];
				openfl__$internal_renderer_canvas_CanvasGraphics.drawRoundRect(x5 - offsetX,y5 - offsetY,width2,height2,rx,ry);
				break;
			case 15:
				var y6 = command[3];
				var x6 = command[2];
				context.lineTo(x6 - offsetX,y6 - offsetY);
				positionX = x6;
				positionY = y6;
				break;
			case 16:
				var y7 = command[3];
				var x7 = command[2];
				context.moveTo(x7 - offsetX,y7 - offsetY);
				positionX = x7;
				positionY = y7;
				break;
			default:
			}
		}
	}
};
var openfl__$internal_renderer_canvas_CanvasMaskManager = function(renderSession) {
	openfl__$internal_renderer_AbstractMaskManager.call(this,renderSession);
};
$hxClasses["openfl._internal.renderer.canvas.CanvasMaskManager"] = openfl__$internal_renderer_canvas_CanvasMaskManager;
openfl__$internal_renderer_canvas_CanvasMaskManager.__name__ = true;
openfl__$internal_renderer_canvas_CanvasMaskManager.__super__ = openfl__$internal_renderer_AbstractMaskManager;
openfl__$internal_renderer_canvas_CanvasMaskManager.prototype = $extend(openfl__$internal_renderer_AbstractMaskManager.prototype,{
	pushMask: function(mask) {
		var context = this.renderSession.context;
		context.save();
		var transform = mask.__getTransform();
		context.setTransform(transform.a,transform.c,transform.b,transform.d,transform.tx,transform.ty);
		context.beginPath();
		mask.__renderCanvasMask(this.renderSession);
		context.clip();
	}
	,pushRect: function(rect,transform) {
		var context = this.renderSession.context;
		context.save();
		context.setTransform(transform.a,transform.c,transform.b,transform.d,transform.tx,transform.ty);
		context.beginPath();
		context.rect(rect.x,rect.y,rect.width,rect.height);
		context.clip();
	}
	,popMask: function() {
		this.renderSession.context.restore();
	}
	,__class__: openfl__$internal_renderer_canvas_CanvasMaskManager
});
var openfl__$internal_renderer_canvas_CanvasRenderer = function(width,height,context) {
	openfl__$internal_renderer_AbstractRenderer.call(this,width,height);
	this.context = context;
	this.renderSession = new openfl__$internal_renderer_RenderSession();
	this.renderSession.context = context;
	this.renderSession.roundPixels = true;
	this.renderSession.renderer = this;
	this.renderSession.maskManager = new openfl__$internal_renderer_canvas_CanvasMaskManager(this.renderSession);
};
$hxClasses["openfl._internal.renderer.canvas.CanvasRenderer"] = openfl__$internal_renderer_canvas_CanvasRenderer;
openfl__$internal_renderer_canvas_CanvasRenderer.__name__ = true;
openfl__$internal_renderer_canvas_CanvasRenderer.__super__ = openfl__$internal_renderer_AbstractRenderer;
openfl__$internal_renderer_canvas_CanvasRenderer.prototype = $extend(openfl__$internal_renderer_AbstractRenderer.prototype,{
	render: function(stage) {
		this.context.setTransform(1,0,0,1,0,0);
		this.context.globalAlpha = 1;
		if(!stage.__transparent && stage.__clearBeforeRender) {
			this.context.fillStyle = stage.__colorString;
			this.context.fillRect(0,0,stage.stageWidth,stage.stageHeight);
		} else if(stage.__transparent && stage.__clearBeforeRender) this.context.clearRect(0,0,stage.stageWidth,stage.stageHeight);
		stage.__renderCanvas(this.renderSession);
	}
	,__class__: openfl__$internal_renderer_canvas_CanvasRenderer
});
var openfl__$internal_renderer_canvas_CanvasShape = function() { };
$hxClasses["openfl._internal.renderer.canvas.CanvasShape"] = openfl__$internal_renderer_canvas_CanvasShape;
openfl__$internal_renderer_canvas_CanvasShape.__name__ = true;
openfl__$internal_renderer_canvas_CanvasShape.render = function(shape,renderSession) {
	if(!shape.__renderable || shape.__worldAlpha <= 0) return;
	var graphics = shape.__graphics;
	if(graphics != null) {
		openfl__$internal_renderer_canvas_CanvasGraphics.render(graphics,renderSession);
		if(graphics.__canvas != null) {
			if(shape.__mask != null) renderSession.maskManager.pushMask(shape.__mask);
			var context = renderSession.context;
			var scrollRect = shape.get_scrollRect();
			context.globalAlpha = shape.__worldAlpha;
			var transform = shape.__worldTransform;
			if(renderSession.roundPixels) context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx | 0,transform.ty | 0); else context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx,transform.ty);
			if(scrollRect == null) context.drawImage(graphics.__canvas,graphics.__bounds.x,graphics.__bounds.y); else context.drawImage(graphics.__canvas,Math.ceil(graphics.__bounds.x + scrollRect.x),Math.ceil(graphics.__bounds.y + scrollRect.y),scrollRect.width,scrollRect.height,Math.ceil(graphics.__bounds.x + scrollRect.x),Math.ceil(graphics.__bounds.y + scrollRect.y),scrollRect.width,scrollRect.height);
			if(shape.__mask != null) renderSession.maskManager.popMask();
		}
	}
};
var openfl__$internal_renderer_canvas_CanvasTextField = function() { };
$hxClasses["openfl._internal.renderer.canvas.CanvasTextField"] = openfl__$internal_renderer_canvas_CanvasTextField;
openfl__$internal_renderer_canvas_CanvasTextField.__name__ = true;
openfl__$internal_renderer_canvas_CanvasTextField.context = null;
openfl__$internal_renderer_canvas_CanvasTextField.disableInputMode = function(textField) {
	textField.this_onRemovedFromStage(null);
};
openfl__$internal_renderer_canvas_CanvasTextField.enableInputMode = function(textField) {
	textField.__cursorPosition = -1;
	if(textField.__hiddenInput == null) {
		textField.__hiddenInput = window.document.createElement("input");
		var hiddenInput = textField.__hiddenInput;
		hiddenInput.type = "text";
		hiddenInput.style.position = "absolute";
		hiddenInput.style.opacity = "0";
		hiddenInput.style.color = "transparent";
		hiddenInput.style.left = "0px";
		hiddenInput.style.top = "50%";
		if(new EReg("(iPad|iPhone|iPod).*OS 8_","gi").match(window.navigator.userAgent)) {
			hiddenInput.style.fontSize = "0px";
			hiddenInput.style.width = "0px";
			hiddenInput.style.height = "0px";
		} else {
			hiddenInput.style.width = "1px";
			hiddenInput.style.height = "1px";
		}
		hiddenInput.style.pointerEvents = "none";
		hiddenInput.style.zIndex = "-10000000";
		if(textField.maxChars > 0) hiddenInput.maxLength = textField.maxChars;
		window.document.body.appendChild(hiddenInput);
		hiddenInput.value = textField.__text;
	}
	if(textField.stage != null) textField.this_onAddedToStage(null); else {
		textField.addEventListener(openfl_events_Event.ADDED_TO_STAGE,$bind(textField,textField.this_onAddedToStage));
		textField.addEventListener(openfl_events_Event.REMOVED_FROM_STAGE,$bind(textField,textField.this_onRemovedFromStage));
	}
};
openfl__$internal_renderer_canvas_CanvasTextField.getLineBreakIndices = function(textField) {
	var breaks = [];
	var _g1 = 0;
	var _g;
	var s = textField.get_text();
	_g = s.length;
	while(_g1 < _g) {
		var i = _g1++;
		var $char = haxe_Utf8.charCodeAt(textField.get_text(),i);
		if($char == openfl__$internal_renderer_canvas_CanvasTextField.__utf8_endline_code) breaks.push(i);
	}
	return breaks;
};
openfl__$internal_renderer_canvas_CanvasTextField.getLineWidth = function(textField,line) {
	if(textField.__context == null) {
		textField.__canvas = window.document.createElement("canvas");
		textField.__context = textField.__canvas.getContext("2d");
	}
	var linebreaks = openfl__$internal_renderer_canvas_CanvasTextField.getLineBreakIndices(textField);
	var context = textField.__context;
	context.font = openfl__$internal_renderer_dom_DOMTextField.getFont(textField.__textFormat);
	if(line == -1) {
		var longest = 0.0;
		var _g1 = 0;
		var _g = linebreaks.length;
		while(_g1 < _g) {
			var i = _g1++;
			longest = Math.max(longest,context.measureText(textField.__text.substring(i == 0?0:linebreaks[i - 1] + 1,linebreaks[i])).width);
		}
		longest = Math.max(longest,context.measureText(textField.__text.substring(linebreaks.length == 0?0:linebreaks[linebreaks.length - 1] + 1)).width);
		return longest;
	} else return context.measureText(textField.__text.substring(line == 0?0:linebreaks[line - 1] + 1)).width;
};
openfl__$internal_renderer_canvas_CanvasTextField.getTextWidth = function(textField,text) {
	if(textField.__context == null) {
		textField.__canvas = window.document.createElement("canvas");
		textField.__context = textField.__canvas.getContext("2d");
	}
	textField.__context.font = openfl__$internal_renderer_dom_DOMTextField.getFont(textField.__textFormat);
	textField.__context.textAlign = "left";
	return textField.__context.measureText(text).width;
};
openfl__$internal_renderer_canvas_CanvasTextField.measureText = function(textField,condense) {
	if(condense == null) condense = true;
	if(textField.__context == null) {
		textField.__canvas = window.document.createElement("canvas");
		textField.__context = textField.__canvas.getContext("2d");
	}
	if(textField.__ranges == null) {
		textField.__context.font = openfl__$internal_renderer_dom_DOMTextField.getFont(textField.__textFormat);
		return [textField.__context.measureText(textField.__text).width];
	} else {
		var measurements = [];
		var _g = 0;
		var _g1 = textField.__ranges;
		while(_g < _g1.length) {
			var range = _g1[_g];
			++_g;
			textField.__context.font = openfl__$internal_renderer_dom_DOMTextField.getFont(range.format);
			measurements.push(textField.__context.measureText(textField.get_text().substring(range.start,range.end)).width);
		}
		return measurements;
	}
};
openfl__$internal_renderer_canvas_CanvasTextField.render = function(textField,renderSession) {
	var bounds = textField.getBounds(null);
	if(textField.__dirty) {
		if((textField.__text == null || textField.__text == "") && !textField.background && !textField.border && !textField.__hasFocus || (textField.get_width() <= 0 || textField.get_height() <= 0) && textField.autoSize != openfl_text_TextFieldAutoSize.NONE) {
			textField.__graphics.__canvas = null;
			textField.__graphics.__context = null;
			textField.__graphics.set___dirty(false);
			textField.__dirty = false;
		} else {
			if(textField.__graphics == null || textField.__graphics.__canvas == null) {
				if(textField.__graphics == null) textField.__graphics = new openfl_display_Graphics();
				textField.__graphics.__canvas = window.document.createElement("canvas");
				textField.__graphics.__context = textField.__graphics.__canvas.getContext("2d");
				textField.__graphics.__bounds = new openfl_geom_Rectangle(0,0,bounds.width,bounds.height);
			}
			var graphics = textField.__graphics;
			openfl__$internal_renderer_canvas_CanvasTextField.context = graphics.__context;
			if(textField.__text != null && textField.__text != "" || textField.__hasFocus) {
				var text = textField.get_text();
				if(textField.displayAsPassword) {
					var length = text.length;
					var mask = "";
					var _g = 0;
					while(_g < length) {
						var i = _g++;
						mask += "*";
					}
					text = mask;
				}
				var measurements = openfl__$internal_renderer_canvas_CanvasTextField.measureText(textField);
				graphics.__canvas.width = Math.ceil(textField.__width);
				graphics.__canvas.height = Math.ceil(textField.__height);
				if(textField.border || textField.background) {
					openfl__$internal_renderer_canvas_CanvasTextField.context.rect(0.5,0.5,textField.get_width() - 1,textField.get_height() - 1);
					if(textField.background) {
						openfl__$internal_renderer_canvas_CanvasTextField.context.fillStyle = "#" + StringTools.hex(textField.backgroundColor,6);
						openfl__$internal_renderer_canvas_CanvasTextField.context.fill();
					}
					if(textField.border) {
						openfl__$internal_renderer_canvas_CanvasTextField.context.lineWidth = 1;
						openfl__$internal_renderer_canvas_CanvasTextField.context.strokeStyle = "#" + StringTools.hex(textField.borderColor,6);
						openfl__$internal_renderer_canvas_CanvasTextField.context.stroke();
					}
				}
				if(textField.__hasFocus && textField.__selectionStart == textField.__cursorPosition && textField.__showCursor) {
					var cursorOffset = openfl__$internal_renderer_canvas_CanvasTextField.getTextWidth(textField,text.substring(0,textField.__cursorPosition)) + 3;
					openfl__$internal_renderer_canvas_CanvasTextField.context.fillStyle = "#" + StringTools.hex(textField.__textFormat.color,6);
					openfl__$internal_renderer_canvas_CanvasTextField.context.fillRect(cursorOffset,5,1,textField.__textFormat.size * 1.185 - 4);
				} else if(textField.__hasFocus && Math.abs(textField.__selectionStart - textField.__cursorPosition) > 0) {
					var lowPos = Std["int"](Math.min(textField.__selectionStart,textField.__cursorPosition));
					var highPos = Std["int"](Math.max(textField.__selectionStart,textField.__cursorPosition));
					var xPos = openfl__$internal_renderer_canvas_CanvasTextField.getTextWidth(textField,text.substring(0,lowPos)) + 2;
					var widthPos = openfl__$internal_renderer_canvas_CanvasTextField.getTextWidth(textField,text.substring(lowPos,highPos));
					openfl__$internal_renderer_canvas_CanvasTextField.context.fillStyle = "#000000";
					openfl__$internal_renderer_canvas_CanvasTextField.context.fillRect(xPos,5,widthPos,textField.__textFormat.size * 1.185 - 4);
				}
				if(textField.__ranges == null) openfl__$internal_renderer_canvas_CanvasTextField.renderText(textField,text,textField.__textFormat,0,bounds); else {
					var currentIndex = 0;
					var range;
					var offsetX = 0.0;
					var _g1 = 0;
					var _g2 = textField.__ranges.length;
					while(_g1 < _g2) {
						var i1 = _g1++;
						range = textField.__ranges[i1];
						openfl__$internal_renderer_canvas_CanvasTextField.renderText(textField,text.substring(range.start,range.end),range.format,offsetX,bounds);
						offsetX += measurements[i1];
					}
				}
			} else {
				graphics.__canvas.width = Math.ceil(textField.__width);
				graphics.__canvas.height = Math.ceil(textField.__height);
				if(textField.border || textField.background) {
					if(textField.border) openfl__$internal_renderer_canvas_CanvasTextField.context.rect(0.5,0.5,textField.get_width() - 1,textField.get_height() - 1); else openfl__$internal_renderer_canvas_CanvasTextField.context.rect(0,0,textField.get_width(),textField.get_height());
					if(textField.background) {
						openfl__$internal_renderer_canvas_CanvasTextField.context.fillStyle = "#" + StringTools.hex(textField.backgroundColor,6);
						openfl__$internal_renderer_canvas_CanvasTextField.context.fill();
					}
					if(textField.border) {
						openfl__$internal_renderer_canvas_CanvasTextField.context.lineWidth = 1;
						openfl__$internal_renderer_canvas_CanvasTextField.context.lineCap = "square";
						openfl__$internal_renderer_canvas_CanvasTextField.context.strokeStyle = "#" + StringTools.hex(textField.borderColor,6);
						openfl__$internal_renderer_canvas_CanvasTextField.context.stroke();
					}
				}
			}
			graphics.__bitmap = openfl_display_BitmapData.fromCanvas(graphics.__canvas);
			textField.__dirty = false;
			graphics.set___dirty(false);
		}
	}
};
openfl__$internal_renderer_canvas_CanvasTextField.renderText = function(textField,text,format,offsetX,bounds) {
	openfl__$internal_renderer_canvas_CanvasTextField.context.font = openfl__$internal_renderer_dom_DOMTextField.getFont(format);
	openfl__$internal_renderer_canvas_CanvasTextField.context.fillStyle = "#" + StringTools.hex(format.color,6);
	openfl__$internal_renderer_canvas_CanvasTextField.context.textBaseline = "top";
	var yOffset = 0.0;
	if(new EReg("(iPad|iPhone|iPod|Firefox)","g").match(window.navigator.userAgent)) yOffset = format.size * 0.185;
	var lines = [];
	if(textField.get_wordWrap()) {
		var words = text.split(" ");
		var line = "";
		var word;
		var newLineIndex;
		var test;
		var _g1 = 0;
		var _g = words.length;
		while(_g1 < _g) {
			var i = _g1++;
			word = words[i];
			newLineIndex = word.indexOf("\n");
			if(newLineIndex > -1) {
				while(newLineIndex > -1) {
					test = line + word.substring(0,newLineIndex) + " ";
					if(openfl__$internal_renderer_canvas_CanvasTextField.context.measureText(test).width > textField.__width - 4 && i > 0) {
						lines.push(line);
						lines.push(word.substring(0,newLineIndex));
					} else lines.push(line + word.substring(0,newLineIndex));
					word = HxOverrides.substr(word,newLineIndex + 1,null);
					newLineIndex = word.indexOf("\n");
					line = "";
				}
				if(word != "") line = word + " ";
			} else {
				test = line + words[i] + " ";
				if(openfl__$internal_renderer_canvas_CanvasTextField.context.measureText(test).width > textField.__width - 4 && i > 0) {
					lines.push(line);
					line = words[i] + " ";
				} else line = test;
			}
		}
		if(line != "") lines.push(line);
	} else lines = text.split("\n");
	var _g2 = 0;
	while(_g2 < lines.length) {
		var line1 = lines[_g2];
		++_g2;
		var _g11 = format.align;
		switch(_g11[1]) {
		case 3:
			openfl__$internal_renderer_canvas_CanvasTextField.context.textAlign = "center";
			openfl__$internal_renderer_canvas_CanvasTextField.context.fillText(line1,offsetX + textField.get_width() / 2,2 + yOffset,textField.get_textWidth());
			break;
		case 1:
			openfl__$internal_renderer_canvas_CanvasTextField.context.textAlign = "end";
			openfl__$internal_renderer_canvas_CanvasTextField.context.fillText(line1,offsetX + textField.get_width() - 2,2 + yOffset,textField.get_textWidth());
			break;
		default:
			openfl__$internal_renderer_canvas_CanvasTextField.context.textAlign = "start";
			openfl__$internal_renderer_canvas_CanvasTextField.context.fillText(line1,2 + offsetX,2 + yOffset,textField.get_textWidth());
		}
		yOffset += format.size * 1.185 + format.leading;
		offsetX = 0;
	}
};
var openfl__$internal_renderer_dom_DOMBitmap = function() { };
$hxClasses["openfl._internal.renderer.dom.DOMBitmap"] = openfl__$internal_renderer_dom_DOMBitmap;
openfl__$internal_renderer_dom_DOMBitmap.__name__ = true;
openfl__$internal_renderer_dom_DOMBitmap.renderCanvas = function(bitmap,renderSession) {
	if(bitmap.__image != null) {
		renderSession.element.removeChild(bitmap.__image);
		bitmap.__image = null;
	}
	if(bitmap.__canvas == null) {
		bitmap.__canvas = window.document.createElement("canvas");
		bitmap.__context = bitmap.__canvas.getContext("2d");
		if(!bitmap.smoothing) {
			bitmap.__context.mozImageSmoothingEnabled = false;
			bitmap.__context.webkitImageSmoothingEnabled = false;
			bitmap.__context.imageSmoothingEnabled = false;
		}
		openfl__$internal_renderer_dom_DOMRenderer.initializeElement(bitmap,bitmap.__canvas,renderSession);
	}
	bitmap.bitmapData.__sync();
	bitmap.__canvas.width = bitmap.bitmapData.width;
	bitmap.__canvas.height = bitmap.bitmapData.height;
	bitmap.__context.globalAlpha = bitmap.__worldAlpha;
	bitmap.__context.drawImage(bitmap.bitmapData.__image.buffer.__srcCanvas,0,0);
	openfl__$internal_renderer_dom_DOMRenderer.applyStyle(bitmap,renderSession,true,false,true);
};
openfl__$internal_renderer_dom_DOMBitmap.renderImage = function(bitmap,renderSession) {
	if(bitmap.__canvas != null) {
		renderSession.element.removeChild(bitmap.__canvas);
		bitmap.__canvas = null;
	}
	if(bitmap.__image == null) {
		bitmap.__image = window.document.createElement("img");
		bitmap.__image.src = bitmap.bitmapData.__image.buffer.__srcImage.src;
		openfl__$internal_renderer_dom_DOMRenderer.initializeElement(bitmap,bitmap.__image,renderSession);
	}
	openfl__$internal_renderer_dom_DOMRenderer.applyStyle(bitmap,renderSession,true,true,true);
};
var openfl__$internal_renderer_dom_DOMMaskManager = function(renderSession) {
	openfl__$internal_renderer_AbstractMaskManager.call(this,renderSession);
};
$hxClasses["openfl._internal.renderer.dom.DOMMaskManager"] = openfl__$internal_renderer_dom_DOMMaskManager;
openfl__$internal_renderer_dom_DOMMaskManager.__name__ = true;
openfl__$internal_renderer_dom_DOMMaskManager.__super__ = openfl__$internal_renderer_AbstractMaskManager;
openfl__$internal_renderer_dom_DOMMaskManager.prototype = $extend(openfl__$internal_renderer_AbstractMaskManager.prototype,{
	pushMask: function(mask) {
	}
	,pushRect: function(rect,transform) {
	}
	,popMask: function() {
	}
	,__class__: openfl__$internal_renderer_dom_DOMMaskManager
});
var openfl__$internal_renderer_dom_DOMRenderer = function(width,height,element) {
	openfl__$internal_renderer_AbstractRenderer.call(this,width,height);
	this.element = element;
	this.renderSession = new openfl__$internal_renderer_RenderSession();
	this.renderSession.element = element;
	this.renderSession.roundPixels = true;
	var prefix = (function () {
		  var styles = window.getComputedStyle(document.documentElement, ''),
			pre = (Array.prototype.slice
			  .call(styles)
			  .join('') 
			  .match(/-(moz|webkit|ms)-/) || (styles.OLink === '' && ['', 'o'])
			)[1],
			dom = ('WebKit|Moz|MS|O').match(new RegExp('(' + pre + ')', 'i'))[1];
		  return {
			dom: dom,
			lowercase: pre,
			css: '-' + pre + '-',
			js: pre[0].toUpperCase() + pre.substr(1)
		  };
		})();
	this.renderSession.vendorPrefix = prefix.lowercase;
	if(prefix.lowercase == "webkit") this.renderSession.transformProperty = "-webkit-transform"; else this.renderSession.transformProperty = "transform";
	if(prefix.lowercase == "webkit") this.renderSession.transformOriginProperty = "-webkit-transform-origin"; else this.renderSession.transformOriginProperty = "transform-origin";
	this.renderSession.maskManager = new openfl__$internal_renderer_dom_DOMMaskManager(this.renderSession);
	this.renderSession.renderer = this;
};
$hxClasses["openfl._internal.renderer.dom.DOMRenderer"] = openfl__$internal_renderer_dom_DOMRenderer;
openfl__$internal_renderer_dom_DOMRenderer.__name__ = true;
openfl__$internal_renderer_dom_DOMRenderer.applyStyle = function(displayObject,renderSession,setTransform,setAlpha,setClip) {
	var style = displayObject.__style;
	if(setTransform && displayObject.__worldTransformChanged) style.setProperty(renderSession.transformProperty,displayObject.__worldTransform.to3DString(renderSession.roundPixels),null);
	if(displayObject.__worldZ != ++renderSession.z) {
		displayObject.__worldZ = renderSession.z;
		style.setProperty("z-index",displayObject.__worldZ == null?"null":"" + displayObject.__worldZ,null);
	}
	if(setAlpha && displayObject.__worldAlphaChanged) {
		if(displayObject.__worldAlpha < 1) style.setProperty("opacity",displayObject.__worldAlpha == null?"null":"" + displayObject.__worldAlpha,null); else style.removeProperty("opacity");
	}
	if(setClip && displayObject.__worldClipChanged) {
		if(displayObject.__worldClip == null) style.removeProperty("clip"); else {
			var clip = displayObject.__worldClip.transform(displayObject.__worldTransform.clone().invert());
			style.setProperty("clip","rect(" + clip.y + "px, " + clip.get_right() + "px, " + clip.get_bottom() + "px, " + clip.x + "px)",null);
		}
	}
};
openfl__$internal_renderer_dom_DOMRenderer.initializeElement = function(displayObject,element,renderSession) {
	var style = displayObject.__style = element.style;
	style.setProperty("position","absolute",null);
	style.setProperty("top","0",null);
	style.setProperty("left","0",null);
	style.setProperty(renderSession.transformOriginProperty,"0 0 0",null);
	renderSession.element.appendChild(element);
	displayObject.__worldAlphaChanged = true;
	displayObject.__worldClipChanged = true;
	displayObject.__worldTransformChanged = true;
	displayObject.__worldVisibleChanged = true;
	displayObject.__worldZ = -1;
};
openfl__$internal_renderer_dom_DOMRenderer.__super__ = openfl__$internal_renderer_AbstractRenderer;
openfl__$internal_renderer_dom_DOMRenderer.prototype = $extend(openfl__$internal_renderer_AbstractRenderer.prototype,{
	render: function(stage) {
		this.element.style.background = stage.__colorString;
		this.renderSession.z = 1;
		stage.__renderDOM(this.renderSession);
	}
	,__class__: openfl__$internal_renderer_dom_DOMRenderer
});
var openfl__$internal_renderer_dom_DOMShape = function() { };
$hxClasses["openfl._internal.renderer.dom.DOMShape"] = openfl__$internal_renderer_dom_DOMShape;
openfl__$internal_renderer_dom_DOMShape.__name__ = true;
openfl__$internal_renderer_dom_DOMShape.render = function(shape,renderSession) {
	var graphics = shape.__graphics;
	if(shape.stage != null && shape.__worldVisible && shape.__renderable && graphics != null) {
		if(graphics.__dirty || shape.__worldAlphaChanged || shape.__canvas == null && graphics.__canvas != null) {
			openfl__$internal_renderer_canvas_CanvasGraphics.render(graphics,renderSession);
			if(graphics.__canvas != null) {
				if(shape.__canvas == null) {
					shape.__canvas = window.document.createElement("canvas");
					shape.__context = shape.__canvas.getContext("2d");
					openfl__$internal_renderer_dom_DOMRenderer.initializeElement(shape,shape.__canvas,renderSession);
				}
				shape.__canvas.width = graphics.__canvas.width;
				shape.__canvas.height = graphics.__canvas.height;
				shape.__context.globalAlpha = shape.__worldAlpha;
				shape.__context.drawImage(graphics.__canvas,0,0);
			} else if(shape.__canvas != null) {
				renderSession.element.removeChild(shape.__canvas);
				shape.__canvas = null;
				shape.__style = null;
			}
		}
		if(shape.__canvas != null) {
			if(shape.__worldTransformChanged || graphics.__transformDirty) {
				graphics.__transformDirty = false;
				var transform = new openfl_geom_Matrix();
				transform.translate(graphics.__bounds.x,graphics.__bounds.y);
				transform = transform.mult(shape.__worldTransform);
				shape.__style.setProperty(renderSession.transformProperty,renderSession.roundPixels?"matrix3d(" + transform.a + ", " + transform.b + ", " + "0, 0, " + transform.c + ", " + transform.d + ", " + "0, 0, 0, 0, 1, 0, " + (transform.tx | 0) + ", " + (transform.ty | 0) + ", 0, 1)":"matrix3d(" + transform.a + ", " + transform.b + ", " + "0, 0, " + transform.c + ", " + transform.d + ", " + "0, 0, 0, 0, 1, 0, " + transform.tx + ", " + transform.ty + ", 0, 1)",null);
			}
			openfl__$internal_renderer_dom_DOMRenderer.applyStyle(shape,renderSession,false,false,true);
		}
	} else if(shape.__canvas != null) {
		renderSession.element.removeChild(shape.__canvas);
		shape.__canvas = null;
		shape.__style = null;
	}
};
var openfl__$internal_renderer_dom_DOMTextField = function() { };
$hxClasses["openfl._internal.renderer.dom.DOMTextField"] = openfl__$internal_renderer_dom_DOMTextField;
openfl__$internal_renderer_dom_DOMTextField.__name__ = true;
openfl__$internal_renderer_dom_DOMTextField.getFont = function(format) {
	var font;
	if(format.italic) font = "italic "; else font = "normal ";
	font += "normal ";
	if(format.bold) font += "bold "; else font += "normal ";
	font += format.size + "px";
	font += "/" + (format.size + format.leading) + "px ";
	font += "" + (function($this) {
		var $r;
		var _g = format.font;
		$r = (function($this) {
			var $r;
			switch(_g) {
			case "_sans":
				$r = "sans-serif";
				break;
			case "_serif":
				$r = "serif";
				break;
			case "_typewriter":
				$r = "monospace";
				break;
			default:
				$r = "'" + format.font + "'";
			}
			return $r;
		}($this));
		return $r;
	}(this));
	return font;
};
openfl__$internal_renderer_dom_DOMTextField.measureText = function(textField) {
	var div = textField.__div;
	if(div == null) {
		div = window.document.createElement("div");
		div.innerHTML = new EReg("\n","g").replace(textField.__text,"<br>");
		div.style.setProperty("font",openfl__$internal_renderer_dom_DOMTextField.getFont(textField.__textFormat),null);
		div.style.setProperty("pointer-events","none",null);
		div.style.position = "absolute";
		div.style.top = "110%";
		window.document.body.appendChild(div);
	}
	textField.__measuredWidth = div.clientWidth;
	if(textField.__div == null) div.style.width = Std.string(textField.__width - 4) + "px";
	textField.__measuredHeight = div.clientHeight;
	if(textField.__div == null) window.document.body.removeChild(div);
};
openfl__$internal_renderer_dom_DOMTextField.render = function(textField,renderSession) {
	if(textField.stage != null && textField.__worldVisible && textField.__renderable) {
		if(textField.__dirty || textField.__div == null) {
			if(textField.__text != "" || textField.background || textField.border) {
				if(textField.__div == null) {
					textField.__div = window.document.createElement("div");
					openfl__$internal_renderer_dom_DOMRenderer.initializeElement(textField,textField.__div,renderSession);
					textField.__style.setProperty("cursor","inherit",null);
				}
				var style = textField.__style;
				textField.__div.innerHTML = textField.__text;
				if(textField.background) style.setProperty("background-color","#" + StringTools.hex(textField.backgroundColor,6),null); else style.removeProperty("background-color");
				if(textField.border) style.setProperty("border","solid 1px #" + StringTools.hex(textField.borderColor,6),null); else style.removeProperty("border");
				style.setProperty("font",openfl__$internal_renderer_dom_DOMTextField.getFont(textField.__textFormat),null);
				style.setProperty("color","#" + StringTools.hex(textField.__textFormat.color,6),null);
				if(textField.autoSize != openfl_text_TextFieldAutoSize.NONE) style.setProperty("width","auto",null); else style.setProperty("width",textField.__width + "px",null);
				style.setProperty("height",textField.__height + "px",null);
				var _g = textField.__textFormat.align;
				switch(_g[1]) {
				case 3:
					style.setProperty("text-align","center",null);
					break;
				case 1:
					style.setProperty("text-align","right",null);
					break;
				default:
					style.setProperty("text-align","left",null);
				}
				textField.__dirty = false;
			} else if(textField.__div != null) {
				renderSession.element.removeChild(textField.__div);
				textField.__div = null;
			}
		}
		if(textField.__div != null) openfl__$internal_renderer_dom_DOMRenderer.applyStyle(textField,renderSession,true,true,false);
	} else if(textField.__div != null) {
		renderSession.element.removeChild(textField.__div);
		textField.__div = null;
		textField.__style = null;
	}
};
var openfl__$internal_renderer_opengl_GLRenderer = function(width,height,gl,transparent,antialias,preserveDrawingBuffer) {
	if(preserveDrawingBuffer == null) preserveDrawingBuffer = false;
	if(antialias == null) antialias = false;
	if(transparent == null) transparent = false;
	if(height == null) height = 600;
	if(width == null) width = 800;
	this.vpHeight = 0;
	this.vpWidth = 0;
	this.vpY = 0;
	this.vpX = 0;
	openfl__$internal_renderer_AbstractRenderer.call(this,width,height);
	this.transparent = transparent;
	this.preserveDrawingBuffer = preserveDrawingBuffer;
	this.width = width;
	this.height = height;
	this.options = { alpha : transparent, antialias : antialias, premultipliedAlpha : transparent, stencil : true, preserveDrawingBuffer : preserveDrawingBuffer};
	this._glContextId = openfl__$internal_renderer_opengl_GLRenderer.glContextId++;
	this.gl = gl;
	this.defaultFramebuffer = null;
	openfl__$internal_renderer_opengl_GLRenderer.glContexts[this._glContextId] = gl;
	this.projectionMatrix = new openfl_geom_Matrix();
	this.projection = new openfl_geom_Point();
	this.projection.x = this.width / 2;
	this.projection.y = -this.height / 2;
	this.offset = new openfl_geom_Point(0,0);
	this.resize(this.width,this.height);
	this.contextLost = false;
	this.shaderManager = new openfl__$internal_renderer_opengl_utils_ShaderManager(gl);
	this.spriteBatch = new openfl__$internal_renderer_opengl_utils_SpriteBatch(gl);
	this.filterManager = new openfl__$internal_renderer_opengl_utils_FilterManager(gl,this.transparent);
	this.stencilManager = new openfl__$internal_renderer_opengl_utils_StencilManager(gl);
	this.blendModeManager = new openfl__$internal_renderer_opengl_utils_BlendModeManager(gl);
	this.renderSession = new openfl__$internal_renderer_RenderSession();
	this.renderSession.gl = this.gl;
	this.renderSession.drawCount = 0;
	this.renderSession.shaderManager = this.shaderManager;
	this.renderSession.maskManager = this.maskManager;
	this.renderSession.filterManager = this.filterManager;
	this.renderSession.blendModeManager = this.blendModeManager;
	this.renderSession.spriteBatch = this.spriteBatch;
	this.renderSession.stencilManager = this.stencilManager;
	this.renderSession.renderer = this;
	this.renderSession.defaultFramebuffer = this.defaultFramebuffer;
	this.renderSession.projectionMatrix = this.projectionMatrix;
	this.maskManager = new openfl__$internal_renderer_opengl_utils_GLMaskManager(this.renderSession);
	this.renderSession.maskManager = this.maskManager;
	this.shaderManager.setShader(this.shaderManager.defaultShader);
	gl.disable(gl.DEPTH_TEST);
	gl.disable(gl.CULL_FACE);
	gl.enable(gl.BLEND);
	gl.colorMask(true,true,true,this.transparent);
};
$hxClasses["openfl._internal.renderer.opengl.GLRenderer"] = openfl__$internal_renderer_opengl_GLRenderer;
openfl__$internal_renderer_opengl_GLRenderer.__name__ = true;
openfl__$internal_renderer_opengl_GLRenderer.renderBitmap = function(shape,renderSession) {
	if(!shape.__renderable || shape.__worldAlpha <= 0) return;
	if(shape.__graphics == null || shape.__graphics.__bitmap == null) return;
	var bounds = shape.getBounds(null);
	var bitmap = shape.__graphics.__bitmap;
	var local = new openfl_geom_Matrix();
	local.translate(shape.__graphics.__bounds.x,shape.__graphics.__bounds.y);
	local = local.mult(shape.__worldTransform);
	renderSession.spriteBatch.renderBitmapData(bitmap,true,local,shape.__worldColorTransform,shape.__worldAlpha,shape.__blendMode,openfl_display_PixelSnapping.ALWAYS);
};
openfl__$internal_renderer_opengl_GLRenderer.__super__ = openfl__$internal_renderer_AbstractRenderer;
openfl__$internal_renderer_opengl_GLRenderer.prototype = $extend(openfl__$internal_renderer_AbstractRenderer.prototype,{
	setViewport: function(x,y,width,height) {
		if(!(this.vpX == x && this.vpY == y && this.vpWidth == width && this.vpHeight == height)) {
			this.vpX = x;
			this.vpY = y;
			this.vpWidth = width;
			this.vpHeight = height;
			this.gl.viewport(x,y,width,height);
			this.setOrtho(x,y,width,height);
		}
	}
	,setOrtho: function(x,y,width,height) {
		var o = this.projectionMatrix;
		o.identity();
		o.a = 1 / width * 2;
		o.d = -1 / height * 2;
		o.tx = -1 - x * o.a;
		o.ty = 1 - y * o.d;
	}
	,render: function(stage) {
		if(this.contextLost) return;
		var gl = this.gl;
		this.setViewport(0,0,this.width,this.height);
		gl.bindFramebuffer(gl.FRAMEBUFFER,this.defaultFramebuffer);
		if(this.transparent) gl.clearColor(0,0,0,0); else gl.clearColor(stage.__colorSplit[0],stage.__colorSplit[1],stage.__colorSplit[2],1);
		gl.clear(gl.COLOR_BUFFER_BIT);
		this.renderDisplayObject(stage,this.projection);
	}
	,renderDisplayObject: function(displayObject,projection,buffer) {
		this.renderSession.blendModeManager.setBlendMode(openfl_display_BlendMode.NORMAL);
		this.renderSession.drawCount = 0;
		this.renderSession.currentBlendMode = null;
		this.spriteBatch.begin(this.renderSession);
		this.filterManager.begin(this.renderSession,buffer);
		displayObject.__renderGL(this.renderSession);
		this.spriteBatch.finish();
	}
	,resize: function(width,height) {
		this.width = width;
		this.height = height;
		openfl__$internal_renderer_AbstractRenderer.prototype.resize.call(this,width,height);
		this.setViewport(0,0,width,height);
		this.projection.x = width / 2;
		this.projection.y = -height / 2;
	}
	,__class__: openfl__$internal_renderer_opengl_GLRenderer
});
var openfl__$internal_renderer_opengl_shaders2_Shader = function(gl) {
	this.uniforms = new haxe_ds_StringMap();
	this.attributes = new haxe_ds_StringMap();
	this.ID = openfl__$internal_renderer_opengl_shaders2_Shader.UID++;
	this.gl = gl;
	this.program = null;
};
$hxClasses["openfl._internal.renderer.opengl.shaders2.Shader"] = openfl__$internal_renderer_opengl_shaders2_Shader;
openfl__$internal_renderer_opengl_shaders2_Shader.__name__ = true;
openfl__$internal_renderer_opengl_shaders2_Shader.compileProgram = function(gl,vertexSrc,fragmentSrc) {
	var vertexShader = openfl__$internal_renderer_opengl_shaders2_Shader.compileShader(gl,vertexSrc,gl.VERTEX_SHADER);
	var fragmentShader = openfl__$internal_renderer_opengl_shaders2_Shader.compileShader(gl,fragmentSrc,gl.FRAGMENT_SHADER);
	var program = gl.createProgram();
	if(vertexShader != null && fragmentShader != null) {
		gl.attachShader(program,vertexShader);
		gl.attachShader(program,fragmentShader);
		gl.linkProgram(program);
		if(gl.getProgramParameter(program,gl.LINK_STATUS) == 0) console.log("Could not initialize shaders");
	}
	return program;
};
openfl__$internal_renderer_opengl_shaders2_Shader.compileShader = function(gl,shaderSrc,type) {
	var src = shaderSrc.join("\n");
	var shader = gl.createShader(type);
	gl.shaderSource(shader,src);
	gl.compileShader(shader);
	if(gl.getShaderParameter(shader,gl.COMPILE_STATUS) == 0) {
		console.log(gl.getShaderInfoLog(shader));
		return null;
	}
	return shader;
};
openfl__$internal_renderer_opengl_shaders2_Shader.prototype = {
	init: function() {
		this.program = openfl__$internal_renderer_opengl_shaders2_Shader.compileProgram(this.gl,this.vertexSrc,this.fragmentSrc);
		this.gl.useProgram(this.program);
	}
	,getAttribLocation: function(attribute) {
		if(this.program == null) throw new js__$Boot_HaxeError("Shader isn't initialized");
		if(this.attributes.exists(attribute)) return this.attributes.get(attribute); else {
			var location = this.gl.getAttribLocation(this.program,attribute);
			this.attributes.set(attribute,location);
			return location;
		}
	}
	,getUniformLocation: function(uniform) {
		if(this.program == null) throw new js__$Boot_HaxeError("Shader isn't initialized");
		if(this.uniforms.exists(uniform)) return this.uniforms.get(uniform); else {
			var location = this.gl.getUniformLocation(this.program,uniform);
			this.uniforms.set(uniform,location);
			return location;
		}
	}
	,enableVertexAttribute: function(attribute,stride,offset) {
		var location = this.getAttribLocation(attribute.name);
		this.gl.enableVertexAttribArray(location);
		this.gl.vertexAttribPointer(location,attribute.components,attribute.type,attribute.normalized,stride,offset * 4);
	}
	,disableVertexAttribute: function(attribute,setDefault) {
		if(setDefault == null) setDefault = true;
		var location = this.getAttribLocation(attribute.name);
		this.gl.disableVertexAttribArray(location);
		if(setDefault) {
			var _g = attribute.components;
			switch(_g) {
			case 1:
				this.gl.vertexAttrib1fv(location,attribute.defaultValue.subarray(0,1));
				break;
			case 2:
				this.gl.vertexAttrib2fv(location,attribute.defaultValue.subarray(0,2));
				break;
			case 3:
				this.gl.vertexAttrib3fv(location,attribute.defaultValue.subarray(0,3));
				break;
			default:
				this.gl.vertexAttrib4fv(location,attribute.defaultValue.subarray(0,4));
			}
		}
	}
	,bindVertexArray: function(va) {
		var offset = 0;
		var stride = va.get_stride();
		var _g = 0;
		var _g1 = va.attributes;
		while(_g < _g1.length) {
			var attribute = _g1[_g];
			++_g;
			if(attribute.enabled) {
				this.enableVertexAttribute(attribute,stride,offset);
				offset += Math.floor(attribute.components * attribute.getElementsBytes() / 4);
			} else this.disableVertexAttribute(attribute,true);
		}
	}
	,__class__: openfl__$internal_renderer_opengl_shaders2_Shader
};
var openfl__$internal_renderer_opengl_shaders2_DefaultShader = function(gl) {
	openfl__$internal_renderer_opengl_shaders2_Shader.call(this,gl);
	this.vertexSrc = ["attribute vec2 " + "aPosition" + ";","attribute vec2 " + "aTexCoord0" + ";","attribute vec4 " + "aColor" + ";","uniform mat3 " + "uProjectionMatrix" + ";","varying vec2 vTexCoord;","varying vec4 vColor;","void main(void) {","   gl_Position = vec4((" + "uProjectionMatrix" + " * vec3(" + "aPosition" + ", 1.0)).xy, 0.0, 1.0);","   vTexCoord = " + "aTexCoord0" + ";","   vColor = " + "aColor" + ";","}"];
	this.fragmentSrc = ["#ifdef GL_ES","precision lowp float;","#endif","uniform sampler2D " + "uSampler0" + ";","uniform vec4 " + "uColorMultiplier" + ";","uniform vec4 " + "uColorOffset" + ";","varying vec2 vTexCoord;","varying vec4 vColor;","vec4 colorTransform(const vec4 color, const vec4 tint, const vec4 multiplier, const vec4 offset) {","   vec4 unmultiply = vec4(color.rgb / color.a, color.a);","   vec4 result = unmultiply * tint * multiplier;","   result = result + offset;","   result = clamp(result, 0., 1.);","   result = vec4(result.rgb * result.a, result.a);","   return result;","}","void main(void) {","   vec4 tc = texture2D(" + "uSampler0" + ", vTexCoord);","   gl_FragColor = colorTransform(tc, vColor, " + "uColorMultiplier" + ", " + "uColorOffset" + ");","}"];
	this.init();
};
$hxClasses["openfl._internal.renderer.opengl.shaders2.DefaultShader"] = openfl__$internal_renderer_opengl_shaders2_DefaultShader;
openfl__$internal_renderer_opengl_shaders2_DefaultShader.__name__ = true;
openfl__$internal_renderer_opengl_shaders2_DefaultShader.__super__ = openfl__$internal_renderer_opengl_shaders2_Shader;
openfl__$internal_renderer_opengl_shaders2_DefaultShader.prototype = $extend(openfl__$internal_renderer_opengl_shaders2_Shader.prototype,{
	init: function() {
		openfl__$internal_renderer_opengl_shaders2_Shader.prototype.init.call(this);
		this.getAttribLocation("aPosition");
		this.getAttribLocation("aTexCoord0");
		this.getAttribLocation("aColor");
		this.getUniformLocation("uProjectionMatrix");
		this.getUniformLocation("uSampler0");
		this.getUniformLocation("uColorMultiplier");
		this.getUniformLocation("uColorOffset");
	}
	,__class__: openfl__$internal_renderer_opengl_shaders2_DefaultShader
});
var openfl__$internal_renderer_opengl_shaders2_DrawTrianglesShader = function(gl) {
	openfl__$internal_renderer_opengl_shaders2_Shader.call(this,gl);
	this.vertexSrc = ["attribute vec2 " + "aPosition" + ";","attribute vec2 " + "aTexCoord0" + ";","attribute vec4 " + "aColor" + ";","uniform mat3 " + "uProjectionMatrix" + ";","varying vec2 vTexCoord;","varying vec4 vColor;","void main(void) {","   gl_Position = vec4((" + "uProjectionMatrix" + " * vec3(" + "aPosition" + ", 1.0)).xy, 0.0, 1.0);","   vTexCoord = " + "aTexCoord0" + ";","   vColor = " + "aColor" + ".bgra;","}"];
	this.fragmentSrc = ["#ifdef GL_ES","precision lowp float;","#endif","uniform sampler2D " + "uSampler0" + ";","uniform vec3 " + "uColor" + ";","uniform bool " + "uUseTexture" + ";","uniform float " + "uAlpha" + ";","uniform vec4 " + "uColorMultiplier" + ";","uniform vec4 " + "uColorOffset" + ";","varying vec2 vTexCoord;","varying vec4 vColor;","vec4 tmp;","vec4 colorTransform(const vec4 color, const vec4 tint, const vec4 multiplier, const vec4 offset) {","   vec4 unmultiply = vec4(color.rgb / color.a, color.a);","   vec4 result = unmultiply * tint * multiplier;","   result = result + offset;","   result = clamp(result, 0., 1.);","   result = vec4(result.rgb * result.a, result.a);","   return result;","}","void main(void) {","   if(" + "uUseTexture" + ") {","       tmp = texture2D(" + "uSampler0" + ", vTexCoord);","   } else {","       tmp = vec4(" + "uColor" + ", 1.);","   }","   gl_FragColor = colorTransform(tmp, vColor, " + "uColorMultiplier" + ", " + "uColorOffset" + ");","}"];
	this.init();
};
$hxClasses["openfl._internal.renderer.opengl.shaders2.DrawTrianglesShader"] = openfl__$internal_renderer_opengl_shaders2_DrawTrianglesShader;
openfl__$internal_renderer_opengl_shaders2_DrawTrianglesShader.__name__ = true;
openfl__$internal_renderer_opengl_shaders2_DrawTrianglesShader.__super__ = openfl__$internal_renderer_opengl_shaders2_Shader;
openfl__$internal_renderer_opengl_shaders2_DrawTrianglesShader.prototype = $extend(openfl__$internal_renderer_opengl_shaders2_Shader.prototype,{
	init: function() {
		openfl__$internal_renderer_opengl_shaders2_Shader.prototype.init.call(this);
		this.getAttribLocation("aPosition");
		this.getAttribLocation("aTexCoord0");
		this.getAttribLocation("aColor");
		this.getUniformLocation("uSampler0");
		this.getUniformLocation("uProjectionMatrix");
		this.getUniformLocation("uColor");
		this.getUniformLocation("uAlpha");
		this.getUniformLocation("uUseTexture");
		this.getUniformLocation("uColorMultiplier");
		this.getUniformLocation("uColorOffset");
	}
	,__class__: openfl__$internal_renderer_opengl_shaders2_DrawTrianglesShader
});
var openfl__$internal_renderer_opengl_shaders2_FillShader = function(gl) {
	openfl__$internal_renderer_opengl_shaders2_Shader.call(this,gl);
	this.vertexSrc = ["attribute vec2 " + "aPosition" + ";","uniform mat3 " + "uTranslationMatrix" + ";","uniform mat3 " + "uProjectionMatrix" + ";","uniform vec4 " + "uColor" + ";","uniform float " + "uAlpha" + ";","uniform vec4 " + "uColorMultiplier" + ";","uniform vec4 " + "uColorOffset" + ";","varying vec4 vColor;","vec4 colorTransform(const vec4 color, const float alpha, const vec4 multiplier, const vec4 offset) {","   vec4 result = color * multiplier;","   result.a *= alpha;","   result = result + offset;","   result = clamp(result, 0., 1.);","   result = vec4(result.rgb * result.a, result.a);","   return result;","}","void main(void) {","   gl_Position = vec4((" + "uProjectionMatrix" + " * " + "uTranslationMatrix" + " * vec3(" + "aPosition" + ", 1.0)).xy, 0.0, 1.0);","   vColor = colorTransform(" + "uColor" + ", " + "uAlpha" + ", " + "uColorMultiplier" + ", " + "uColorOffset" + ");","}"];
	this.fragmentSrc = ["#ifdef GL_ES","precision lowp float;","#endif","varying vec4 vColor;","void main(void) {","   gl_FragColor = vColor;","}"];
	this.init();
};
$hxClasses["openfl._internal.renderer.opengl.shaders2.FillShader"] = openfl__$internal_renderer_opengl_shaders2_FillShader;
openfl__$internal_renderer_opengl_shaders2_FillShader.__name__ = true;
openfl__$internal_renderer_opengl_shaders2_FillShader.__super__ = openfl__$internal_renderer_opengl_shaders2_Shader;
openfl__$internal_renderer_opengl_shaders2_FillShader.prototype = $extend(openfl__$internal_renderer_opengl_shaders2_Shader.prototype,{
	init: function() {
		openfl__$internal_renderer_opengl_shaders2_Shader.prototype.init.call(this);
		this.getAttribLocation("aPosition");
		this.getUniformLocation("uTranslationMatrix");
		this.getUniformLocation("uProjectionMatrix");
		this.getUniformLocation("uColor");
		this.getUniformLocation("uColorMultiplier");
		this.getUniformLocation("uColorOffset");
	}
	,__class__: openfl__$internal_renderer_opengl_shaders2_FillShader
});
var openfl__$internal_renderer_opengl_shaders2_PatternFillShader = function(gl) {
	openfl__$internal_renderer_opengl_shaders2_Shader.call(this,gl);
	this.vertexSrc = ["attribute vec2 " + "aPosition" + ";","uniform mat3 " + "uTranslationMatrix" + ";","uniform mat3 " + "uProjectionMatrix" + ";","uniform mat3 " + "uPatternMatrix" + ";","varying vec2 vPosition;","void main(void) {","   gl_Position = vec4((" + "uProjectionMatrix" + " * " + "uTranslationMatrix" + " * vec3(" + "aPosition" + ", 1.0)).xy, 0.0, 1.0);","   vPosition = (" + "uPatternMatrix" + " * vec3(" + "aPosition" + ", 1)).xy;","}"];
	this.fragmentSrc = ["#ifdef GL_ES","precision lowp float;","#endif","uniform float " + "uAlpha" + ";","uniform vec2 " + "uPatternTL" + ";","uniform vec2 " + "uPatternBR" + ";","uniform sampler2D " + "uSampler0" + ";","uniform vec4 " + "uColorMultiplier" + ";","uniform vec4 " + "uColorOffset" + ";","varying vec2 vPosition;","vec4 colorTransform(const vec4 color, const float alpha, const vec4 multiplier, const vec4 offset) {","   vec4 unmultiply = vec4(color.rgb / color.a, color.a);","   vec4 result = unmultiply * multiplier;","   result.a *= alpha;","   result = result + offset;","   result = clamp(result, 0., 1.);","   result = vec4(result.rgb * result.a, result.a);","   return result;","}","void main(void) {","   vec2 pos = mix(" + "uPatternTL" + ", " + "uPatternBR" + ", vPosition);","   vec4 tcol = texture2D(" + "uSampler0" + ", pos);","   gl_FragColor = colorTransform(tcol, " + "uAlpha" + ", " + "uColorMultiplier" + ", " + "uColorOffset" + ");","}"];
	this.init();
};
$hxClasses["openfl._internal.renderer.opengl.shaders2.PatternFillShader"] = openfl__$internal_renderer_opengl_shaders2_PatternFillShader;
openfl__$internal_renderer_opengl_shaders2_PatternFillShader.__name__ = true;
openfl__$internal_renderer_opengl_shaders2_PatternFillShader.__super__ = openfl__$internal_renderer_opengl_shaders2_Shader;
openfl__$internal_renderer_opengl_shaders2_PatternFillShader.prototype = $extend(openfl__$internal_renderer_opengl_shaders2_Shader.prototype,{
	init: function() {
		openfl__$internal_renderer_opengl_shaders2_Shader.prototype.init.call(this);
		this.getAttribLocation("aPosition");
		this.getUniformLocation("uTranslationMatrix");
		this.getUniformLocation("uPatternMatrix");
		this.getUniformLocation("uProjectionMatrix");
		this.getUniformLocation("uSampler0");
		this.getUniformLocation("uPatternTL");
		this.getUniformLocation("uPatternBR");
		this.getUniformLocation("uAlpha");
		this.getUniformLocation("uColorMultiplier");
		this.getUniformLocation("uColorOffset");
	}
	,__class__: openfl__$internal_renderer_opengl_shaders2_PatternFillShader
});
var openfl__$internal_renderer_opengl_shaders2_PrimitiveShader = function(gl) {
	openfl__$internal_renderer_opengl_shaders2_Shader.call(this,gl);
	this.vertexSrc = ["attribute vec2 " + "aPosition" + ";","attribute vec4 " + "aColor" + ";","uniform mat3 " + "uTranslationMatrix" + ";","uniform mat3 " + "uProjectionMatrix" + ";","uniform vec4 " + "uColorMultiplier" + ";","uniform vec4 " + "uColorOffset" + ";","uniform float " + "uAlpha" + ";","varying vec4 vColor;","vec4 colorTransform(const vec4 color, const float alpha, const vec4 multiplier, const vec4 offset) {","   vec4 result = color * multiplier;","   result.a *= alpha;","   result = result + offset;","   result = clamp(result, 0., 1.);","   result = vec4(result.rgb * result.a, result.a);","   return result;","}","void main(void) {","   gl_Position = vec4((" + "uProjectionMatrix" + " * " + "uTranslationMatrix" + " * vec3(" + "aPosition" + ", 1.0)).xy, 0.0, 1.0);","   vColor = colorTransform(" + "aColor" + ", " + "uAlpha" + ", " + "uColorMultiplier" + ", " + "uColorOffset" + ");","}"];
	this.fragmentSrc = ["#ifdef GL_ES","precision lowp float;","#endif","varying vec4 vColor;","void main(void) {","   gl_FragColor = vColor;","}"];
	this.init();
};
$hxClasses["openfl._internal.renderer.opengl.shaders2.PrimitiveShader"] = openfl__$internal_renderer_opengl_shaders2_PrimitiveShader;
openfl__$internal_renderer_opengl_shaders2_PrimitiveShader.__name__ = true;
openfl__$internal_renderer_opengl_shaders2_PrimitiveShader.__super__ = openfl__$internal_renderer_opengl_shaders2_Shader;
openfl__$internal_renderer_opengl_shaders2_PrimitiveShader.prototype = $extend(openfl__$internal_renderer_opengl_shaders2_Shader.prototype,{
	init: function() {
		openfl__$internal_renderer_opengl_shaders2_Shader.prototype.init.call(this);
		this.getAttribLocation("aPosition");
		this.getAttribLocation("aColor");
		this.getUniformLocation("uTranslationMatrix");
		this.getUniformLocation("uProjectionMatrix");
		this.getUniformLocation("uAlpha");
		this.getUniformLocation("uColorMultiplier");
		this.getUniformLocation("uColorOffset");
	}
	,__class__: openfl__$internal_renderer_opengl_shaders2_PrimitiveShader
});
var openfl__$internal_renderer_opengl_utils_BlendModeManager = function(gl) {
	this.gl = gl;
	this.currentBlendMode = null;
	if(openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes == null) {
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes = new haxe_ds_EnumValueMap();
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.NORMAL,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.ADD,{ src : 1, dest : 1, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.MULTIPLY,{ src : 774, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.SCREEN,{ src : 1, dest : 769, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.SUBTRACT,{ src : 1, dest : 1, func : 32779});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.LAYER,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.DARKEN,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.LIGHTEN,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.ERASE,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.ALPHA,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.INVERT,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.DIFFERENCE,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.HARDLIGHT,{ src : 1, dest : 771, func : 32774});
		openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.set(openfl_display_BlendMode.OVERLAY,{ src : 1, dest : 771, func : 32774});
	}
};
$hxClasses["openfl._internal.renderer.opengl.utils.BlendModeManager"] = openfl__$internal_renderer_opengl_utils_BlendModeManager;
openfl__$internal_renderer_opengl_utils_BlendModeManager.__name__ = true;
openfl__$internal_renderer_opengl_utils_BlendModeManager.prototype = {
	setBlendMode: function(blendMode,force) {
		if(force == null) force = false;
		if(blendMode == null) {
			blendMode = openfl_display_BlendMode.NORMAL;
			force = true;
		}
		if(!force && this.currentBlendMode == blendMode) return false;
		this.currentBlendMode = blendMode;
		var glBlend = openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes.get(this.currentBlendMode);
		this.gl.blendEquation(glBlend.func);
		this.gl.blendFunc(glBlend.src,glBlend.dest);
		return true;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_BlendModeManager
};
var openfl__$internal_renderer_opengl_utils_DrawPath = function() {
	this.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
	this.points = [];
	this.winding = 0;
	this.isRemovable = true;
	this.fillIndex = 0;
	this.line = new openfl__$internal_renderer_opengl_utils_LineStyle();
	this.fill = openfl__$internal_renderer_opengl_utils_FillType.None;
};
$hxClasses["openfl._internal.renderer.opengl.utils.DrawPath"] = openfl__$internal_renderer_opengl_utils_DrawPath;
openfl__$internal_renderer_opengl_utils_DrawPath.__name__ = true;
openfl__$internal_renderer_opengl_utils_DrawPath.getStack = function(graphics,gl) {
	return openfl__$internal_renderer_opengl_utils_PathBuiler.build(graphics,gl);
};
openfl__$internal_renderer_opengl_utils_DrawPath.prototype = {
	update: function(line,fill,fillIndex,winding) {
		this.updateLine(line);
		this.fill = fill;
		this.fillIndex = fillIndex;
		this.winding = winding;
	}
	,updateLine: function(line) {
		this.line.width = line.width;
		this.line.color = line.color;
		if(line.alpha == null) this.line.alpha = 1; else this.line.alpha = line.alpha;
		if(line.scaleMode == null) this.line.scaleMode = openfl_display_LineScaleMode.NORMAL; else this.line.scaleMode = line.scaleMode;
		if(line.caps == null) this.line.caps = openfl_display_CapsStyle.ROUND; else this.line.caps = line.caps;
		if(line.joints == null) this.line.joints = openfl_display_JointStyle.ROUND; else this.line.joints = line.joints;
		this.line.miterLimit = line.miterLimit;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_DrawPath
};
var openfl__$internal_renderer_opengl_utils_PathBuiler = function() { };
$hxClasses["openfl._internal.renderer.opengl.utils.PathBuiler"] = openfl__$internal_renderer_opengl_utils_PathBuiler;
openfl__$internal_renderer_opengl_utils_PathBuiler.__name__ = true;
openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = null;
openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths = null;
openfl__$internal_renderer_opengl_utils_PathBuiler.__line = null;
openfl__$internal_renderer_opengl_utils_PathBuiler.__fill = null;
openfl__$internal_renderer_opengl_utils_PathBuiler.closePath = function() {
	var l = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length;
	if(l <= 0) return;
	if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type == openfl__$internal_renderer_opengl_utils_GraphicType.Polygon && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.fill != openfl__$internal_renderer_opengl_utils_FillType.None) {
		var sx = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points[0];
		var sy = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points[1];
		var ex = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points[l - 2];
		var ey = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points[l - 1];
		if(!(sx == ex && sy == ey)) openfl__$internal_renderer_opengl_utils_PathBuiler.lineTo(sx,sy);
	}
};
openfl__$internal_renderer_opengl_utils_PathBuiler.endFill = function() {
	openfl__$internal_renderer_opengl_utils_PathBuiler.__fill = openfl__$internal_renderer_opengl_utils_FillType.None;
	openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex++;
};
openfl__$internal_renderer_opengl_utils_PathBuiler.lineTo = function(x,y) {
	var points = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points;
	var push_point = true;
	if(points.length > 1) {
		var lastX = points[points.length - 2];
		var lastY = points[points.length - 1];
		if(lastX == x && lastY == y) push_point = false;
	}
	if(push_point == true) {
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(x);
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(y);
	}
};
openfl__$internal_renderer_opengl_utils_PathBuiler.curveTo = function(cx,cy,x,y) {
	if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) {
		if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(0);
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(0);
		openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
	}
	var xa = 0;
	var ya = 0;
	var n = 20;
	var points = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points;
	var fromX = points[points.length - 2];
	var fromY = points[points.length - 1];
	var px = 0;
	var py = 0;
	var tmp = 0;
	var _g1 = 1;
	var _g = n + 1;
	while(_g1 < _g) {
		var i = _g1++;
		tmp = i / n;
		xa = fromX + (cx - fromX) * tmp;
		ya = fromY + (cy - fromY) * tmp;
		px = xa + (cx + (x - cx) * tmp - xa) * tmp;
		py = ya + (cy + (y - cy) * tmp - ya) * tmp;
		points.push(px);
		points.push(py);
	}
};
openfl__$internal_renderer_opengl_utils_PathBuiler.cubicCurveTo = function(cx,cy,cx2,cy2,x,y) {
	if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) {
		if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(0);
		openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(0);
		openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
	}
	var n = 20;
	var dt = 0;
	var dt2 = 0;
	var dt3 = 0;
	var t2 = 0;
	var t3 = 0;
	var points = openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points;
	var fromX = points[points.length - 2];
	var fromY = points[points.length - 1];
	var px = 0;
	var py = 0;
	var tmp = 0;
	var _g1 = 1;
	var _g = n + 1;
	while(_g1 < _g) {
		var i = _g1++;
		tmp = i / n;
		dt = 1 - tmp;
		dt2 = dt * dt;
		dt3 = dt2 * dt;
		t2 = tmp * tmp;
		t3 = t2 * tmp;
		px = dt3 * fromX + 3 * dt2 * tmp * cx + 3 * dt * t2 * cx2 + t3 * x;
		py = dt3 * fromY + 3 * dt2 * tmp * cy + 3 * dt * t2 * cy2 + t3 * y;
		points.push(px);
		points.push(py);
	}
};
openfl__$internal_renderer_opengl_utils_PathBuiler.build = function(graphics,gl) {
	var glStack = null;
	var bounds = graphics.__bounds;
	openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths = [];
	openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
	openfl__$internal_renderer_opengl_utils_PathBuiler.__line = new openfl__$internal_renderer_opengl_utils_LineStyle();
	openfl__$internal_renderer_opengl_utils_PathBuiler.__fill = openfl__$internal_renderer_opengl_utils_FillType.None;
	openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex = 0;
	glStack = graphics.__glStack[openfl__$internal_renderer_opengl_GLRenderer.glContextId];
	if(glStack == null) glStack = graphics.__glStack[openfl__$internal_renderer_opengl_GLRenderer.glContextId] = new openfl__$internal_renderer_opengl_utils_GLStack(gl);
	if(!graphics.__visible || graphics.__commands.length == 0 || bounds == null || bounds.width == 0 || bounds.height == 0) {
	} else {
		var _g = 0;
		var _g1 = graphics.__commands;
		while(_g < _g1.length) {
			var command = _g1[_g];
			++_g;
			switch(command[1]) {
			case 0:
				var smooth = command[5];
				var repeat = command[4];
				var matrix = command[3];
				var bitmap = command[2];
				openfl__$internal_renderer_opengl_utils_PathBuiler.endFill();
				if(bitmap != null) openfl__$internal_renderer_opengl_utils_PathBuiler.__fill = openfl__$internal_renderer_opengl_utils_FillType.Texture(bitmap,matrix,repeat,smooth); else openfl__$internal_renderer_opengl_utils_PathBuiler.__fill = openfl__$internal_renderer_opengl_utils_FillType.None;
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) {
					if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points = [];
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
					openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				}
				break;
			case 1:
				var alpha = command[3];
				var rgb = command[2];
				openfl__$internal_renderer_opengl_utils_PathBuiler.endFill();
				if(alpha > 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__fill = openfl__$internal_renderer_opengl_utils_FillType.Color(rgb & 16777215,alpha); else openfl__$internal_renderer_opengl_utils_PathBuiler.__fill = openfl__$internal_renderer_opengl_utils_FillType.None;
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) {
					if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points = [];
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
					openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				}
				break;
			case 3:
				var y = command[7];
				var x = command[6];
				var cy2 = command[5];
				var cx2 = command[4];
				var cy = command[3];
				var cx = command[2];
				openfl__$internal_renderer_opengl_utils_PathBuiler.cubicCurveTo(cx,cy,cx2,cy2,x,y);
				break;
			case 4:
				var y1 = command[5];
				var x1 = command[4];
				var cy1 = command[3];
				var cx1 = command[2];
				openfl__$internal_renderer_opengl_utils_PathBuiler.curveTo(cx1,cy1,x1,y1);
				break;
			case 5:
				var radius = command[4];
				var y2 = command[3];
				var x2 = command[2];
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Circle;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points = [x2,y2,radius];
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 6:
				var height = command[5];
				var width = command[4];
				var y3 = command[3];
				var x3 = command[2];
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Ellipse;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points = [x3,y3,width,height];
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 7:
				var height1 = command[5];
				var width1 = command[4];
				var y4 = command[3];
				var x4 = command[2];
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Rectangle(false);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points = [x4,y4,width1,height1];
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 8:
				var ry = command[7];
				var rx = command[6];
				var height2 = command[5];
				var width2 = command[4];
				var y5 = command[3];
				var x5 = command[2];
				if(ry == -1) ry = rx;
				rx *= 0.5;
				ry *= 0.5;
				if(rx > width2 / 2) rx = width2 / 2;
				if(ry > height2 / 2) ry = height2 / 2;
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Rectangle(true);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points = [x5,y5,width2,height2,rx,ry];
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 11:
				openfl__$internal_renderer_opengl_utils_PathBuiler.endFill();
				break;
			case 12:
				var miterLimit = command[9];
				var joints = command[8];
				var caps = command[7];
				var scaleMode = command[6];
				var pixelHinting = command[5];
				var alpha1 = command[4];
				var color = command[3];
				var thickness = command[2];
				openfl__$internal_renderer_opengl_utils_PathBuiler.__line = new openfl__$internal_renderer_opengl_utils_LineStyle();
				if(thickness == null || isNaN(thickness) || thickness < 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__line.width = 0; else if(thickness == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__line.width = 1; else openfl__$internal_renderer_opengl_utils_PathBuiler.__line.width = thickness;
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				if(color == null) openfl__$internal_renderer_opengl_utils_PathBuiler.__line.color = 0; else openfl__$internal_renderer_opengl_utils_PathBuiler.__line.color = color;
				if(alpha1 == null) openfl__$internal_renderer_opengl_utils_PathBuiler.__line.alpha = 1; else openfl__$internal_renderer_opengl_utils_PathBuiler.__line.alpha = alpha1;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__line.scaleMode = scaleMode;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__line.caps = caps;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__line.joints = joints;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__line.miterLimit = miterLimit;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points = [];
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 15:
				var y6 = command[3];
				var x6 = command[2];
				openfl__$internal_renderer_opengl_utils_PathBuiler.lineTo(x6,y6);
				break;
			case 16:
				var y7 = command[3];
				var x7 = command[2];
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(x7);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(y7);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 10:
				var blendMode = command[7];
				var colors = command[6];
				var culling = command[5];
				var uvtData = command[4];
				var indices = command[3];
				var vertices = command[2];
				var isColor;
				{
					var _g2 = openfl__$internal_renderer_opengl_utils_PathBuiler.__fill;
					switch(_g2[1]) {
					case 1:
						isColor = true;
						break;
					default:
						isColor = false;
					}
				}
				if(isColor && uvtData != null) continue;
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				if(uvtData == null) {
					var this1;
					this1 = new openfl_VectorData();
					var this2;
					this2 = new Array(0);
					this1.data = this2;
					this1.length = 0;
					this1.fixed = false;
					uvtData = this1;
					{
						var _g21 = openfl__$internal_renderer_opengl_utils_PathBuiler.__fill;
						switch(_g21[1]) {
						case 2:
							var b = _g21[2];
							var _g4 = 0;
							var _g3 = vertices.length / 2 | 0;
							while(_g4 < _g3) {
								var i = _g4++;
								if(!uvtData.fixed) {
									uvtData.length++;
									if(uvtData.data.length < uvtData.length) {
										var data;
										var this3;
										this3 = new Array(uvtData.data.length + 10);
										data = this3;
										haxe_ds__$Vector_Vector_$Impl_$.blit(uvtData.data,0,data,0,uvtData.data.length);
										uvtData.data = data;
									}
									uvtData.data[uvtData.length - 1] = vertices.data[i * 2] / b.width;
								}
								uvtData.length;
								if(!uvtData.fixed) {
									uvtData.length++;
									if(uvtData.data.length < uvtData.length) {
										var data1;
										var this4;
										this4 = new Array(uvtData.data.length + 10);
										data1 = this4;
										haxe_ds__$Vector_Vector_$Impl_$.blit(uvtData.data,0,data1,0,uvtData.data.length);
										uvtData.data = data1;
									}
									uvtData.data[uvtData.length - 1] = vertices.data[i * 2 + 1] / b.height;
								}
								uvtData.length;
							}
							break;
						default:
						}
					}
				}
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.DrawTriangles(vertices,indices,uvtData,culling,colors,blendMode);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable = false;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 9:
				var count = command[6];
				var flags = command[5];
				var smooth1 = command[4];
				var tileData = command[3];
				var sheet = command[2];
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex++;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.DrawTiles(sheet,tileData,smooth1,flags,count);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable = false;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			case 17:
				var winding = command[4];
				var data2 = command[3];
				var commands = command[2];
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				switch(winding) {
				case openfl_display_GraphicsPathWinding.EVEN_ODD:
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding = 0;
					break;
				case openfl_display_GraphicsPathWinding.NON_ZERO:
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding = 1;
					break;
				default:
					openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding = 0;
				}
				var command1;
				var cx3;
				var cy3;
				var cx21;
				var cy21;
				var ax;
				var ay;
				var idx = 0;
				var _g31 = 0;
				var _g22 = commands.length;
				while(_g31 < _g22) {
					var i1 = _g31++;
					command1 = commands.data[i1];
					switch(command1) {
					case 1:
						ax = data2.data[idx];
						ay = data2.data[idx + 1];
						idx += 2;
						if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(ax);
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(ay);
						openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
						break;
					case 4:
						ax = data2.data[idx + 2];
						ay = data2.data[idx + 3];
						idx += 4;
						if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(ax);
						openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.push(ay);
						openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
						break;
					case 2:
						ax = data2.data[idx];
						ay = data2.data[idx + 1];
						idx += 2;
						openfl__$internal_renderer_opengl_utils_PathBuiler.lineTo(ax,ay);
						break;
					case 5:
						ax = data2.data[idx + 2];
						ay = data2.data[idx + 3];
						idx += 4;
						openfl__$internal_renderer_opengl_utils_PathBuiler.lineTo(ax,ay);
						break;
					case 3:
						cx3 = data2.data[idx];
						cy3 = data2.data[idx + 1];
						ax = data2.data[idx + 2];
						ay = data2.data[idx + 3];
						idx += 4;
						openfl__$internal_renderer_opengl_utils_PathBuiler.curveTo(cx3,cy3,ax,ay);
						break;
					case 6:
						cx3 = data2.data[idx];
						cy3 = data2.data[idx + 1];
						cx21 = data2.data[idx + 2];
						cy21 = data2.data[idx + 3];
						ax = data2.data[idx + 4];
						ay = data2.data[idx + 5];
						idx += 6;
						openfl__$internal_renderer_opengl_utils_PathBuiler.cubicCurveTo(cx3,cy3,cx21,cy21,ax,ay);
						break;
					default:
					}
				}
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding = 0;
				break;
			case 18:
				var m = command[2];
				if(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable && openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.points.length == 0) openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.pop(); else openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath = new openfl__$internal_renderer_opengl_utils_DrawPath();
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.update(openfl__$internal_renderer_opengl_utils_PathBuiler.__line,openfl__$internal_renderer_opengl_utils_PathBuiler.__fill,openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex,openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.type = openfl__$internal_renderer_opengl_utils_GraphicType.OverrideMatrix(m);
				openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath.isRemovable = false;
				openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths.push(openfl__$internal_renderer_opengl_utils_PathBuiler.__currentPath);
				break;
			default:
			}
		}
		openfl__$internal_renderer_opengl_utils_PathBuiler.closePath();
	}
	graphics.__drawPaths = openfl__$internal_renderer_opengl_utils_PathBuiler.__drawPaths;
	return glStack;
};
var openfl__$internal_renderer_opengl_utils_LineStyle = function() {
	this.width = 0;
	this.color = 0;
	this.alpha = 1;
	this.scaleMode = openfl_display_LineScaleMode.NORMAL;
	this.caps = openfl_display_CapsStyle.ROUND;
	this.joints = openfl_display_JointStyle.ROUND;
	this.miterLimit = 3;
};
$hxClasses["openfl._internal.renderer.opengl.utils.LineStyle"] = openfl__$internal_renderer_opengl_utils_LineStyle;
openfl__$internal_renderer_opengl_utils_LineStyle.__name__ = true;
openfl__$internal_renderer_opengl_utils_LineStyle.prototype = {
	__class__: openfl__$internal_renderer_opengl_utils_LineStyle
};
var openfl__$internal_renderer_opengl_utils_FillType = $hxClasses["openfl._internal.renderer.opengl.utils.FillType"] = { __ename__ : true, __constructs__ : ["None","Color","Texture","Gradient"] };
openfl__$internal_renderer_opengl_utils_FillType.None = ["None",0];
openfl__$internal_renderer_opengl_utils_FillType.None.toString = $estr;
openfl__$internal_renderer_opengl_utils_FillType.None.__enum__ = openfl__$internal_renderer_opengl_utils_FillType;
openfl__$internal_renderer_opengl_utils_FillType.Color = function(color,alpha) { var $x = ["Color",1,color,alpha]; $x.__enum__ = openfl__$internal_renderer_opengl_utils_FillType; $x.toString = $estr; return $x; };
openfl__$internal_renderer_opengl_utils_FillType.Texture = function(bitmap,matrix,repeat,smooth) { var $x = ["Texture",2,bitmap,matrix,repeat,smooth]; $x.__enum__ = openfl__$internal_renderer_opengl_utils_FillType; $x.toString = $estr; return $x; };
openfl__$internal_renderer_opengl_utils_FillType.Gradient = ["Gradient",3];
openfl__$internal_renderer_opengl_utils_FillType.Gradient.toString = $estr;
openfl__$internal_renderer_opengl_utils_FillType.Gradient.__enum__ = openfl__$internal_renderer_opengl_utils_FillType;
var openfl__$internal_renderer_opengl_utils_FilterManager = function(gl,transparent) {
	this.transparent = transparent;
	this.filterStack = [];
	this.offsetX = 0;
	this.offsetY = 0;
	this.setContext(gl);
};
$hxClasses["openfl._internal.renderer.opengl.utils.FilterManager"] = openfl__$internal_renderer_opengl_utils_FilterManager;
openfl__$internal_renderer_opengl_utils_FilterManager.__name__ = true;
openfl__$internal_renderer_opengl_utils_FilterManager.prototype = {
	begin: function(renderSession,buffer) {
		this.renderSession = renderSession;
		this.defaultShader = renderSession.shaderManager.defaultShader;
		this.width = 0;
		this.height = 0;
		this.buffer = buffer;
	}
	,initShaderBuffers: function() {
		var gl = this.gl;
		this.vertexBuffer = gl.createBuffer();
		this.uvBuffer = gl.createBuffer();
		this.colorBuffer = gl.createBuffer();
		this.indexBuffer = gl.createBuffer();
		this.vertexArray = new Float32Array([0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0]);
		gl.bindBuffer(gl.ARRAY_BUFFER,this.vertexBuffer);
		gl.bufferData(gl.ARRAY_BUFFER,this.vertexArray,gl.STATIC_DRAW);
		this.uvArray = new Float32Array([0.0,0.0,1.0,0.0,0.0,1.0,1.0,1.0]);
		gl.bindBuffer(gl.ARRAY_BUFFER,this.uvBuffer);
		gl.bufferData(gl.ARRAY_BUFFER,this.uvArray,gl.STATIC_DRAW);
		this.colorArray = new Float32Array([1.0,16777215,1.0,16777215,1.0,16777215,1.0,16777215]);
		gl.bindBuffer(gl.ARRAY_BUFFER,this.colorBuffer);
		gl.bufferData(gl.ARRAY_BUFFER,this.colorArray,gl.STATIC_DRAW);
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER,this.indexBuffer);
		gl.bufferData(gl.ELEMENT_ARRAY_BUFFER,new Uint16Array([0,1,2,1,3,2]),gl.STATIC_DRAW);
	}
	,setContext: function(gl) {
		this.gl = gl;
		this.texturePool = [];
		this.initShaderBuffers();
	}
	,__class__: openfl__$internal_renderer_opengl_utils_FilterManager
};
var openfl__$internal_renderer_opengl_utils_FilterTexture = function() { };
$hxClasses["openfl._internal.renderer.opengl.utils.FilterTexture"] = openfl__$internal_renderer_opengl_utils_FilterTexture;
openfl__$internal_renderer_opengl_utils_FilterTexture.__name__ = true;
openfl__$internal_renderer_opengl_utils_FilterTexture.prototype = {
	__class__: openfl__$internal_renderer_opengl_utils_FilterTexture
};
var openfl__$internal_renderer_opengl_utils_GLMaskManager = function(renderSession) {
	openfl__$internal_renderer_AbstractMaskManager.call(this,renderSession);
	this.setContext(renderSession.gl);
};
$hxClasses["openfl._internal.renderer.opengl.utils.GLMaskManager"] = openfl__$internal_renderer_opengl_utils_GLMaskManager;
openfl__$internal_renderer_opengl_utils_GLMaskManager.__name__ = true;
openfl__$internal_renderer_opengl_utils_GLMaskManager.__super__ = openfl__$internal_renderer_AbstractMaskManager;
openfl__$internal_renderer_opengl_utils_GLMaskManager.prototype = $extend(openfl__$internal_renderer_AbstractMaskManager.prototype,{
	pushMask: function(mask) {
		this.renderSession.stencilManager.pushMask(mask,this.renderSession);
	}
	,popMask: function() {
		this.renderSession.stencilManager.popMask(null,this.renderSession);
	}
	,setContext: function(gl) {
		if(this.renderSession != null) this.renderSession.gl = gl;
		this.gl = gl;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_GLMaskManager
});
var openfl__$internal_renderer_opengl_utils_VertexAttribute = function(components,type,normalized,name,defaultValue) {
	if(normalized == null) normalized = false;
	this.enabled = true;
	this.normalized = false;
	this.components = components;
	this.type = type;
	this.normalized = normalized;
	this.name = name;
	if(defaultValue == null) this.defaultValue = new Float32Array(components); else this.defaultValue = defaultValue;
};
$hxClasses["openfl._internal.renderer.opengl.utils.VertexAttribute"] = openfl__$internal_renderer_opengl_utils_VertexAttribute;
openfl__$internal_renderer_opengl_utils_VertexAttribute.__name__ = true;
openfl__$internal_renderer_opengl_utils_VertexAttribute.prototype = {
	copy: function() {
		return new openfl__$internal_renderer_opengl_utils_VertexAttribute(this.components,this.type,this.normalized,this.name,this.defaultValue);
	}
	,getElementsBytes: function() {
		var _g = this.type;
		switch(_g) {
		case 5120:case 5121:
			return 1;
		case 5122:case 5123:
			return 2;
		default:
			return 4;
		}
	}
	,__class__: openfl__$internal_renderer_opengl_utils_VertexAttribute
};
var openfl_geom_Rectangle = function(x,y,width,height) {
	if(height == null) height = 0;
	if(width == null) width = 0;
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
	this.width = width;
	this.height = height;
};
$hxClasses["openfl.geom.Rectangle"] = openfl_geom_Rectangle;
openfl_geom_Rectangle.__name__ = true;
openfl_geom_Rectangle.prototype = {
	clone: function() {
		return new openfl_geom_Rectangle(this.x,this.y,this.width,this.height);
	}
	,contains: function(x,y) {
		return x >= this.x && y >= this.y && x < this.get_right() && y < this.get_bottom();
	}
	,containsPoint: function(point) {
		return this.contains(point.x,point.y);
	}
	,copyFrom: function(sourceRect) {
		this.x = sourceRect.x;
		this.y = sourceRect.y;
		this.width = sourceRect.width;
		this.height = sourceRect.height;
	}
	,setTo: function(xa,ya,widtha,heighta) {
		this.x = xa;
		this.y = ya;
		this.width = widtha;
		this.height = heighta;
	}
	,transform: function(m) {
		var tx0 = m.a * this.x + m.c * this.y;
		var tx1 = tx0;
		var ty0 = m.b * this.x + m.d * this.y;
		var ty1 = ty0;
		var tx = m.a * (this.x + this.width) + m.c * this.y;
		var ty = m.b * (this.x + this.width) + m.d * this.y;
		if(tx < tx0) tx0 = tx;
		if(ty < ty0) ty0 = ty;
		if(tx > tx1) tx1 = tx;
		if(ty > ty1) ty1 = ty;
		tx = m.a * (this.x + this.width) + m.c * (this.y + this.height);
		ty = m.b * (this.x + this.width) + m.d * (this.y + this.height);
		if(tx < tx0) tx0 = tx;
		if(ty < ty0) ty0 = ty;
		if(tx > tx1) tx1 = tx;
		if(ty > ty1) ty1 = ty;
		tx = m.a * this.x + m.c * (this.y + this.height);
		ty = m.b * this.x + m.d * (this.y + this.height);
		if(tx < tx0) tx0 = tx;
		if(ty < ty0) ty0 = ty;
		if(tx > tx1) tx1 = tx;
		if(ty > ty1) ty1 = ty;
		return new openfl_geom_Rectangle(tx0 + m.tx,ty0 + m.ty,tx1 - tx0,ty1 - ty0);
	}
	,__expand: function(x,y,width,height) {
		if(this.width == 0 && this.height == 0) {
			this.x = x;
			this.y = y;
			this.width = width;
			this.height = height;
			return;
		}
		var cacheRight = this.get_right();
		var cacheBottom = this.get_bottom();
		if(this.x > x) {
			this.x = x;
			this.width = cacheRight - x;
		}
		if(this.y > y) {
			this.y = y;
			this.height = cacheBottom - y;
		}
		if(cacheRight < x + width) this.width = x + width - this.x;
		if(cacheBottom < y + height) this.height = y + height - this.y;
	}
	,get_bottom: function() {
		return this.y + this.height;
	}
	,get_left: function() {
		return this.x;
	}
	,get_right: function() {
		return this.x + this.width;
	}
	,get_top: function() {
		return this.y;
	}
	,__class__: openfl_geom_Rectangle
	,__properties__: {get_top:"get_top",get_right:"get_right",get_left:"get_left",get_bottom:"get_bottom"}
};
var openfl_geom_Point = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
};
$hxClasses["openfl.geom.Point"] = openfl_geom_Point;
openfl_geom_Point.__name__ = true;
openfl_geom_Point.prototype = {
	setTo: function(xa,ya) {
		this.x = xa;
		this.y = ya;
	}
	,__class__: openfl_geom_Point
};
var openfl__$internal_renderer_opengl_utils_GraphicsRenderer = function() { };
$hxClasses["openfl._internal.renderer.opengl.utils.GraphicsRenderer"] = openfl__$internal_renderer_opengl_utils_GraphicsRenderer;
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.__name__ = true;
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.overrideMatrix = null;
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildCircle = function(path,glStack,localCoords) {
	if(localCoords == null) localCoords = false;
	var rectData = path.points;
	var x = rectData[0];
	var y = rectData[1];
	var width = rectData[2];
	var height;
	if(rectData.length == 3) height = width; else height = rectData[3];
	if(path.type == openfl__$internal_renderer_opengl_utils_GraphicType.Ellipse) {
		width /= 2;
		height /= 2;
		x += width;
		y += height;
	}
	if(localCoords) {
		x -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
		y -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
	}
	var totalSegs = 40;
	var seg = Math.PI * 2 / totalSegs;
	var bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket(path,glStack);
	var fill = bucket.getData(openfl__$internal_renderer_opengl_utils_BucketDataType.Fill);
	if(fill != null) {
		var verts = fill.verts;
		var indices = fill.indices;
		var vertPos = verts.length / 2 | 0;
		indices.push(vertPos);
		var _g1 = 0;
		var _g = totalSegs + 1;
		while(_g1 < _g) {
			var i = _g1++;
			verts.push(x);
			verts.push(y);
			verts.push(x + Math.sin(seg * i) * width);
			verts.push(y + Math.cos(seg * i) * height);
			indices.push(vertPos++);
			indices.push(vertPos++);
		}
		indices.push(vertPos - 1);
	}
	if(path.line.width > 0) {
		var tempPoints = path.points;
		path.points = [];
		var _g11 = 0;
		var _g2 = totalSegs + 1;
		while(_g11 < _g2) {
			var i1 = _g11++;
			path.points.push(x + Math.sin(seg * i1) * width);
			path.points.push(y + Math.cos(seg * i1) * height);
		}
		openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildLine(path,bucket);
		path.points = tempPoints;
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildComplexPoly = function(path,glStack,localCoords) {
	if(localCoords == null) localCoords = false;
	var bucket = null;
	if(path.points.length >= 6) {
		var points = path.points.slice();
		if(localCoords) {
			var _g1 = 0;
			var _g = points.length / 2 | 0;
			while(_g1 < _g) {
				var i = _g1++;
				points[i * 2] -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
				points[i * 2 + 1] -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
			}
		}
		bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket(path,glStack);
		var fill = bucket.getData(openfl__$internal_renderer_opengl_utils_BucketDataType.Fill);
		fill.drawMode = glStack.gl.TRIANGLE_FAN;
		fill.verts = points;
		var indices = fill.indices;
		var length = points.length / 2 | 0;
		var _g2 = 0;
		while(_g2 < length) {
			var i1 = _g2++;
			indices.push(i1);
		}
	}
	if(path.line.width > 0) {
		if(bucket == null) bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket(path,glStack);
		openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildLine(path,bucket,localCoords);
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildLine = function(path,bucket,localCoords) {
	if(localCoords == null) localCoords = false;
	var points = path.points;
	if(points.length == 0) return;
	var line = bucket.getData(openfl__$internal_renderer_opengl_utils_BucketDataType.Line);
	if(localCoords) {
		var _g1 = 0;
		var _g = points.length / 2 | 0;
		while(_g1 < _g) {
			var i = _g1++;
			points[i * 2] -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
			points[i * 2 + 1] -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
		}
	}
	var firstPoint = new openfl_geom_Point(points[0],points[1]);
	var lastPoint = new openfl_geom_Point(points[points.length - 2 | 0],points[points.length - 1 | 0]);
	if(firstPoint.x == lastPoint.x && firstPoint.y == lastPoint.y) {
		points = points.slice();
		points.pop();
		points.pop();
		lastPoint = new openfl_geom_Point(points[points.length - 2 | 0],points[points.length - 1 | 0]);
		var midPointX = lastPoint.x + (firstPoint.x - lastPoint.x) * 0.5;
		var midPointY = lastPoint.y + (firstPoint.y - lastPoint.y) * 0.5;
		points.unshift(midPointY);
		points.unshift(midPointX);
		points.push(midPointX);
		points.push(midPointY);
	}
	var verts = line.verts;
	var indices = line.indices;
	var length = points.length / 2 | 0;
	var indexCount = points.length;
	var indexStart = verts.length / 6 | 0;
	var width = path.line.width / 2;
	var color = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.hex2rgb(path.line.color);
	var alpha = path.line.alpha;
	var r = color[0];
	var g = color[1];
	var b = color[2];
	var px;
	var py;
	var p1x;
	var p1y;
	var p2x;
	var p2y;
	var p3x;
	var p3y;
	var perpx;
	var perpy;
	var perp2x;
	var perp2y;
	var perp3x;
	var perp3y;
	var a1;
	var b1;
	var c1;
	var a2;
	var b2;
	var c2;
	var denom;
	var pdist;
	var dist;
	p1x = points[0];
	p1y = points[1];
	p2x = points[2];
	p2y = points[3];
	perpx = -(p1y - p2y);
	perpy = p1x - p2x;
	dist = Math.sqrt(Math.abs(perpx * perpx + perpy * perpy));
	perpx = perpx / dist;
	perpy = perpy / dist;
	perpx = perpx * width;
	perpy = perpy * width;
	verts.push(p1x - perpx);
	verts.push(p1y - perpy);
	verts.push(r);
	verts.push(g);
	verts.push(b);
	verts.push(alpha);
	verts.push(p1x + perpx);
	verts.push(p1y + perpy);
	verts.push(r);
	verts.push(g);
	verts.push(b);
	verts.push(alpha);
	var _g11 = 1;
	var _g2 = length - 1;
	while(_g11 < _g2) {
		var i1 = _g11++;
		p1x = points[(i1 - 1) * 2];
		p1y = points[(i1 - 1) * 2 + 1];
		p2x = points[i1 * 2];
		p2y = points[i1 * 2 + 1];
		p3x = points[(i1 + 1) * 2];
		p3y = points[(i1 + 1) * 2 + 1];
		perpx = -(p1y - p2y);
		perpy = p1x - p2x;
		dist = Math.sqrt(Math.abs(perpx * perpx + perpy * perpy));
		perpx = perpx / dist;
		perpy = perpy / dist;
		perpx = perpx * width;
		perpy = perpy * width;
		perp2x = -(p2y - p3y);
		perp2y = p2x - p3x;
		dist = Math.sqrt(Math.abs(perp2x * perp2x + perp2y * perp2y));
		perp2x = perp2x / dist;
		perp2y = perp2y / dist;
		perp2x = perp2x * width;
		perp2y = perp2y * width;
		a1 = -perpy + p1y - (-perpy + p2y);
		b1 = -perpx + p2x - (-perpx + p1x);
		c1 = (-perpx + p1x) * (-perpy + p2y) - (-perpx + p2x) * (-perpy + p1y);
		a2 = -perp2y + p3y - (-perp2y + p2y);
		b2 = -perp2x + p2x - (-perp2x + p3x);
		c2 = (-perp2x + p3x) * (-perp2y + p2y) - (-perp2x + p2x) * (-perp2y + p3y);
		denom = a1 * b2 - a2 * b1;
		if(Math.abs(denom) < 0.1) {
			denom += 10.1;
			verts.push(p2x - perpx);
			verts.push(p2y - perpy);
			verts.push(r);
			verts.push(g);
			verts.push(b);
			verts.push(alpha);
			verts.push(p2x + perpx);
			verts.push(p2y + perpy);
			verts.push(r);
			verts.push(g);
			verts.push(b);
			verts.push(alpha);
			continue;
		}
		px = (b1 * c2 - b2 * c1) / denom;
		py = (a2 * c1 - a1 * c2) / denom;
		pdist = (px - p2x) * (px - p2x) + (py - p2y) + (py - p2y);
		if(pdist > 19600) {
			perp3x = perpx - perp2x;
			perp3y = perpy - perp2y;
			dist = Math.sqrt(Math.abs(perp3x * perp3x + perp3y * perp3y));
			perp3x = perp3x / dist;
			perp3y = perp3y / dist;
			perp3x = perp3x * width;
			perp3y = perp3y * width;
			verts.push(p2x - perp3x);
			verts.push(p2y - perp3y);
			verts.push(r);
			verts.push(g);
			verts.push(b);
			verts.push(alpha);
			verts.push(p2x + perp3x);
			verts.push(p2y + perp3y);
			verts.push(r);
			verts.push(g);
			verts.push(b);
			verts.push(alpha);
			verts.push(p2x - perp3x);
			verts.push(p2y - perp3y);
			verts.push(r);
			verts.push(g);
			verts.push(b);
			verts.push(alpha);
			indexCount++;
		} else {
			verts.push(px);
			verts.push(py);
			verts.push(r);
			verts.push(g);
			verts.push(b);
			verts.push(alpha);
			verts.push(p2x - (px - p2x));
			verts.push(p2y - (py - p2y));
			verts.push(r);
			verts.push(g);
			verts.push(b);
			verts.push(alpha);
		}
	}
	p1x = points[(length - 2) * 2];
	p1y = points[(length - 2) * 2 + 1];
	p2x = points[(length - 1) * 2];
	p2y = points[(length - 1) * 2 + 1];
	perpx = -(p1y - p2y);
	perpy = p1x - p2x;
	dist = Math.sqrt(Math.abs(perpx * perpx + perpy * perpy));
	if(!isFinite(dist)) console.log(perpx * perpx + perpy * perpy);
	perpx = perpx / dist;
	perpy = perpy / dist;
	perpx = perpx * width;
	perpy = perpy * width;
	verts.push(p2x - perpx);
	verts.push(p2y - perpy);
	verts.push(r);
	verts.push(g);
	verts.push(b);
	verts.push(alpha);
	verts.push(p2x + perpx);
	verts.push(p2y + perpy);
	verts.push(r);
	verts.push(g);
	verts.push(b);
	verts.push(alpha);
	indices.push(indexStart);
	var _g3 = 0;
	while(_g3 < indexCount) {
		var i2 = _g3++;
		indices.push(indexStart++);
	}
	indices.push(indexStart - 1);
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildRectangle = function(path,glStack,localCoords) {
	if(localCoords == null) localCoords = false;
	var rectData = path.points;
	var x = rectData[0];
	var y = rectData[1];
	var width = rectData[2];
	var height = rectData[3];
	if(localCoords) {
		x -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
		y -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
	}
	var bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket(path,glStack);
	var fill = bucket.getData(openfl__$internal_renderer_opengl_utils_BucketDataType.Fill);
	if(fill != null) {
		var verts = fill.verts;
		var indices = fill.indices;
		var vertPos = verts.length / 2 | 0;
		verts.push(x);
		verts.push(y);
		verts.push(x + width);
		verts.push(y);
		verts.push(x);
		verts.push(y + height);
		verts.push(x + width);
		verts.push(y + height);
		indices.push(vertPos);
		indices.push(vertPos);
		indices.push(vertPos + 1);
		indices.push(vertPos + 2);
		indices.push(vertPos + 3);
		indices.push(vertPos + 3);
	}
	if(path.line.width > 0) {
		var tempPoints = path.points;
		path.points = [x,y,x + width,y,x + width,y + height,x,y + height,x,y];
		openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildLine(path,bucket);
		path.points = tempPoints;
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildRoundedRectangle = function(path,glStack,localCoords) {
	if(localCoords == null) localCoords = false;
	var points = path.points.slice();
	var x = points[0];
	var y = points[1];
	var width = points[2];
	var height = points[3];
	var rx = points[4];
	var ry = points[5];
	if(localCoords) {
		x -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
		y -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
	}
	var xe = x + width;
	var ye = y + height;
	var cx1 = -rx + rx * openfl__$internal_renderer_opengl_utils_GraphicsRenderer.SIN45;
	var cx2 = -rx + rx * openfl__$internal_renderer_opengl_utils_GraphicsRenderer.TAN22;
	var cy1 = -ry + ry * openfl__$internal_renderer_opengl_utils_GraphicsRenderer.SIN45;
	var cy2 = -ry + ry * openfl__$internal_renderer_opengl_utils_GraphicsRenderer.TAN22;
	var recPoints = [];
	recPoints.push(xe);
	recPoints.push(ye - ry);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,xe,ye + cy2,xe + cx1,ye + cy1);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,xe + cx2,ye,xe - rx,ye);
	recPoints.push(x + rx);
	recPoints.push(ye);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,x - cx2,ye,x - cx1,ye + cy1);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,x,ye + cy2,x,ye - ry);
	recPoints.push(x);
	recPoints.push(y + ry);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,x,y - cy2,x - cx1,y - cy1);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,x - cx2,y,x + rx,y);
	recPoints.push(xe - rx);
	recPoints.push(y);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,xe + cx2,y,xe + cx1,y - cy1);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo(recPoints,xe,y - cy2,xe,y + ry);
	recPoints.push(xe);
	recPoints.push(ye - ry);
	var bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket(path,glStack);
	var fill = bucket.getData(openfl__$internal_renderer_opengl_utils_BucketDataType.Fill);
	if(fill != null) {
		var verts = fill.verts;
		var indices = fill.indices;
		var vecPos = verts.length / 2;
		var triangles = openfl__$internal_renderer_opengl_utils_PolyK.triangulate(recPoints);
		var i = 0;
		while(i < triangles.length) {
			indices.push(triangles[i] + vecPos | 0);
			indices.push(triangles[i] + vecPos | 0);
			indices.push(triangles[i + 1] + vecPos | 0);
			indices.push(triangles[i + 2] + vecPos | 0);
			indices.push(triangles[i + 2] + vecPos | 0);
			i += 3;
		}
		i = 0;
		while(i < recPoints.length) {
			verts.push(recPoints[i]);
			verts.push(recPoints[++i]);
			i++;
		}
	}
	if(path.line.width > 0) {
		var tempPoints = path.points;
		path.points = recPoints;
		openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildLine(path,bucket);
		path.points = tempPoints;
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildDrawTriangles = function(path,object,glStack,localCoords) {
	if(localCoords == null) localCoords = false;
	var args = path.type.slice(2);
	var vertices = args[0];
	var indices = args[1];
	var uvtData = args[2];
	var culling = args[3];
	var colors = args[4];
	var blendMode = args[5];
	var a;
	var b;
	var c;
	var d;
	var tx;
	var ty;
	if(localCoords) {
		a = 1.0;
		b = 0.0;
		c = 0.0;
		d = 1.0;
		tx = 0.0;
		ty = 0.0;
	} else {
		a = object.__worldTransform.a;
		b = object.__worldTransform.b;
		c = object.__worldTransform.c;
		d = object.__worldTransform.d;
		tx = object.__worldTransform.tx;
		ty = object.__worldTransform.ty;
	}
	var hasColors = colors != null && colors.length > 0;
	var bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket(path,glStack);
	var fill = bucket.getData(openfl__$internal_renderer_opengl_utils_BucketDataType.Fill);
	var colorAttrib = fill.vertexArray.attributes[2];
	colorAttrib.enabled = hasColors;
	colorAttrib.defaultValue = new Float32Array([1,1,1,1]);
	fill.rawVerts = true;
	fill.glLength = indices.length;
	fill.stride = Std["int"](fill.vertexArray.get_stride() / 4);
	var vertsLength = fill.glLength * fill.stride;
	var verts;
	if(fill.glVerts == null || fill.glVerts.length < vertsLength) {
		verts = new Float32Array(vertsLength);
		fill.glVerts = verts;
	} else verts = fill.glVerts;
	var glColors = new Uint32Array(verts.buffer);
	var v0 = 0;
	var v1 = 0;
	var v2 = 0;
	var i0 = 0;
	var i1 = 0;
	var i2 = 0;
	var x0 = 0.0;
	var y0 = 0.0;
	var x1 = 0.0;
	var y1 = 0.0;
	var x2 = 0.0;
	var y2 = 0.0;
	var idx = 0;
	var _g1 = 0;
	var _g = indices.length / 3 | 0;
	while(_g1 < _g) {
		var i = _g1++;
		i0 = indices.data[i * 3];
		i1 = indices.data[i * 3 + 1];
		i2 = indices.data[i * 3 + 2];
		v0 = i0 * 2;
		v1 = i1 * 2;
		v2 = i2 * 2;
		x0 = vertices.data[v0];
		y0 = vertices.data[v0 + 1];
		x1 = vertices.data[v1];
		y1 = vertices.data[v1 + 1];
		x2 = vertices.data[v2];
		y2 = vertices.data[v2 + 1];
		if(localCoords) {
			x0 -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
			y0 -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
			x1 -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
			y1 -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
			x2 -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.x;
			y2 -= openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.y;
		}
		switch(culling[1]) {
		case 2:
			if(!((x1 - x0) * (y2 - y0) - (y1 - y0) * (x2 - x0) < 0)) continue;
			break;
		case 0:
			if((x1 - x0) * (y2 - y0) - (y1 - y0) * (x2 - x0) < 0) continue;
			break;
		default:
		}
		verts[idx++] = a * x0 + c * y0 + tx;
		verts[idx++] = b * x0 + d * y0 + ty;
		verts[idx++] = uvtData.data[v0];
		verts[idx++] = uvtData.data[v0 + 1];
		if(hasColors) glColors[idx++] = colors.data[i0];
		verts[idx++] = a * x1 + c * y1 + tx;
		verts[idx++] = b * x1 + d * y1 + ty;
		verts[idx++] = uvtData.data[v1];
		verts[idx++] = uvtData.data[v1 + 1];
		if(hasColors) glColors[idx++] = colors.data[i1];
		verts[idx++] = a * x2 + c * y2 + tx;
		verts[idx++] = b * x2 + d * y2 + ty;
		verts[idx++] = uvtData.data[v2];
		verts[idx++] = uvtData.data[v2 + 1];
		if(hasColors) glColors[idx++] = colors.data[i2];
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.curveTo = function(points,cx,cy,x,y) {
	var xa = 0;
	var ya = 0;
	var n = 20;
	var fromX = points[points.length - 2];
	var fromY = points[points.length - 1];
	var px = 0;
	var py = 0;
	var tmp = 0;
	var _g1 = 1;
	var _g = n + 1;
	while(_g1 < _g) {
		var i = _g1++;
		tmp = i / n;
		xa = fromX + (cx - fromX) * tmp;
		ya = fromY + (cy - fromY) * tmp;
		px = xa + (cx + (x - cx) * tmp - xa) * tmp;
		py = ya + (cy + (y - cy) * tmp - ya) * tmp;
		points.push(px);
		points.push(py);
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.render = function(object,renderSession) {
	var graphics = object.__graphics;
	var spritebatch = renderSession.spriteBatch;
	var dirty = graphics.__dirty;
	if(graphics.__commands.length <= 0) return;
	if(dirty) openfl__$internal_renderer_opengl_utils_GraphicsRenderer.updateGraphics(object,object.__graphics,renderSession.gl,object.cacheAsBitmap);
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.renderGraphics(object,renderSession,false);
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.renderGraphics = function(object,renderSession,localCoords) {
	if(localCoords == null) localCoords = false;
	var graphics = object.__graphics;
	var gl = renderSession.gl;
	var glStack = graphics.__glStack[openfl__$internal_renderer_opengl_GLRenderer.glContextId];
	var bucket;
	var translationMatrix;
	if(localCoords) translationMatrix = openfl_geom_Matrix.__identity; else translationMatrix = object.__worldTransform;
	var clipRect = renderSession.spriteBatch.clipRect;
	var batchDrawing = renderSession.spriteBatch.drawing;
	batchDrawing = renderSession.spriteBatch.drawing;
	var _g1 = 0;
	var _g = glStack.buckets.length;
	while(_g1 < _g) {
		var i = _g1++;
		batchDrawing = renderSession.spriteBatch.drawing;
		if(batchDrawing && !localCoords) renderSession.spriteBatch.finish();
		renderSession.blendModeManager.setBlendMode(object.__blendMode);
		if(clipRect != null) {
			gl.enable(gl.SCISSOR_TEST);
			gl.scissor(Math.floor(clipRect.x),Math.floor(clipRect.y),Math.floor(clipRect.width),Math.floor(clipRect.height));
		}
		bucket = glStack.buckets[i];
		var _g2 = bucket.mode;
		switch(_g2[1]) {
		case 1:case 2:
			renderSession.stencilManager.pushBucket(bucket,renderSession,translationMatrix.toArray(true));
			var shader = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareShader(bucket,renderSession,object,translationMatrix.toArray(true));
			openfl__$internal_renderer_opengl_utils_GraphicsRenderer.renderFill(bucket,shader,renderSession);
			renderSession.stencilManager.popBucket(object,bucket,renderSession);
			break;
		case 5:
			var shader1 = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareShader(bucket,renderSession,object,null);
			openfl__$internal_renderer_opengl_utils_GraphicsRenderer.renderDrawTriangles(bucket,shader1,renderSession);
			break;
		case 6:
			if(!batchDrawing) renderSession.spriteBatch.begin(renderSession,clipRect);
			var args = bucket.graphicType.slice(2);
			renderSession.spriteBatch.renderTiles(object,args[0],args[1],args[2],args[3],args[4]);
			renderSession.spriteBatch.finish();
			break;
		default:
		}
		var ct = object.__worldColorTransform;
		var _g21 = 0;
		var _g3 = bucket.lines;
		while(_g21 < _g3.length) {
			var line = _g3[_g21];
			++_g21;
			if(line != null && line.verts.length > 0) {
				var shader2 = renderSession.shaderManager.primitiveShader;
				renderSession.shaderManager.setShader(shader2);
				gl.uniformMatrix3fv(shader2.getUniformLocation("uTranslationMatrix"),false,translationMatrix.toArray(true));
				gl.uniformMatrix3fv(shader2.getUniformLocation("uProjectionMatrix"),false,renderSession.projectionMatrix.toArray(true));
				gl.uniform1f(shader2.getUniformLocation("uAlpha"),1);
				gl.uniform4f(shader2.getUniformLocation("uColorMultiplier"),ct.redMultiplier,ct.greenMultiplier,ct.blueMultiplier,ct.alphaMultiplier);
				gl.uniform4f(shader2.getUniformLocation("uColorOffset"),ct.redOffset / 255,ct.greenOffset / 255,ct.blueOffset / 255,ct.alphaOffset / 255);
				line.vertexArray.bind();
				shader2.bindVertexArray(line.vertexArray);
				gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER,line.indexBuffer);
				gl.drawElements(gl.TRIANGLE_STRIP,line.indices.length,gl.UNSIGNED_SHORT,0);
			}
		}
		if(clipRect != null) gl.disable(gl.SCISSOR_TEST);
		batchDrawing = renderSession.spriteBatch.drawing;
		if(!batchDrawing && !localCoords) renderSession.spriteBatch.begin(renderSession,clipRect);
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.updateGraphics = function(object,graphics,gl,localCoords) {
	if(localCoords == null) localCoords = false;
	openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectPosition.setTo(object.get_x(),object.get_y());
	if(graphics.__bounds == null) openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds = new openfl_geom_Rectangle(); else openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.copyFrom(graphics.__bounds);
	var glStack = null;
	if(graphics.__dirty) glStack = openfl__$internal_renderer_opengl_utils_DrawPath.getStack(graphics,gl);
	graphics.set___dirty(false);
	var _g = 0;
	var _g1 = glStack.buckets;
	while(_g < _g1.length) {
		var data = _g1[_g];
		++_g;
		data.reset();
		openfl__$internal_renderer_opengl_utils_GraphicsRenderer.bucketPool.push(data);
	}
	glStack.reset();
	var _g11 = glStack.lastIndex;
	var _g2 = graphics.__drawPaths.length;
	while(_g11 < _g2) {
		var i = _g11++;
		var path = graphics.__drawPaths[i];
		{
			var _g21 = path.type;
			switch(_g21[1]) {
			case 0:
				openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildComplexPoly(path,glStack,localCoords);
				break;
			case 1:
				var rounded = _g21[2];
				if(rounded) openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildRoundedRectangle(path,glStack,localCoords); else openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildRectangle(path,glStack,localCoords);
				break;
			case 2:case 3:
				openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildCircle(path,glStack,localCoords);
				break;
			case 4:
				openfl__$internal_renderer_opengl_utils_GraphicsRenderer.buildDrawTriangles(path,object,glStack,localCoords);
				break;
			case 5:
				openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket(path,glStack);
				break;
			case 6:
				var m = _g21[2];
				openfl__$internal_renderer_opengl_utils_GraphicsRenderer.overrideMatrix = m;
				break;
			}
		}
		glStack.lastIndex++;
	}
	var _g3 = 0;
	var _g12 = glStack.buckets;
	while(_g3 < _g12.length) {
		var bucket = _g12[_g3];
		++_g3;
		if(bucket.uploadTileBuffer) bucket.uploadTile(Math.ceil(openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.get_left()),Math.ceil(openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.get_top()),Math.floor(openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.get_right()),Math.floor(openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds.get_bottom()));
		bucket.optimize();
	}
	glStack.upload();
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareBucket = function(path,glStack) {
	var bucket = null;
	{
		var _g = path.fill;
		switch(_g[1]) {
		case 1:
			var a = _g[3];
			var c = _g[2];
			bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.switchBucket(path.fillIndex,glStack,openfl__$internal_renderer_opengl_utils_BucketMode.Fill);
			if(c == null) bucket.color = [1,1,1]; else bucket.color = [(c >> 16 & 255) / 255,(c >> 8 & 255) / 255,(c & 255) / 255];
			bucket.color[3] = a;
			bucket.uploadTileBuffer = true;
			break;
		case 2:
			var s = _g[5];
			var r = _g[4];
			var m = _g[3];
			var b = _g[2];
			bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.switchBucket(path.fillIndex,glStack,openfl__$internal_renderer_opengl_utils_BucketMode.PatternFill);
			bucket.bitmap = b;
			bucket.textureRepeat = r;
			bucket.textureSmooth = s;
			bucket.texture = b.getTexture(glStack.gl);
			bucket.uploadTileBuffer = true;
			var pMatrix;
			if(m == null) pMatrix = new openfl_geom_Matrix(); else pMatrix = new openfl_geom_Matrix(m.a,m.b,m.c,m.d,m.tx,m.ty);
			pMatrix.invert();
			pMatrix.scale(1 / b.width,1 / b.height);
			var tx = pMatrix.tx;
			var ty = pMatrix.ty;
			pMatrix.tx = 0;
			pMatrix.ty = 0;
			bucket.textureTL.x = tx;
			bucket.textureTL.y = ty;
			bucket.textureBR.x = tx + 1;
			bucket.textureBR.y = ty + 1;
			bucket.textureMatrix = pMatrix;
			break;
		default:
			bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.switchBucket(path.fillIndex,glStack,openfl__$internal_renderer_opengl_utils_BucketMode.Line);
			bucket.uploadTileBuffer = false;
		}
	}
	{
		var _g1 = path.type;
		switch(_g1[1]) {
		case 4:
			bucket.mode = openfl__$internal_renderer_opengl_utils_BucketMode.DrawTriangles;
			bucket.uploadTileBuffer = false;
			break;
		case 5:
			bucket.mode = openfl__$internal_renderer_opengl_utils_BucketMode.DrawTiles;
			bucket.uploadTileBuffer = false;
			break;
		default:
		}
	}
	bucket.graphicType = path.type;
	bucket.overrideMatrix = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.overrideMatrix;
	return bucket;
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.getBucket = function(glStack,mode) {
	var b = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.bucketPool.pop();
	if(b == null) b = new openfl__$internal_renderer_opengl_utils_GLBucket(glStack.gl);
	b.mode = mode;
	glStack.buckets.push(b);
	return b;
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.switchBucket = function(fillIndex,glStack,mode) {
	var bucket = null;
	var _g = 0;
	var _g1 = glStack.buckets;
	while(_g < _g1.length) {
		var b = _g1[_g];
		++_g;
		if(b.fillIndex == fillIndex) {
			bucket = b;
			break;
		}
	}
	if(bucket == null) bucket = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.getBucket(glStack,mode);
	bucket.dirty = true;
	bucket.fillIndex = fillIndex;
	return bucket;
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.prepareShader = function(bucket,renderSession,object,translationMatrix) {
	var gl = renderSession.gl;
	var shader = null;
	var _g = bucket.mode;
	switch(_g[1]) {
	case 1:
		shader = renderSession.shaderManager.fillShader;
		break;
	case 2:
		shader = renderSession.shaderManager.patternFillShader;
		break;
	case 5:
		shader = renderSession.shaderManager.drawTrianglesShader;
		break;
	default:
		shader = null;
	}
	if(shader == null) return null;
	var newShader = renderSession.shaderManager.setShader(shader);
	gl.uniform1f(shader.getUniformLocation("uAlpha"),object.__worldAlpha);
	gl.uniformMatrix3fv(shader.getUniformLocation("uProjectionMatrix"),false,renderSession.projectionMatrix.toArray(true));
	var ct = object.__worldColorTransform;
	gl.uniform4f(shader.getUniformLocation("uColorMultiplier"),ct.redMultiplier,ct.greenMultiplier,ct.blueMultiplier,ct.alphaMultiplier);
	gl.uniform4f(shader.getUniformLocation("uColorOffset"),ct.redOffset / 255,ct.greenOffset / 255,ct.blueOffset / 255,ct.alphaOffset / 255);
	var _g1 = bucket.mode;
	switch(_g1[1]) {
	case 1:
		gl.uniformMatrix3fv(shader.getUniformLocation("uTranslationMatrix"),false,translationMatrix);
		gl.uniform4fv(shader.getUniformLocation("uColor"),new Float32Array(bucket.color));
		break;
	case 2:
		gl.uniformMatrix3fv(shader.getUniformLocation("uTranslationMatrix"),false,translationMatrix);
		gl.uniform2f(shader.getUniformLocation("uPatternTL"),bucket.textureTL.x,bucket.textureTL.y);
		gl.uniform2f(shader.getUniformLocation("uPatternBR"),bucket.textureBR.x,bucket.textureBR.y);
		gl.uniformMatrix3fv(shader.getUniformLocation("uPatternMatrix"),false,bucket.textureMatrix.toArray(true));
		break;
	case 5:
		if(bucket.texture != null) gl.uniform1i(shader.getUniformLocation("uUseTexture"),1); else {
			gl.uniform1i(shader.getUniformLocation("uUseTexture"),0);
			gl.uniform4fv(shader.getUniformLocation("uColor"),new Float32Array(bucket.color));
		}
		break;
	default:
	}
	return shader;
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.renderFill = function(bucket,shader,renderSession) {
	var gl = renderSession.gl;
	if(bucket.mode == openfl__$internal_renderer_opengl_utils_BucketMode.PatternFill && bucket.texture != null) openfl__$internal_renderer_opengl_utils_GraphicsRenderer.bindTexture(gl,bucket);
	gl.bindBuffer(gl.ARRAY_BUFFER,bucket.tileBuffer);
	gl.vertexAttribPointer(shader.getAttribLocation("aPosition"),4,gl.SHORT,false,0,0);
	gl.drawArrays(gl.TRIANGLE_STRIP,0,4);
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.renderDrawTriangles = function(bucket,shader,renderSession) {
	var gl = renderSession.gl;
	var _g = 0;
	var _g1 = bucket.fills;
	while(_g < _g1.length) {
		var fill = _g1[_g];
		++_g;
		if(fill.available) continue;
		openfl__$internal_renderer_opengl_utils_GraphicsRenderer.bindTexture(gl,bucket);
		fill.vertexArray.bind();
		shader.bindVertexArray(fill.vertexArray);
		gl.drawArrays(gl.TRIANGLES,fill.glStart,fill.glLength);
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.bindTexture = function(gl,bucket) {
	gl.bindTexture(gl.TEXTURE_2D,bucket.texture);
	if(bucket.textureRepeat && bucket.bitmap.__image.get_powerOfTwo()) {
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_WRAP_S,gl.REPEAT);
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_WRAP_T,gl.REPEAT);
	} else {
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_WRAP_S,gl.CLAMP_TO_EDGE);
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_WRAP_T,gl.CLAMP_TO_EDGE);
	}
	if(bucket.textureSmooth) {
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_MAG_FILTER,gl.LINEAR);
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_MIN_FILTER,gl.LINEAR);
	} else {
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_MAG_FILTER,gl.NEAREST);
		gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_MIN_FILTER,gl.NEAREST);
	}
};
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.hex2rgb = function(hex) {
	if(hex == null) return [1,1,1]; else return [(hex >> 16 & 255) / 255,(hex >> 8 & 255) / 255,(hex & 255) / 255];
};
var openfl__$internal_renderer_opengl_utils_GLStack = function(gl) {
	this.lastIndex = 0;
	this.gl = gl;
	this.buckets = [];
	this.lastIndex = 0;
};
$hxClasses["openfl._internal.renderer.opengl.utils.GLStack"] = openfl__$internal_renderer_opengl_utils_GLStack;
openfl__$internal_renderer_opengl_utils_GLStack.__name__ = true;
openfl__$internal_renderer_opengl_utils_GLStack.prototype = {
	reset: function() {
		this.buckets = [];
		this.lastIndex = 0;
	}
	,upload: function() {
		var _g = 0;
		var _g1 = this.buckets;
		while(_g < _g1.length) {
			var bucket = _g1[_g];
			++_g;
			if(bucket.dirty) bucket.upload();
		}
	}
	,__class__: openfl__$internal_renderer_opengl_utils_GLStack
};
var openfl__$internal_renderer_opengl_utils_GLBucket = function(gl) {
	this.uploadTileBuffer = true;
	this.textureSmooth = true;
	this.textureRepeat = false;
	this.lines = [];
	this.fills = [];
	this.fillIndex = -1;
	this.gl = gl;
	this.color = [0,0,0];
	this.lastIndex = 0;
	this.alpha = 1;
	this.dirty = true;
	this.mode = openfl__$internal_renderer_opengl_utils_BucketMode.Fill;
	this.textureMatrix = new openfl_geom_Matrix();
	this.textureTL = new openfl_geom_Point();
	this.textureBR = new openfl_geom_Point(1,1);
};
$hxClasses["openfl._internal.renderer.opengl.utils.GLBucket"] = openfl__$internal_renderer_opengl_utils_GLBucket;
openfl__$internal_renderer_opengl_utils_GLBucket.__name__ = true;
openfl__$internal_renderer_opengl_utils_GLBucket.prototype = {
	getData: function(type) {
		var data;
		switch(type[1]) {
		case 1:
			data = this.fills;
			break;
		default:
			data = this.lines;
		}
		var result = null;
		var remove = false;
		var _g = 0;
		while(_g < data.length) {
			var d = data[_g];
			++_g;
			if(d.available) {
				result = d;
				remove = true;
				break;
			}
		}
		if(result == null) result = new openfl__$internal_renderer_opengl_utils_GLBucketData(this.gl);
		result.available = false;
		result.parent = this;
		result.type = type;
		if(remove) HxOverrides.remove(data,result);
		data.push(result);
		switch(type[1]) {
		case 1:
			var _g1 = this.mode;
			switch(_g1[1]) {
			case 1:case 2:
				result.vertexArray.attributes = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.fillVertexAttributes;
				break;
			case 5:
				result.vertexArray.attributes = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.drawTrianglesVertexAttributes.slice();
				result.vertexArray.attributes[2] = result.vertexArray.attributes[2].copy();
				break;
			default:
			}
			break;
		case 0:
			result.vertexArray.attributes = openfl__$internal_renderer_opengl_utils_GraphicsRenderer.primitiveVertexAttributes;
			break;
		}
		return result;
	}
	,optimize: function() {
		var _g = this;
		var data = this.lines;
		if(data.length > 1) {
			var result = [];
			var tmp = null;
			var last = null;
			var idx = 0;
			var vi = 0;
			var ii = 0;
			var before = data.length;
			var _g1 = 0;
			while(_g1 < data.length) {
				var d = data[_g1];
				++_g1;
				if(d.available || d.rawVerts || d.rawIndices) {
					if(tmp != null) {
						result.push(tmp);
						tmp = null;
					}
					result.push(d);
					last = d;
					continue;
				}
				if(last == null || last.drawMode == d.drawMode) {
					if(tmp == null) tmp = d; else {
						vi = tmp.verts.length;
						ii = tmp.indices.length;
						var _g2 = 0;
						var _g11 = d.verts.length;
						while(_g2 < _g11) {
							var j = _g2++;
							tmp.verts[j + vi] = d.verts[j];
						}
						var _g21 = 0;
						var _g12 = d.indices.length;
						while(_g21 < _g12) {
							var j1 = _g21++;
							tmp.indices[j1 + ii] = d.indices[j1] + idx;
						}
					}
					idx = tmp.indices[tmp.indices.length - 1] + 1;
					last = d;
				} else {
					if(tmp != null) {
						result.push(tmp);
						tmp = null;
					}
					result.push(d);
					last = d;
					continue;
				}
			}
			if(result.length == 0 && tmp != null) result.push(tmp);
			if(result.length > 0) switch(openfl__$internal_renderer_opengl_utils_BucketDataType.Line[1]) {
			case 1:
				_g.fills = result;
				break;
			default:
				_g.lines = result;
			}
		}
	}
	,reset: function() {
		var _g = 0;
		var _g1 = this.fills;
		while(_g < _g1.length) {
			var fill = _g1[_g];
			++_g;
			fill.reset();
		}
		var _g2 = 0;
		var _g11 = this.lines;
		while(_g2 < _g11.length) {
			var line = _g11[_g2];
			++_g2;
			line.reset();
		}
		this.fillIndex = -1;
		this.uploadTileBuffer = true;
		this.graphicType = openfl__$internal_renderer_opengl_utils_GraphicType.Polygon;
	}
	,uploadTile: function(x,y,w,h) {
		if(this.tileBuffer == null) this.tileBuffer = this.gl.createBuffer();
		this.tile = [x,y,0,0,w,y,1,0,x,h,0,1,w,h,1,1];
		this.glTile = new Int16Array(this.tile);
		this.gl.bindBuffer(this.gl.ARRAY_BUFFER,this.tileBuffer);
		this.gl.bufferData(this.gl.ARRAY_BUFFER,this.glTile,this.gl.STATIC_DRAW);
	}
	,upload: function() {
		if(this.mode != openfl__$internal_renderer_opengl_utils_BucketMode.Line) {
			var _g = 0;
			var _g1 = this.fills;
			while(_g < _g1.length) {
				var fill = _g1[_g];
				++_g;
				if(!fill.available) fill.upload();
			}
		}
		var _g2 = 0;
		var _g11 = this.lines;
		while(_g2 < _g11.length) {
			var line = _g11[_g2];
			++_g2;
			if(!line.available) line.upload();
		}
		this.dirty = false;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_GLBucket
};
var openfl__$internal_renderer_opengl_utils_GLBucketData = function(gl) {
	this.available = false;
	this.rawIndices = false;
	this.stride = 0;
	this.rawVerts = false;
	this.lastVertsSize = 0;
	this.glStart = 0;
	this.glLength = 0;
	this.gl = gl;
	this.drawMode = gl.TRIANGLE_STRIP;
	this.verts = [];
	this.indices = [];
	this.vertexArray = new openfl__$internal_renderer_opengl_utils_VertexArray([]);
};
$hxClasses["openfl._internal.renderer.opengl.utils.GLBucketData"] = openfl__$internal_renderer_opengl_utils_GLBucketData;
openfl__$internal_renderer_opengl_utils_GLBucketData.__name__ = true;
openfl__$internal_renderer_opengl_utils_GLBucketData.prototype = {
	reset: function() {
		this.available = true;
		this.verts = [];
		this.indices = [];
		this.glLength = 0;
		this.glStart = 0;
		this.stride = 0;
		this.rawVerts = false;
		this.rawIndices = false;
		this.drawMode = this.gl.TRIANGLE_STRIP;
	}
	,upload: function() {
		if(this.rawVerts && this.glVerts != null && this.glVerts.length > 0 || this.verts.length > 0) {
			if(!this.rawVerts) this.glVerts = new Float32Array(this.verts);
			this.vertexArray.buffer = this.glVerts.buffer;
			if(this.glVerts.length <= this.lastVertsSize) {
				this.vertexArray.bind();
				var end = this.glLength * 4 * this.stride;
				if(this.glLength > 0 && this.lastVertsSize > end) {
					var view = this.glVerts.subarray(0,end);
					this.vertexArray.upload(view);
				} else this.vertexArray.upload(this.glVerts);
			} else {
				this.vertexArray.setContext(this.gl,this.glVerts);
				this.lastVertsSize = this.glVerts.length;
			}
		}
		if(this.glLength == 0 && (this.rawIndices && this.glIndices != null && this.glIndices.length > 0 || this.indices.length > 0)) {
			if(this.indexBuffer == null) this.indexBuffer = this.gl.createBuffer();
			if(!this.rawIndices) this.glIndices = new Uint16Array(this.indices);
			this.gl.bindBuffer(this.gl.ELEMENT_ARRAY_BUFFER,this.indexBuffer);
			this.gl.bufferData(this.gl.ELEMENT_ARRAY_BUFFER,this.glIndices,this.gl.STREAM_DRAW);
		}
	}
	,__class__: openfl__$internal_renderer_opengl_utils_GLBucketData
};
var openfl__$internal_renderer_opengl_utils_BucketMode = $hxClasses["openfl._internal.renderer.opengl.utils.BucketMode"] = { __ename__ : true, __constructs__ : ["None","Fill","PatternFill","Line","PatternLine","DrawTriangles","DrawTiles"] };
openfl__$internal_renderer_opengl_utils_BucketMode.None = ["None",0];
openfl__$internal_renderer_opengl_utils_BucketMode.None.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketMode.None.__enum__ = openfl__$internal_renderer_opengl_utils_BucketMode;
openfl__$internal_renderer_opengl_utils_BucketMode.Fill = ["Fill",1];
openfl__$internal_renderer_opengl_utils_BucketMode.Fill.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketMode.Fill.__enum__ = openfl__$internal_renderer_opengl_utils_BucketMode;
openfl__$internal_renderer_opengl_utils_BucketMode.PatternFill = ["PatternFill",2];
openfl__$internal_renderer_opengl_utils_BucketMode.PatternFill.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketMode.PatternFill.__enum__ = openfl__$internal_renderer_opengl_utils_BucketMode;
openfl__$internal_renderer_opengl_utils_BucketMode.Line = ["Line",3];
openfl__$internal_renderer_opengl_utils_BucketMode.Line.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketMode.Line.__enum__ = openfl__$internal_renderer_opengl_utils_BucketMode;
openfl__$internal_renderer_opengl_utils_BucketMode.PatternLine = ["PatternLine",4];
openfl__$internal_renderer_opengl_utils_BucketMode.PatternLine.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketMode.PatternLine.__enum__ = openfl__$internal_renderer_opengl_utils_BucketMode;
openfl__$internal_renderer_opengl_utils_BucketMode.DrawTriangles = ["DrawTriangles",5];
openfl__$internal_renderer_opengl_utils_BucketMode.DrawTriangles.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketMode.DrawTriangles.__enum__ = openfl__$internal_renderer_opengl_utils_BucketMode;
openfl__$internal_renderer_opengl_utils_BucketMode.DrawTiles = ["DrawTiles",6];
openfl__$internal_renderer_opengl_utils_BucketMode.DrawTiles.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketMode.DrawTiles.__enum__ = openfl__$internal_renderer_opengl_utils_BucketMode;
var openfl__$internal_renderer_opengl_utils_BucketDataType = $hxClasses["openfl._internal.renderer.opengl.utils.BucketDataType"] = { __ename__ : true, __constructs__ : ["Line","Fill"] };
openfl__$internal_renderer_opengl_utils_BucketDataType.Line = ["Line",0];
openfl__$internal_renderer_opengl_utils_BucketDataType.Line.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketDataType.Line.__enum__ = openfl__$internal_renderer_opengl_utils_BucketDataType;
openfl__$internal_renderer_opengl_utils_BucketDataType.Fill = ["Fill",1];
openfl__$internal_renderer_opengl_utils_BucketDataType.Fill.toString = $estr;
openfl__$internal_renderer_opengl_utils_BucketDataType.Fill.__enum__ = openfl__$internal_renderer_opengl_utils_BucketDataType;
var openfl__$internal_renderer_opengl_utils_GLGraphicsData = function() { };
$hxClasses["openfl._internal.renderer.opengl.utils.GLGraphicsData"] = openfl__$internal_renderer_opengl_utils_GLGraphicsData;
openfl__$internal_renderer_opengl_utils_GLGraphicsData.__name__ = true;
var openfl__$internal_renderer_opengl_utils_PolyK = function() { };
$hxClasses["openfl._internal.renderer.opengl.utils.PolyK"] = openfl__$internal_renderer_opengl_utils_PolyK;
openfl__$internal_renderer_opengl_utils_PolyK.__name__ = true;
openfl__$internal_renderer_opengl_utils_PolyK.triangulate = function(p) {
	var sign = true;
	var n = p.length >> 1;
	if(n < 3) return [];
	var tgs = [];
	var avl;
	var _g = [];
	var _g1 = 0;
	while(_g1 < n) {
		var i1 = _g1++;
		_g.push(i1);
	}
	avl = _g;
	var i = 0;
	var al = n;
	var earFound = false;
	while(al > 3) {
		var i0 = avl[i % al];
		var i11 = avl[(i + 1) % al];
		var i2 = avl[(i + 2) % al];
		var ax = p[2 * i0];
		var ay = p[2 * i0 + 1];
		var bx = p[2 * i11];
		var by = p[2 * i11 + 1];
		var cx = p[2 * i2];
		var cy = p[2 * i2 + 1];
		earFound = false;
		if(openfl__$internal_renderer_opengl_utils_PolyK._convex(ax,ay,bx,by,cx,cy,sign)) {
			earFound = true;
			var _g11 = 0;
			while(_g11 < al) {
				var j = _g11++;
				var vi = avl[j];
				if(vi == i0 || vi == i11 || vi == i2) continue;
				if(openfl__$internal_renderer_opengl_utils_PolyK._PointInTriangle(p[2 * vi],p[2 * vi + 1],ax,ay,bx,by,cx,cy)) {
					earFound = false;
					break;
				}
			}
		}
		if(earFound) {
			tgs.push(i0);
			tgs.push(i11);
			tgs.push(i2);
			avl.splice((i + 1) % al,1);
			al--;
			i = 0;
		} else if(i++ > 3 * al) {
			if(sign) {
				tgs = [];
				var _g12 = [];
				var _g2 = 0;
				while(_g2 < n) {
					var k = _g2++;
					_g12.push(k);
				}
				avl = _g12;
				i = 0;
				al = n;
				sign = false;
			} else {
				console.log("Warning: shape too complex to fill");
				return [];
			}
		}
	}
	tgs.push(avl[0]);
	tgs.push(avl[1]);
	tgs.push(avl[2]);
	return tgs;
};
openfl__$internal_renderer_opengl_utils_PolyK._PointInTriangle = function(px,py,ax,ay,bx,by,cx,cy) {
	var v0x = cx - ax | 0;
	var v0y = cy - ay | 0;
	var v1x = bx - ax | 0;
	var v1y = by - ay | 0;
	var v2x = px - ax | 0;
	var v2y = py - ay | 0;
	var dot00 = v0x * v0x + v0y * v0y;
	var dot01 = v0x * v1x + v0y * v1y;
	var dot02 = v0x * v2x + v0y * v2y;
	var dot11 = v1x * v1x + v1y * v1y;
	var dot12 = v1x * v2x + v1y * v2y;
	var invDenom = 1 / (dot00 * dot11 - dot01 * dot01);
	var u = (dot11 * dot02 - dot01 * dot12) * invDenom;
	var v = (dot00 * dot12 - dot01 * dot02) * invDenom;
	return u >= 0 && v >= 0 && u + v < 1;
};
openfl__$internal_renderer_opengl_utils_PolyK._convex = function(ax,ay,bx,by,cx,cy,sign) {
	return (ay - by) * (cx - bx) + (bx - ax) * (cy - by) >= 0 == sign;
};
var openfl__$internal_renderer_opengl_utils_GraphicType = $hxClasses["openfl._internal.renderer.opengl.utils.GraphicType"] = { __ename__ : true, __constructs__ : ["Polygon","Rectangle","Circle","Ellipse","DrawTriangles","DrawTiles","OverrideMatrix"] };
openfl__$internal_renderer_opengl_utils_GraphicType.Polygon = ["Polygon",0];
openfl__$internal_renderer_opengl_utils_GraphicType.Polygon.toString = $estr;
openfl__$internal_renderer_opengl_utils_GraphicType.Polygon.__enum__ = openfl__$internal_renderer_opengl_utils_GraphicType;
openfl__$internal_renderer_opengl_utils_GraphicType.Rectangle = function(rounded) { var $x = ["Rectangle",1,rounded]; $x.__enum__ = openfl__$internal_renderer_opengl_utils_GraphicType; $x.toString = $estr; return $x; };
openfl__$internal_renderer_opengl_utils_GraphicType.Circle = ["Circle",2];
openfl__$internal_renderer_opengl_utils_GraphicType.Circle.toString = $estr;
openfl__$internal_renderer_opengl_utils_GraphicType.Circle.__enum__ = openfl__$internal_renderer_opengl_utils_GraphicType;
openfl__$internal_renderer_opengl_utils_GraphicType.Ellipse = ["Ellipse",3];
openfl__$internal_renderer_opengl_utils_GraphicType.Ellipse.toString = $estr;
openfl__$internal_renderer_opengl_utils_GraphicType.Ellipse.__enum__ = openfl__$internal_renderer_opengl_utils_GraphicType;
openfl__$internal_renderer_opengl_utils_GraphicType.DrawTriangles = function(vertices,indices,uvtData,culling,colors,blendMode) { var $x = ["DrawTriangles",4,vertices,indices,uvtData,culling,colors,blendMode]; $x.__enum__ = openfl__$internal_renderer_opengl_utils_GraphicType; $x.toString = $estr; return $x; };
openfl__$internal_renderer_opengl_utils_GraphicType.DrawTiles = function(sheet,tileData,smooth,flags,count) { var $x = ["DrawTiles",5,sheet,tileData,smooth,flags,count]; $x.__enum__ = openfl__$internal_renderer_opengl_utils_GraphicType; $x.toString = $estr; return $x; };
openfl__$internal_renderer_opengl_utils_GraphicType.OverrideMatrix = function(matrix) { var $x = ["OverrideMatrix",6,matrix]; $x.__enum__ = openfl__$internal_renderer_opengl_utils_GraphicType; $x.toString = $estr; return $x; };
var openfl__$internal_renderer_opengl_utils_ShaderManager = function(gl) {
	this.setContext(gl);
};
$hxClasses["openfl._internal.renderer.opengl.utils.ShaderManager"] = openfl__$internal_renderer_opengl_utils_ShaderManager;
openfl__$internal_renderer_opengl_utils_ShaderManager.__name__ = true;
openfl__$internal_renderer_opengl_utils_ShaderManager.prototype = {
	setContext: function(gl) {
		this.gl = gl;
		this.defaultShader = new openfl__$internal_renderer_opengl_shaders2_DefaultShader(gl);
		this.fillShader = new openfl__$internal_renderer_opengl_shaders2_FillShader(gl);
		this.patternFillShader = new openfl__$internal_renderer_opengl_shaders2_PatternFillShader(gl);
		this.drawTrianglesShader = new openfl__$internal_renderer_opengl_shaders2_DrawTrianglesShader(gl);
		this.primitiveShader = new openfl__$internal_renderer_opengl_shaders2_PrimitiveShader(gl);
		this.setShader(this.defaultShader,true);
	}
	,setShader: function(shader,force) {
		if(force == null) force = false;
		if(shader == null) {
			this.currentShader = null;
			this.gl.useProgram(null);
			return true;
		}
		if(this.currentShader != null && !force && this.currentShader.ID == shader.ID) return false;
		this.currentShader = shader;
		this.gl.useProgram(shader.program);
		return true;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_ShaderManager
};
var openfl__$internal_renderer_opengl_utils_SpriteBatch = function(gl,maxSprites) {
	if(maxSprites == null) maxSprites = 2000;
	this.lastEnableColor = true;
	this.enableColor = true;
	this.attributes = [];
	this.writtenVertexBytes = 0;
	this.drawing = false;
	this.dirty = true;
	this.states = [];
	this.maxSprites = maxSprites;
	this.attributes.push(new openfl__$internal_renderer_opengl_utils_VertexAttribute(2,5126,false,"aPosition"));
	this.attributes.push(new openfl__$internal_renderer_opengl_utils_VertexAttribute(2,5126,false,"aTexCoord0"));
	this.attributes.push(new openfl__$internal_renderer_opengl_utils_VertexAttribute(4,5121,true,"aColor"));
	this.attributes[2].defaultValue = new Float32Array([1,1,1,1]);
	this.maxElementsPerVertex = 0;
	var _g = 0;
	var _g1 = this.attributes;
	while(_g < _g1.length) {
		var a = _g1[_g];
		++_g;
		this.maxElementsPerVertex += Math.floor(a.components * a.getElementsBytes() / 4);
	}
	this.vertexArraySize = maxSprites * this.maxElementsPerVertex * 4 * 4;
	this.indexArraySize = maxSprites * 6;
	this.vertexArray = new openfl__$internal_renderer_opengl_utils_VertexArray(this.attributes,this.vertexArraySize,false);
	this.positions = new Float32Array(this.vertexArray.buffer);
	this.colors = new Uint32Array(this.vertexArray.buffer);
	this.indices = new Uint16Array(this.indexArraySize);
	var i = 0;
	var j = 0;
	while(i < this.indexArraySize) {
		this.indices[i] = j;
		this.indices[i + 1] = j + 1;
		this.indices[i + 2] = j + 2;
		this.indices[i + 3] = j;
		this.indices[i + 4] = j + 2;
		this.indices[i + 5] = j + 3;
		i += 6;
		j += 4;
	}
	this.currentState = new openfl__$internal_renderer_opengl_utils__$SpriteBatch_State();
	this.dirty = true;
	this.drawing = false;
	this.batchedSprites = 0;
	this.setContext(gl);
};
$hxClasses["openfl._internal.renderer.opengl.utils.SpriteBatch"] = openfl__$internal_renderer_opengl_utils_SpriteBatch;
openfl__$internal_renderer_opengl_utils_SpriteBatch.__name__ = true;
openfl__$internal_renderer_opengl_utils_SpriteBatch.prototype = {
	begin: function(renderSession,clipRect) {
		this.renderSession = renderSession;
		this.shader = renderSession.shaderManager.defaultShader;
		this.drawing = true;
		this.start(clipRect);
	}
	,finish: function() {
		this.stop();
		this.clipRect = null;
		this.drawing = false;
	}
	,start: function(clipRect) {
		if(!this.drawing) throw new js__$Boot_HaxeError("Call Spritebatch.begin() before start()");
		this.dirty = true;
		this.clipRect = clipRect;
	}
	,stop: function() {
		this.flush();
	}
	,renderBitmapData: function(bitmapData,smoothing,matrix,ct,alpha,blendMode,pixelSnapping,bgra) {
		if(bgra == null) bgra = false;
		if(alpha == null) alpha = 1;
		if(bitmapData == null) return;
		var texture = bitmapData.getTexture(this.gl);
		if(this.batchedSprites >= this.maxSprites) this.flush();
		var uvs = bitmapData.__uvData;
		if(uvs == null) return;
		var color = ((alpha * 255 | 0) & 255) << 24 | 16777215;
		this.enableColor = true;
		if(this.enableColor != this.lastEnableColor) {
			this.flush();
			this.lastEnableColor = this.enableColor;
		}
		this.attributes[2].enabled = this.lastEnableColor;
		this.elementsPerVertex = this.getElementsPerVertex();
		var index = this.batchedSprites * 4 * this.elementsPerVertex;
		this.fillVertices(index,bitmapData.width,bitmapData.height,matrix,uvs,null,color,pixelSnapping);
		this.setState(this.batchedSprites,texture,smoothing,blendMode,ct,true);
		this.batchedSprites++;
	}
	,renderTiles: function(object,sheet,tileData,smooth,flags,count) {
		if(count == null) count = -1;
		if(flags == null) flags = 0;
		if(smooth == null) smooth = false;
		var texture = sheet.__bitmap.getTexture(this.gl);
		if(texture == null) return;
		var useScale = (flags & 1) > 0;
		var useRotation = (flags & 2) > 0;
		var useTransform = (flags & 16) > 0;
		var useRGB = (flags & 4) > 0;
		var useAlpha = (flags & 8) > 0;
		var useRect = (flags & 32) > 0;
		var useOrigin = (flags & 64) > 0;
		var blendMode;
		var _g = flags & 983040;
		switch(_g) {
		case 65536:
			blendMode = openfl_display_BlendMode.ADD;
			break;
		case 131072:
			blendMode = openfl_display_BlendMode.MULTIPLY;
			break;
		case 262144:
			blendMode = openfl_display_BlendMode.SCREEN;
			break;
		case 524288:
			blendMode = openfl_display_BlendMode.SUBTRACT;
			break;
		default:
			blendMode = openfl_display_BlendMode.NORMAL;
		}
		if(useTransform) {
			useScale = false;
			useRotation = false;
		}
		var scaleIndex = 0;
		var rotationIndex = 0;
		var rgbIndex = 0;
		var alphaIndex = 0;
		var transformIndex = 0;
		var numValues = 3;
		if(useRect) if(useOrigin) numValues = 8; else numValues = 6;
		if(useScale) {
			scaleIndex = numValues;
			numValues++;
		}
		if(useRotation) {
			rotationIndex = numValues;
			numValues++;
		}
		if(useTransform) {
			transformIndex = numValues;
			numValues += 4;
		}
		if(useRGB) {
			rgbIndex = numValues;
			numValues += 3;
		}
		if(useAlpha) {
			alphaIndex = numValues;
			numValues++;
		}
		var totalCount = tileData.length;
		if(count >= 0 && totalCount > count) totalCount = count;
		var itemCount = totalCount / numValues | 0;
		var iIndex = 0;
		var tileID = -1;
		var rect = sheet.__rectTile;
		var tileUV = sheet.__rectUV;
		var center = sheet.__point;
		var x = 0.0;
		var y = 0.0;
		var alpha = 1.0;
		var tint = 16777215;
		var color = -1;
		var scale = 1.0;
		var rotation = 0.0;
		var cosTheta = 1.0;
		var sinTheta = 0.0;
		var a = 0.0;
		var b = 0.0;
		var c = 0.0;
		var d = 0.0;
		var tx = 0.0;
		var ty = 0.0;
		var ox = 0.0;
		var oy = 0.0;
		var matrix = new openfl_geom_Matrix();
		var oMatrix = object.__worldTransform;
		var uvs = new openfl_display_TextureUvs();
		var bIndex = 0;
		this.enableColor = true;
		if(this.enableColor != this.lastEnableColor) {
			this.flush();
			this.lastEnableColor = this.enableColor;
		}
		this.attributes[2].enabled = this.lastEnableColor;
		this.elementsPerVertex = this.getElementsPerVertex();
		while(iIndex < totalCount) {
			if(this.batchedSprites >= this.maxSprites) this.flush();
			x = tileData[iIndex];
			y = tileData[iIndex + 1];
			if(useRect) {
				tileID = -1;
				rect.x = tileData[iIndex + 2];
				rect.y = tileData[iIndex + 3];
				rect.width = tileData[iIndex + 4];
				rect.height = tileData[iIndex + 5];
				if(useOrigin) {
					center.x = tileData[iIndex + 6];
					center.y = tileData[iIndex + 7];
				} else {
					center.x = 0;
					center.y = 0;
				}
				tileUV.setTo(rect.get_left() / sheet.__bitmap.width,rect.get_top() / sheet.__bitmap.height,rect.get_right() / sheet.__bitmap.width,rect.get_bottom() / sheet.__bitmap.height);
			} else {
				tileID = (tileData[iIndex + 2] == null?0:tileData[iIndex + 2]) | 0;
				rect = sheet.__tileRects[tileID];
				center = sheet.__centerPoints[tileID];
				tileUV = sheet.__tileUVs[tileID];
			}
			if(rect != null && rect.width > 0 && rect.height > 0 && center != null) {
				alpha = 1;
				tint = 16777215;
				a = 1;
				b = 0;
				c = 0;
				d = 1;
				tx = 0;
				ty = 0;
				scale = 1.0;
				rotation = 0.0;
				cosTheta = 1.0;
				sinTheta = 0.0;
				matrix.identity();
				if(useAlpha) alpha = tileData[iIndex + alphaIndex] * object.__worldAlpha; else alpha = object.__worldAlpha;
				if(useRGB) tint = (tileData[iIndex + rgbIndex] * 255 | 0) << 16 | (tileData[iIndex + rgbIndex + 1] * 255 | 0) << 8 | (tileData[iIndex + rgbIndex + 2] * 255 | 0);
				if(useScale) scale = tileData[iIndex + scaleIndex];
				if(useRotation) {
					rotation = tileData[iIndex + rotationIndex];
					cosTheta = Math.cos(rotation);
					sinTheta = Math.sin(rotation);
				}
				if(useTransform) {
					a = tileData[iIndex + transformIndex];
					b = tileData[iIndex + transformIndex + 1];
					c = tileData[iIndex + transformIndex + 2];
					d = tileData[iIndex + transformIndex + 3];
				} else {
					a = scale * cosTheta;
					b = scale * sinTheta;
					c = -b;
					d = a;
				}
				ox = center.x * a + center.y * c;
				oy = center.x * b + center.y * d;
				tx = x - ox;
				ty = y - oy;
				matrix.a = a * oMatrix.a + b * oMatrix.c;
				matrix.b = a * oMatrix.b + b * oMatrix.d;
				matrix.c = c * oMatrix.a + d * oMatrix.c;
				matrix.d = c * oMatrix.b + d * oMatrix.d;
				matrix.tx = tx * oMatrix.a + ty * oMatrix.c + oMatrix.tx;
				matrix.ty = tx * oMatrix.b + ty * oMatrix.d + oMatrix.ty;
				uvs.x0 = tileUV.x;
				uvs.y0 = tileUV.y;
				uvs.x1 = tileUV.width;
				uvs.y1 = tileUV.y;
				uvs.x2 = tileUV.width;
				uvs.y2 = tileUV.height;
				uvs.x3 = tileUV.x;
				uvs.y3 = tileUV.height;
				bIndex = this.batchedSprites * 4 * this.elementsPerVertex;
				color = ((alpha * 255 | 0) & 255) << 24 | (tint & 255) << 16 | (tint >> 8 & 255) << 8 | tint >> 16 & 255;
				this.fillVertices(bIndex,rect.width,rect.height,matrix,uvs,null,color,openfl_display_PixelSnapping.NEVER);
				this.setState(this.batchedSprites,texture,smooth,blendMode,object.__worldColorTransform,false);
				this.batchedSprites++;
			}
			iIndex += numValues;
		}
	}
	,fillVertices: function(index,width,height,matrix,uvs,pivot,color,pixelSnapping) {
		if(color == null) color = -1;
		var w0;
		var w1;
		var h0;
		var h1;
		if(pivot == null) {
			w0 = width;
			w1 = 0;
			h0 = height;
			h1 = 0;
		} else {
			w0 = width * (1 - pivot.x);
			w1 = width * -pivot.x;
			h0 = height * (1 - pivot.y);
			h1 = height * -pivot.y;
		}
		if(pixelSnapping == null) pixelSnapping = openfl_display_PixelSnapping.NEVER;
		var snap = pixelSnapping != openfl_display_PixelSnapping.NEVER;
		var a = matrix.a;
		var b = matrix.b;
		var c = matrix.c;
		var d = matrix.d;
		var tx = matrix.tx;
		var ty = matrix.ty;
		var cOffsetIndex = 0;
		if(!snap) {
			this.positions[index++] = a * w1 + c * h1 + tx;
			this.positions[index++] = d * h1 + b * w1 + ty;
		} else {
			this.positions[index++] = Math.round(a * w1 + c * h1 + tx);
			this.positions[index++] = Math.round(d * h1 + b * w1 + ty);
		}
		this.positions[index++] = uvs.x0;
		this.positions[index++] = uvs.y0;
		if(this.enableColor) this.colors[index++] = color;
		if(!snap) {
			this.positions[index++] = a * w0 + c * h1 + tx;
			this.positions[index++] = d * h1 + b * w0 + ty;
		} else {
			this.positions[index++] = Math.round(a * w0 + c * h1 + tx);
			this.positions[index++] = Math.round(d * h1 + b * w0 + ty);
		}
		this.positions[index++] = uvs.x1;
		this.positions[index++] = uvs.y1;
		if(this.enableColor) this.colors[index++] = color;
		if(!snap) {
			this.positions[index++] = a * w0 + c * h0 + tx;
			this.positions[index++] = d * h0 + b * w0 + ty;
		} else {
			this.positions[index++] = Math.round(a * w0 + c * h0 + tx);
			this.positions[index++] = Math.round(d * h0 + b * w0 + ty);
		}
		this.positions[index++] = uvs.x2;
		this.positions[index++] = uvs.y2;
		if(this.enableColor) this.colors[index++] = color;
		if(!snap) {
			this.positions[index++] = a * w1 + c * h0 + tx;
			this.positions[index++] = d * h0 + b * w1 + ty;
		} else {
			this.positions[index++] = Math.round(a * w1 + c * h0 + tx);
			this.positions[index++] = Math.round(d * h0 + b * w1 + ty);
		}
		this.positions[index++] = uvs.x3;
		this.positions[index++] = uvs.y3;
		if(this.enableColor) this.colors[index++] = color;
		this.writtenVertexBytes = index;
	}
	,flush: function() {
		if(this.batchedSprites == 0) return;
		if(this.clipRect != null) {
			this.gl.enable(this.gl.SCISSOR_TEST);
			this.gl.scissor(Math.floor(this.clipRect.x),Math.floor(this.clipRect.y),Math.floor(this.clipRect.width),Math.floor(this.clipRect.height));
		}
		if(this.dirty) {
			this.dirty = false;
			this.gl.activeTexture(this.gl.TEXTURE0);
			this.vertexArray.bind();
			this.gl.bindBuffer(this.gl.ELEMENT_ARRAY_BUFFER,this.indexBuffer);
		}
		if(this.writtenVertexBytes > this.vertexArraySize * 0.5) this.vertexArray.upload(this.positions); else {
			var view = this.positions.subarray(0,this.writtenVertexBytes);
			this.vertexArray.upload(view);
		}
		var nextState;
		var batchSize = 0;
		var start = 0;
		this.currentState.shader = this.renderSession.shaderManager.defaultShader;
		this.currentState.texture = null;
		this.currentState.textureSmooth = false;
		this.currentState.blendMode = this.renderSession.blendModeManager.currentBlendMode;
		this.currentState.colorTransform = null;
		this.currentState.skipColorTransformAlpha = false;
		var _g1 = 0;
		var _g = this.batchedSprites;
		while(_g1 < _g) {
			var i = _g1++;
			nextState = this.states[i];
			this.currentState.skipColorTransformAlpha = nextState.skipColorTransformAlpha;
			if(!nextState.equals(this.currentState)) {
				this.renderBatch(this.currentState,batchSize,start);
				start = i;
				batchSize = 0;
				this.currentState.shader = nextState.shader;
				this.currentState.texture = nextState.texture;
				this.currentState.textureSmooth = nextState.textureSmooth;
				this.currentState.blendMode = nextState.blendMode;
				this.currentState.colorTransform = nextState.colorTransform;
			}
			batchSize++;
		}
		this.renderBatch(this.currentState,batchSize,start);
		this.batchedSprites = 0;
		this.writtenVertexBytes = 0;
		if(this.clipRect != null) this.gl.disable(this.gl.SCISSOR_TEST);
	}
	,renderBatch: function(state,size,start) {
		if(size == 0 || state.texture == null) return;
		var shader;
		if(state.shader == null) shader = this.renderSession.shaderManager.defaultShader; else shader = state.shader;
		this.renderSession.shaderManager.setShader(shader);
		shader.bindVertexArray(this.vertexArray);
		this.gl.uniformMatrix3fv(shader.getUniformLocation("uProjectionMatrix"),false,this.renderSession.projectionMatrix.toArray(true));
		if(state.colorTransform != null) {
			var ct = state.colorTransform;
			this.gl.uniform4f(shader.getUniformLocation("uColorMultiplier"),ct.redMultiplier,ct.greenMultiplier,ct.blueMultiplier,state.skipColorTransformAlpha?1:ct.alphaMultiplier);
			this.gl.uniform4f(shader.getUniformLocation("uColorOffset"),ct.redOffset / 255.,ct.greenOffset / 255.,ct.blueOffset / 255.,ct.alphaOffset / 255.);
		} else {
			this.gl.uniform4f(shader.getUniformLocation("uColorMultiplier"),1,1,1,1);
			this.gl.uniform4f(shader.getUniformLocation("uColorOffset"),0,0,0,0);
		}
		this.renderSession.blendModeManager.setBlendMode(state.blendMode);
		this.gl.bindTexture(this.gl.TEXTURE_2D,state.texture);
		if(state.textureSmooth) {
			this.gl.texParameteri(this.gl.TEXTURE_2D,this.gl.TEXTURE_MAG_FILTER,this.gl.LINEAR);
			this.gl.texParameteri(this.gl.TEXTURE_2D,this.gl.TEXTURE_MIN_FILTER,this.gl.LINEAR);
		} else {
			this.gl.texParameteri(this.gl.TEXTURE_2D,this.gl.TEXTURE_MAG_FILTER,this.gl.NEAREST);
			this.gl.texParameteri(this.gl.TEXTURE_2D,this.gl.TEXTURE_MIN_FILTER,this.gl.NEAREST);
		}
		this.gl.drawElements(this.gl.TRIANGLES,size * 6,this.gl.UNSIGNED_SHORT,start * 6 * 2);
		this.renderSession.drawCount++;
	}
	,setState: function(index,texture,smooth,blendMode,colorTransform,skipAlpha) {
		if(skipAlpha == null) skipAlpha = false;
		if(smooth == null) smooth = false;
		var state = this.states[index];
		if(state == null) state = this.states[index] = new openfl__$internal_renderer_opengl_utils__$SpriteBatch_State();
		state.texture = texture;
		state.textureSmooth = smooth;
		state.blendMode = blendMode;
		state.colorTransform = colorTransform;
		state.skipColorTransformAlpha = skipAlpha;
	}
	,setContext: function(gl) {
		this.gl = gl;
		this.vertexArray.setContext(gl,this.positions);
		this.indexBuffer = gl.createBuffer();
		gl.bindBuffer(gl.ELEMENT_ARRAY_BUFFER,this.indexBuffer);
		gl.bufferData(gl.ELEMENT_ARRAY_BUFFER,this.indices,gl.STATIC_DRAW);
	}
	,getElementsPerVertex: function() {
		var r = 0;
		var _g = 0;
		var _g1 = this.attributes;
		while(_g < _g1.length) {
			var a = _g1[_g];
			++_g;
			if(a.enabled) r += Math.floor(a.components * a.getElementsBytes() / 4);
		}
		return r;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_SpriteBatch
};
var openfl__$internal_renderer_opengl_utils__$SpriteBatch_State = function() {
	this.skipColorTransformAlpha = false;
	this.textureSmooth = true;
};
$hxClasses["openfl._internal.renderer.opengl.utils._SpriteBatch.State"] = openfl__$internal_renderer_opengl_utils__$SpriteBatch_State;
openfl__$internal_renderer_opengl_utils__$SpriteBatch_State.__name__ = true;
openfl__$internal_renderer_opengl_utils__$SpriteBatch_State.prototype = {
	equals: function(other) {
		return (this.shader == null || other.shader == null || this.shader.ID == other.shader.ID) && this.texture == other.texture && this.textureSmooth == other.textureSmooth && this.blendMode == other.blendMode && (this.colorTransform != null && this.colorTransform.__equals(other.colorTransform,this.skipColorTransformAlpha));
	}
	,__class__: openfl__$internal_renderer_opengl_utils__$SpriteBatch_State
};
var openfl__$internal_renderer_opengl_utils_StencilManager = function(gl) {
	this.stencilMask = 0;
	this.stencilStack = [];
	this.setContext(gl);
	this.reverse = true;
	this.count = 0;
};
$hxClasses["openfl._internal.renderer.opengl.utils.StencilManager"] = openfl__$internal_renderer_opengl_utils_StencilManager;
openfl__$internal_renderer_opengl_utils_StencilManager.__name__ = true;
openfl__$internal_renderer_opengl_utils_StencilManager.prototype = {
	prepareGraphics: function(fill,renderSession,translationMatrix) {
		var shader = renderSession.shaderManager.fillShader;
		renderSession.shaderManager.setShader(shader);
		this.gl.uniformMatrix3fv(shader.getUniformLocation("uTranslationMatrix"),false,translationMatrix);
		this.gl.uniformMatrix3fv(shader.getUniformLocation("uProjectionMatrix"),false,renderSession.projectionMatrix.toArray(true));
		fill.vertexArray.bind();
		shader.bindVertexArray(fill.vertexArray);
		this.gl.bindBuffer(this.gl.ELEMENT_ARRAY_BUFFER,fill.indexBuffer);
	}
	,pushBucket: function(bucket,renderSession,translationMatrix,isMask) {
		if(isMask == null) isMask = false;
		if(!isMask) {
			this.gl.enable(this.gl.STENCIL_TEST);
			this.gl.clear(this.gl.STENCIL_BUFFER_BIT);
			this.gl.stencilMask(255);
			this.gl.colorMask(false,false,false,false);
			this.gl.stencilFunc(this.gl.NEVER,1,255);
			this.gl.stencilOp(this.gl.INVERT,this.gl.KEEP,this.gl.KEEP);
			this.gl.clear(this.gl.STENCIL_BUFFER_BIT);
		}
		var _g = 0;
		var _g1 = bucket.fills;
		while(_g < _g1.length) {
			var fill = _g1[_g];
			++_g;
			if(fill.available) continue;
			this.prepareGraphics(fill,renderSession,translationMatrix);
			this.gl.drawElements(fill.drawMode,fill.glIndices.length,this.gl.UNSIGNED_SHORT,0);
		}
		if(!isMask) {
			this.gl.colorMask(true,true,true,renderSession.renderer.transparent);
			this.gl.stencilOp(this.gl.KEEP,this.gl.KEEP,this.gl.KEEP);
			this.gl.stencilFunc(this.gl.EQUAL,255,255);
		}
	}
	,popBucket: function(object,bucket,renderSession) {
		this.gl.disable(this.gl.STENCIL_TEST);
	}
	,pushMask: function(object,renderSession) {
		var maskGraphics = object.__maskGraphics;
		if(maskGraphics == null || maskGraphics.__commands.length <= 0) return;
		if(this.stencilMask == 0) {
			this.gl.enable(this.gl.STENCIL_TEST);
			this.gl.clear(this.gl.STENCIL_BUFFER_BIT);
		}
		this.stencilMask++;
		if(maskGraphics.__dirty) openfl__$internal_renderer_opengl_utils_GraphicsRenderer.updateGraphics(object,maskGraphics,renderSession.gl);
		var func;
		if(this.stencilMask == 1) func = this.gl.NEVER; else func = this.gl.EQUAL;
		var ref = this.stencilMask;
		var mask = 255 - this.stencilMask;
		this.gl.stencilMask(255);
		this.gl.colorMask(false,false,false,false);
		this.gl.stencilFunc(func,ref,mask);
		this.gl.stencilOp(this.gl.REPLACE,this.gl.KEEP,this.gl.KEEP);
		var glStack = maskGraphics.__glStack[openfl__$internal_renderer_opengl_GLRenderer.glContextId];
		var bucket;
		var translationMatrix = object.__worldTransform;
		var _g1 = 0;
		var _g = glStack.buckets.length;
		while(_g1 < _g) {
			var i = _g1++;
			bucket = glStack.buckets[i];
			if(bucket.overrideMatrix != null) translationMatrix = bucket.overrideMatrix; else translationMatrix = object.__worldTransform;
			var _g2 = bucket.mode;
			switch(_g2[1]) {
			case 1:case 2:
				this.pushBucket(bucket,renderSession,translationMatrix.toArray(true),true);
				break;
			default:
			}
		}
		this.gl.colorMask(true,true,true,renderSession.renderer.transparent);
		this.gl.stencilOp(this.gl.KEEP,this.gl.KEEP,this.gl.KEEP);
		this.gl.stencilFunc(this.gl.EQUAL,this.stencilMask,255);
	}
	,popMask: function(object,renderSession) {
		this.stencilMask--;
		if(this.stencilMask <= 0) {
			this.gl.disable(this.gl.STENCIL_TEST);
			this.stencilMask = 0;
		}
	}
	,setContext: function(gl) {
		this.gl = gl;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_StencilManager
};
var openfl__$internal_renderer_opengl_utils_VertexArray = function(attributes,size,isStatic) {
	if(isStatic == null) isStatic = false;
	if(size == null) size = 0;
	this.isStatic = false;
	this.size = 0;
	this.attributes = [];
	this.size = size;
	this.attributes = attributes;
	if(size > 0) this.buffer = new ArrayBuffer(size);
	this.isStatic = isStatic;
};
$hxClasses["openfl._internal.renderer.opengl.utils.VertexArray"] = openfl__$internal_renderer_opengl_utils_VertexArray;
openfl__$internal_renderer_opengl_utils_VertexArray.__name__ = true;
openfl__$internal_renderer_opengl_utils_VertexArray.prototype = {
	bind: function() {
		this.gl.bindBuffer(this.gl.ARRAY_BUFFER,this.glBuffer);
	}
	,upload: function(view) {
		this.gl.bufferSubData(this.gl.ARRAY_BUFFER,0,view);
	}
	,setContext: function(gl,view) {
		this.gl = gl;
		this.glBuffer = gl.createBuffer();
		gl.bindBuffer(gl.ARRAY_BUFFER,this.glBuffer);
		gl.bufferData(gl.ARRAY_BUFFER,view,this.isStatic?gl.STATIC_DRAW:gl.DYNAMIC_DRAW);
	}
	,get_stride: function() {
		var s = 0;
		var _g = 0;
		var _g1 = this.attributes;
		while(_g < _g1.length) {
			var a = _g1[_g];
			++_g;
			if(a.enabled) s += Math.floor(a.components * a.getElementsBytes() / 4) * 4;
		}
		return s;
	}
	,__class__: openfl__$internal_renderer_opengl_utils_VertexArray
	,__properties__: {get_stride:"get_stride"}
};
var openfl_display_Bitmap = function(bitmapData,pixelSnapping,smoothing) {
	if(smoothing == null) smoothing = false;
	openfl_display_DisplayObjectContainer.call(this);
	this.bitmapData = bitmapData;
	this.pixelSnapping = pixelSnapping;
	this.smoothing = smoothing;
	if(pixelSnapping == null) this.pixelSnapping = openfl_display_PixelSnapping.AUTO;
};
$hxClasses["openfl.display.Bitmap"] = openfl_display_Bitmap;
openfl_display_Bitmap.__name__ = true;
openfl_display_Bitmap.__super__ = openfl_display_DisplayObjectContainer;
openfl_display_Bitmap.prototype = $extend(openfl_display_DisplayObjectContainer.prototype,{
	__getBounds: function(rect,matrix) {
		if(this.bitmapData != null) {
			var bounds = new openfl_geom_Rectangle(0,0,this.bitmapData.width,this.bitmapData.height);
			bounds = bounds.transform(matrix);
			rect.__expand(bounds.x,bounds.y,bounds.width,bounds.height);
		}
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || this.bitmapData == null) return false;
		var point = this.globalToLocal(new openfl_geom_Point(x,y));
		if(point.x > 0 && point.y > 0 && point.x <= this.bitmapData.width && point.y <= this.bitmapData.height) {
			if(stack != null && !interactiveOnly) stack.push(this);
			return true;
		}
		return false;
	}
	,__renderCairo: function(renderSession) {
		openfl__$internal_renderer_cairo_CairoBitmap.render(this,renderSession);
	}
	,__renderCairoMask: function(renderSession) {
		renderSession.cairo.rectangle(0,0,this.get_width(),this.get_height());
	}
	,__renderCanvas: function(renderSession) {
		openfl__$internal_renderer_canvas_CanvasBitmap.render(this,renderSession);
	}
	,__renderCanvasMask: function(renderSession) {
		renderSession.context.rect(0,0,this.get_width(),this.get_height());
	}
	,__renderDOM: function(renderSession) {
		if(this.stage != null && this.__worldVisible && this.__renderable && this.bitmapData != null && this.bitmapData.__isValid) {
			if(this.bitmapData.__image.buffer.__srcImage != null) openfl__$internal_renderer_dom_DOMBitmap.renderImage(this,renderSession); else openfl__$internal_renderer_dom_DOMBitmap.renderCanvas(this,renderSession);
		} else {
			if(this.__image != null) {
				renderSession.element.removeChild(this.__image);
				this.__image = null;
				this.__style = null;
			}
			if(this.__canvas != null) {
				renderSession.element.removeChild(this.__canvas);
				this.__canvas = null;
				this.__style = null;
			}
		}
	}
	,__renderGL: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0 || this.bitmapData == null || !this.bitmapData.__isValid) null; else renderSession.spriteBatch.renderBitmapData(this.bitmapData,this.smoothing,this.__worldTransform,this.__worldColorTransform,this.__worldAlpha,this.__blendMode,this.pixelSnapping);
	}
	,__updateMask: function(maskGraphics) {
		maskGraphics.__commands.push(openfl_display_DrawCommand.OverrideMatrix(this.__worldTransform));
		maskGraphics.beginFill(0);
		maskGraphics.drawRect(0,0,this.bitmapData.width,this.bitmapData.height);
		if(maskGraphics.__bounds == null) maskGraphics.__bounds = new openfl_geom_Rectangle();
		this.__getBounds(maskGraphics.__bounds,openfl_geom_Matrix.__identity);
		openfl_display_DisplayObjectContainer.prototype.__updateMask.call(this,maskGraphics);
	}
	,get_height: function() {
		if(this.bitmapData != null) return this.bitmapData.height * this.get_scaleY();
		return 0;
	}
	,set_height: function(value) {
		if(this.bitmapData != null) {
			if(value != this.bitmapData.height) {
				if(!this.__transformDirty) {
					this.__transformDirty = true;
					openfl_display_DisplayObject.__worldTransformDirty++;
				}
				this.set_scaleY(value / this.bitmapData.height);
			}
			return value;
		}
		return 0;
	}
	,get_width: function() {
		if(this.bitmapData != null) return this.bitmapData.width * this.get_scaleX();
		return 0;
	}
	,set_width: function(value) {
		if(this.bitmapData != null) {
			if(value != this.bitmapData.width) {
				if(!this.__transformDirty) {
					this.__transformDirty = true;
					openfl_display_DisplayObject.__worldTransformDirty++;
				}
				this.set_scaleX(value / this.bitmapData.width);
			}
			return value;
		}
		return 0;
	}
	,__class__: openfl_display_Bitmap
});
var openfl_display_BitmapData = function(width,height,transparent,fillColor) {
	if(fillColor == null) fillColor = -1;
	if(transparent == null) transparent = true;
	this.__usingFramebuffer = false;
	this.transparent = transparent;
	if(width == null) width = 0; else width = width;
	if(height == null) height = 0; else height = height;
	if(width < 0) width = 0; else width = width;
	if(height < 0) height = 0; else height = height;
	this.width = width;
	this.height = height;
	this.rect = new openfl_geom_Rectangle(0,0,width,height);
	if(width > 0 && height > 0) {
		if(transparent) {
			if((fillColor & -16777216) == 0) fillColor = 0;
		} else fillColor = -16777216 | fillColor & 16777215;
		fillColor = fillColor << 8 | fillColor >> 24 & 255;
		this.__image = new lime_graphics_Image(null,0,0,width,height,fillColor);
		this.__image.set_transparent(transparent);
		this.__isValid = true;
	}
	this.__createUVs();
	this.__worldTransform = new openfl_geom_Matrix();
	this.__worldColorTransform = new openfl_geom_ColorTransform();
};
$hxClasses["openfl.display.BitmapData"] = openfl_display_BitmapData;
openfl_display_BitmapData.__name__ = true;
openfl_display_BitmapData.__interfaces__ = [openfl_display_IBitmapDrawable];
openfl_display_BitmapData.__supportsBGRA = null;
openfl_display_BitmapData.fromCanvas = function(canvas,transparent) {
	if(transparent == null) transparent = true;
	var bitmapData = new openfl_display_BitmapData(0,0,transparent);
	bitmapData.__fromImage(lime_graphics_Image.fromCanvas(canvas));
	bitmapData.__image.set_transparent(transparent);
	return bitmapData;
};
openfl_display_BitmapData.fromImage = function(image,transparent) {
	if(transparent == null) transparent = true;
	var bitmapData = new openfl_display_BitmapData(0,0,transparent);
	bitmapData.__fromImage(image);
	bitmapData.__image.set_transparent(transparent);
	return bitmapData;
};
openfl_display_BitmapData.prototype = {
	getSurface: function(clone) {
		if(clone == null) clone = true;
		if(!this.__isValid) return null;
		if(this.__surface == null) this.__image.dirty = true;
		if(this.__image != null && this.__image.dirty) {
			if(this.__surface != null) lime_graphics_cairo__$CairoSurface_CairoSurface_$Impl_$.destroy(this.__surface);
			if(clone) this.__surfaceImage = this.__image.clone(); else this.__surfaceImage = this.__image;
			this.__surfaceImage.set_format(2);
			this.__surfaceImage.set_premultiplied(true);
			this.__surface = lime_graphics_cairo__$CairoSurface_CairoSurface_$Impl_$.fromImage(this.__surfaceImage);
			this.__image.dirty = false;
		}
		return this.__surface;
	}
	,getTexture: function(gl) {
		if(!this.__isValid) return null;
		if(this.__usingFramebuffer && this.__framebuffer != null) return this.__framebuffer.texture;
		if(this.__texture == null) {
			this.__texture = gl.createTexture();
			gl.bindTexture(gl.TEXTURE_2D,this.__texture);
			gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_WRAP_S,gl.CLAMP_TO_EDGE);
			gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_WRAP_T,gl.CLAMP_TO_EDGE);
			gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_MAG_FILTER,gl.NEAREST);
			gl.texParameteri(gl.TEXTURE_2D,gl.TEXTURE_MIN_FILTER,gl.NEAREST);
			this.__image.dirty = true;
		}
		if(this.__image != null && this.__image.dirty) {
			var internalFormat;
			if(this.__image.buffer.bitsPerPixel == 1) internalFormat = gl.ALPHA; else internalFormat = gl.RGBA;
			var format = internalFormat;
			gl.bindTexture(gl.TEXTURE_2D,this.__texture);
			var textureImage = this.__image;
			if(this.__bgra) {
				if(openfl_display_BitmapData.__supportsBGRA == null) openfl_display_BitmapData.__supportsBGRA = Lambda.has(gl.getSupportedExtensions(),"GL_EXT_bgra");
				textureImage = new lime_graphics_Image(null,0,0,this.__image.width,this.__image.height);
				var rect = new lime_math_Rectangle(0,0,this.__image.width,this.__image.height);
				var point = new lime_math_Vector2(0,0);
				textureImage.copyChannel(this.__image,rect,point,lime_graphics_ImageChannel.RED,lime_graphics_ImageChannel.BLUE);
				textureImage.copyChannel(this.__image,rect,point,lime_graphics_ImageChannel.GREEN,lime_graphics_ImageChannel.GREEN);
				textureImage.copyChannel(this.__image,rect,point,lime_graphics_ImageChannel.BLUE,lime_graphics_ImageChannel.RED);
				textureImage.copyChannel(this.__image,rect,point,lime_graphics_ImageChannel.ALPHA,lime_graphics_ImageChannel.ALPHA);
			}
			if(!textureImage.get_premultiplied() && textureImage.get_transparent()) {
				textureImage = textureImage.clone();
				textureImage.set_premultiplied(true);
			}
			gl.texImage2D(gl.TEXTURE_2D,0,internalFormat,this.width,this.height,0,format,gl.UNSIGNED_BYTE,textureImage.get_data());
			gl.bindTexture(gl.TEXTURE_2D,null);
			this.__image.dirty = false;
		}
		return this.__texture;
	}
	,__createUVs: function() {
		if(this.__uvData == null) this.__uvData = new openfl_display_TextureUvs();
		this.__uvData.x0 = 0;
		this.__uvData.y0 = 0;
		this.__uvData.x1 = 1;
		this.__uvData.y1 = 0;
		this.__uvData.x2 = 1;
		this.__uvData.y2 = 1;
		this.__uvData.x3 = 0;
		this.__uvData.y3 = 1;
	}
	,__fromImage: function(image) {
		this.__image = image;
		this.width = image.width;
		this.height = image.height;
		this.rect = new openfl_geom_Rectangle(0,0,image.width,image.height);
		this.__isValid = true;
	}
	,__sync: function() {
		lime_graphics_utils_ImageCanvasUtil.sync(this.__image);
	}
	,__class__: openfl_display_BitmapData
};
var openfl_display_TextureUvs = function() {
	this.y3 = 0;
	this.y2 = 0;
	this.y1 = 0;
	this.y0 = 0;
	this.x3 = 0;
	this.x2 = 0;
	this.x1 = 0;
	this.x0 = 0;
};
$hxClasses["openfl.display.TextureUvs"] = openfl_display_TextureUvs;
openfl_display_TextureUvs.__name__ = true;
openfl_display_TextureUvs.prototype = {
	__class__: openfl_display_TextureUvs
};
var openfl_display_BlendMode = $hxClasses["openfl.display.BlendMode"] = { __ename__ : true, __constructs__ : ["ADD","ALPHA","DARKEN","DIFFERENCE","ERASE","HARDLIGHT","INVERT","LAYER","LIGHTEN","MULTIPLY","NORMAL","OVERLAY","SCREEN","SUBTRACT"] };
openfl_display_BlendMode.ADD = ["ADD",0];
openfl_display_BlendMode.ADD.toString = $estr;
openfl_display_BlendMode.ADD.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.ALPHA = ["ALPHA",1];
openfl_display_BlendMode.ALPHA.toString = $estr;
openfl_display_BlendMode.ALPHA.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.DARKEN = ["DARKEN",2];
openfl_display_BlendMode.DARKEN.toString = $estr;
openfl_display_BlendMode.DARKEN.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.DIFFERENCE = ["DIFFERENCE",3];
openfl_display_BlendMode.DIFFERENCE.toString = $estr;
openfl_display_BlendMode.DIFFERENCE.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.ERASE = ["ERASE",4];
openfl_display_BlendMode.ERASE.toString = $estr;
openfl_display_BlendMode.ERASE.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.HARDLIGHT = ["HARDLIGHT",5];
openfl_display_BlendMode.HARDLIGHT.toString = $estr;
openfl_display_BlendMode.HARDLIGHT.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.INVERT = ["INVERT",6];
openfl_display_BlendMode.INVERT.toString = $estr;
openfl_display_BlendMode.INVERT.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.LAYER = ["LAYER",7];
openfl_display_BlendMode.LAYER.toString = $estr;
openfl_display_BlendMode.LAYER.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.LIGHTEN = ["LIGHTEN",8];
openfl_display_BlendMode.LIGHTEN.toString = $estr;
openfl_display_BlendMode.LIGHTEN.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.MULTIPLY = ["MULTIPLY",9];
openfl_display_BlendMode.MULTIPLY.toString = $estr;
openfl_display_BlendMode.MULTIPLY.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.NORMAL = ["NORMAL",10];
openfl_display_BlendMode.NORMAL.toString = $estr;
openfl_display_BlendMode.NORMAL.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.OVERLAY = ["OVERLAY",11];
openfl_display_BlendMode.OVERLAY.toString = $estr;
openfl_display_BlendMode.OVERLAY.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.SCREEN = ["SCREEN",12];
openfl_display_BlendMode.SCREEN.toString = $estr;
openfl_display_BlendMode.SCREEN.__enum__ = openfl_display_BlendMode;
openfl_display_BlendMode.SUBTRACT = ["SUBTRACT",13];
openfl_display_BlendMode.SUBTRACT.toString = $estr;
openfl_display_BlendMode.SUBTRACT.__enum__ = openfl_display_BlendMode;
var openfl_display_CapsStyle = $hxClasses["openfl.display.CapsStyle"] = { __ename__ : true, __constructs__ : ["NONE","ROUND","SQUARE"] };
openfl_display_CapsStyle.NONE = ["NONE",0];
openfl_display_CapsStyle.NONE.toString = $estr;
openfl_display_CapsStyle.NONE.__enum__ = openfl_display_CapsStyle;
openfl_display_CapsStyle.ROUND = ["ROUND",1];
openfl_display_CapsStyle.ROUND.toString = $estr;
openfl_display_CapsStyle.ROUND.__enum__ = openfl_display_CapsStyle;
openfl_display_CapsStyle.SQUARE = ["SQUARE",2];
openfl_display_CapsStyle.SQUARE.toString = $estr;
openfl_display_CapsStyle.SQUARE.__enum__ = openfl_display_CapsStyle;
var openfl_display_FrameLabel = function() { };
$hxClasses["openfl.display.FrameLabel"] = openfl_display_FrameLabel;
openfl_display_FrameLabel.__name__ = true;
openfl_display_FrameLabel.__super__ = openfl_events_EventDispatcher;
openfl_display_FrameLabel.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	__class__: openfl_display_FrameLabel
});
var openfl_display_GradientType = $hxClasses["openfl.display.GradientType"] = { __ename__ : true, __constructs__ : ["RADIAL","LINEAR"] };
openfl_display_GradientType.RADIAL = ["RADIAL",0];
openfl_display_GradientType.RADIAL.toString = $estr;
openfl_display_GradientType.RADIAL.__enum__ = openfl_display_GradientType;
openfl_display_GradientType.LINEAR = ["LINEAR",1];
openfl_display_GradientType.LINEAR.toString = $estr;
openfl_display_GradientType.LINEAR.__enum__ = openfl_display_GradientType;
var openfl_display_Graphics = function() {
	this.__visible = true;
	this.__glStack = [];
	this.__dirty = true;
	this.__commands = [];
	this.__commands = [];
	this.__halfStrokeWidth = 0;
	this.__positionX = 0;
	this.__positionY = 0;
	this.__hardware = true;
	this.moveTo(0,0);
};
$hxClasses["openfl.display.Graphics"] = openfl_display_Graphics;
openfl_display_Graphics.__name__ = true;
openfl_display_Graphics.prototype = {
	beginFill: function(color,alpha) {
		if(alpha == null) alpha = 1;
		if(color == null) color = 0;
		this.__commands.push(openfl_display_DrawCommand.BeginFill(color & 16777215,alpha));
		if(alpha > 0) this.__visible = true;
	}
	,clear: function() {
		this.__commands = [];
		this.__halfStrokeWidth = 0;
		if(this.__bounds != null) {
			this.set___dirty(true);
			this.__transformDirty = true;
			this.__bounds = null;
		}
		this.__visible = false;
		this.__hardware = true;
		this.moveTo(0,0);
	}
	,drawRect: function(x,y,width,height) {
		if(width <= 0 || height <= 0) return;
		this.__inflateBounds(x - this.__halfStrokeWidth,y - this.__halfStrokeWidth);
		this.__inflateBounds(x + width + this.__halfStrokeWidth,y + height + this.__halfStrokeWidth);
		this.__commands.push(openfl_display_DrawCommand.DrawRect(x,y,width,height));
		this.set___dirty(true);
	}
	,moveTo: function(x,y) {
		this.__positionX = x;
		this.__positionY = y;
		this.__commands.push(openfl_display_DrawCommand.MoveTo(x,y));
	}
	,__getBounds: function(rect,matrix) {
		if(this.__bounds == null) return;
		var bounds = this.__bounds.transform(matrix);
		rect.__expand(bounds.x,bounds.y,bounds.width,bounds.height);
	}
	,__hitTest: function(x,y,shapeFlag,matrix) {
		if(this.__bounds == null) return false;
		var bounds = this.__bounds.transform(matrix);
		return x > bounds.x && y > bounds.y && x <= bounds.get_right() && y <= bounds.get_bottom();
	}
	,__inflateBounds: function(x,y) {
		if(this.__bounds == null) {
			this.__bounds = new openfl_geom_Rectangle(x,y,0,0);
			this.__transformDirty = true;
			return;
		}
		if(x < this.__bounds.x) {
			this.__bounds.width += this.__bounds.x - x;
			this.__bounds.x = x;
			this.__transformDirty = true;
		}
		if(y < this.__bounds.y) {
			this.__bounds.height += this.__bounds.y - y;
			this.__bounds.y = y;
			this.__transformDirty = true;
		}
		if(x > this.__bounds.x + this.__bounds.width) this.__bounds.width = x - this.__bounds.x;
		if(y > this.__bounds.y + this.__bounds.height) this.__bounds.height = y - this.__bounds.y;
	}
	,set___dirty: function(value) {
		if(value && this.__owner != null) this.__owner.__setRenderDirty();
		return this.__dirty = value;
	}
	,__class__: openfl_display_Graphics
	,__properties__: {set___dirty:"set___dirty"}
};
var openfl_display_DrawCommand = $hxClasses["openfl.display.DrawCommand"] = { __ename__ : true, __constructs__ : ["BeginBitmapFill","BeginFill","BeginGradientFill","CubicCurveTo","CurveTo","DrawCircle","DrawEllipse","DrawRect","DrawRoundRect","DrawTiles","DrawTriangles","EndFill","LineStyle","LineBitmapStyle","LineGradientStyle","LineTo","MoveTo","DrawPathC","OverrideMatrix"] };
openfl_display_DrawCommand.BeginBitmapFill = function(bitmap,matrix,repeat,smooth) { var $x = ["BeginBitmapFill",0,bitmap,matrix,repeat,smooth]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.BeginFill = function(color,alpha) { var $x = ["BeginFill",1,color,alpha]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.BeginGradientFill = function(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio) { var $x = ["BeginGradientFill",2,type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.CubicCurveTo = function(controlX1,controlY1,controlX2,controlY2,anchorX,anchorY) { var $x = ["CubicCurveTo",3,controlX1,controlY1,controlX2,controlY2,anchorX,anchorY]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.CurveTo = function(controlX,controlY,anchorX,anchorY) { var $x = ["CurveTo",4,controlX,controlY,anchorX,anchorY]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.DrawCircle = function(x,y,radius) { var $x = ["DrawCircle",5,x,y,radius]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.DrawEllipse = function(x,y,width,height) { var $x = ["DrawEllipse",6,x,y,width,height]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.DrawRect = function(x,y,width,height) { var $x = ["DrawRect",7,x,y,width,height]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.DrawRoundRect = function(x,y,width,height,rx,ry) { var $x = ["DrawRoundRect",8,x,y,width,height,rx,ry]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.DrawTiles = function(sheet,tileData,smooth,flags,count) { var $x = ["DrawTiles",9,sheet,tileData,smooth,flags,count]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.DrawTriangles = function(vertices,indices,uvtData,culling,colors,blendMode) { var $x = ["DrawTriangles",10,vertices,indices,uvtData,culling,colors,blendMode]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.EndFill = ["EndFill",11];
openfl_display_DrawCommand.EndFill.toString = $estr;
openfl_display_DrawCommand.EndFill.__enum__ = openfl_display_DrawCommand;
openfl_display_DrawCommand.LineStyle = function(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit) { var $x = ["LineStyle",12,thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.LineBitmapStyle = function(bitmap,matrix,repeat,smooth) { var $x = ["LineBitmapStyle",13,bitmap,matrix,repeat,smooth]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.LineGradientStyle = function(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio) { var $x = ["LineGradientStyle",14,type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.LineTo = function(x,y) { var $x = ["LineTo",15,x,y]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.MoveTo = function(x,y) { var $x = ["MoveTo",16,x,y]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.DrawPathC = function(commands,data,winding) { var $x = ["DrawPathC",17,commands,data,winding]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
openfl_display_DrawCommand.OverrideMatrix = function(matrix) { var $x = ["OverrideMatrix",18,matrix]; $x.__enum__ = openfl_display_DrawCommand; $x.toString = $estr; return $x; };
var openfl_display_GraphicsPathWinding = $hxClasses["openfl.display.GraphicsPathWinding"] = { __ename__ : true, __constructs__ : ["EVEN_ODD","NON_ZERO"] };
openfl_display_GraphicsPathWinding.EVEN_ODD = ["EVEN_ODD",0];
openfl_display_GraphicsPathWinding.EVEN_ODD.toString = $estr;
openfl_display_GraphicsPathWinding.EVEN_ODD.__enum__ = openfl_display_GraphicsPathWinding;
openfl_display_GraphicsPathWinding.NON_ZERO = ["NON_ZERO",1];
openfl_display_GraphicsPathWinding.NON_ZERO.toString = $estr;
openfl_display_GraphicsPathWinding.NON_ZERO.__enum__ = openfl_display_GraphicsPathWinding;
var openfl_display_InterpolationMethod = $hxClasses["openfl.display.InterpolationMethod"] = { __ename__ : true, __constructs__ : ["RGB","LINEAR_RGB"] };
openfl_display_InterpolationMethod.RGB = ["RGB",0];
openfl_display_InterpolationMethod.RGB.toString = $estr;
openfl_display_InterpolationMethod.RGB.__enum__ = openfl_display_InterpolationMethod;
openfl_display_InterpolationMethod.LINEAR_RGB = ["LINEAR_RGB",1];
openfl_display_InterpolationMethod.LINEAR_RGB.toString = $estr;
openfl_display_InterpolationMethod.LINEAR_RGB.__enum__ = openfl_display_InterpolationMethod;
var openfl_display_JointStyle = $hxClasses["openfl.display.JointStyle"] = { __ename__ : true, __constructs__ : ["MITER","ROUND","BEVEL"] };
openfl_display_JointStyle.MITER = ["MITER",0];
openfl_display_JointStyle.MITER.toString = $estr;
openfl_display_JointStyle.MITER.__enum__ = openfl_display_JointStyle;
openfl_display_JointStyle.ROUND = ["ROUND",1];
openfl_display_JointStyle.ROUND.toString = $estr;
openfl_display_JointStyle.ROUND.__enum__ = openfl_display_JointStyle;
openfl_display_JointStyle.BEVEL = ["BEVEL",2];
openfl_display_JointStyle.BEVEL.toString = $estr;
openfl_display_JointStyle.BEVEL.__enum__ = openfl_display_JointStyle;
var openfl_display_LineScaleMode = $hxClasses["openfl.display.LineScaleMode"] = { __ename__ : true, __constructs__ : ["HORIZONTAL","NONE","NORMAL","VERTICAL"] };
openfl_display_LineScaleMode.HORIZONTAL = ["HORIZONTAL",0];
openfl_display_LineScaleMode.HORIZONTAL.toString = $estr;
openfl_display_LineScaleMode.HORIZONTAL.__enum__ = openfl_display_LineScaleMode;
openfl_display_LineScaleMode.NONE = ["NONE",1];
openfl_display_LineScaleMode.NONE.toString = $estr;
openfl_display_LineScaleMode.NONE.__enum__ = openfl_display_LineScaleMode;
openfl_display_LineScaleMode.NORMAL = ["NORMAL",2];
openfl_display_LineScaleMode.NORMAL.toString = $estr;
openfl_display_LineScaleMode.NORMAL.__enum__ = openfl_display_LineScaleMode;
openfl_display_LineScaleMode.VERTICAL = ["VERTICAL",3];
openfl_display_LineScaleMode.VERTICAL.toString = $estr;
openfl_display_LineScaleMode.VERTICAL.__enum__ = openfl_display_LineScaleMode;
var openfl_display_Loader = function() { };
$hxClasses["openfl.display.Loader"] = openfl_display_Loader;
openfl_display_Loader.__name__ = true;
openfl_display_Loader.__super__ = openfl_display_Sprite;
openfl_display_Loader.prototype = $extend(openfl_display_Sprite.prototype,{
	__class__: openfl_display_Loader
});
var openfl_display_PixelSnapping = $hxClasses["openfl.display.PixelSnapping"] = { __ename__ : true, __constructs__ : ["NEVER","AUTO","ALWAYS"] };
openfl_display_PixelSnapping.NEVER = ["NEVER",0];
openfl_display_PixelSnapping.NEVER.toString = $estr;
openfl_display_PixelSnapping.NEVER.__enum__ = openfl_display_PixelSnapping;
openfl_display_PixelSnapping.AUTO = ["AUTO",1];
openfl_display_PixelSnapping.AUTO.toString = $estr;
openfl_display_PixelSnapping.AUTO.__enum__ = openfl_display_PixelSnapping;
openfl_display_PixelSnapping.ALWAYS = ["ALWAYS",2];
openfl_display_PixelSnapping.ALWAYS.toString = $estr;
openfl_display_PixelSnapping.ALWAYS.__enum__ = openfl_display_PixelSnapping;
var openfl_display_Preloader = function(display) {
	lime_app_Preloader.call(this);
	if(display != null) {
		this.display = display;
		openfl_Lib.current.addChild(display);
		if(js_Boot.__instanceof(display,NMEPreloader)) (js_Boot.__cast(display , NMEPreloader)).onInit();
	}
};
$hxClasses["openfl.display.Preloader"] = openfl_display_Preloader;
openfl_display_Preloader.__name__ = true;
openfl_display_Preloader.__super__ = lime_app_Preloader;
openfl_display_Preloader.prototype = $extend(lime_app_Preloader.prototype,{
	load: function(urls,types) {
		var sounds = [];
		var url = null;
		var _g1 = 0;
		var _g = urls.length;
		while(_g1 < _g) {
			var i = _g1++;
			url = urls[i];
			var _g2 = types[i];
			switch(_g2) {
			case "MUSIC":case "SOUND":
				var sound = haxe_io_Path.withoutExtension(url);
				if(!HxOverrides.remove(sounds,sound)) this.total++;
				sounds.push(sound);
				break;
			default:
			}
		}
		var _g3 = 0;
		while(_g3 < sounds.length) {
			var soundName = sounds[_g3];
			++_g3;
			var sound1 = new openfl_media_Sound();
			sound1.addEventListener(openfl_events_Event.COMPLETE,$bind(this,this.sound_onComplete));
			sound1.addEventListener(openfl_events_IOErrorEvent.IO_ERROR,$bind(this,this.sound_onIOError));
			sound1.load(new openfl_net_URLRequest(soundName + ".ogg"));
		}
		lime_app_Preloader.prototype.load.call(this,urls,types);
	}
	,start: function() {
		if(this.display != null && js_Boot.__instanceof(this.display,NMEPreloader)) {
			this.display.addEventListener(openfl_events_Event.COMPLETE,$bind(this,this.display_onComplete));
			(js_Boot.__cast(this.display , NMEPreloader)).onLoaded();
		} else lime_app_Preloader.prototype.start.call(this);
	}
	,update: function(loaded,total) {
		if(this.display != null && js_Boot.__instanceof(this.display,NMEPreloader)) (js_Boot.__cast(this.display , NMEPreloader)).onUpdate(loaded,total);
	}
	,display_onComplete: function(event) {
		this.display.removeEventListener(openfl_events_Event.COMPLETE,$bind(this,this.display_onComplete));
		openfl_Lib.current.removeChild(this.display);
		openfl_Lib.current.stage.set_focus(null);
		this.display = null;
		lime_app_Preloader.prototype.start.call(this);
	}
	,sound_onComplete: function(event) {
		this.loaded++;
		this.update(this.loaded,this.total);
		if(this.loaded == this.total) this.start();
	}
	,sound_onIOError: function(event) {
		this.loaded++;
		this.update(this.loaded,this.total);
		if(this.loaded == this.total) this.start();
	}
	,__class__: openfl_display_Preloader
});
var openfl_display_SpreadMethod = $hxClasses["openfl.display.SpreadMethod"] = { __ename__ : true, __constructs__ : ["REPEAT","REFLECT","PAD"] };
openfl_display_SpreadMethod.REPEAT = ["REPEAT",0];
openfl_display_SpreadMethod.REPEAT.toString = $estr;
openfl_display_SpreadMethod.REPEAT.__enum__ = openfl_display_SpreadMethod;
openfl_display_SpreadMethod.REFLECT = ["REFLECT",1];
openfl_display_SpreadMethod.REFLECT.toString = $estr;
openfl_display_SpreadMethod.REFLECT.__enum__ = openfl_display_SpreadMethod;
openfl_display_SpreadMethod.PAD = ["PAD",2];
openfl_display_SpreadMethod.PAD.toString = $estr;
openfl_display_SpreadMethod.PAD.__enum__ = openfl_display_SpreadMethod;
var openfl_display_Stage = function(width,height,color) {
	openfl_display_DisplayObjectContainer.call(this);
	if(color == null) {
		this.__transparent = true;
		this.set_color(0);
	} else this.set_color(color);
	this.set_name(null);
	this.__displayState = openfl_display_StageDisplayState.NORMAL;
	this.__mouseX = 0;
	this.__mouseY = 0;
	this.__lastClickTime = 0;
	this.stageWidth = width;
	this.stageHeight = height;
	this.stage = this;
	this.align = openfl_display_StageAlign.TOP_LEFT;
	this.allowsFullScreen = false;
	this.quality = openfl_display_StageQuality.HIGH;
	this.scaleMode = openfl_display_StageScaleMode.NO_SCALE;
	this.stageFocusRect = true;
	this.__clearBeforeRender = true;
	this.__stack = [];
	this.__mouseOutStack = [];
	var this1;
	this1 = new openfl_VectorData();
	var this2;
	this2 = new Array(0);
	this1.data = this2;
	this1.length = 0;
	this1.fixed = false;
	this.stage3Ds = this1;
	var this3 = this.stage3Ds;
	var x = new openfl_display_Stage3D();
	if(!this3.fixed) {
		this3.length++;
		if(this3.data.length < this3.length) {
			var data;
			var this4;
			this4 = new Array(this3.data.length + 10);
			data = this4;
			haxe_ds__$Vector_Vector_$Impl_$.blit(this3.data,0,data,0,this3.data.length);
			this3.data = data;
		}
		this3.data[this3.length - 1] = x;
	}
	this3.length;
};
$hxClasses["openfl.display.Stage"] = openfl_display_Stage;
openfl_display_Stage.__name__ = true;
openfl_display_Stage.__interfaces__ = [lime_app_IModule];
openfl_display_Stage.__super__ = openfl_display_DisplayObjectContainer;
openfl_display_Stage.prototype = $extend(openfl_display_DisplayObjectContainer.prototype,{
	globalToLocal: function(pos) {
		return pos;
	}
	,init: function(context) {
		switch(context[1]) {
		case 0:
			var gl = context[2];
			this.__renderer = new openfl__$internal_renderer_opengl_GLRenderer(this.stageWidth,this.stageHeight,gl);
			break;
		case 1:
			var context1 = context[2];
			this.__renderer = new openfl__$internal_renderer_canvas_CanvasRenderer(this.stageWidth,this.stageHeight,context1);
			break;
		case 2:
			var element = context[2];
			this.__renderer = new openfl__$internal_renderer_dom_DOMRenderer(this.stageWidth,this.stageHeight,element);
			break;
		case 4:
			var cairo = context[2];
			this.__renderer = new openfl__$internal_renderer_cairo_CairoRenderer(this.stageWidth,this.stageHeight,cairo);
			break;
		default:
		}
	}
	,onGamepadAxisMove: function(gamepad,axis,value) {
		openfl_ui_GameInput.__onGamepadAxisMove(gamepad,axis,value);
	}
	,onGamepadButtonDown: function(gamepad,button) {
		openfl_ui_GameInput.__onGamepadButtonDown(gamepad,button);
	}
	,onGamepadButtonUp: function(gamepad,button) {
		openfl_ui_GameInput.__onGamepadButtonUp(gamepad,button);
	}
	,onGamepadConnect: function(gamepad) {
		openfl_ui_GameInput.__onGamepadConnect(gamepad);
	}
	,onGamepadDisconnect: function(gamepad) {
		openfl_ui_GameInput.__onGamepadDisconnect(gamepad);
	}
	,onKeyDown: function(keyCode,modifier) {
		this.__onKey(openfl_events_KeyboardEvent.KEY_DOWN,keyCode,modifier);
	}
	,onKeyUp: function(keyCode,modifier) {
		this.__onKey(openfl_events_KeyboardEvent.KEY_UP,keyCode,modifier);
	}
	,onMouseDown: function(x,y,button) {
		var type;
		switch(button) {
		case 1:
			type = openfl_events_MouseEvent.MIDDLE_MOUSE_DOWN;
			break;
		case 2:
			type = openfl_events_MouseEvent.RIGHT_MOUSE_DOWN;
			break;
		default:
			type = openfl_events_MouseEvent.MOUSE_DOWN;
		}
		this.__onMouse(type,x,y,button);
	}
	,onMouseMove: function(x,y) {
		this.__onMouse(openfl_events_MouseEvent.MOUSE_MOVE,x,y,0);
	}
	,onMouseMoveRelative: function(x,y) {
	}
	,onMouseUp: function(x,y,button) {
		var type;
		switch(button) {
		case 1:
			type = openfl_events_MouseEvent.MIDDLE_MOUSE_UP;
			break;
		case 2:
			type = openfl_events_MouseEvent.RIGHT_MOUSE_UP;
			break;
		default:
			type = openfl_events_MouseEvent.MOUSE_UP;
		}
		this.__onMouse(type,x,y,button);
	}
	,onMouseWheel: function(deltaX,deltaY) {
		this.__onMouseWheel(deltaX,deltaY);
	}
	,onRenderContextLost: function() {
	}
	,onRenderContextRestored: function(context) {
	}
	,onTextEdit: function(text,start,length) {
	}
	,onTextInput: function(text) {
		var stack = [];
		if(this.__focus == null) this.__getInteractive(stack); else this.__focus.__getInteractive(stack);
		var event = new openfl_events_TextEvent(openfl_events_TextEvent.TEXT_INPUT,true,false,text);
		if(stack.length > 0) {
			stack.reverse();
			this.__fireEvent(event,stack);
		} else this.__broadcast(event,true);
	}
	,onTouchMove: function(x,y,id) {
		this.__onTouch("touchMove",x,y,id);
	}
	,onTouchEnd: function(x,y,id) {
		this.__onTouch("touchEnd",x,y,id);
	}
	,onTouchStart: function(x,y,id) {
		this.__onTouch("touchBegin",x,y,id);
	}
	,onWindowActivate: function() {
		var event = new openfl_events_Event(openfl_events_Event.ACTIVATE);
		this.__broadcast(event,true);
	}
	,onWindowClose: function() {
	}
	,onWindowDeactivate: function() {
		var event = new openfl_events_Event(openfl_events_Event.DEACTIVATE);
		this.__broadcast(event,true);
	}
	,onWindowEnter: function() {
	}
	,onWindowFocusIn: function() {
		var event = new openfl_events_FocusEvent(openfl_events_FocusEvent.FOCUS_IN,true,false,null,false,0);
		this.__broadcast(event,true);
	}
	,onWindowFocusOut: function() {
		var event = new openfl_events_FocusEvent(openfl_events_FocusEvent.FOCUS_OUT,true,false,null,false,0);
		this.__broadcast(event,true);
	}
	,onWindowFullscreen: function() {
	}
	,onWindowLeave: function() {
		this.dispatchEvent(new openfl_events_Event(openfl_events_Event.MOUSE_LEAVE));
	}
	,onWindowMinimize: function() {
	}
	,onWindowMove: function(x,y) {
	}
	,onWindowResize: function(width,height) {
		this.stageWidth = width;
		this.stageHeight = height;
		if(this.__renderer != null) this.__renderer.resize(width,height);
		var event = new openfl_events_Event(openfl_events_Event.RESIZE);
		this.__broadcast(event,false);
	}
	,onWindowRestore: function() {
	}
	,render: function(context) {
		if(this.__rendering) return;
		this.__rendering = true;
		this.__broadcast(new openfl_events_Event(openfl_events_Event.ENTER_FRAME),true);
		if(this.__invalidated) {
			this.__invalidated = false;
			this.__broadcast(new openfl_events_Event(openfl_events_Event.RENDER),true);
		}
		this.__renderable = true;
		this.__update(false,true);
		if(this.__renderer != null) {
			switch(context[1]) {
			case 4:
				var cairo = context[2];
				(js_Boot.__cast(this.__renderer , openfl__$internal_renderer_cairo_CairoRenderer)).cairo = cairo;
				this.__renderer.renderSession.cairo = cairo;
				break;
			default:
			}
			this.__renderer.render(this);
		}
		this.__rendering = false;
	}
	,update: function(deltaTime) {
	}
	,__drag: function(mouse) {
		var parent = this.__dragObject.parent;
		if(parent != null) mouse = parent.globalToLocal(mouse);
		var x = mouse.x + this.__dragOffsetX;
		var y = mouse.y + this.__dragOffsetY;
		if(this.__dragBounds != null) {
			if(x < this.__dragBounds.x) x = this.__dragBounds.x; else if(x > this.__dragBounds.get_right()) x = this.__dragBounds.get_right();
			if(y < this.__dragBounds.y) y = this.__dragBounds.y; else if(y > this.__dragBounds.get_bottom()) y = this.__dragBounds.get_bottom();
		}
		this.__dragObject.set_x(x);
		this.__dragObject.set_y(y);
	}
	,__fireEvent: function(event,stack) {
		var length = stack.length;
		if(length == 0) {
			event.eventPhase = openfl_events_EventPhase.AT_TARGET;
			event.target.__broadcast(event,false);
		} else {
			event.eventPhase = openfl_events_EventPhase.CAPTURING_PHASE;
			event.target = stack[stack.length - 1];
			var _g1 = 0;
			var _g = length - 1;
			while(_g1 < _g) {
				var i = _g1++;
				stack[i].__broadcast(event,false);
				if(event.__isCancelled) return;
			}
			event.eventPhase = openfl_events_EventPhase.AT_TARGET;
			event.target.__broadcast(event,false);
			if(event.__isCancelled) return;
			if(event.bubbles) {
				event.eventPhase = openfl_events_EventPhase.BUBBLING_PHASE;
				var i1 = length - 2;
				while(i1 >= 0) {
					stack[i1].__broadcast(event,false);
					if(event.__isCancelled) return;
					i1--;
				}
			}
		}
	}
	,__getInteractive: function(stack) {
		if(stack != null) stack.push(this);
		return true;
	}
	,__onKey: function(type,keyCode,modifier) {
		openfl_events_MouseEvent.__altKey = lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_altKey(modifier);
		openfl_events_MouseEvent.__commandKey = lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_metaKey(modifier);
		openfl_events_MouseEvent.__ctrlKey = lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_ctrlKey(modifier);
		openfl_events_MouseEvent.__shiftKey = lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_shiftKey(modifier);
		var stack = [];
		if(this.__focus == null) this.__getInteractive(stack); else this.__focus.__getInteractive(stack);
		if(stack.length > 0) {
			var keyCode1 = openfl_ui_Keyboard.convertKeyCode(keyCode);
			var charCode = openfl_ui_Keyboard.__getCharCode(keyCode1,lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_shiftKey(modifier));
			var event = new openfl_events_KeyboardEvent(type,true,false,charCode,keyCode1,null,lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_ctrlKey(modifier),lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_altKey(modifier),lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_shiftKey(modifier),lime_ui__$KeyModifier_KeyModifier_$Impl_$.get_metaKey(modifier));
			stack.reverse();
			this.__fireEvent(event,stack);
		}
	}
	,__onMouse: function(type,x,y,button) {
		if(button > 2) return;
		this.__mouseX = x;
		this.__mouseY = y;
		var stack = [];
		var target = null;
		var targetPoint = new openfl_geom_Point(x,y);
		if(this.__hitTest(x,y,false,stack,true)) target = stack[stack.length - 1]; else {
			target = this;
			stack = [this];
		}
		if(type == openfl_events_MouseEvent.MOUSE_DOWN) this.set_focus(target);
		this.__fireEvent(openfl_events_MouseEvent.__create(type,button,this.__mouseX,this.__mouseY,target == this?targetPoint:target.globalToLocal(targetPoint),target),stack);
		var clickType;
		switch(type) {
		case "mouseUp":
			clickType = openfl_events_MouseEvent.CLICK;
			break;
		case "middleMouseUp":
			clickType = openfl_events_MouseEvent.MIDDLE_CLICK;
			break;
		case "rightMouseUp":
			clickType = openfl_events_MouseEvent.RIGHT_CLICK;
			break;
		default:
			clickType = null;
		}
		if(clickType != null) {
			this.__fireEvent(openfl_events_MouseEvent.__create(clickType,button,this.__mouseX,this.__mouseY,target == this?targetPoint:target.globalToLocal(targetPoint),target),stack);
			if(type == openfl_events_MouseEvent.MOUSE_UP && (js_Boot.__cast(target , openfl_display_InteractiveObject)).doubleClickEnabled) {
				var currentTime = openfl_Lib.getTimer();
				if(currentTime - this.__lastClickTime < 500) {
					this.__fireEvent(openfl_events_MouseEvent.__create(openfl_events_MouseEvent.DOUBLE_CLICK,button,this.__mouseX,this.__mouseY,target == this?targetPoint:target.globalToLocal(targetPoint),target),stack);
					this.__lastClickTime = 0;
				} else this.__lastClickTime = currentTime;
			}
		}
		var cursor = null;
		var _g = 0;
		while(_g < stack.length) {
			var target1 = stack[_g];
			++_g;
			cursor = target1.__getCursor();
			if(cursor != null) {
				lime_ui_Mouse.set_cursor(cursor);
				break;
			}
		}
		if(cursor == null) lime_ui_Mouse.set_cursor(lime_ui_MouseCursor.ARROW);
		var _g1 = 0;
		var _g11 = this.__mouseOutStack;
		while(_g1 < _g11.length) {
			var target2 = _g11[_g1];
			++_g1;
			if(HxOverrides.indexOf(stack,target2,0) == -1) {
				HxOverrides.remove(this.__mouseOutStack,target2);
				var localPoint = target2.globalToLocal(targetPoint);
				target2.dispatchEvent(new openfl_events_MouseEvent(openfl_events_MouseEvent.MOUSE_OUT,false,false,localPoint.x,localPoint.y,target2));
			}
		}
		var _g2 = 0;
		while(_g2 < stack.length) {
			var target3 = stack[_g2];
			++_g2;
			if(HxOverrides.indexOf(this.__mouseOutStack,target3,0) == -1) {
				if(target3.hasEventListener(openfl_events_MouseEvent.MOUSE_OVER)) {
					var localPoint1 = target3.globalToLocal(targetPoint);
					target3.dispatchEvent(new openfl_events_MouseEvent(openfl_events_MouseEvent.MOUSE_OVER,false,false,localPoint1.x,localPoint1.y,target3));
				}
				if(target3.hasEventListener(openfl_events_MouseEvent.MOUSE_OUT)) this.__mouseOutStack.push(target3);
			}
		}
		if(this.__dragObject != null) this.__drag(targetPoint);
	}
	,__onMouseWheel: function(deltaX,deltaY) {
		var x = this.__mouseX;
		var y = this.__mouseY;
		var stack = [];
		if(!this.__hitTest(x,y,false,stack,true)) stack = [this];
		var target = stack[stack.length - 1];
		var targetPoint = new openfl_geom_Point(x,y);
		var delta = deltaY | 0;
		this.__fireEvent(openfl_events_MouseEvent.__create(openfl_events_MouseEvent.MOUSE_WHEEL,0,this.__mouseX,this.__mouseY,target == this?targetPoint:target.globalToLocal(targetPoint),target,delta),stack);
	}
	,__onTouch: function(type,x,y,id) {
		var point = new openfl_geom_Point(x,y);
		this.__mouseX = point.x;
		this.__mouseY = point.y;
		var __stack = [];
		var mouseType;
		switch(type) {
		case "touchBegin":
			mouseType = openfl_events_MouseEvent.MOUSE_DOWN;
			break;
		case "touchMove":
			mouseType = openfl_events_MouseEvent.MOUSE_MOVE;
			break;
		case "touchEnd":
			mouseType = openfl_events_MouseEvent.MOUSE_UP;
			break;
		default:
			mouseType = null;
		}
		if(this.__hitTest(x,y,false,__stack,true)) {
			var target = __stack[__stack.length - 1];
			var localPoint = target.globalToLocal(point);
			var touchEvent = openfl_events_TouchEvent.__create(type,null,this.__mouseX,this.__mouseY,localPoint,target);
			touchEvent.touchPointID = id;
			touchEvent.isPrimaryTouchPoint = true;
			var mouseEvent = openfl_events_MouseEvent.__create(mouseType,0,this.__mouseX,this.__mouseY,localPoint,target);
			mouseEvent.buttonDown = type != "touchEnd";
			this.__fireEvent(touchEvent,__stack);
			this.__fireEvent(mouseEvent,__stack);
		} else {
			var touchEvent1 = openfl_events_TouchEvent.__create(type,null,this.__mouseX,this.__mouseY,point,this);
			touchEvent1.touchPointID = id;
			touchEvent1.isPrimaryTouchPoint = true;
			var mouseEvent1 = openfl_events_MouseEvent.__create(mouseType,0,this.__mouseX,this.__mouseY,point,this);
			mouseEvent1.buttonDown = type != "touchEnd";
			this.__fireEvent(touchEvent1,[this.stage]);
			this.__fireEvent(mouseEvent1,[this.stage]);
		}
		if(type == "touchMove" && this.__dragObject != null) this.__drag(point);
	}
	,__update: function(transformOnly,updateChildren,maskGrahpics) {
		if(transformOnly) {
			if(openfl_display_DisplayObject.__worldTransformDirty > 0) {
				openfl_display_DisplayObjectContainer.prototype.__update.call(this,true,updateChildren,maskGrahpics);
				if(updateChildren) {
					openfl_display_DisplayObject.__worldTransformDirty = 0;
					this.__dirty = true;
				}
			}
		} else if(openfl_display_DisplayObject.__worldTransformDirty > 0 || this.__dirty || openfl_display_DisplayObject.__worldRenderDirty > 0) {
			openfl_display_DisplayObjectContainer.prototype.__update.call(this,false,updateChildren,maskGrahpics);
			if(updateChildren) {
				openfl_display_DisplayObject.__worldTransformDirty = 0;
				openfl_display_DisplayObject.__worldRenderDirty = 0;
				this.__dirty = false;
			}
		}
	}
	,set_color: function(value) {
		var r = (value & 16711680) >>> 16;
		var g = (value & 65280) >>> 8;
		var b = value & 255;
		this.__colorSplit = [r / 255,g / 255,b / 255];
		this.__colorString = "#" + StringTools.hex(value,6);
		return this.__color = value;
	}
	,get_focus: function() {
		return this.__focus;
	}
	,set_focus: function(value) {
		if(value != this.__focus) {
			if(this.__focus != null) {
				var event = new openfl_events_FocusEvent(openfl_events_FocusEvent.FOCUS_OUT,true,false,value,false,0);
				this.__stack = [];
				this.__focus.__getInteractive(this.__stack);
				this.__stack.reverse();
				this.__fireEvent(event,this.__stack);
			}
			if(value != null) {
				var event1 = new openfl_events_FocusEvent(openfl_events_FocusEvent.FOCUS_IN,true,false,this.__focus,false,0);
				this.__stack = [];
				value.__getInteractive(this.__stack);
				this.__stack.reverse();
				this.__fireEvent(event1,this.__stack);
			}
			this.__focus = value;
		}
		return this.__focus;
	}
	,__class__: openfl_display_Stage
	,__properties__: $extend(openfl_display_DisplayObjectContainer.prototype.__properties__,{set_focus:"set_focus",get_focus:"get_focus",set_color:"set_color"})
});
var openfl_display_Stage3D = function() {
	openfl_events_EventDispatcher.call(this);
};
$hxClasses["openfl.display.Stage3D"] = openfl_display_Stage3D;
openfl_display_Stage3D.__name__ = true;
openfl_display_Stage3D.__super__ = openfl_events_EventDispatcher;
openfl_display_Stage3D.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	__class__: openfl_display_Stage3D
});
var openfl_display_StageAlign = $hxClasses["openfl.display.StageAlign"] = { __ename__ : true, __constructs__ : ["TOP_RIGHT","TOP_LEFT","TOP","RIGHT","LEFT","BOTTOM_RIGHT","BOTTOM_LEFT","BOTTOM"] };
openfl_display_StageAlign.TOP_RIGHT = ["TOP_RIGHT",0];
openfl_display_StageAlign.TOP_RIGHT.toString = $estr;
openfl_display_StageAlign.TOP_RIGHT.__enum__ = openfl_display_StageAlign;
openfl_display_StageAlign.TOP_LEFT = ["TOP_LEFT",1];
openfl_display_StageAlign.TOP_LEFT.toString = $estr;
openfl_display_StageAlign.TOP_LEFT.__enum__ = openfl_display_StageAlign;
openfl_display_StageAlign.TOP = ["TOP",2];
openfl_display_StageAlign.TOP.toString = $estr;
openfl_display_StageAlign.TOP.__enum__ = openfl_display_StageAlign;
openfl_display_StageAlign.RIGHT = ["RIGHT",3];
openfl_display_StageAlign.RIGHT.toString = $estr;
openfl_display_StageAlign.RIGHT.__enum__ = openfl_display_StageAlign;
openfl_display_StageAlign.LEFT = ["LEFT",4];
openfl_display_StageAlign.LEFT.toString = $estr;
openfl_display_StageAlign.LEFT.__enum__ = openfl_display_StageAlign;
openfl_display_StageAlign.BOTTOM_RIGHT = ["BOTTOM_RIGHT",5];
openfl_display_StageAlign.BOTTOM_RIGHT.toString = $estr;
openfl_display_StageAlign.BOTTOM_RIGHT.__enum__ = openfl_display_StageAlign;
openfl_display_StageAlign.BOTTOM_LEFT = ["BOTTOM_LEFT",6];
openfl_display_StageAlign.BOTTOM_LEFT.toString = $estr;
openfl_display_StageAlign.BOTTOM_LEFT.__enum__ = openfl_display_StageAlign;
openfl_display_StageAlign.BOTTOM = ["BOTTOM",7];
openfl_display_StageAlign.BOTTOM.toString = $estr;
openfl_display_StageAlign.BOTTOM.__enum__ = openfl_display_StageAlign;
var openfl_display_StageDisplayState = $hxClasses["openfl.display.StageDisplayState"] = { __ename__ : true, __constructs__ : ["NORMAL","FULL_SCREEN","FULL_SCREEN_INTERACTIVE"] };
openfl_display_StageDisplayState.NORMAL = ["NORMAL",0];
openfl_display_StageDisplayState.NORMAL.toString = $estr;
openfl_display_StageDisplayState.NORMAL.__enum__ = openfl_display_StageDisplayState;
openfl_display_StageDisplayState.FULL_SCREEN = ["FULL_SCREEN",1];
openfl_display_StageDisplayState.FULL_SCREEN.toString = $estr;
openfl_display_StageDisplayState.FULL_SCREEN.__enum__ = openfl_display_StageDisplayState;
openfl_display_StageDisplayState.FULL_SCREEN_INTERACTIVE = ["FULL_SCREEN_INTERACTIVE",2];
openfl_display_StageDisplayState.FULL_SCREEN_INTERACTIVE.toString = $estr;
openfl_display_StageDisplayState.FULL_SCREEN_INTERACTIVE.__enum__ = openfl_display_StageDisplayState;
var openfl_display_StageQuality = $hxClasses["openfl.display.StageQuality"] = { __ename__ : true, __constructs__ : ["BEST","HIGH","MEDIUM","LOW"] };
openfl_display_StageQuality.BEST = ["BEST",0];
openfl_display_StageQuality.BEST.toString = $estr;
openfl_display_StageQuality.BEST.__enum__ = openfl_display_StageQuality;
openfl_display_StageQuality.HIGH = ["HIGH",1];
openfl_display_StageQuality.HIGH.toString = $estr;
openfl_display_StageQuality.HIGH.__enum__ = openfl_display_StageQuality;
openfl_display_StageQuality.MEDIUM = ["MEDIUM",2];
openfl_display_StageQuality.MEDIUM.toString = $estr;
openfl_display_StageQuality.MEDIUM.__enum__ = openfl_display_StageQuality;
openfl_display_StageQuality.LOW = ["LOW",3];
openfl_display_StageQuality.LOW.toString = $estr;
openfl_display_StageQuality.LOW.__enum__ = openfl_display_StageQuality;
var openfl_display_StageScaleMode = $hxClasses["openfl.display.StageScaleMode"] = { __ename__ : true, __constructs__ : ["SHOW_ALL","NO_SCALE","NO_BORDER","EXACT_FIT"] };
openfl_display_StageScaleMode.SHOW_ALL = ["SHOW_ALL",0];
openfl_display_StageScaleMode.SHOW_ALL.toString = $estr;
openfl_display_StageScaleMode.SHOW_ALL.__enum__ = openfl_display_StageScaleMode;
openfl_display_StageScaleMode.NO_SCALE = ["NO_SCALE",1];
openfl_display_StageScaleMode.NO_SCALE.toString = $estr;
openfl_display_StageScaleMode.NO_SCALE.__enum__ = openfl_display_StageScaleMode;
openfl_display_StageScaleMode.NO_BORDER = ["NO_BORDER",2];
openfl_display_StageScaleMode.NO_BORDER.toString = $estr;
openfl_display_StageScaleMode.NO_BORDER.__enum__ = openfl_display_StageScaleMode;
openfl_display_StageScaleMode.EXACT_FIT = ["EXACT_FIT",3];
openfl_display_StageScaleMode.EXACT_FIT.toString = $estr;
openfl_display_StageScaleMode.EXACT_FIT.__enum__ = openfl_display_StageScaleMode;
var openfl_display_Tilesheet = function() { };
$hxClasses["openfl.display.Tilesheet"] = openfl_display_Tilesheet;
openfl_display_Tilesheet.__name__ = true;
openfl_display_Tilesheet.prototype = {
	__class__: openfl_display_Tilesheet
};
var openfl_display_TriangleCulling = $hxClasses["openfl.display.TriangleCulling"] = { __ename__ : true, __constructs__ : ["NEGATIVE","NONE","POSITIVE"] };
openfl_display_TriangleCulling.NEGATIVE = ["NEGATIVE",0];
openfl_display_TriangleCulling.NEGATIVE.toString = $estr;
openfl_display_TriangleCulling.NEGATIVE.__enum__ = openfl_display_TriangleCulling;
openfl_display_TriangleCulling.NONE = ["NONE",1];
openfl_display_TriangleCulling.NONE.toString = $estr;
openfl_display_TriangleCulling.NONE.__enum__ = openfl_display_TriangleCulling;
openfl_display_TriangleCulling.POSITIVE = ["POSITIVE",2];
openfl_display_TriangleCulling.POSITIVE.toString = $estr;
openfl_display_TriangleCulling.POSITIVE.__enum__ = openfl_display_TriangleCulling;
var openfl_events_Event = function(type,bubbles,cancelable) {
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	this.type = type;
	this.bubbles = bubbles;
	this.cancelable = cancelable;
	this.eventPhase = openfl_events_EventPhase.AT_TARGET;
};
$hxClasses["openfl.events.Event"] = openfl_events_Event;
openfl_events_Event.__name__ = true;
openfl_events_Event.prototype = {
	__class__: openfl_events_Event
};
var openfl_events_TextEvent = function(type,bubbles,cancelable,text) {
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl_events_Event.call(this,type,bubbles,cancelable);
	this.text = text;
};
$hxClasses["openfl.events.TextEvent"] = openfl_events_TextEvent;
openfl_events_TextEvent.__name__ = true;
openfl_events_TextEvent.__super__ = openfl_events_Event;
openfl_events_TextEvent.prototype = $extend(openfl_events_Event.prototype,{
	__class__: openfl_events_TextEvent
});
var openfl_events_ErrorEvent = function(type,bubbles,cancelable,text,id) {
	if(id == null) id = 0;
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl_events_TextEvent.call(this,type,bubbles,cancelable,text);
	this.errorID = id;
};
$hxClasses["openfl.events.ErrorEvent"] = openfl_events_ErrorEvent;
openfl_events_ErrorEvent.__name__ = true;
openfl_events_ErrorEvent.__super__ = openfl_events_TextEvent;
openfl_events_ErrorEvent.prototype = $extend(openfl_events_TextEvent.prototype,{
	__class__: openfl_events_ErrorEvent
});
var openfl_events__$EventDispatcher_Listener = function(callback,useCapture,priority) {
	this.callback = callback;
	this.useCapture = useCapture;
	this.priority = priority;
};
$hxClasses["openfl.events._EventDispatcher.Listener"] = openfl_events__$EventDispatcher_Listener;
openfl_events__$EventDispatcher_Listener.__name__ = true;
openfl_events__$EventDispatcher_Listener.prototype = {
	match: function(callback,useCapture) {
		return Reflect.compareMethods(this.callback,callback) && this.useCapture == useCapture;
	}
	,__class__: openfl_events__$EventDispatcher_Listener
};
var openfl_events_EventPhase = $hxClasses["openfl.events.EventPhase"] = { __ename__ : true, __constructs__ : ["CAPTURING_PHASE","AT_TARGET","BUBBLING_PHASE"] };
openfl_events_EventPhase.CAPTURING_PHASE = ["CAPTURING_PHASE",0];
openfl_events_EventPhase.CAPTURING_PHASE.toString = $estr;
openfl_events_EventPhase.CAPTURING_PHASE.__enum__ = openfl_events_EventPhase;
openfl_events_EventPhase.AT_TARGET = ["AT_TARGET",1];
openfl_events_EventPhase.AT_TARGET.toString = $estr;
openfl_events_EventPhase.AT_TARGET.__enum__ = openfl_events_EventPhase;
openfl_events_EventPhase.BUBBLING_PHASE = ["BUBBLING_PHASE",2];
openfl_events_EventPhase.BUBBLING_PHASE.toString = $estr;
openfl_events_EventPhase.BUBBLING_PHASE.__enum__ = openfl_events_EventPhase;
var openfl_events_FocusEvent = function(type,bubbles,cancelable,relatedObject,shiftKey,keyCode) {
	if(keyCode == null) keyCode = 0;
	if(shiftKey == null) shiftKey = false;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl_events_Event.call(this,type,bubbles,cancelable);
	this.keyCode = keyCode;
	this.shiftKey = shiftKey;
	this.relatedObject = relatedObject;
};
$hxClasses["openfl.events.FocusEvent"] = openfl_events_FocusEvent;
openfl_events_FocusEvent.__name__ = true;
openfl_events_FocusEvent.__super__ = openfl_events_Event;
openfl_events_FocusEvent.prototype = $extend(openfl_events_Event.prototype,{
	__class__: openfl_events_FocusEvent
});
var openfl_events_GameInputEvent = function(type,bubbles,cancelable,device) {
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	openfl_events_Event.call(this,type,bubbles,cancelable);
	this.device = device;
};
$hxClasses["openfl.events.GameInputEvent"] = openfl_events_GameInputEvent;
openfl_events_GameInputEvent.__name__ = true;
openfl_events_GameInputEvent.__super__ = openfl_events_Event;
openfl_events_GameInputEvent.prototype = $extend(openfl_events_Event.prototype,{
	__class__: openfl_events_GameInputEvent
});
var openfl_events_IOErrorEvent = function(type,bubbles,cancelable,text,id) {
	if(id == null) id = 0;
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	openfl_events_ErrorEvent.call(this,type,bubbles,cancelable,text,id);
};
$hxClasses["openfl.events.IOErrorEvent"] = openfl_events_IOErrorEvent;
openfl_events_IOErrorEvent.__name__ = true;
openfl_events_IOErrorEvent.__super__ = openfl_events_ErrorEvent;
openfl_events_IOErrorEvent.prototype = $extend(openfl_events_ErrorEvent.prototype,{
	__class__: openfl_events_IOErrorEvent
});
var openfl_events_KeyboardEvent = function(type,bubbles,cancelable,charCodeValue,keyCodeValue,keyLocationValue,ctrlKeyValue,altKeyValue,shiftKeyValue,controlKeyValue,commandKeyValue) {
	if(commandKeyValue == null) commandKeyValue = false;
	if(controlKeyValue == null) controlKeyValue = false;
	if(shiftKeyValue == null) shiftKeyValue = false;
	if(altKeyValue == null) altKeyValue = false;
	if(ctrlKeyValue == null) ctrlKeyValue = false;
	if(keyCodeValue == null) keyCodeValue = 0;
	if(charCodeValue == null) charCodeValue = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl_events_Event.call(this,type,bubbles,cancelable);
	this.charCode = charCodeValue;
	this.keyCode = keyCodeValue;
	if(keyLocationValue != null) this.keyLocation = keyLocationValue; else this.keyLocation = 0;
	this.ctrlKey = ctrlKeyValue;
	this.altKey = altKeyValue;
	this.shiftKey = shiftKeyValue;
	this.controlKey = controlKeyValue;
	this.commandKey = commandKeyValue;
};
$hxClasses["openfl.events.KeyboardEvent"] = openfl_events_KeyboardEvent;
openfl_events_KeyboardEvent.__name__ = true;
openfl_events_KeyboardEvent.__super__ = openfl_events_Event;
openfl_events_KeyboardEvent.prototype = $extend(openfl_events_Event.prototype,{
	__class__: openfl_events_KeyboardEvent
});
var openfl_events_MouseEvent = function(type,bubbles,cancelable,localX,localY,relatedObject,ctrlKey,altKey,shiftKey,buttonDown,delta,commandKey,clickCount) {
	if(clickCount == null) clickCount = 0;
	if(commandKey == null) commandKey = false;
	if(delta == null) delta = 0;
	if(buttonDown == null) buttonDown = false;
	if(shiftKey == null) shiftKey = false;
	if(altKey == null) altKey = false;
	if(ctrlKey == null) ctrlKey = false;
	if(localY == null) localY = 0;
	if(localX == null) localX = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	openfl_events_Event.call(this,type,bubbles,cancelable);
	this.shiftKey = shiftKey;
	this.altKey = altKey;
	this.ctrlKey = ctrlKey;
	this.bubbles = bubbles;
	this.relatedObject = relatedObject;
	this.delta = delta;
	this.localX = localX;
	this.localY = localY;
	this.buttonDown = buttonDown;
	this.commandKey = commandKey;
	this.clickCount = clickCount;
};
$hxClasses["openfl.events.MouseEvent"] = openfl_events_MouseEvent;
openfl_events_MouseEvent.__name__ = true;
openfl_events_MouseEvent.__altKey = null;
openfl_events_MouseEvent.__buttonDown = null;
openfl_events_MouseEvent.__commandKey = null;
openfl_events_MouseEvent.__ctrlKey = null;
openfl_events_MouseEvent.__shiftKey = null;
openfl_events_MouseEvent.__create = function(type,button,stageX,stageY,local,target,delta) {
	if(delta == null) delta = 0;
	switch(type) {
	case "mouseDown":
		openfl_events_MouseEvent.__buttonDown = true;
		break;
	case "mouseUp":
		openfl_events_MouseEvent.__buttonDown = false;
		break;
	default:
	}
	var event = new openfl_events_MouseEvent(type,true,false,local.x,local.y,null,openfl_events_MouseEvent.__ctrlKey,openfl_events_MouseEvent.__altKey,openfl_events_MouseEvent.__shiftKey,openfl_events_MouseEvent.__buttonDown,delta,openfl_events_MouseEvent.__commandKey);
	event.stageX = stageX;
	event.stageY = stageY;
	event.target = target;
	return event;
};
openfl_events_MouseEvent.__super__ = openfl_events_Event;
openfl_events_MouseEvent.prototype = $extend(openfl_events_Event.prototype,{
	__class__: openfl_events_MouseEvent
});
var openfl_events_TouchEvent = function(type,bubbles,cancelable,localX,localY,sizeX,sizeY,relatedObject,ctrlKey,altKey,shiftKey,buttonDown,delta,commandKey,clickCount) {
	if(clickCount == null) clickCount = 0;
	if(commandKey == null) commandKey = false;
	if(delta == null) delta = 0;
	if(buttonDown == null) buttonDown = false;
	if(shiftKey == null) shiftKey = false;
	if(altKey == null) altKey = false;
	if(ctrlKey == null) ctrlKey = false;
	if(sizeY == null) sizeY = 1;
	if(sizeX == null) sizeX = 1;
	if(localY == null) localY = 0;
	if(localX == null) localX = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	openfl_events_Event.call(this,type,bubbles,cancelable);
	this.shiftKey = shiftKey;
	this.altKey = altKey;
	this.ctrlKey = ctrlKey;
	this.bubbles = bubbles;
	this.relatedObject = relatedObject;
	this.delta = delta;
	this.localX = localX;
	this.localY = localY;
	this.sizeX = sizeX;
	this.sizeY = sizeY;
	this.buttonDown = buttonDown;
	this.commandKey = commandKey;
	this.pressure = 1;
	this.touchPointID = 0;
	this.isPrimaryTouchPoint = true;
};
$hxClasses["openfl.events.TouchEvent"] = openfl_events_TouchEvent;
openfl_events_TouchEvent.__name__ = true;
openfl_events_TouchEvent.__create = function(type,touch,stageX,stageY,local,target) {
	var evt = new openfl_events_TouchEvent(type,true,false,local.x,local.y,null,null,null,false,false,false,false,0,null,0);
	evt.stageX = stageX;
	evt.stageY = stageY;
	evt.target = target;
	return evt;
};
openfl_events_TouchEvent.__super__ = openfl_events_Event;
openfl_events_TouchEvent.prototype = $extend(openfl_events_Event.prototype,{
	__class__: openfl_events_TouchEvent
});
var openfl_filters_BitmapFilter = function() { };
$hxClasses["openfl.filters.BitmapFilter"] = openfl_filters_BitmapFilter;
openfl_filters_BitmapFilter.__name__ = true;
var openfl_geom_Matrix3D = function() { };
$hxClasses["openfl.geom.Matrix3D"] = openfl_geom_Matrix3D;
openfl_geom_Matrix3D.__name__ = true;
openfl_geom_Matrix3D.prototype = {
	__class__: openfl_geom_Matrix3D
};
var openfl_geom_Transform = function(displayObject) {
	this.__colorTransform = new openfl_geom_ColorTransform();
	this.concatenatedColorTransform = new openfl_geom_ColorTransform();
	this.concatenatedMatrix = new openfl_geom_Matrix();
	this.pixelBounds = new openfl_geom_Rectangle();
	this.__displayObject = displayObject;
	this.__hasMatrix = true;
};
$hxClasses["openfl.geom.Transform"] = openfl_geom_Transform;
openfl_geom_Transform.__name__ = true;
openfl_geom_Transform.prototype = {
	get_colorTransform: function() {
		return this.__colorTransform;
	}
	,__class__: openfl_geom_Transform
	,__properties__: {get_colorTransform:"get_colorTransform"}
};
var openfl_geom_Vector3D = function() { };
$hxClasses["openfl.geom.Vector3D"] = openfl_geom_Vector3D;
openfl_geom_Vector3D.__name__ = true;
var openfl_media_ID3Info = function() { };
$hxClasses["openfl.media.ID3Info"] = openfl_media_ID3Info;
openfl_media_ID3Info.__name__ = true;
var openfl_media_Sound = function(stream,context) {
	openfl_events_EventDispatcher.call(this,this);
	this.bytesLoaded = 0;
	this.bytesTotal = 0;
	this.id3 = null;
	this.isBuffering = false;
	this.length = 0;
	this.url = null;
	if(stream != null) this.load(stream,context);
};
$hxClasses["openfl.media.Sound"] = openfl_media_Sound;
openfl_media_Sound.__name__ = true;
openfl_media_Sound.__super__ = openfl_events_EventDispatcher;
openfl_media_Sound.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	load: function(stream,context) {
		this.url = stream.url;
		this.__soundID = haxe_io_Path.withoutExtension(stream.url);
		if(!openfl_media_Sound.__registeredSounds.exists(this.__soundID)) {
			openfl_media_Sound.__registeredSounds.set(this.__soundID,true);
			createjs.Sound.addEventListener("fileload",$bind(this,this.SoundJS_onFileLoad));
			createjs.Sound.addEventListener("fileerror",$bind(this,this.SoundJS_onFileError));
			createjs.Sound.registerSound(this.url,this.__soundID);
		} else this.dispatchEvent(new openfl_events_Event(openfl_events_Event.COMPLETE));
	}
	,SoundJS_onFileLoad: function(event) {
		if(event.id == this.__soundID) {
			createjs.Sound.removeEventListener("fileload",$bind(this,this.SoundJS_onFileLoad));
			createjs.Sound.removeEventListener("fileerror",$bind(this,this.SoundJS_onFileError));
			this.dispatchEvent(new openfl_events_Event(openfl_events_Event.COMPLETE));
		}
	}
	,SoundJS_onFileError: function(event) {
		if(event.id == this.__soundID) {
			createjs.Sound.removeEventListener("fileload",$bind(this,this.SoundJS_onFileLoad));
			createjs.Sound.removeEventListener("fileerror",$bind(this,this.SoundJS_onFileError));
			this.dispatchEvent(new openfl_events_IOErrorEvent(openfl_events_IOErrorEvent.IO_ERROR));
		}
	}
	,__class__: openfl_media_Sound
});
var openfl_media_SoundLoaderContext = function() { };
$hxClasses["openfl.media.SoundLoaderContext"] = openfl_media_SoundLoaderContext;
openfl_media_SoundLoaderContext.__name__ = true;
var openfl_media_SoundTransform = function(vol,panning) {
	if(panning == null) panning = 0;
	if(vol == null) vol = 1;
	this.volume = vol;
	this.pan = panning;
	this.leftToLeft = 0;
	this.leftToRight = 0;
	this.rightToLeft = 0;
	this.rightToRight = 0;
};
$hxClasses["openfl.media.SoundTransform"] = openfl_media_SoundTransform;
openfl_media_SoundTransform.__name__ = true;
openfl_media_SoundTransform.prototype = {
	__class__: openfl_media_SoundTransform
};
var openfl_net_URLRequest = function(inURL) {
	if(inURL != null) this.url = inURL;
	this.requestHeaders = [];
	this.method = "GET";
	this.contentType = null;
};
$hxClasses["openfl.net.URLRequest"] = openfl_net_URLRequest;
openfl_net_URLRequest.__name__ = true;
openfl_net_URLRequest.prototype = {
	__class__: openfl_net_URLRequest
};
var openfl_net_URLRequestHeader = function() { };
$hxClasses["openfl.net.URLRequestHeader"] = openfl_net_URLRequestHeader;
openfl_net_URLRequestHeader.__name__ = true;
var openfl_text_Font = function() { };
$hxClasses["openfl.text.Font"] = openfl_text_Font;
openfl_text_Font.__name__ = true;
openfl_text_Font.__super__ = lime_text_Font;
openfl_text_Font.prototype = $extend(lime_text_Font.prototype,{
	__class__: openfl_text_Font
});
var openfl_text_GridFitType = $hxClasses["openfl.text.GridFitType"] = { __ename__ : true, __constructs__ : ["NONE","PIXEL","SUBPIXEL"] };
openfl_text_GridFitType.NONE = ["NONE",0];
openfl_text_GridFitType.NONE.toString = $estr;
openfl_text_GridFitType.NONE.__enum__ = openfl_text_GridFitType;
openfl_text_GridFitType.PIXEL = ["PIXEL",1];
openfl_text_GridFitType.PIXEL.toString = $estr;
openfl_text_GridFitType.PIXEL.__enum__ = openfl_text_GridFitType;
openfl_text_GridFitType.SUBPIXEL = ["SUBPIXEL",2];
openfl_text_GridFitType.SUBPIXEL.toString = $estr;
openfl_text_GridFitType.SUBPIXEL.__enum__ = openfl_text_GridFitType;
var openfl_text_TextField = function() {
	openfl_display_InteractiveObject.call(this);
	this.__width = 100;
	this.__height = 100;
	this.__text = "";
	this.__dirtyBounds = true;
	this.__bounds = new openfl_geom_Rectangle(0,0,0,0);
	this.__graphics = new openfl_display_Graphics();
	this.set_type(openfl_text_TextFieldType.DYNAMIC);
	this.set_autoSize(openfl_text_TextFieldAutoSize.NONE);
	this.displayAsPassword = false;
	this.embedFonts = false;
	this.set_selectable(true);
	this.set_borderColor(0);
	this.set_border(false);
	this.set_backgroundColor(16777215);
	this.set_background(false);
	this.gridFitType = openfl_text_GridFitType.PIXEL;
	this.maxChars = 0;
	this.multiline = false;
	this.sharpness = 0;
	this.scrollH = 0;
	this.scrollV = 1;
	this.set_wordWrap(false);
	if(openfl_text_TextField.__defaultTextFormat == null) {
		openfl_text_TextField.__defaultTextFormat = new openfl_text_TextFormat("Times New Roman",12,0,false,false,false,"","",openfl_text_TextFormatAlign.LEFT,0,0,0,0);
		openfl_text_TextField.__defaultTextFormat.blockIndent = 0;
		openfl_text_TextField.__defaultTextFormat.bullet = false;
		openfl_text_TextField.__defaultTextFormat.letterSpacing = 0;
		openfl_text_TextField.__defaultTextFormat.kerning = false;
	}
	this.__textFormat = openfl_text_TextField.__defaultTextFormat.clone();
};
$hxClasses["openfl.text.TextField"] = openfl_text_TextField;
openfl_text_TextField.__name__ = true;
openfl_text_TextField.__defaultTextFormat = null;
openfl_text_TextField.__super__ = openfl_display_InteractiveObject;
openfl_text_TextField.prototype = $extend(openfl_display_InteractiveObject.prototype,{
	__getBounds: function(rect,matrix) {
		var bounds = this.get_bounds().transform(matrix);
		rect.__expand(bounds.x,bounds.y,bounds.width,bounds.height);
	}
	,__getCursor: function() {
		if(this.type == openfl_text_TextFieldType.INPUT && this.selectable) return lime_ui_MouseCursor.TEXT; else return null;
	}
	,__getPosition: function(x,y) {
		if(x <= 2) return 0;
		var value = this.get_text();
		var text = value;
		var totalW = 2;
		var pos = text.length;
		if(x < openfl__$internal_renderer_canvas_CanvasTextField.getTextWidth(this,text) + 2) {
			var _g1 = 0;
			var _g = text.length;
			while(_g1 < _g) {
				var i = _g1++;
				totalW += openfl__$internal_renderer_canvas_CanvasTextField.getTextWidth(this,text.charAt(i));
				if(totalW >= x) {
					pos = i;
					break;
				}
			}
		}
		return pos;
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || interactiveOnly && !this.mouseEnabled) return false;
		var point = this.globalToLocal(new openfl_geom_Point(x,y));
		if(this.get_bounds().containsPoint(point)) {
			if(stack != null) stack.push(this);
			return true;
		}
		return false;
	}
	,__renderCairo: function(renderSession) {
		openfl__$internal_renderer_cairo_CairoTextField.render(this,renderSession);
		openfl_display_InteractiveObject.prototype.__renderCairo.call(this,renderSession);
	}
	,__renderCanvas: function(renderSession) {
		openfl__$internal_renderer_canvas_CanvasTextField.render(this,renderSession);
		openfl_display_InteractiveObject.prototype.__renderCanvas.call(this,renderSession);
	}
	,__renderDOM: function(renderSession) {
		openfl__$internal_renderer_dom_DOMTextField.render(this,renderSession);
	}
	,__renderGL: function(renderSession) {
		openfl__$internal_renderer_canvas_CanvasTextField.render(this,renderSession);
		openfl__$internal_renderer_opengl_GLRenderer.renderBitmap(this,renderSession);
	}
	,__startCursorTimer: function() {
		this.__cursorTimer = haxe_Timer.delay($bind(this,this.__startCursorTimer),500);
		this.__showCursor = !this.__showCursor;
		this.__dirty = true;
	}
	,__stopCursorTimer: function() {
		if(this.__cursorTimer != null) this.__cursorTimer.stop();
	}
	,input_onKeyUp: function(event) {
		this.__isKeyDown = false;
		if(event == null) event == window.event;
		this.__text = this.__hiddenInput.value;
		this.__ranges = null;
		this.__isHTML = false;
		if(this.__hiddenInput.selectionDirection == "backward") {
			this.__cursorPosition = this.__hiddenInput.selectionStart;
			this.__selectionStart = this.__hiddenInput.selectionEnd;
		} else {
			this.__cursorPosition = this.__hiddenInput.selectionEnd;
			this.__selectionStart = this.__hiddenInput.selectionStart;
		}
		this.__dirty = true;
		this.dispatchEvent(new openfl_events_Event(openfl_events_Event.CHANGE,true));
	}
	,input_onKeyDown: function(event) {
		this.__isKeyDown = true;
		if(event == null) event == window.event;
		var keyCode = event.which;
		var isShift = event.shiftKey;
		this.__text = this.__hiddenInput.value;
		this.__ranges = null;
		this.__isHTML = false;
		if(this.__hiddenInput.selectionDirection == "backward") {
			this.__cursorPosition = this.__hiddenInput.selectionStart;
			this.__selectionStart = this.__hiddenInput.selectionEnd;
		} else {
			this.__cursorPosition = this.__hiddenInput.selectionEnd;
			this.__selectionStart = this.__hiddenInput.selectionStart;
		}
		this.__dirty = true;
	}
	,stage_onMouseMove: function(event) {
		if(this.__hasFocus && this.__selectionStart >= 0) {
			var localPoint = this.globalToLocal(new openfl_geom_Point(event.stageX,event.stageY));
			this.__cursorPosition = this.__getPosition(localPoint.x,localPoint.y);
			this.__dirty = true;
		}
	}
	,stage_onMouseUp: function(event) {
		this.stage.removeEventListener(openfl_events_MouseEvent.MOUSE_MOVE,$bind(this,this.stage_onMouseMove));
		this.stage.removeEventListener(openfl_events_MouseEvent.MOUSE_UP,$bind(this,this.stage_onMouseUp));
		if(this.stage.get_focus() == this) {
			var localPoint = this.globalToLocal(new openfl_geom_Point(event.stageX,event.stageY));
			var upPos = this.__getPosition(localPoint.x,localPoint.y);
			var leftPos;
			var rightPos;
			leftPos = Std["int"](Math.min(this.__selectionStart,upPos));
			rightPos = Std["int"](Math.max(this.__selectionStart,upPos));
			this.__selectionStart = leftPos;
			this.__cursorPosition = rightPos;
			this.this_onFocusIn(null);
		}
	}
	,this_onAddedToStage: function(event) {
		this.addEventListener(openfl_events_FocusEvent.FOCUS_IN,$bind(this,this.this_onFocusIn));
		this.addEventListener(openfl_events_FocusEvent.FOCUS_OUT,$bind(this,this.this_onFocusOut));
		this.__hiddenInput.addEventListener("keydown",$bind(this,this.input_onKeyDown),true);
		this.__hiddenInput.addEventListener("keyup",$bind(this,this.input_onKeyUp),true);
		this.__hiddenInput.addEventListener("input",$bind(this,this.input_onKeyUp),true);
		this.addEventListener(openfl_events_MouseEvent.MOUSE_DOWN,$bind(this,this.this_onMouseDown));
		if(this.stage.get_focus() == this) this.this_onFocusIn(null);
	}
	,this_onFocusIn: function(event) {
		if(this.__cursorPosition < 0) {
			this.__cursorPosition = this.__text.length;
			this.__selectionStart = this.__cursorPosition;
		}
		this.__hiddenInput.focus();
		this.__hiddenInput.selectionStart = this.__selectionStart;
		this.__hiddenInput.selectionEnd = this.__cursorPosition;
		this.__stopCursorTimer();
		this.__startCursorTimer();
		this.__hasFocus = true;
		this.__dirty = true;
		this.stage.addEventListener(openfl_events_MouseEvent.MOUSE_UP,$bind(this,this.stage_onMouseUp));
	}
	,this_onFocusOut: function(event) {
		this.__cursorPosition = -1;
		this.__hasFocus = false;
		this.__stopCursorTimer();
		if(this.__hiddenInput != null) this.__hiddenInput.blur();
		this.__dirty = true;
	}
	,this_onMouseDown: function(event) {
		if(!this.selectable) return;
		var localPoint = this.globalToLocal(new openfl_geom_Point(event.stageX,event.stageY));
		this.__selectionStart = this.__getPosition(localPoint.x,localPoint.y);
		this.__cursorPosition = this.__selectionStart;
		this.stage.addEventListener(openfl_events_MouseEvent.MOUSE_MOVE,$bind(this,this.stage_onMouseMove));
		this.stage.addEventListener(openfl_events_MouseEvent.MOUSE_UP,$bind(this,this.stage_onMouseUp));
	}
	,this_onRemovedFromStage: function(event) {
		this.removeEventListener(openfl_events_FocusEvent.FOCUS_IN,$bind(this,this.this_onFocusIn));
		this.removeEventListener(openfl_events_FocusEvent.FOCUS_OUT,$bind(this,this.this_onFocusOut));
		this.this_onFocusOut(null);
		if(this.__hiddenInput != null) this.__hiddenInput.removeEventListener("keydown",$bind(this,this.input_onKeyDown),true);
		if(this.__hiddenInput != null) this.__hiddenInput.removeEventListener("keyup",$bind(this,this.input_onKeyUp),true);
		if(this.__hiddenInput != null) this.__hiddenInput.removeEventListener("input",$bind(this,this.input_onKeyUp),true);
		this.removeEventListener(openfl_events_MouseEvent.MOUSE_DOWN,$bind(this,this.this_onMouseDown));
		if(this.stage != null) this.stage.removeEventListener(openfl_events_MouseEvent.MOUSE_MOVE,$bind(this,this.stage_onMouseMove));
		if(this.stage != null) this.stage.removeEventListener(openfl_events_MouseEvent.MOUSE_UP,$bind(this,this.stage_onMouseUp));
	}
	,set_autoSize: function(value) {
		if(value != this.autoSize) {
			this.__dirty = true;
			this.__dirtyBounds = true;
		}
		return this.autoSize = value;
	}
	,set_background: function(value) {
		if(value != this.background) this.__dirty = true;
		return this.background = value;
	}
	,set_backgroundColor: function(value) {
		if(value != this.backgroundColor) this.__dirty = true;
		return this.backgroundColor = value;
	}
	,set_border: function(value) {
		if(value != this.border) {
			this.__dirty = true;
			this.__dirtyBounds = true;
		}
		return this.border = value;
	}
	,set_borderColor: function(value) {
		if(value != this.borderColor) this.__dirty = true;
		return this.borderColor = value;
	}
	,get_bounds: function() {
		if(!this.__dirtyBounds) return this.__bounds;
		if(this.autoSize != openfl_text_TextFieldAutoSize.NONE) {
			this.__bounds.width = this.get_textWidth() + 4 + (this.border?1:0);
			this.__bounds.height = this.get_textHeight() + 4 + (this.border?1:0);
		} else {
			this.__bounds.width = this.__width;
			this.__bounds.height = this.__height;
		}
		this.__dirtyBounds = false;
		return this.__bounds;
	}
	,set_defaultTextFormat: function(value) {
		this.__textFormat.__merge(value);
		return value;
	}
	,get_height: function() {
		return this.get_bounds().height;
	}
	,set_height: function(value) {
		if(this.get_scaleY() != 1 || value != this.__height) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
			this.__dirty = true;
			this.__dirtyBounds = true;
		}
		this.set_scaleY(1);
		return this.__height = value;
	}
	,get_numLines: function() {
		if(this.get_text() != "" && this.get_text() != null) {
			var count = this.get_text().split("\n").length;
			if(this.__isHTML) count += this.get_text().split("<br>").length - 1;
			return count;
		}
		return 1;
	}
	,set_selectable: function(value) {
		if(!value && this.selectable && this.type == openfl_text_TextFieldType.INPUT) this.this_onRemovedFromStage(null);
		return this.selectable = value;
	}
	,get_text: function() {
		if(this.__isHTML) {
		}
		return this.__text;
	}
	,set_text: function(value) {
		if(this.__text != value && this.__hiddenInput != null) {
			var selectionStart = this.__hiddenInput.selectionStart;
			var selectionEnd = this.__hiddenInput.selectionEnd;
			this.__hiddenInput.value = value;
			this.__hiddenInput.selectionStart = selectionStart;
			this.__hiddenInput.selectionEnd = selectionEnd;
		}
		if(this.__isHTML || this.__text != value) {
			this.__dirty = true;
			this.__dirtyBounds = true;
		}
		this.__ranges = null;
		this.__isHTML = false;
		return this.__text = value;
	}
	,get_textWidth: function() {
		return openfl__$internal_renderer_canvas_CanvasTextField.getLineWidth(this,-1);
	}
	,get_textHeight: function() {
		if(this.__canvas != null) return this.__textFormat.size * 1.185 * this.get_numLines() + (this.__textFormat.leading == null?0:this.__textFormat.leading) * this.get_numLines(); else if(this.__div != null) return this.__div.clientHeight; else {
			openfl__$internal_renderer_dom_DOMTextField.measureText(this);
			return this.__measuredHeight + this.__textFormat.size * 0.185;
		}
	}
	,set_type: function(value) {
		if(value != this.type) {
			if(value == openfl_text_TextFieldType.INPUT) openfl__$internal_renderer_canvas_CanvasTextField.enableInputMode(this); else openfl__$internal_renderer_canvas_CanvasTextField.disableInputMode(this);
			this.__dirty = true;
		}
		return this.type = value;
	}
	,get_width: function() {
		return this.get_bounds().width;
	}
	,set_width: function(value) {
		if(this.get_scaleX() != 1 || this.__width != value) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl_display_DisplayObject.__worldTransformDirty++;
			}
			this.__dirty = true;
			this.__dirtyBounds = true;
		}
		this.set_scaleX(1);
		return this.__width = value;
	}
	,get_wordWrap: function() {
		return this.wordWrap;
	}
	,set_wordWrap: function(value) {
		return this.wordWrap = value;
	}
	,__class__: openfl_text_TextField
	,__properties__: $extend(openfl_display_InteractiveObject.prototype.__properties__,{get_textHeight:"get_textHeight",get_textWidth:"get_textWidth",get_numLines:"get_numLines",get_bounds:"get_bounds",set_wordWrap:"set_wordWrap",get_wordWrap:"get_wordWrap",set_type:"set_type",set_text:"set_text",get_text:"get_text",set_selectable:"set_selectable",set_defaultTextFormat:"set_defaultTextFormat",set_borderColor:"set_borderColor",set_border:"set_border",set_backgroundColor:"set_backgroundColor",set_background:"set_background",set_autoSize:"set_autoSize"})
});
var openfl_text_TextFormatRange = function() { };
$hxClasses["openfl.text.TextFormatRange"] = openfl_text_TextFormatRange;
openfl_text_TextFormatRange.__name__ = true;
openfl_text_TextFormatRange.prototype = {
	__class__: openfl_text_TextFormatRange
};
var openfl_text_TextFieldAutoSize = $hxClasses["openfl.text.TextFieldAutoSize"] = { __ename__ : true, __constructs__ : ["CENTER","LEFT","NONE","RIGHT"] };
openfl_text_TextFieldAutoSize.CENTER = ["CENTER",0];
openfl_text_TextFieldAutoSize.CENTER.toString = $estr;
openfl_text_TextFieldAutoSize.CENTER.__enum__ = openfl_text_TextFieldAutoSize;
openfl_text_TextFieldAutoSize.LEFT = ["LEFT",1];
openfl_text_TextFieldAutoSize.LEFT.toString = $estr;
openfl_text_TextFieldAutoSize.LEFT.__enum__ = openfl_text_TextFieldAutoSize;
openfl_text_TextFieldAutoSize.NONE = ["NONE",2];
openfl_text_TextFieldAutoSize.NONE.toString = $estr;
openfl_text_TextFieldAutoSize.NONE.__enum__ = openfl_text_TextFieldAutoSize;
openfl_text_TextFieldAutoSize.RIGHT = ["RIGHT",3];
openfl_text_TextFieldAutoSize.RIGHT.toString = $estr;
openfl_text_TextFieldAutoSize.RIGHT.__enum__ = openfl_text_TextFieldAutoSize;
var openfl_text_TextFieldType = $hxClasses["openfl.text.TextFieldType"] = { __ename__ : true, __constructs__ : ["DYNAMIC","INPUT"] };
openfl_text_TextFieldType.DYNAMIC = ["DYNAMIC",0];
openfl_text_TextFieldType.DYNAMIC.toString = $estr;
openfl_text_TextFieldType.DYNAMIC.__enum__ = openfl_text_TextFieldType;
openfl_text_TextFieldType.INPUT = ["INPUT",1];
openfl_text_TextFieldType.INPUT.toString = $estr;
openfl_text_TextFieldType.INPUT.__enum__ = openfl_text_TextFieldType;
var openfl_text_TextFormat = function(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading) {
	this.font = font;
	this.size = size;
	this.color = color;
	this.bold = bold;
	this.italic = italic;
	this.underline = underline;
	this.url = url;
	this.target = target;
	this.align = align;
	this.leftMargin = leftMargin;
	this.rightMargin = rightMargin;
	this.indent = indent;
	this.leading = leading;
};
$hxClasses["openfl.text.TextFormat"] = openfl_text_TextFormat;
openfl_text_TextFormat.__name__ = true;
openfl_text_TextFormat.prototype = {
	clone: function() {
		var newFormat = new openfl_text_TextFormat(this.font,this.size,this.color,this.bold,this.italic,this.underline,this.url,this.target);
		newFormat.align = this.align;
		newFormat.leftMargin = this.leftMargin;
		newFormat.rightMargin = this.rightMargin;
		newFormat.indent = this.indent;
		newFormat.leading = this.leading;
		newFormat.blockIndent = this.blockIndent;
		newFormat.bullet = this.bullet;
		newFormat.kerning = this.kerning;
		newFormat.letterSpacing = this.letterSpacing;
		newFormat.tabStops = this.tabStops;
		return newFormat;
	}
	,__merge: function(format) {
		if(format.font != null) this.font = format.font;
		if(format.size != null) this.size = format.size;
		if(format.color != null) this.color = format.color;
		if(format.bold != null) this.bold = format.bold;
		if(format.italic != null) this.italic = format.italic;
		if(format.underline != null) this.underline = format.underline;
		if(format.url != null) this.url = format.url;
		if(format.target != null) this.target = format.target;
		if(format.align != null) this.align = format.align;
		if(format.leftMargin != null) this.leftMargin = format.leftMargin;
		if(format.rightMargin != null) this.rightMargin = format.rightMargin;
		if(format.indent != null) this.indent = format.indent;
		if(format.leading != null) this.leading = format.leading;
		if(format.blockIndent != null) this.blockIndent = format.blockIndent;
		if(format.bullet != null) this.bullet = format.bullet;
		if(format.kerning != null) this.kerning = format.kerning;
		if(format.letterSpacing != null) this.letterSpacing = format.letterSpacing;
		if(format.tabStops != null) this.tabStops = format.tabStops;
	}
	,__class__: openfl_text_TextFormat
};
var openfl_text_TextFormatAlign = $hxClasses["openfl.text.TextFormatAlign"] = { __ename__ : true, __constructs__ : ["LEFT","RIGHT","JUSTIFY","CENTER"] };
openfl_text_TextFormatAlign.LEFT = ["LEFT",0];
openfl_text_TextFormatAlign.LEFT.toString = $estr;
openfl_text_TextFormatAlign.LEFT.__enum__ = openfl_text_TextFormatAlign;
openfl_text_TextFormatAlign.RIGHT = ["RIGHT",1];
openfl_text_TextFormatAlign.RIGHT.toString = $estr;
openfl_text_TextFormatAlign.RIGHT.__enum__ = openfl_text_TextFormatAlign;
openfl_text_TextFormatAlign.JUSTIFY = ["JUSTIFY",2];
openfl_text_TextFormatAlign.JUSTIFY.toString = $estr;
openfl_text_TextFormatAlign.JUSTIFY.__enum__ = openfl_text_TextFormatAlign;
openfl_text_TextFormatAlign.CENTER = ["CENTER",3];
openfl_text_TextFormatAlign.CENTER.toString = $estr;
openfl_text_TextFormatAlign.CENTER.__enum__ = openfl_text_TextFormatAlign;
var openfl_ui_GameInput = function() { };
$hxClasses["openfl.ui.GameInput"] = openfl_ui_GameInput;
openfl_ui_GameInput.__name__ = true;
openfl_ui_GameInput.__onGamepadAxisMove = function(gamepad,axis,value) {
	var device = openfl_ui_GameInput.__devices.h[gamepad.__id__];
	if(device.enabled) {
		if(!device.__axis.h.hasOwnProperty(axis)) {
			var control1 = new openfl_ui_GameInputControl(device,"AXIS_" + (function($this) {
				var $r;
				switch(axis) {
				case 0:
					$r = "LEFT_X";
					break;
				case 1:
					$r = "LEFT_Y";
					break;
				case 2:
					$r = "RIGHT_X";
					break;
				case 3:
					$r = "RIGHT_Y";
					break;
				case 4:
					$r = "TRIGGER_LEFT";
					break;
				case 5:
					$r = "TRIGGER_RIGHT";
					break;
				default:
					$r = "UNKNOWN (" + axis + ")";
				}
				return $r;
			}(this)),-1,1);
			device.__axis.h[axis] = control1;
			device.__controls.push(control1);
		}
		var control = device.__axis.h[axis];
		control.value = value;
		control.dispatchEvent(new openfl_events_Event(openfl_events_Event.CHANGE));
	}
};
openfl_ui_GameInput.__onGamepadButtonDown = function(gamepad,button) {
	var device = openfl_ui_GameInput.__devices.h[gamepad.__id__];
	if(device.enabled) {
		if(!device.__button.h.hasOwnProperty(button)) {
			var control1 = new openfl_ui_GameInputControl(device,"BUTTON_" + (function($this) {
				var $r;
				switch(button) {
				case 0:
					$r = "A";
					break;
				case 1:
					$r = "B";
					break;
				case 2:
					$r = "X";
					break;
				case 3:
					$r = "Y";
					break;
				case 4:
					$r = "BACK";
					break;
				case 5:
					$r = "GUIDE";
					break;
				case 6:
					$r = "START";
					break;
				case 7:
					$r = "LEFT_STICK";
					break;
				case 8:
					$r = "RIGHT_STICK";
					break;
				case 9:
					$r = "LEFT_SHOULDER";
					break;
				case 10:
					$r = "RIGHT_SHOULDER";
					break;
				case 11:
					$r = "DPAD_UP";
					break;
				case 12:
					$r = "DPAD_DOWN";
					break;
				case 13:
					$r = "DPAD_LEFT";
					break;
				case 14:
					$r = "DPAD_RIGHT";
					break;
				default:
					$r = "UNKNOWN (" + button + ")";
				}
				return $r;
			}(this)),0,1);
			device.__button.h[button] = control1;
			device.__controls.push(control1);
		}
		var control = device.__button.h[button];
		control.value = 1;
		control.dispatchEvent(new openfl_events_Event(openfl_events_Event.CHANGE));
	}
};
openfl_ui_GameInput.__onGamepadButtonUp = function(gamepad,button) {
	var device = openfl_ui_GameInput.__devices.h[gamepad.__id__];
	if(device.enabled) {
		if(!device.__button.h.hasOwnProperty(button)) {
			var control1 = new openfl_ui_GameInputControl(device,"BUTTON_" + (function($this) {
				var $r;
				switch(button) {
				case 0:
					$r = "A";
					break;
				case 1:
					$r = "B";
					break;
				case 2:
					$r = "X";
					break;
				case 3:
					$r = "Y";
					break;
				case 4:
					$r = "BACK";
					break;
				case 5:
					$r = "GUIDE";
					break;
				case 6:
					$r = "START";
					break;
				case 7:
					$r = "LEFT_STICK";
					break;
				case 8:
					$r = "RIGHT_STICK";
					break;
				case 9:
					$r = "LEFT_SHOULDER";
					break;
				case 10:
					$r = "RIGHT_SHOULDER";
					break;
				case 11:
					$r = "DPAD_UP";
					break;
				case 12:
					$r = "DPAD_DOWN";
					break;
				case 13:
					$r = "DPAD_LEFT";
					break;
				case 14:
					$r = "DPAD_RIGHT";
					break;
				default:
					$r = "UNKNOWN (" + button + ")";
				}
				return $r;
			}(this)),0,1);
			device.__button.h[button] = control1;
			device.__controls.push(control1);
		}
		var control = device.__button.h[button];
		control.value = 0;
		control.dispatchEvent(new openfl_events_Event(openfl_events_Event.CHANGE));
	}
};
openfl_ui_GameInput.__onGamepadConnect = function(gamepad) {
	var device = new openfl_ui_GameInputDevice(null,null);
	openfl_ui_GameInput.__devices.set(gamepad,device);
	openfl_ui_GameInput.numDevices = Lambda.count(openfl_ui_GameInput.__devices);
	var _g = 0;
	var _g1 = openfl_ui_GameInput.__instances;
	while(_g < _g1.length) {
		var instance = _g1[_g];
		++_g;
		instance.dispatchEvent(new openfl_events_GameInputEvent(openfl_events_GameInputEvent.DEVICE_ADDED,null,null,device));
	}
};
openfl_ui_GameInput.__onGamepadDisconnect = function(gamepad) {
	var device = openfl_ui_GameInput.__devices.h[gamepad.__id__];
	if(device != null) {
		openfl_ui_GameInput.__devices.remove(gamepad);
		openfl_ui_GameInput.numDevices = Lambda.count(openfl_ui_GameInput.__devices);
		var _g = 0;
		var _g1 = openfl_ui_GameInput.__instances;
		while(_g < _g1.length) {
			var instance = _g1[_g];
			++_g;
			instance.dispatchEvent(new openfl_events_GameInputEvent(openfl_events_GameInputEvent.DEVICE_REMOVED,null,null,device));
		}
	}
};
openfl_ui_GameInput.__super__ = openfl_events_EventDispatcher;
openfl_ui_GameInput.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	__class__: openfl_ui_GameInput
});
var openfl_ui_GameInputControl = function(device,id,minValue,maxValue,value) {
	if(value == null) value = 0;
	openfl_events_EventDispatcher.call(this);
	this.device = device;
	this.id = id;
	this.minValue = minValue;
	this.maxValue = maxValue;
	this.value = value;
};
$hxClasses["openfl.ui.GameInputControl"] = openfl_ui_GameInputControl;
openfl_ui_GameInputControl.__name__ = true;
openfl_ui_GameInputControl.__super__ = openfl_events_EventDispatcher;
openfl_ui_GameInputControl.prototype = $extend(openfl_events_EventDispatcher.prototype,{
	__class__: openfl_ui_GameInputControl
});
var openfl_ui_GameInputDevice = function(id,name) {
	this.__controls = [];
	this.__button = new haxe_ds_IntMap();
	this.__axis = new haxe_ds_IntMap();
	this.id = id;
	this.name = name;
	var control;
	var _g = 0;
	while(_g < 6) {
		var i = _g++;
		control = new openfl_ui_GameInputControl(this,"AXIS_" + i,-1,1);
		this.__axis.h[i] = control;
		this.__controls.push(control);
	}
	var _g1 = 0;
	while(_g1 < 15) {
		var i1 = _g1++;
		control = new openfl_ui_GameInputControl(this,"BUTTON_" + i1,0,1);
		this.__button.h[i1] = control;
		this.__controls.push(control);
	}
};
$hxClasses["openfl.ui.GameInputDevice"] = openfl_ui_GameInputDevice;
openfl_ui_GameInputDevice.__name__ = true;
openfl_ui_GameInputDevice.prototype = {
	__class__: openfl_ui_GameInputDevice
};
var openfl_ui_Keyboard = function() { };
$hxClasses["openfl.ui.Keyboard"] = openfl_ui_Keyboard;
openfl_ui_Keyboard.__name__ = true;
openfl_ui_Keyboard.convertKeyCode = function(key) {
	switch(key) {
	case 8:
		return 8;
	case 9:
		return 9;
	case 13:
		return 13;
	case 27:
		return 27;
	case 32:
		return 32;
	case 33:
		return 49;
	case 34:
		return 222;
	case 35:
		return 51;
	case 36:
		return 52;
	case 37:
		return 53;
	case 38:
		return 55;
	case 39:
		return 222;
	case 40:
		return 57;
	case 41:
		return 48;
	case 42:
		return 56;
	case 44:
		return 188;
	case 45:
		return 189;
	case 46:
		return 190;
	case 47:
		return 191;
	case 48:
		return 48;
	case 49:
		return 49;
	case 50:
		return 50;
	case 51:
		return 51;
	case 52:
		return 52;
	case 53:
		return 53;
	case 54:
		return 54;
	case 55:
		return 55;
	case 56:
		return 56;
	case 57:
		return 57;
	case 58:
		return 186;
	case 59:
		return 186;
	case 60:
		return 60;
	case 61:
		return 187;
	case 62:
		return 190;
	case 63:
		return 191;
	case 64:
		return 50;
	case 91:
		return 219;
	case 92:
		return 220;
	case 93:
		return 221;
	case 94:
		return 54;
	case 95:
		return 189;
	case 96:
		return 192;
	case 97:
		return 65;
	case 98:
		return 66;
	case 99:
		return 67;
	case 100:
		return 68;
	case 101:
		return 69;
	case 102:
		return 70;
	case 103:
		return 71;
	case 104:
		return 72;
	case 105:
		return 73;
	case 106:
		return 74;
	case 107:
		return 75;
	case 108:
		return 76;
	case 109:
		return 77;
	case 110:
		return 78;
	case 111:
		return 79;
	case 112:
		return 80;
	case 113:
		return 81;
	case 114:
		return 82;
	case 115:
		return 83;
	case 116:
		return 84;
	case 117:
		return 85;
	case 118:
		return 86;
	case 119:
		return 87;
	case 120:
		return 88;
	case 121:
		return 89;
	case 122:
		return 90;
	case 127:
		return 46;
	case 1073741881:
		return 20;
	case 1073741882:
		return 112;
	case 1073741883:
		return 113;
	case 1073741884:
		return 114;
	case 1073741885:
		return 115;
	case 1073741886:
		return 116;
	case 1073741887:
		return 117;
	case 1073741888:
		return 118;
	case 1073741889:
		return 119;
	case 1073741890:
		return 120;
	case 1073741891:
		return 121;
	case 1073741892:
		return 122;
	case 1073741893:
		return 123;
	case 1073741894:
		return 301;
	case 1073741895:
		return 145;
	case 1073741896:
		return 19;
	case 1073741897:
		return 45;
	case 1073741898:
		return 36;
	case 1073741899:
		return 33;
	case 1073741901:
		return 35;
	case 1073741902:
		return 34;
	case 1073741903:
		return 39;
	case 1073741904:
		return 37;
	case 1073741905:
		return 40;
	case 1073741906:
		return 38;
	case 1073741907:
		return 144;
	case 1073741908:
		return 111;
	case 1073741909:
		return 106;
	case 1073741910:
		return 109;
	case 1073741911:
		return 107;
	case 1073741912:
		return 108;
	case 1073741913:
		return 97;
	case 1073741914:
		return 98;
	case 1073741915:
		return 99;
	case 1073741916:
		return 100;
	case 1073741917:
		return 101;
	case 1073741918:
		return 102;
	case 1073741919:
		return 103;
	case 1073741920:
		return 104;
	case 1073741921:
		return 105;
	case 1073741922:
		return 96;
	case 1073741923:
		return 110;
	case 1073741925:
		return 302;
	case 1073741928:
		return 124;
	case 1073741929:
		return 125;
	case 1073741930:
		return 126;
	case 1073741982:
		return 13;
	case 1073742044:
		return 110;
	case 1073742048:
		return 17;
	case 1073742049:
		return 16;
	case 1073742050:
		return 18;
	case 1073742051:
		return 15;
	case 1073742052:
		return 17;
	case 1073742053:
		return 16;
	case 1073742054:
		return 18;
	case 1073742055:
		return 15;
	default:
		return key;
	}
};
openfl_ui_Keyboard.__getCharCode = function(key,shift) {
	if(shift == null) shift = false;
	if(!shift) {
		switch(key) {
		case 8:
			return 8;
		case 9:
			return 9;
		case 13:
			return 13;
		case 27:
			return 27;
		case 32:
			return 32;
		case 186:
			return 59;
		case 187:
			return 61;
		case 188:
			return 44;
		case 189:
			return 45;
		case 190:
			return 46;
		case 191:
			return 47;
		case 192:
			return 96;
		case 219:
			return 91;
		case 220:
			return 92;
		case 221:
			return 93;
		case 222:
			return 39;
		}
		if(key >= 48 && key <= 57) return key - 48 + 48;
		if(key >= 65 && key <= 90) return key - 65 + 97;
	} else {
		switch(key) {
		case 48:
			return 41;
		case 49:
			return 33;
		case 50:
			return 64;
		case 51:
			return 35;
		case 52:
			return 36;
		case 53:
			return 37;
		case 54:
			return 94;
		case 55:
			return 38;
		case 56:
			return 42;
		case 57:
			return 40;
		case 186:
			return 58;
		case 187:
			return 43;
		case 188:
			return 60;
		case 189:
			return 95;
		case 190:
			return 62;
		case 191:
			return 63;
		case 192:
			return 126;
		case 219:
			return 123;
		case 220:
			return 124;
		case 221:
			return 125;
		case 222:
			return 34;
		}
		if(key >= 65 && key <= 90) return key - 65 + 65;
	}
	if(key >= 96 && key <= 105) return key - 96 + 48;
	switch(key) {
	case 106:
		return 42;
	case 107:
		return 43;
	case 108:
		return 44;
	case 110:
		return 45;
	case 111:
		return 46;
	case 46:
		return 127;
	case 13:
		return 13;
	case 8:
		return 8;
	}
	return 0;
};
function $iterator(o) { if( o instanceof Array ) return function() { return HxOverrides.iter(o); }; return typeof(o.iterator) == 'function' ? $bind(o,o.iterator) : o.iterator; }
var $_, $fid = 0;
function $bind(o,m) { if( m == null ) return null; if( m.__id__ == null ) m.__id__ = $fid++; var f; if( o.hx__closures__ == null ) o.hx__closures__ = {}; else f = o.hx__closures__[m.__id__]; if( f == null ) { f = function(){ return f.method.apply(f.scope, arguments); }; f.scope = o; f.method = m; o.hx__closures__[m.__id__] = f; } return f; }
if(Array.prototype.indexOf) HxOverrides.indexOf = function(a,o,i) {
	return Array.prototype.indexOf.call(a,o,i);
};
$hxClasses.Math = Math;
Slides.populateSlides();
String.prototype.__class__ = $hxClasses.String = String;
String.__name__ = true;
$hxClasses.Array = Array;
Array.__name__ = true;
Date.prototype.__class__ = $hxClasses.Date = Date;
Date.__name__ = ["Date"];
var Int = $hxClasses.Int = { __name__ : ["Int"]};
var Dynamic = $hxClasses.Dynamic = { __name__ : ["Dynamic"]};
var Float = $hxClasses.Float = Number;
Float.__name__ = ["Float"];
var Bool = $hxClasses.Bool = Boolean;
Bool.__ename__ = ["Bool"];
var Class = $hxClasses.Class = { __name__ : ["Class"]};
var Enum = { };
var __map_reserved = {}
var ArrayBuffer = (Function("return typeof ArrayBuffer != 'undefined' ? ArrayBuffer : null"))() || js_html_compat_ArrayBuffer;
if(ArrayBuffer.prototype.slice == null) ArrayBuffer.prototype.slice = js_html_compat_ArrayBuffer.sliceImpl;
var DataView = (Function("return typeof DataView != 'undefined' ? DataView : null"))() || js_html_compat_DataView;
var Uint8Array = (Function("return typeof Uint8Array != 'undefined' ? Uint8Array : null"))() || js_html_compat_Uint8Array._new;
var this1;
this1 = new Array(256);
lime_graphics_utils_ImageDataUtil.__alpha16 = this1;
var _g = 0;
while(_g < 256) {
	var i = _g++;
	lime_graphics_utils_ImageDataUtil.__alpha16[i] = i * 65536 / 255 | 0;
}
var this2;
this2 = new Array(510);
lime_graphics_utils_ImageDataUtil.__clamp = this2;
var _g1 = 0;
while(_g1 < 255) {
	var i1 = _g1++;
	lime_graphics_utils_ImageDataUtil.__clamp[i1] = i1;
}
var _g11 = 255;
var _g2 = 511;
while(_g11 < _g2) {
	var i2 = _g11++;
	lime_graphics_utils_ImageDataUtil.__clamp[i2] = 255;
}
if(window.createjs != null) createjs.Sound.alternateExtensions = ["ogg","mp3","wav"];
openfl_display_DisplayObject.__instanceCount = 0;
openfl_display_DisplayObject.__worldRenderDirty = 0;
openfl_display_DisplayObject.__worldTransformDirty = 0;
haxe_ds_ObjectMap.count = 0;
haxe_io_FPHelper.i64tmp = (function($this) {
	var $r;
	var x = new haxe__$Int64__$_$_$Int64(0,0);
	$r = x;
	return $r;
}(this));
js_Boot.__toStr = {}.toString;
js_html_compat_Uint8Array.BYTES_PER_ELEMENT = 1;
lime_Assets.cache = new lime_AssetCache();
lime_Assets.libraries = new haxe_ds_StringMap();
lime_Assets.initialized = false;
lime_app_Preloader.images = new haxe_ds_StringMap();
lime_app_Preloader.loaders = new haxe_ds_StringMap();
motion_actuators_SimpleActuator.actuators = [];
motion_actuators_SimpleActuator.actuatorsLength = 0;
motion_actuators_SimpleActuator.addedEvent = false;
motion_Actuate.defaultActuator = motion_actuators_SimpleActuator;
motion_Actuate.defaultEase = motion_easing_Expo.get_easeOut();
motion_Actuate.targetLibraries = new haxe_ds_ObjectMap();
openfl_Assets.cache = new openfl_AssetCache();
openfl_display_LoaderInfo.__rootURL = window.document.URL;
openfl_system_ApplicationDomain.currentDomain = new openfl_system_ApplicationDomain(null);
openfl_geom_Matrix.__identity = new openfl_geom_Matrix();
openfl_Lib.current = new openfl_display_MovieClip();
openfl_Lib.__sentWarnings = new haxe_ds_StringMap();
openfl__$internal_renderer_cairo_CairoGraphics.SIN45 = 0.70710678118654752440084436210485;
openfl__$internal_renderer_cairo_CairoGraphics.TAN22 = 0.4142135623730950488016887242097;
openfl__$internal_renderer_canvas_CanvasGraphics.SIN45 = 0.70710678118654752440084436210485;
openfl__$internal_renderer_canvas_CanvasGraphics.TAN22 = 0.4142135623730950488016887242097;
openfl__$internal_renderer_canvas_CanvasTextField.__utf8_endline_code = 10;
openfl__$internal_renderer_opengl_GLRenderer.glContextId = 0;
openfl__$internal_renderer_opengl_GLRenderer.glContexts = [];
openfl__$internal_renderer_opengl_shaders2_Shader.UID = 0;
openfl__$internal_renderer_opengl_utils_BlendModeManager.glBlendModes = null;
openfl__$internal_renderer_opengl_utils_PathBuiler.__currentWinding = 0;
openfl__$internal_renderer_opengl_utils_PathBuiler.__fillIndex = 0;
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.fillVertexAttributes = [new openfl__$internal_renderer_opengl_utils_VertexAttribute(2,5126,false,"aPosition")];
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.drawTrianglesVertexAttributes = [new openfl__$internal_renderer_opengl_utils_VertexAttribute(2,5126,false,"aPosition"),new openfl__$internal_renderer_opengl_utils_VertexAttribute(2,5126,false,"aTexCoord0"),new openfl__$internal_renderer_opengl_utils_VertexAttribute(4,5121,true,"aColor")];
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.primitiveVertexAttributes = [new openfl__$internal_renderer_opengl_utils_VertexAttribute(2,5126,false,"aPosition"),new openfl__$internal_renderer_opengl_utils_VertexAttribute(4,5126,false,"aColor")];
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.bucketPool = [];
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.SIN45 = 0.70710678118654752440084436210485;
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.TAN22 = 0.4142135623730950488016887242097;
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectPosition = new openfl_geom_Point();
openfl__$internal_renderer_opengl_utils_GraphicsRenderer.objectBounds = new openfl_geom_Rectangle();
openfl_events_Event.ACTIVATE = "activate";
openfl_events_Event.ADDED = "added";
openfl_events_Event.ADDED_TO_STAGE = "addedToStage";
openfl_events_Event.CHANGE = "change";
openfl_events_Event.COMPLETE = "complete";
openfl_events_Event.DEACTIVATE = "deactivate";
openfl_events_Event.ENTER_FRAME = "enterFrame";
openfl_events_Event.MOUSE_LEAVE = "mouseLeave";
openfl_events_Event.REMOVED = "removed";
openfl_events_Event.REMOVED_FROM_STAGE = "removedFromStage";
openfl_events_Event.RENDER = "render";
openfl_events_Event.RESIZE = "resize";
openfl_events_TextEvent.TEXT_INPUT = "textInput";
openfl_events_FocusEvent.FOCUS_IN = "focusIn";
openfl_events_FocusEvent.FOCUS_OUT = "focusOut";
openfl_events_GameInputEvent.DEVICE_ADDED = "deviceAdded";
openfl_events_GameInputEvent.DEVICE_REMOVED = "deviceRemoved";
openfl_events_IOErrorEvent.IO_ERROR = "ioError";
openfl_events_KeyboardEvent.KEY_DOWN = "keyDown";
openfl_events_KeyboardEvent.KEY_UP = "keyUp";
openfl_events_MouseEvent.CLICK = "click";
openfl_events_MouseEvent.DOUBLE_CLICK = "doubleClick";
openfl_events_MouseEvent.MIDDLE_CLICK = "middleClick";
openfl_events_MouseEvent.MIDDLE_MOUSE_DOWN = "middleMouseDown";
openfl_events_MouseEvent.MIDDLE_MOUSE_UP = "middleMouseUp";
openfl_events_MouseEvent.MOUSE_DOWN = "mouseDown";
openfl_events_MouseEvent.MOUSE_MOVE = "mouseMove";
openfl_events_MouseEvent.MOUSE_OUT = "mouseOut";
openfl_events_MouseEvent.MOUSE_OVER = "mouseOver";
openfl_events_MouseEvent.MOUSE_UP = "mouseUp";
openfl_events_MouseEvent.MOUSE_WHEEL = "mouseWheel";
openfl_events_MouseEvent.RIGHT_CLICK = "rightClick";
openfl_events_MouseEvent.RIGHT_MOUSE_DOWN = "rightMouseDown";
openfl_events_MouseEvent.RIGHT_MOUSE_UP = "rightMouseUp";
openfl_media_Sound.__registeredSounds = new haxe_ds_StringMap();
openfl_ui_GameInput.numDevices = 0;
openfl_ui_GameInput.__devices = new haxe_ds_ObjectMap();
openfl_ui_GameInput.__instances = [];
ApplicationMain.main();
})(typeof console != "undefined" ? console : {log:function(){}}, typeof window != "undefined" ? window : exports);
