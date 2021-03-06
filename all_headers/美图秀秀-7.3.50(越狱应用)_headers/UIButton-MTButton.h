//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "MTPhotoLibraryChangeObserver-Protocol.h"

@class NSString;

@interface UIButton (MTButton) <MTPhotoLibraryChangeObserver>
- (void)assetsLibraryDidChange:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)mt_removeObserver;
- (void)registerDidChangeObserver;
- (void)didTapAction:(id)arg1;
- (void)events:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)displayRecentImage;
- (void)mt_unregistForAlbumCover;
- (void)mt_registForAlbumCover;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

