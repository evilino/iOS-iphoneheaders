/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKRoadSignArtwork : NSObject {

	CTLineRef _line;
	int _orientation;
	BOOL _onRoute;
	float _contentScale;
	float _scale;
	CGSize _layoutSize;

}
-(void)dealloc;
-(id)image;
-(id).cxx_construct;
-(void)_updateLayoutSize;
-(id)initWithString:(id)arg1 orientation:(int)arg2 contentScale:(float)arg3 onRoute:(BOOL)arg4 ;
-(Vec2Imp<float>)offsetPixelForPixel:(Vec2Imp<float>)arg1 ;
-(BRectImp<float>)boundsAtOrigin;
@end
