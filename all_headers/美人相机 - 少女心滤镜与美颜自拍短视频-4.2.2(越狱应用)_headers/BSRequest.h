//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface BSRequest : NSObject
{
}

+ (_Bool)isMultitaskingSupported;
+ (id)requestURL:(id)arg1;
+ (_Bool)downBSImageWithDic:(id)arg1 key:(id)arg2;
+ (_Bool)downBSCoverIcon:(id)arg1;
+ (id)imagePath:(id)arg1;
+ (id)downloadBSScreenVideo:(id)arg1;
+ (id)downloadBSScreenPic:(id)arg1;
+ (void)BSRequestUploadUserInfomation:(id)arg1 channelValue:(id)arg2 completionBlockWithSuccess:(CDUnknownBlockType)arg3 fail:(CDUnknownBlockType)arg4;
+ (id)downBannerPic:(id)arg1;
+ (void)BSRequestTopicWithBlock:(CDUnknownBlockType)arg1;
+ (_Bool)bsIsBusy;

@end

