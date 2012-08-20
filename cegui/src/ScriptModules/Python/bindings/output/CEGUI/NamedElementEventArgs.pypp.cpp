// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "NamedElementEventArgs.pypp.hpp"

namespace bp = boost::python;

struct NamedElementEventArgs_wrapper : CEGUI::NamedElementEventArgs, bp::wrapper< CEGUI::NamedElementEventArgs > {

    NamedElementEventArgs_wrapper(CEGUI::NamedElementEventArgs const & arg )
    : CEGUI::NamedElementEventArgs( arg )
      , bp::wrapper< CEGUI::NamedElementEventArgs >(){
        // copy constructor
        
    }

    NamedElementEventArgs_wrapper(::CEGUI::NamedElement * element )
    : CEGUI::NamedElementEventArgs( boost::python::ptr(element) )
      , bp::wrapper< CEGUI::NamedElementEventArgs >(){
        // constructor
    
    }

    static ::CEGUI::NamedElement * get_element(CEGUI::NamedElementEventArgs const & inst ){
        return inst.element;
    }
    
    static void set_element( CEGUI::NamedElementEventArgs & inst, ::CEGUI::NamedElement * new_value ){ 
        inst.element = new_value;
    }

};

void register_NamedElementEventArgs_class(){

    { //::CEGUI::NamedElementEventArgs
        typedef bp::class_< NamedElementEventArgs_wrapper, bp::bases< CEGUI::EventArgs > > NamedElementEventArgs_exposer_t;
        NamedElementEventArgs_exposer_t NamedElementEventArgs_exposer = NamedElementEventArgs_exposer_t( "NamedElementEventArgs", "*!\n\
        \n\
            EventArgs based class that is used for objects passed to handlers triggered for events\n\
            concerning some NamedElement object.\n\
        *\n", bp::init< CEGUI::NamedElement * >(( bp::arg("element") )) );
        bp::scope NamedElementEventArgs_scope( NamedElementEventArgs_exposer );
        bp::implicitly_convertible< CEGUI::NamedElement *, CEGUI::NamedElementEventArgs >();
        NamedElementEventArgs_exposer.add_property( "element"
                    , bp::make_function( (::CEGUI::NamedElement * (*)( ::CEGUI::NamedElementEventArgs const & ))(&NamedElementEventArgs_wrapper::get_element), bp::return_internal_reference< >() )
                    , bp::make_function( (void (*)( ::CEGUI::NamedElementEventArgs &,::CEGUI::NamedElement * ))(&NamedElementEventArgs_wrapper::set_element), bp::with_custodian_and_ward_postcall< 1, 2 >() ) );
    }

}