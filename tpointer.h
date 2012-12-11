#ifndef __TPOINTER_H__
#define __TPOINTER_H__
#include "error.h"
/*добавить отладочный код*/
namespace cfe{
	template <class Type>
	class tpointer {
		protected:
		template <class Type>
		class LinkCounter {
			public:
				int counter;
				Type* obj;
				LinkCounter(Type * _ = 0){ 
					counter = 1; 
					obj = _;
				}
				~LinkCounter(){ delete obj; obj = 0;}
		};			
			LinkCounter<Type> * o;
			void free_pointer(){
				if(o == 0) return;
				if(--o->counter == 0) delete o;
			}
			void copy_pointer(){
				o = src.o;
				o->counter++;
			}
			tpointer(const LinkCounter<Type>& _){
				o = new LinkCounter<Type>(_);
			}
		public:
			tpointer(): o(0){}
			tpointer(Type * _): o(new LinkCounter<Type>(_)){}
			tpointer(const tpointer<Type>& src){ copy_pointer() ; }
			virtual ~tpointer(){ free_pointer(); }
			tpointer<Type>& operator==(const tpointer<Type>& src){
				free_pointer();
				copy_pointer();
			}
			/*что делать если o == 0?*/
			Type * operator->(){ return o->obj; }
			tpointer<Type>& clone() { return tpointer<Type>(*o); }
	};
}
#endif
