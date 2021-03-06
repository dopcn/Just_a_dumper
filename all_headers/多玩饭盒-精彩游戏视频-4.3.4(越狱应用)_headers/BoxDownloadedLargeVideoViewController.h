//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BoxLargeVideoAVPlayerView, NSString;

@interface BoxDownloadedLargeVideoViewController : UIViewController
{
    NSString *_localVideoURL;
    NSString *_videoTitle;
    BoxLargeVideoAVPlayerView *_playerView;
}

@property(retain, nonatomic) BoxLargeVideoAVPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) NSString *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) NSString *localVideoURL; // @synthesize localVideoURL=_localVideoURL;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)onDeviceOrientationChange;
- (void)listeningRotating;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithLocalURL:(id)arg1 andVideoTitle:(id)arg2;
- (id)initWithLocalURL:(id)arg1;

@end

