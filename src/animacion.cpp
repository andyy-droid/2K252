#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <thread>
#include <chrono>
#include <iostream>
#include <Dibujo.hpp>
#include <GestorDibujo.hpp>
#include <Corral.hpp>
using namespace ftxui;

int main()
{
    // Crear la ventana
    auto screen = Screen::Create(
        Dimension::Fixed(80),
        Dimension::Fixed(24));

    // Agregar código de los elementos de la granja
    const std::vector<std::u32string> piglet = {
U"        _    ",
U"      _<_/_  ",
U"   __/    _> ",
U"  '\\  '  |  ",
U"    \\___/   ",
U"    /+++\\   ",
U" o=|..|..|   ",
U"   | o/..|   ",
U"0==|+++++|   ",
U" 0======/    "};
    const std::vector<std::u32string> pooh = {
U"   _       ",
U" _( )_     ",
U"(     (o___",
U" |      _ 7",
U"  \\    () ",
U"  /    \\ \\",
U" |    \ __/",
U" |        |",
U" (       / ",
U"  \     /  ",
U"   )   /(_ ",
U"   |  (___)",
U"    \___)  "};

    GestorDibujos gestor;
    gestor.Agregar(Dibujo(2, 1, piglet, ftxui::Color::Magenta));        // piglet rosa
    gestor.Agregar(Dibujo(15, 2, pooh, ftxui::Color::Yellow));          // pooh amarillo

    int frames = 120;
    for (int frame = 0; frame < frames; ++frame)
    {
        // Limpia la pantalla
        screen.Clear();

        // Animación: mover personajes
        gestor.dibujos[0].x = 8 + (frame % 10);  // piglet
        gestor.dibujos[1].x = 30 + (frame % 15); // pooh

        gestor.DibujarTodos(screen);

        // Imprime la pantalla y resetea el cursor
        std::cout << screen.ToString();
        std::cout << screen.ResetPosition();
        std::cout << std::flush;

        std::this_thread::sleep_for(std::chrono::milliseconds(120));
    }
    return 0;
}