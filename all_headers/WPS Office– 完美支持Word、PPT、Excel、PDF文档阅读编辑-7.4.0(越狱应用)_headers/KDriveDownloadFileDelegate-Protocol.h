//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KLocalFileInfo, NSArray, NSMutableArray, NSString;

@protocol KDriveDownloadFileDelegate <NSObject>
- (void)uploadFile:(KLocalFileInfo *)arg1;
- (NSMutableArray *)getNotNeedUploadFiles;
- (NSMutableArray *)getNeedUploadFiles;
- (NSArray *)getLocalFileListWithPath:(NSString *)arg1;
@end

