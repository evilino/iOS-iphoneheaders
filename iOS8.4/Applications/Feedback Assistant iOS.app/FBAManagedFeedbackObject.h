/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber;

@interface FBAManagedFeedbackObject : NSManagedObject

@property (retain) NSNumber * ID; 
@property (retain) NSNumber * remoteID; 
+(id)importFromJSONArray:(id)arg1 intoContext:(id)arg2 ;
+(id)importFromJSONObject:(id)arg1 intoContext:(id)arg2 ;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(char)isEqualToFBAObject:(id)arg1 ;
-(NSNumber *)ID;
-(void)setID:(NSNumber *)arg1 ;
@end
