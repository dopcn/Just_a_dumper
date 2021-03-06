//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DCFundAuthInfo, DCFundAuthResult, NSString;
@protocol Optional;

@interface DCCreateFundAuthModel : TRBaseModel
{
    DCFundAuthResult<Optional> *_pre_auth_result;
    DCFundAuthInfo<Optional> *_pre_auth_info;
    NSString<Optional> *_select_channel;
}

+ (id)changeToPrePayModel:(id)arg1;
@property(copy, nonatomic) NSString<Optional> *select_channel; // @synthesize select_channel=_select_channel;
@property(retain, nonatomic) DCFundAuthInfo<Optional> *pre_auth_info; // @synthesize pre_auth_info=_pre_auth_info;
@property(retain, nonatomic) DCFundAuthResult<Optional> *pre_auth_result; // @synthesize pre_auth_result=_pre_auth_result;
- (void).cxx_destruct;

@end

