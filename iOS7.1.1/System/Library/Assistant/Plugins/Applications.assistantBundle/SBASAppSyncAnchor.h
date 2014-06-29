/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Applications/Applications-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface SBASAppSyncAnchor : NSObject <NSCopying, NSCoding> {

	unsigned long long _mainIndex;
	unsigned long long _subIndex;
	long long _stringOnce;
	NSString* _stringRepresentation;

}

@property (nonatomic,readonly) NSString * stringRepresentation; 
+(id)anchorFromStringRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)anchorFromStringRepresentation:(id)arg1 ;
+(bool)isValidStringRepresentation:(id)arg1 withMainIndex:(unsigned long long*)arg2 subIndex:(unsigned long long*)arg3 ;
-(id)primitiveAnchor;
-(bool)isOlderThanAnchor:(id)arg1 ;
-(bool)isPrimitiveAnchor;
-(bool)isNewerThanAnchor:(id)arg1 ;
-(id)_initWithMainIndex:(unsigned long long)arg1 subIndex:(unsigned long long)arg2 ;
-(id)anchorByIncrementingSubIndex;
-(bool)isEqualToAnchor:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)stringRepresentation;
@end
