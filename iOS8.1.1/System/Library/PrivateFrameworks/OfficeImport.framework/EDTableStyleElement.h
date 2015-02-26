/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:03 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDKeyedObject.h>
#import <OfficeImport/NSCopying.h>

@class EDCollection, EDDifferentialStyle, NSString;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {

	EDCollection* mDifferentialStyles;
	int mType;
	unsigned mBandSize;
	EDDifferentialStyle* mDifferentialStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableStyleElementWithResources:(id)arg1 ;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)key;
-(id)initWithResources:(id)arg1 ;
-(id)differentialStyle;
-(void)setDifferentialStyle:(id)arg1 ;
-(unsigned)bandSize;
-(void)setBandSize:(unsigned)arg1 ;
-(void)setDifferentialStyleWithIndex:(unsigned long long)arg1 ;
@end
