#include <string>
#include <vector>

// Caché de nombres.
struct Cache {
  std::vector<std::string> nombres;

  std::string ultimo_tras_limpiar() {
    std::string r = nombres[0];  // copia antes de limpiar
    nombres.clear();
    return r;
  }

  std::size_t agregar_y_medir(const std::string& n) {
    nombres.push_back(n);
    return nombres[0].size();  // se obtiene después de push_back
  }
};

int main() {
  Cache c;
  c.nombres = {"a", "b"};
  return static_cast<int>(c.agregar_y_medir("c") + c.ultimo_tras_limpiar().size());
}
