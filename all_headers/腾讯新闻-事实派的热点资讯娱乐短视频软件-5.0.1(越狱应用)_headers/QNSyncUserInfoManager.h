//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class QNSyncUserInfoApi;

@interface QNSyncUserInfoManager : NSObject
{
    QNSyncUserInfoApi *_qqApi;
    QNSyncUserInfoApi *_wxApi;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QNSyncUserInfoApi *wxApi; // @synthesize wxApi=_wxApi;
@property(retain, nonatomic) QNSyncUserInfoApi *qqApi; // @synthesize qqApi=_qqApi;
- (void).cxx_destruct;
- (void)syncWXUserInfo:(id)arg1;
- (void)syncQQUserInfo:(id)arg1;

@end

