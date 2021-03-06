//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTMyCtripUserInfoModel, SDImageCache;

@interface CTMyCtripUserInfoManager : NSObject
{
    SDImageCache *_avatarCache;
    CTMyCtripUserInfoModel *_userInfoModel;
    CDUnknownBlockType _afterUpdateData;
}

+ (void)refreshRemoteAvatar:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)getUserInfoStateResult:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType afterUpdateData; // @synthesize afterUpdateData=_afterUpdateData;
@property(retain, nonatomic) CTMyCtripUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
- (void).cxx_destruct;
- (void)refreshAvatar;
- (void)refreshData;
- (void)clearData;
- (id)initWithDoBlock:(CDUnknownBlockType)arg1;

@end

