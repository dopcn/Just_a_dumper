//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NMLocationShootingBasePhotoBrowser, NSString;
@protocol NMLocationShootingPhoto;

@protocol MMPhotoBrowserDelegate <NSObject>
- (id <NMLocationShootingPhoto>)photoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1;

@optional
- (void)sendBtnClickInPhotoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1;
- (void)photoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1 selected:(_Bool)arg2 WithIndex:(long long)arg3;
- (void)gobackFromPhotoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1;
- (void)photoBrowserDidFinishModalPresentation:(NMLocationShootingBasePhotoBrowser *)arg1;
- (void)photoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)photoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1 actionButtonPressedForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (long long)PageIndexForPhotoBrowser:(NMLocationShootingBasePhotoBrowser *)arg1;
@end

