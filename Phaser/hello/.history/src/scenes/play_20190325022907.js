//Creamos nuestra primera escena
import Snake from "../gameobjects/Snake.js";
class Play extends Phaser.Scene {
    // Dentro usamos el constructor
    constructor() {
        super("Play");

    }

    // preload es el metodo donde cargamos los assets
    preload() {
        console.log("Escena Play");
        // Llamamos los assets 
        // x , y , nombre , 
        this.snake = new Snake(this);
    }
    update() {
        this.snake.update();
    }
}

export default Play;