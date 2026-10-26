package com.cubensis.ane.androidane
{
	import flash.external.ExtensionContext;

	public class AndroidAneExtension
	{
		
		private var ctx:ExtensionContext=null;
		
		public function AndroidAneExtension()
		{
			ctx = ExtensionContext.createExtensionContext("com.cubensis.ane.androidane",null);
		}
		
		public function test():void {
			if (ctx!=null) ctx.call("test");
		}
	}
}