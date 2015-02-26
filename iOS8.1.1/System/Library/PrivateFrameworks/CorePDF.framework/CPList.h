/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:17 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPListItem * parentItem; 
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)addItem:(id)arg1 ;
-(CPListItem *)parentItem;
-(unsigned)itemCount;
-(id)itemAtIndex:(unsigned)arg1 ;
-(void)dispose;
-(BOOL)containsParagraph:(id)arg1 ;
-(BOOL)isMultilevel;
-(CGRect)spacer;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
-(void)setParentItem:(CPListItem *)arg1 ;
-(void)finalize;
@end
