/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:42 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLToolsDevice.h>

@interface MTLDebugDevice : MTLToolsDevice
+(void)validateNewBufferArgs:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)newCommandQueue;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned)arg1 ;
-(id)newBufferWithLength:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned)arg2 options:(unsigned)arg3 ;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 options:(unsigned)arg3 deallocator:(/*^block*/id)arg4 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newSamplerStateWithDescriptor:(id)arg1 ;
-(id)newDefaultLibrary;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned)arg3 ;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
