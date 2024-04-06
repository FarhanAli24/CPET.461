/*
 * my_flags.h
 *
 *  Created on: Feb 27, 2024
 *      Author: farha
 */

#ifndef SRC_MY_FLAGS_H_
#define SRC_MY_FLAGS_H_

typedef enum{Set, Reset} Flag;

void set_flag(int);
void reset_flag(int);

Flag check_flag(int);



#endif /* SRC_MY_FLAGS_H_ */
