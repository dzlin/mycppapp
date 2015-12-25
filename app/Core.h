/* 
 * File:   Core.h
 * Author: gzdzl
 *
 * Created on 2015年12月25日, 下午8:38
 */

#ifndef CORE_H
#define	CORE_H
#include <string>

using namespace std;

namespace app
{

    class Core
    {
      public:
        Core();
        Core(const Core& orig);
        virtual ~Core();
        string getName();
        void setName(string name);
      private:
        string _name;
    };
}


#endif	/* CORE_H */

