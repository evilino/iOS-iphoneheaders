/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:25:10 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSArray;

@interface SASFinishSpeech : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * endpoint; 
@property (nonatomic,copy) NSArray * orderedContext; 
@property (assign,nonatomic) int packetCount; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)finishSpeech;
+(id)finishSpeechWithDictionary:(id)arg1 context:(id)arg2 ;
-(char)_ad_isRetryableCommand;
-(void)setAFEndpointMode:(int)arg1 ;
-(id)groupIdentifier;
-(NSString *)endpoint;
-(id)encodedClassName;
-(void)setEndpoint:(NSString *)arg1 ;
-(NSArray *)orderedContext;
-(void)setOrderedContext:(NSArray *)arg1 ;
-(int)packetCount;
-(void)setPacketCount:(int)arg1 ;
@end

