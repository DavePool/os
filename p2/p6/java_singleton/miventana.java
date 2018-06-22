import javax.swing.JFrame;

public class miventana extends JFrame{
	private static miventana unicaInstancia; 

	private miventana(){
	setTitle("Mi Objeto ventana");
	setSize(300,300);
	setVisible(true);
	}

	public static miventana getInstancia(){
		if(unicaInstancia == null)
		unicaInstancia = new miventana();

		return unicaInstancia;
	}
}
