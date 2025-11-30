#include "Fixed.hpp"
#include "Point.hpp"

//Fonction de produit vectoriel
//si return > 0 alors P est a la gauche du vecteur AB
//si return < 0 alors P est a la droite du vecteur AB
//si return = 0 alors P est sur le vecteur AB
static Fixed cross(Point const a, Point const b, Point const p) {
    //calcul vecteur AB
    Fixed ab_x = b.get_x() - a.get_x();
    Fixed ab_y =  b.get_y() - a.get_y();

    //calcul vecteur AP
    Fixed ap_x = p.get_x() - a.get_x();
    Fixed ap_y =  p.get_y() - a.get_y();

    return (ab_x * ap_y - ab_y * ap_x); //calcul vectoriel
}

bool bsp(Point const a, Point const b, Point const c, Point const p) {
    Fixed vecteur_ab = cross(a, b, p);
    Fixed vecteur_bc = cross(b, c, p);
    Fixed vecteur_ca = cross(c, a, p);

    if (vecteur_ab == 0 && vecteur_bc == 0 && vecteur_ca == 0)
        return (false);

    bool all_negative = (vecteur_ab < 0 && vecteur_bc < 0 && vecteur_ca < 0);
    bool all_positive = (vecteur_ab > 0 && vecteur_bc > 0 && vecteur_ca > 0);

    if (all_negative || all_positive)
        return (true);
    return (false);
}




