//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QYRCTAssetPhoto, QYRCTAssetPhotoEditorViewController;

@protocol QYRCTAssetPhotoEditorDelegate <NSObject>
- (void)assetEditorDidClickFullSizeButton:(QYRCTAssetPhotoEditorViewController *)arg1;
- (void)assetEditor:(QYRCTAssetPhotoEditorViewController *)arg1 didClickDoneButtonOnPhoto:(QYRCTAssetPhoto *)arg2;
- (void)assetEditor:(QYRCTAssetPhotoEditorViewController *)arg1 didSelectPhoto:(QYRCTAssetPhoto *)arg2 selected:(_Bool)arg3;
@end

