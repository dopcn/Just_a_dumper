//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMoviePlayerViewController.h>

@class NSString;

@interface PDMoviePlayerController : MPMoviePlayerViewController
{
    NSString *_videourl;
    NSString *_playerFullScreen;
    NSString *_playmode;
}

@property(copy, nonatomic) NSString *playmode; // @synthesize playmode=_playmode;
@property(copy, nonatomic) NSString *playerFullScreen; // @synthesize playerFullScreen=_playerFullScreen;
@property(copy, nonatomic) NSString *videourl; // @synthesize videourl=_videourl;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

@end

