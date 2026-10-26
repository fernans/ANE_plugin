package com.cubensis.ane.androidane;

import com.adobe.fre.FREContext;
import com.adobe.fre.FREExtension;

public class AndroidAneExtension implements FREExtension {	
	
	private AndroidAneContext ctx=null;

	@Override
	public FREContext createContext(String arg0) {
		ctx = new AndroidAneContext();
		return ctx;
	}

	@Override
	public void dispose() {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void initialize() {
		// TODO Auto-generated method stub
		
	}

}
