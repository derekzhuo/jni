class InstanceFieldAccess {
	
	public static void main(String[] args)
	{
		InstanceFieldDemo ifd = new InstanceFieldDemo();
		ifd.s = "derekzhuo";
		ifd.accessField();
		System.out.println("In java:");
		System.out.println(" ifd.s = \"" + ifd.s + "\"");
	}
}

class InstanceFieldDemo {
	public native void accessField();
	public String s;
	static {
		System.loadLibrary("InstanceFieldDemo");
	}
}
