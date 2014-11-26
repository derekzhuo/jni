class Prompt
{
	private native String getLine(String prompt);

	public static void main(String[] args)
	{
		Prompt p = new Prompt();
		String input = p.getLine("Type a line: ");
		System.out.println("User typed: " + input);
	}
	static {
		System.loadLibrary("Prompt");
	}
}
