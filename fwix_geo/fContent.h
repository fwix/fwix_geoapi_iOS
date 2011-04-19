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

#define CONTENT_TYPE_NEWS @"news"
#define CONTENT_TYPE_PHOTOS @"photos"
#define CONTENT_TYPE_REVIEWS @"reviews"
#define CONTENT_TYPE_CRITIC_REVIEWS @"critic_reviews"
#define CONTENT_TYPE_STATUS_UPDATES @"status_updates"
#define CONTENT_TYPE_EVENTS @"events"
#define CONTENT_TYPE_REAL_ESTATE @"real_estate"
#define CONTENT_TYPE_ALL @"all"

@interface fContent : NSObject {
    
    NSString *contentType;
    NSString *uuid;
    float latitude;
    float longitude;
    NSString *title;
    NSString *body;
    NSString *author;
    NSDate *publishedAt;
    NSString *link;
    NSString *source;
    NSString *url;
    NSString *image;
    
    
    NSString *thumbnail; 
    float rating;
    NSDate *localStartTime;
    NSDate *localEndTime;
    float price;
    float numberOfBeds;
    float numberOfBaths;
    float squareFeet;
    NSString *propertyType;
    
    
    
    
}

@property (nonatomic,retain) NSString * contentType;
@property (nonatomic,retain) NSString *uuid;
@property float latitude;
@property float longitude;
@property (nonatomic,retain) NSString *title;
@property (nonatomic,retain) NSString *body;
@property (nonatomic,retain) NSString *author;
@property (nonatomic,retain) NSDate *publishedAt;
@property (nonatomic,retain) NSString *link;
@property (nonatomic,retain) NSString *source;
@property (nonatomic,retain) NSString *url;
@property (nonatomic,retain) NSString *image;

@property (nonatomic,retain) NSString *thumbnail; 
@property float rating;
@property (nonatomic,retain) NSDate *localStartTime;
@property (nonatomic,retain) NSDate *localEndTime;
@property float price;
@property float numberOfBeds;
@property float numberOfBaths;
@property float squareFeet;
@property (nonatomic,retain) NSString *propertyType;


@end
