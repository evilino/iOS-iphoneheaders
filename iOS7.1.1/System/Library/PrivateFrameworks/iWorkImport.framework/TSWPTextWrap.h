/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSWPTextWrap
@required
-(id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(bool*)arg3;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3;
-(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(bool)arg4 floatingCausedWrap:(bool*)arg5 skipHint:(double*)arg6 userInfo:(id)arg7;
@end

