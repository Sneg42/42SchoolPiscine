public interface Subject{
		
	public void register(Oserver o);
	public void unregister(Observer o);
	public void notifyObserver();

}
