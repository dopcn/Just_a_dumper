//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface iUIExportPicToAlbumFromUrl : NSObject
{
    NSString *m_pStrPicURL;
    NSString *m_referURL;
    NSData *m_pPicData;
    _Bool m_bSuccess;
}

- (void)threadProcessFun:(id)arg1;
- (void)didFinished:(id)arg1;
- (void)startThread;
- (void)releaseObject;
- (void)dealloc;
- (id)initWithImageUrl:(id)arg1 referUrl:(id)arg2;

@end

