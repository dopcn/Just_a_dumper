//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SLDownloadManager : NSObject
{
}

+ (id)getDestDirectory;
+ (void)refreshNoUseRecordWithThemeInfo:(id)arg1 subInfos:(id)arg2 category:(id)arg3;
+ (_Bool)downloadFilterImagesWithLinks:(id)arg1 isRefresh:(_Bool)arg2;
+ (id)getImageWithLink:(id)arg1 isRefresh:(_Bool)arg2;
+ (id)getImageDataWithLink:(id)arg1 isRefresh:(_Bool)arg2;
+ (void)createDirectory;
+ (id)mainDirectory;
- (id)init;

@end

