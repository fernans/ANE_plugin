package com.fernans.ANE.ANEtest
{
	import flash.events.EventDispatcher;
	import flash.events.IEventDispatcher;
	import flash.external.ExtensionContext;
	
	public class ANEtest extends EventDispatcher
	{
		
		private var _ExtensionContext:ExtensionContext;
		
		public function ANEtest(target:IEventDispatcher=null)
		{
			_ExtensionContext=ExtensionContext.createExtensionContext("com.fernans.ANE.ANEtest", null);
			super(target);
		}
		
		public function dispose():void {
			_ExtensionContext.dispose();
		}
		
		
		public function isSupported():Boolean {
			return _ExtensionContext.call("isSupported");
		}
		
		public function functionA():String {
			return _ExtensionContext.call("functionA") as String;
		}
		
	}
}