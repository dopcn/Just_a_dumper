//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EtaModel.h"

@class NSString;

@interface MGIntoUserModel : EtaModel
{
    long long _voiceState;
    NSString *_momoId;
    NSString *_nickName;
    NSString *_sex;
    long long _uid;
    NSString *_headIcon;
}

+ (id)eta_jsonKeyPathsByProperty;
@property(copy, nonatomic) NSString *headIcon; // @synthesize headIcon=_headIcon;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *momoId; // @synthesize momoId=_momoId;
@property(nonatomic) long long voiceState; // @synthesize voiceState=_voiceState;
- (void).cxx_destruct;
- (id)init;

@end

