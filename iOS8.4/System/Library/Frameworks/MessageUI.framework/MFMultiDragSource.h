/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MFMultiDragSource <NSObject>
@required
-(id)viewForDragSource;
-(void)dragCompletedWithItems:(id)arg1 success:(BOOL)arg2;
-(CGRect*)frameForDraggedItem:(id)arg1 isPivotView:(out BOOL*)arg2;
-(BOOL)shouldCollapseMultipleItems;
-(id)viewForDraggedItem:(id)arg1 atScale:(double)arg2;
-(void)dragStartedWithItems:(id)arg1;
-(void)animatePlaceholderForDragFailureWithItems:(id)arg1;
-(BOOL)allowsDrag;
-(id)itemsForDragAtPoint:(CGPoint)arg1;

@end

