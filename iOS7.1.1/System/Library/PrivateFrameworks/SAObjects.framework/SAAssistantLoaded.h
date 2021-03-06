/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber, NSArray;

@interface SAAssistantLoaded : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dataAnchor; 
@property (nonatomic,copy) NSNumber * requestSync; 
@property (nonatomic,copy) NSArray * syncAnchors; 
@property (nonatomic,copy) NSString * version; 
+(id)assistantLoaded;
+(id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)dataAnchor;
-(void)setDataAnchor:(id)arg1 ;
-(id)requestSync;
-(void)setRequestSync:(id)arg1 ;
-(id)syncAnchors;
-(void)setSyncAnchors:(id)arg1 ;
@end

