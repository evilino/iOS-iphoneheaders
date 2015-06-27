/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:28 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAWatchData : AceObject <SAAceSerializable>

@property (assign,nonatomic) char configuredForLeftWrist; 
@property (nonatomic,copy) NSString * interfaceOrientation; 
@property (assign,nonatomic) char wristDetected; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchData;
+(id)watchDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)interfaceOrientation;
-(void)setInterfaceOrientation:(NSString *)arg1 ;
-(id)encodedClassName;
-(char)configuredForLeftWrist;
-(void)setConfiguredForLeftWrist:(char)arg1 ;
-(char)wristDetected;
-(void)setWristDetected:(char)arg1 ;
@end
