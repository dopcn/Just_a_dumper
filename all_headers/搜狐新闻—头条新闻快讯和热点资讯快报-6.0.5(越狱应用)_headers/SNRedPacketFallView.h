//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAEmitterLayer.h>

@class NSArray;

@interface SNRedPacketFallView : CAEmitterLayer
{
    NSArray *_imageNameArray;
}

@property(retain, nonatomic) NSArray *imageNameArray; // @synthesize imageNameArray=_imageNameArray;
- (void).cxx_destruct;
- (void)stopRedPacketFall;
- (id)createSubLayer:(id)arg1;
- (id)createSubLayerContainer;
- (id)getContentsByArray:(id)arg1;
- (void)initializeValue;
- (id)initWithImageNameArray:(id)arg1;
- (id)initWithImageName:(id)arg1;
- (id)init;
- (void)dealloc;

@end

