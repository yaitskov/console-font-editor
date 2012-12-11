#include "outline.h"

namespace cfe{
	class OutPanel : public IOutline {
		private:
			short foreground, backgroud;
			char symbol_stuff;
			static short def_foreground, def_backgroud;
			static short testForeground(short color);
			static short testBackground(short color);
			static short testColor(short color);
		public:
			char getSymbolStuff() const { return symbol_stuff; }
			void setSymbolStuff(char _) { 
				symbol_stuff = _; 
				paint();
			}
			short getForeground() const { return foreground; }
			short getBackground() const { return background; }
			virtual void setBackground(short _) ;
			virtual void setForeground(short _) ;
			static short get_defForeground() 
				{ return def_foreground; }
			static short get_defBackground() 
				{ return def_background; }
			static void set_defBackground(short _) {
				def_background = testBackground(_);
			}
			static void set_defForeground(short _) {
				def_foreground = testForeground(_);
			}		
			OutPanel(const Point& position,
					const Size& size,
					short _foreground, 
					short _background,
					char stuff);//символ заполнитель
			virtual void paint();
			virtual int setX();
			virtual int setY();
			virtual int setWidth();
			virtual int setHeight();
	};
}


