class HelloWorld {
	private native void print();
	private native void add(int a, int b);

	public static void main(String[] args) {
	
		new HelloWorld().print();
	}
	


	static {
	
		System.loadLibrary("HelloWorld");
	}

}
