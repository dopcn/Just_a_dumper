//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BBADownloadProtocol-Protocol.h"

@class NSString;

@interface BBADownloadService : NSObject <BBADownloadProtocol>
{
}

+ (_Bool)saveImageWithsourceUrl:(id)arg1 image:(id)arg2;
+ (id)addDownloadItemWithURL:(id)arg1 Title:(id)arg2 businessType:(long long)arg3 animationed:(_Bool)arg4;
+ (void)addBaiduCloudOfflineTaskWithURL:(id)arg1 CompletionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

