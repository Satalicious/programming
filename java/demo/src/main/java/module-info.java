module intro.example {
    requires javafx.controls;
    requires javafx.fxml;

    opens intro.example to javafx.fxml;
    exports intro.example;
}
