//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, QHPhotoSlimMgr;

@protocol QHPhotoSlimMgrDelegate <NSObject>
- (void)didQHPhotoSlimMgrFinished:(QHPhotoSlimMgr *)arg1;
- (void)didQHPhotoSlimMgrFinish:(QHPhotoSlimMgr *)arg1 completion:(void (^)(_Bool))arg2;
- (void)didQHPhotoSlimMgrSlimPhotoEnd:(QHPhotoSlimMgr *)arg1 error:(NSError *)arg2;
- (void)didQHPhotoSlimMgrSlimPhotoStateChanged:(QHPhotoSlimMgr *)arg1;
- (void)didQHPhotoSlimMgrSlimPhotoBegin:(QHPhotoSlimMgr *)arg1;
- (void)didQHPhotoSlimMgrPreProcessFail:(QHPhotoSlimMgr *)arg1 error:(NSError *)arg2;
- (void)didQHPhotoSlimMgrPreProcessEnd:(QHPhotoSlimMgr *)arg1;
- (void)didQHPhotoSlimMgrPreProcessBegin:(QHPhotoSlimMgr *)arg1;
@end

