/* 
 * File:   stringify.h
 * Author: herman
 *
 * Created on 24 februari 2012, 15:45
 */

#ifndef STRINGIFY_H
#define	STRINGIFY_H

#ifdef	__cplusplus
extern "C" {
#endif

#define stringify_x(x) #x
#define stringify(x) stringify_x(x)



#ifdef	__cplusplus
}
#endif

#endif	/* STRINGIFY_H */

