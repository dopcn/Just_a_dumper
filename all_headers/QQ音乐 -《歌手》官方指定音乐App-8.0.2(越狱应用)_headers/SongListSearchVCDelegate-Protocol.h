//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SongInfo, UIViewController;

@protocol SongListSearchVCDelegate

@optional
- (_Bool)canAddSong:(SongInfo *)arg1;
- (void)goOnlineSearchWithString:(NSString *)arg1;
- (void)didSelectSong:(SongInfo *)arg1 VC:(UIViewController *)arg2 assetsType:(int)arg3;
- (void)didheaderCancel:(id)arg1 VC:(UIViewController *)arg2;
@end

