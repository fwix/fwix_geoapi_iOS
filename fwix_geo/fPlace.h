/*
 * Copyright 2011 Fwix, Inc
 *
 * Permission to use, copy, modify, distribute, and sell this software
 * and its documentation for any purpose is hereby granted without fee,
 * provided that the above copyright notice appears in all copies and that
 * both that copyright notice and this permission notice appear in
 * supporting documentation, and that the name of Fwix, Inc
 * not be used in advertising or publicity
 * pertaining to distribution of the software without specific, written
 * prior permission.  Fwix, Inc makes no representations about the 
 * suitability of this software for any
 * purpose.  It is provided "as is" without express or implied warranty.
 *
 * Fwix, Inc disclaims all warranties with regard to this software, 
 * including all implied warranties of merchantability and fitness, 
 * in no event shall Fwix, Inc be liable for any special, indirect or
 * consequential damages or any damages whatsoever resulting from loss of
 * use, data or profits, whether in an action of contract, negligence or
 * other tortious action, arising out of or in connection with the use or
 * performance of this software.
 *
 *
 */
#import <Foundation/Foundation.h>
#import "fLocation.h"
#import "fCategory.h"



@interface fPlace : NSObject {
    
    NSString *uuid;
    NSString *name;
    float latitude;
    float longitude;
    NSString *phoneNumber;
    fLocation *location;
    NSString *url;
    NSMutableArray *category;
    NSString *facebookID;
    NSString *twitterID;
    
}

@property (nonatomic,retain) NSString *uuid;
@property (nonatomic,retain) NSString *name;
@property float latitude;
@property float longitude;
@property (nonatomic,retain) NSString *phoneNumber;
@property (nonatomic,retain) fLocation *location;
@property (nonatomic,retain) NSString *url;
@property (nonatomic,retain) NSMutableArray *category;
@property (nonatomic,retain) NSString *facebookID;
@property (nonatomic,retain) NSString *twitterID;



@end
