/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:41 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSDPartitioner
@required
-(id)nextHintForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;
-(id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
-(id)nextLayoutForSize:(CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(bool)arg4 outFinished:(out bool*)arg5;
-(bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(bool)arg3 delta:(int)arg4;
-(id)hintForLayout:(id)arg1;
@end
