/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSString, NSNumber;

@interface TSKPicaFormatter : NSFormatter {

	NSString* mPicaSeparator;
	NSNumber* mMinimum;
	NSNumber* mMaximum;

}

@property (nonatomic,copy) NSString * picaSeparator; 
@property (nonatomic,copy) NSNumber * minimum; 
@property (nonatomic,copy) NSNumber * maximum; 
-(id)initWithPicaSeparator:(id)arg1 ;
-(void)setPicaSeparator:(id)arg1 ;
-(id)picaSeparator;
-(id)minimum;
-(void)setMinimum:(id)arg1 ;
-(id)maximum;
-(void)setMaximum:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(bool)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
@end

