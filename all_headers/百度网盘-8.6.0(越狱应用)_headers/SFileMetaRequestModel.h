//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseRequestModel.h"

@class NSArray, NSDate, NSString;

@interface SFileMetaRequestModel : BaseRequestModel
{
}

@property(readonly, nonatomic) long long returnType;
@property(readonly, nonatomic) NSString *uploadSign;
@property(readonly, nonatomic) NSString *uploadId;
@property(readonly, nonatomic) __weak NSArray *block_list;
@property(readonly, nonatomic) __weak NSString *block_list_md5;
@property(readonly, nonatomic) __weak NSDate *createTime;
@property(readonly, nonatomic) __weak NSDate *modifyTime;
@property(readonly, nonatomic) unsigned long long fid;
@property(readonly, nonatomic) __weak NSString *path;
@property(readonly, nonatomic) __weak NSString *server_filename;

@end

