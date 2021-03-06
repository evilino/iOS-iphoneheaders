/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:26:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAHAFilter.h>

@class NSArray;

@interface SAHAIdentifierListFilter : SAHAFilter

@property (nonatomic,copy) NSArray * identifiers; 
+(id)identifierListFilter;
+(id)identifierListFilterWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)identifiers;
-(void)setIdentifiers:(NSArray *)arg1 ;
@end

