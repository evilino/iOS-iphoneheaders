/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:48 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SALocalSearchPeriod.h>

@class NSString;

@interface SALocalSearchRangePeriod : AceObject <SALocalSearchPeriod>

@property (assign,nonatomic) int endSecondsSinceMidnight; 
@property (assign,nonatomic) int startSecondsSinceMidnight; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rangePeriod;
+(id)rangePeriodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(int)endSecondsSinceMidnight;
-(void)setEndSecondsSinceMidnight:(int)arg1 ;
-(int)startSecondsSinceMidnight;
-(void)setStartSecondsSinceMidnight:(int)arg1 ;
@end

