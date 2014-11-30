class test
{
	public static void main(String[] args)
	{
		testdemo td = new testdemo();
		td.print();
	}
}

class testdemo
{	
	public native void print();
	static {
		System.loadLibrary("test");
	}
}
