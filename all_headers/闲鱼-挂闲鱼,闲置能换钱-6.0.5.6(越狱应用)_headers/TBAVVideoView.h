//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, NSString, NSURL;
@protocol TBAVVideoProtocol;

@interface TBAVVideoView : UIView
{
    _Bool _isMute;
    AVPlayer *_player;
    NSURL *_videoPath;
    NSString *_videoGravity;
    id <TBAVVideoProtocol> _delegate;
}

+ (Class)layerClass;
@property(nonatomic) __weak id <TBAVVideoProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) _Bool isMute; // @synthesize isMute=_isMute;
@property(retain, nonatomic) NSURL *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)setAudioTrackEnabled:(_Bool)arg1;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)videoDidPlayToEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

