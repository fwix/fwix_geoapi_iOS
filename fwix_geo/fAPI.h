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
#import "fPlace.h"
#import "fContent.h"
#import "JSON.h"



@interface fAPI : NSObject {
    
    NSString *key;
    NSString *userID;
   
    
}


@property (nonatomic,retain) NSString *key;
@property (nonatomic,retain) NSString *userID;



#pragma mark Methods to initialize the object
// Metho to initialize the API object.
// fAPIKey: required
// userID: optional

-(id)initWithKey:(NSString *)fAPIKey userID:(NSString *)ID;

#pragma mark Methods to get Location
// Method to get location by latitude and longitude
// Return Value: fLocation Object
// Paramteres:
// latitude : Required
// longitude : Required
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(fLocation *)getLocation:(float) latitude longitude:(float) longitude error:(NSError **)error;

#pragma mark Methods to get Categories
//Method to get categories
//Return Value: Array of fCategory
//Parameters:
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(NSArray *)getCategories:(NSError **)error;


#pragma mark Methods to get Places by different attributes

//Method to get Place by Latitude and Longitude
// Return Value: Array of fPlace
// Parameters
// latiture: Required
// longtidude: Required
// page: Optional
// pageSize: Optional
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(NSArray *)getPlacesByLatitude:(float) latitude longitude:(float)longitude page:(int)page pageSize:(int)pageSize error:(NSError **)error;

//Method to get Place by Latitude and Longitude
// Return Value: Array of fPlace
// Parameters
// latiture: Required
// longtidude: Required
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(NSArray *)getPlacesByLatitude:(float) latitude longitude:(float)longitude error:(NSError **)error;

//Method to get Place by uuid
// Return Value: Array of fPlace
// Parameters
// uuid : Required 
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(fPlace *)getPlace:(NSString *)uuid error:(NSError **)error;

//Method to get Place by Postal Code
// Return Value: Array of fPlace
// Parameters
// postalCode: Required
// page: Optional
// pageSize: Optional
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(NSArray *)getPlacesByPostal:(NSString *)postalCode page:(int)page pageSize:(int)pageSize error:(NSError **)error;

//Method to get Place by Postal Code
// Return Value: Array of fPlace
// Parameters
// postalCode: Required
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(NSArray *)getPlacesByPostal:(NSString *)postalCode error:(NSError **)error;


//Method to get Place by Location
// Return Value: Array of fPlace
// Paramaters
// city: Required
// province: Required
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
// Rest are optional
-(NSArray *)getPlacesByCity:(NSString *)city province:(NSString *)province country:(NSString *)country locality:(NSString *)locality  page:(int)page pageSize:(int)pageSize error:(NSError **)error;

-(NSArray *)getPlacesByCity:(NSString *)city province:(NSString *)province country:(NSString *)country locality:(NSString *)locality error:(NSError **)error;

-(NSArray *)getPlacesByCity:(NSString *)city province:(NSString *)province error:(NSError **)error;

-(NSArray *)getPlacesByCity:(NSString *)city province:(NSString *)province page:(int)page pageSize:(int)pageSize error:(NSError **)error;


#pragma mark Methods to get Content by different attributes

//Method to get Category by Latitude and Longitude
// Return Value: Array of fContent
// Parameters
// latiture: Required
// longtidude: Required
// types: Optional. If nil is passed all the content types will be returned
// page: Optional
// pageSize: Optional
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(NSArray *)getContentByLatitude:(float) latitude longitude:(float)longitude contentType:(NSArray *)types page:(int)page pageSize:(int)pageSize error:(NSError **)error;


//Method to get Category by Latitude and Longitude
// Return Value: Array of fContent
// Parameters
// latiture: Required
// longtidude: Required
// types: Optional. If nil is passed all the content types will be returned
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(NSArray *)getContentByLatitude:(float) latitude longitude:(float)longitude contentType:(NSArray *)types error:(NSError **)error;

//Method to get Content by Location
// Return Value: Array of fContent
// Paramaters
// city: Required
// province: Required
// error: Optional, but recommended
// APIOBject: Required. // API Key is required, userID is optional
// Rest are optional
-(NSArray *)getContentByCity:(NSString *)city province:(NSString *)province types:(NSArray *)types country:(NSString *)country locality:(NSString *)locality  page:(int)page pageSize:(int)pageSize error:(NSError **)error;

-(NSArray *)getContentByCity:(NSString *)city province:(NSString *)province types:(NSArray *)types country:(NSString *)country locality:(NSString *)locality error:(NSError **)error;

-(NSArray *)getContentByCity:(NSString *)city province:(NSString *)province types:(NSArray *)types error:(NSError **)error;

-(NSArray *)getContentByCity:(NSString *)city province:(NSString *)province types:(NSArray *)types page:(int)page pageSize:(int)pageSize error:(NSError **)error;



// Method to update or suggest a place
// Return Value: BOOL. YES if successful, NO if failed
// Paramtes
// place: Required. If udid is absent location is required, else if udid is present all others are optional
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(BOOL) updatePlace:(fPlace *)place error:(NSError **)error;

// Method to suggest a delete of a place
// Return Valie: BOOL. YES if successful, NO if failed
// Parameters
// uuid: Required
// APIOBject: Required. // API Key is required, userID is optional
// error: Optional, but recommended
-(BOOL) deletePlace:(NSString *)uuid error:(NSError **)error;




#pragma mark Helper functions

-(fContent *)parseContent:(NSDictionary *)inputContent type:(NSString *) type;
-(NSArray *)parseDictContent:(NSDictionary *)resultDictionary contentTypes:(NSArray *)types;

-(fPlace *)parsePlace:(NSDictionary *)inputPlace;
-(NSArray *)parseDictPlaces:(NSDictionary *)resultDictionary;


-(NSDate *)dateFromString:(NSString *)stringdate;
-(NSDictionary *)sendURL:(NSString *)jsonURL withError:(NSError **)error;

@end
