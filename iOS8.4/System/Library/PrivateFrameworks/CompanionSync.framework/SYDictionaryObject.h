/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/SYObject.h>
#import <CompanionSync/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface SYDictionaryObject : NSObject <SYObject, NSSecureCoding> {

	NSDictionary* _properties;

}

@property (nonatomic,retain) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)properties;
-(id)syncId;
@end
