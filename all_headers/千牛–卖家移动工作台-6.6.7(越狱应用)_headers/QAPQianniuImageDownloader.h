//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QAPImageDownloaderDelegate-Protocol.h"

@class NSString;

@interface QAPQianniuImageDownloader : NSObject <QAPImageDownloaderDelegate>
{
}

- (id)localDirToMatchImageUrl:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 imageFrame:(struct CGRect)arg2 userInfo:(id)arg3 completed:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

