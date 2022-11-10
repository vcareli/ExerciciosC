#include "Dure.hpp"

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes){
}

bool Duree::estEgal(Duree const& b) const{
    if(m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes){
        return true;
    }else{
        return false;
    }
}

 bool Duree::estPlusPetit(Duree const& b) const{
     if(m_heures < b.m_heures){
        return true;
     }else if( m_heures == b.m_heures && m_minutes < b.m_minutes){
        return true;
     }else if( m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes){
        return true;
     }else{
        return false;
     }
 }

bool operator == (Duree const& a, Duree const& b){
    return a.estEgal(b);
}

bool operator != (Duree const& a, Duree const& b){
    return not (a == b);
}

bool operator < (Duree const& a, Duree const& b){
    return a.estPlusPetit(b);
}
