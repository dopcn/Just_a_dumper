//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DBUserInfo, DCWeixinConnectModel;
@protocol Optional;

@interface DBProfileModel : TRBaseModel
{
    DBUserInfo<Optional> *_user_info;
    DCWeixinConnectModel<Optional> *_weixin_connect;
}

@property(retain, nonatomic) DCWeixinConnectModel<Optional> *weixin_connect; // @synthesize weixin_connect=_weixin_connect;
@property(retain, nonatomic) DBUserInfo<Optional> *user_info; // @synthesize user_info=_user_info;
- (void).cxx_destruct;

@end

