//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, WBAdGifFrame, WBAdImage;
@protocol WBGifPalyerDelegate;

@interface WBAdGifPlayer : NSObject
{
    unsigned long long _loopCount;
    unsigned long long currentLoop;
    CADisplayLink *_displayLink;
    _Bool playing;
    id <WBGifPalyerDelegate> _delegate;
    WBAdImage *_image;
    WBAdGifFrame *_currentFrame;
}

+ (id)playerWithImage:(id)arg1;
@property(retain, nonatomic) WBAdGifFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(readonly, nonatomic) WBAdImage *image; // @synthesize image=_image;
@property(nonatomic) __weak id <WBGifPalyerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)nextFrame;
- (_Bool)isPlaying;
- (void)stopPlay;
- (void)pause;
- (void)startPlay;
- (void)setLoopCount:(long long)arg1;
- (id)initWithImage:(id)arg1;

@end

