//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MJLVideoPlayerView, UIWindow;

@interface MJLVideoPlayerViewManager : NSObject
{
    MJLVideoPlayerView *_priorPlayView;
    UIWindow *_videoWindow;
}

+ (id)shareManager;
@property(retain, nonatomic) UIWindow *videoWindow; // @synthesize videoWindow=_videoWindow;
@property(nonatomic) __weak MJLVideoPlayerView *priorPlayView; // @synthesize priorPlayView=_priorPlayView;
- (void).cxx_destruct;

@end

