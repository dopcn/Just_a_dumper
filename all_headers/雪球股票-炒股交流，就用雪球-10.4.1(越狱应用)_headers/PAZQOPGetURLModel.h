//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PAZQOPGetURLModel : NSObject
{
    NSString *CHANNEL;
    NSString *KEY;
    NSString *URL1;
    NSString *OpenId;
    NSString *AppKey;
    NSString *AppSecret;
    NSString *PAChartURL;
    NSString *PAFlashURL;
    NSString *PAReleaseURL;
    NSString *PACallDoURL;
    NSString *PAQueuePeople;
    NSString *PACheckChannelAuthURL;
    NSString *PASaveHangUpVideo;
    NSString *PAUploadFlowSn;
    NSString *PAH5WebURL;
    NSString *kPAGetServiceUrl;
    NSString *kPAconnectedVideoFlag;
    NSString *_rzrqH5WebURL;
    unsigned long long _envType;
}

+ (id)shareGetURLModel;
@property(nonatomic) unsigned long long envType; // @synthesize envType=_envType;
@property(copy, nonatomic) NSString *rzrqH5WebURL; // @synthesize rzrqH5WebURL=_rzrqH5WebURL;
@property(retain, nonatomic) NSString *kPAconnectedVideoFlag; // @synthesize kPAconnectedVideoFlag;
@property(retain, nonatomic) NSString *kPAGetServiceUrl; // @synthesize kPAGetServiceUrl;
@property(retain, nonatomic) NSString *PAH5WebURL; // @synthesize PAH5WebURL;
@property(retain, nonatomic) NSString *PAUploadFlowSn; // @synthesize PAUploadFlowSn;
@property(retain, nonatomic) NSString *PASaveHangUpVideo; // @synthesize PASaveHangUpVideo;
@property(retain, nonatomic) NSString *PACheckChannelAuthURL; // @synthesize PACheckChannelAuthURL;
@property(retain, nonatomic) NSString *PAQueuePeople; // @synthesize PAQueuePeople;
@property(retain, nonatomic) NSString *PACallDoURL; // @synthesize PACallDoURL;
@property(retain, nonatomic) NSString *PAReleaseURL; // @synthesize PAReleaseURL;
@property(retain, nonatomic) NSString *PAFlashURL; // @synthesize PAFlashURL;
@property(retain, nonatomic) NSString *PAChartURL; // @synthesize PAChartURL;
@property(retain, nonatomic) NSString *AppSecret; // @synthesize AppSecret;
@property(retain, nonatomic) NSString *AppKey; // @synthesize AppKey;
@property(retain, nonatomic) NSString *OpenId; // @synthesize OpenId;
@property(retain, nonatomic) NSString *URL1; // @synthesize URL1;
@property(retain, nonatomic) NSString *KEY; // @synthesize KEY;
@property(retain, nonatomic) NSString *CHANNEL; // @synthesize CHANNEL;
- (void).cxx_destruct;
- (void)setWebEnv:(unsigned long long)arg1;
- (id)init;

@end

