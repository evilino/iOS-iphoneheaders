/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:43 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContainerRep.h>

@interface TSWPPageRep : TSDContainerRep
+(id)p_overflowKnobImage;
-(void)didUpdateLayer:(id)arg1 ;
-(void)viewScrollDidChange;
-(void)viewScrollingEnded;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(void)updateFromLayout;
-(void)p_updateLayoutBordersVisibility;
-(void)p_updateBorderLayers;
-(BOOL)p_hasValidHeaderFooterForType:(int)arg1 ;
-(void)p_updateHeaderFooterRepClipping:(int)arg1 ;
-(id)headerFooterRep:(int)arg1 atIndex:(int)arg2 ;
-(BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1 ;
-(double)p_headerFooterBorderWidth;
-(int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(CGPoint)arg2 ;
-(id)p_hitRep:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)p_createHeaderFooterBorderLayerIfNecessaryForType:(int)arg1 ;
-(void)p_createHeaderFooterOverflowIndicatorLayerIfNecessaryForType:(int)arg1 fragment:(int)arg2 ;
-(BOOL)p_headerFooterBorderVisibleForType:(int)arg1 ;
-(id)headerFooterRepForStorage:(id)arg1 ;
-(void)dealloc;
@end
