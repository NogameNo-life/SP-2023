## Цель работы ## 
Научиться создавать простейшие приложения с графическим пользовательским интерфейсом в ОС Windows.
## Вариант №16 (4) ##
Создать приложение с кнопкой и полем для ввода текста. По нажатию на кнопку проверять, угадал ли пользователь загаданное число.
## Реализация/ход работы ##

Отрисовка кнопки и текстового поля:
```XAML
        <Button 
            x:Name="AcceptButton" 
            Content="Confirm" 
            HorizontalAlignment="Left" 
            Margin="224,283,0,0" 
            VerticalAlignment="Top" 
            RenderTransformOrigin="0.5,0.5" 
            Height="42" 
            Width="347" 
            Click="AcceptButton_Click"/>
        
        <TextBox 
            x:Name="GuessTextBox" 
            HorizontalAlignment="Left" 
            Height="180" Margin="150,81,0,0" 
            TextWrapping="Wrap" 
            VerticalAlignment="Top" 
            Width="512"/>
```
Обработка нажатия на кнопку, считывание текста и проверка, угадал ли пользователь:
```C#
private void AcceptButton_Click(object sender, RoutedEventArgs e)
{
    var random = new Random();
    var wished = random.Next(1, 10 + 1);

    var isOk = int.TryParse(GuessTextBox.Text, out int guessed);
    if (!isOk)
    {
        MessageBox.Show(
                "Enter integer value",
                "Error",
                MessageBoxButton.OK,
                MessageBoxImage.Error,
                MessageBoxResult.None,
                MessageBoxOptions.ServiceNotification);

        return;
    }

    if (guessed == wished)
    {
        MessageBox.Show(
                $"You are right, my number is {wished}",
                "Success",
                MessageBoxButton.OK,
                MessageBoxImage.Information,
                MessageBoxResult.None,
                MessageBoxOptions.ServiceNotification);

        return;
    }

    MessageBox.Show(
                $"You are wrong, my number was {wished}. Try again :)",
                "Failed",
                MessageBoxButton.OK,
                MessageBoxImage.Warning,
                MessageBoxResult.None,
                MessageBoxOptions.ServiceNotification);
}
```

---

Скрины работы:

![Main window](images/MainWindow.png "Main window") 

![Error dialog](images/Error.png "Error dialog") 

![Win dialog](images/Success.png "Success dialog") 

![Lose dialog](images/Fail.png "Lose dialog") 
